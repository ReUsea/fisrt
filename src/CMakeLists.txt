include_directories("C:\\Program Files\\GmSSL\\include")
link_directories("C:\\Program Files\\GmSSL\\bin")
add_executable(main main.cpp)
target_link_libraries(main libcrypto-1_1-x64.dll libssl-1_1-x64.dll)
