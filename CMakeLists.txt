cmake_minimum_required(VERSION 3.0)

project(AnimeForAll)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Widgets Network REQUIRED)

add_executable(${PROJECT_NAME}
    AnimeForAll.cpp
    AnimeForAll.h
    AnimeForAll.ui
    LoginWindow.cpp
    LoginWindow.h
    LoginWindow.ui
)

target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Widgets
    Qt5::Network
)
