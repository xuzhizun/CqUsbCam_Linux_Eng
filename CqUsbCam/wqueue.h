/*
   wqueue.h
   Worker thread queue based on the Standard C++ library list
   template class.
   ------------------------------------------
   Copyright @ 2013 [Vic Hargrave - http://vichargrave.com]
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __wqueue_h__
#define __wqueue_h__

#include <pthread.h>
#include <list>
#include <unistd.h>
using namespace std;

template <typename T> class wqueue
{
    list<T>          m_queue;
    pthread_mutex_t  m_mutex;
    pthread_cond_t   m_condv;
    volatile bool stop;

public:
    //int			m_iQueueCapacity;		//队列容量
    wqueue()
    {
        pthread_mutex_init(&m_mutex, NULL);
        pthread_cond_init(&m_condv, NULL);
        stop=false;
        //m_iQueueCapacity=5;
    }
    ~wqueue()
    {
        pthread_mutex_destroy(&m_mutex);
        pthread_cond_destroy(&m_condv);
    }
    void add(T item)
    {
        pthread_mutex_lock(&m_mutex);
        m_queue.push_back(item);
        pthread_cond_signal(&m_condv);
        pthread_mutex_unlock(&m_mutex);
    }
    T remove()
    {

        while (m_queue.size() == 0)
        {
            if(stop)
                return NULL;
            usleep(10);
            //pthread_cond_wait(&m_condv, &m_mutex);
        }
        pthread_mutex_lock(&m_mutex);
        T item = m_queue.front();
        m_queue.pop_front();
        pthread_mutex_unlock(&m_mutex);
        return item;
    }
    int size()
    {
        pthread_mutex_lock(&m_mutex);
        int size = m_queue.size();
        pthread_mutex_unlock(&m_mutex);
        return size;
    }
    int reset()
    {
        stop=true;
	return 0;
    }
};

#endif
