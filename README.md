# CqUsbCam_Linux_Eng

CaiQi USB Camera Driver, compatible with usb2.0 and usb3.0.

This driver lib supports MT9V034, AR0134, AR0135 and SC130GS. 

However, ONLY MT9V034 coding example is involved in this package. 

Required packages:
1): OpenCV2

install on ubuntu:

    sudo apt-get install libopencv-dev

2): libsub

install on ubuntu:

    sudo apt-get install libusb-1.0-0-dev

INSTALL STEPS:
         
    cd ${CqUsbCam_Package_Dir}

    mkdir build && cd build

    cmake ..

    make

Camera driver lib can be found,

    {CqUsbCam_Package_Dir}/lib/libCqUsbCam.so

The config file is located at,

    ${CqUsbCam_Package_Dir}/config/cyusb.conf

The example for MT9V034 is located at,

    ${CqUsbCam_Package_Dir}/bin/usbCamConsole

You can run it, by typing the following in command line,

    cd ${CqUsbCam_Package_Dir} 2): sudo bin/usbCamConsole

Now Enjoy it.
