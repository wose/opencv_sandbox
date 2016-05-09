add_executable(large_image large_image.cpp)
target_link_libraries(large_image ${OpenCV_LIBS})

add_executable(display_image display_image.cpp)
target_link_libraries(display_image ${OpenCV_LIBS})

add_executable(resize_image resize_image.cpp)
target_link_libraries(resize_image ${OpenCV_LIBS})

add_executable(camera_capture camera_capture.cpp)
target_link_libraries(camera_capture ${OpenCV_LIBS})