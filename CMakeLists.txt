cmake_minimum_required(VERSION 3.4)
project(Flappont_Bird)
list(APPEND CMAKE_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?

find_package(Imagine REQUIRED)

add_executable(Flappont_Bird main.cpp GEM.h)
add_library (GEM GEM.cpp)
target_link_libraries(Flappont_Bird GEM)
ImagineUseModules(Flappont_Bird Graphics)
