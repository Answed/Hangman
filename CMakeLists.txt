cmake_minimum_required(VERSION 3.26)
project(Hangmann)

set(CMAKE_CXX_STANDARD 23)

add_executable(Hangmann main.cpp
        DisplayHangmann.cpp
        DisplayHangmann.h
        GameLogic.cpp
        GameLogic.h)
