cmake_minimum_required(VERSION 3.10.0)
project(MyToDoList VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall -Wextra -pedantic -Werror)

include_directories(
        include
    )

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main
)

FetchContent_MakeAvailable(googletest)


add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(ut)

include(GoogleTest)
