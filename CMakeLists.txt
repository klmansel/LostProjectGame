cmake_minimum_required(VERSION 3.6)
project(final_proj)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Bathroom.cpp
        Bathroom.hpp
        Game.cpp
        Game.hpp
        GuestBedroom.cpp
        GuestBedroom.hpp
        InputVal.cpp
        InputVal.hpp
        main.cpp
        MasterBedroom.cpp
        MasterBedroom.hpp
        MediaRoom.cpp
        MediaRoom.hpp
        Office.cpp
        Office.hpp
        Player.cpp
        Player.hpp
        Playroom.cpp
        Playroom.hpp
        Room.cpp
        Room.hpp)

add_executable(final_proj ${SOURCE_FILES})