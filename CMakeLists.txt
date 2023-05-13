cmake_minimum_required(VERSION 3.16)
project(Crunchyroll4Linux)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Core Gui WebEngineWidgets REQUIRED)

set(SOURCES
    main.cpp
)

add_executable(Crunchyroll4Linux ${SOURCES})

target_link_libraries(Crunchyroll4Linux
    Qt6::Core
    Qt6::Gui
    Qt6::WebEngineWidgets
)

install(TARGETS Crunchyroll4Linux DESTINATION bin)

# Install the Crunchyroll4Linux.desktop file
install(FILES Crunchyroll4Linux.desktop DESTINATION share/applications)

# Install the crunchyroll.png icon
install(FILES crunchyroll.png DESTINATION share/icons/hicolor/256x256/apps)
