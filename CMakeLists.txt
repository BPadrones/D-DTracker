cmake_minimum_required(VERSION 3.5.0)
project(DDTracker VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB SOURCES *.h *.cpp)

add_executable(DDTracker ${SOURCES})
