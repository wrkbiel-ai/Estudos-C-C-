cmake_minimum_required(VERSION 3.16)

project(meu_bot_ia CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include(FetchContent)

FetchContent_Declare(
    llama_cpp
    GIT_REPOSITORY https://github.com/ggerganov/llama.cpp.git
    GIT_TAG        master
)
FetchContent_MakeAvailable(llama_cpp)

add_executable(meu_bot astrobot.cpp)
target_link_libraries(meu_bot PRIVATE llama)
