cmake_minimum_required(VERSION 3.4)
project(Flappont-Bird_Alexandre)
list(APPEND CMAKE_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?

find_package(Imagine REQUIRED)

add_executable(Flappont-Bird main.cpp GEM.h)
add_library (GEM GEM.cpp)
target_link_libraries(Flappont-Bird GEM)
ImagineUseModules(Flappont-Bird Graphics)

