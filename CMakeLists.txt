cmake_minimum_required(VERSION 3.15)
project(MyGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(MyGame main.cpp "game cpp/moveUp.cpp" "game hpp/moveUp.h" Game.h Game.cpp StartGame.cpp StartGame.h)