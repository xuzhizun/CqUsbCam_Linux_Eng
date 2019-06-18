cmake_minimum_required(VERSION 2.8)

project(CqUsbCam_LIB)

set(CMAKE_CXX_COMPLIER "gcc")
set(CMAKE_CXX_TYPE "Release" )
set(CMAKE_CXX_FLAGS "-std=c++11 -march=native -O3")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

find_package(OpenCV 2 REQUIRED)

include_directories(
${PROJECT_SOURCE_DIR}/CqUsbCam
)

aux_source_directory( ${PROJECT_SOURCE_DIR}/CqUsbCam DIR_SRC
)

aux_source_directory( ${PROJECT_SOURCE_DIR}/CqUsbCam/sensors SENSORS_DIR_SRC
)


add_library(CqUsbCam SHARED ${DIR_SRC} ${SENSORS_DIR_SRC})

target_link_libraries(CqUsbCam usb-1.0 rt)

add_subdirectory(
${PROJECT_SOURCE_DIR}/examples/MT9V034
)
