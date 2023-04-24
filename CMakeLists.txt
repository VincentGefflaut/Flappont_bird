cmake_minimum_required(VERSION 3.4)
project(Flappont_Bird)
list(APPEND CMAKE_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?

find_package(Imagine REQUIRED)

add_executable(Flappont_Bird main.cpp GEMtity.h GEMPage.h)
add_library (GEMtity GEMtity.cpp)
target_link_libraries(Flappont_Bird GEMtity)
add_library(GEMPage GEMPage.cpp)
target_link_libraries(Flappont_Bird GEMPage)
ImagineUseModules(Flappont_Bird Graphics)
