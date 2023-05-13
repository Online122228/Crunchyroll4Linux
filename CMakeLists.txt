cmake_minimum_required(VERSION 3.21)
project(Crunchyroll4Linux LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

find_package(Qt6 COMPONENTS Widgets WebEngineWidgets REQUIRED)

set(SOURCES
        main.cpp
        main.h
        )

add_executable(Crunchyroll4Linux ${SOURCES})

target_link_libraries(Crunchyroll4Linux PRIVATE Qt6::Widgets Qt6::WebEngineWidgets)
