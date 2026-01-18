cmake_minimum_required(VERSION 3.13)

project(NoClipMod)

find_package(Geode REQUIRED)

add_geode_mod(
    gheteam.noclip_mod
    VERSION v1.0.0
    SOURCES src/main.cpp
)
