cmake_minimum_required(VERSION 3.22)

project(CAOS C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic -Werror")
set(CMAKE_C_FLAGS_ASAN "-g -fsanitize=address,undefined,signed-integer-overflow -fno-sanitize-recover=all")
set(CMAKE_C_FLAGS_TSAN "-g -fsanitize=thread,undefined,signed-integer-overflow -fno-sanitize-recover=all")

add_subdirectory(sanitizers-demo)
add_subdirectory(1-posix-threads)
