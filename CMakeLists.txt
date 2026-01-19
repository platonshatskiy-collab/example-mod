cmake_minimum_required(VERSION 3.13)

find_package(Geode REQUIRED)
project(NoClipMod)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES main.cpp
)
