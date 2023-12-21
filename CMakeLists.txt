cmake_minimum_required(VERSION 3.1)

project(DeterministicAutomaton LANGUAGES CXX)

file(GLOB SOURCES
    headers/*.h
    scripts/*.cpp)

add_executable(DeterministicAutomaton ${SOURCES})