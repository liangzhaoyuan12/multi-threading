# 设置 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称和语言
project(MultiThreadingExample LANGUAGES CXX)

# 设置 C++ 标准为 C++11 或更高
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 在 Apple 平台上，显式链接 pthread 库
if(APPLE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
    # 或者使用 target_link_libraries，效果相同
    # target_link_libraries(${PROJECT_NAME} PRIVATE pthread)
endif()

# 添加可执行文件
add_executable(main src/main.cpp)

# 如果需要，可以显式链接线程库（在大多数情况下，CMake 会自动处理）
# target_link_libraries(main PRIVATE pthread)