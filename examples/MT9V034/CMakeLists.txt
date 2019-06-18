add_executable(usbCamConsole main.cpp)
target_link_libraries(usbCamConsole  ${OpenCV_LIBS} usb-1.0 CqUsbCam)
