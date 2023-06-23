cmake_minimum_required(VERSION 3.12)
project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 11)

# Ustawienie ścieżek do plików źródłowych i nagłówkowych
set(SOURCES
    src/ZadKcpp.cc
    src/ZadSwitch.cc
    src/ZadStruct.cc
    src/ZadZwracanie.cc
    src/ZadUnia.cc
    src/ZadParzysta.cc
    main.cc
)

set(HEADERS
    include/ZadKcpp.h
    include/ZadSwitch.h
    include/ZadStruct.h
    include/ZadZwracanie.h
    include/ZadUnia.h
    include/ZadParzysta.h
)

# Utworzenie wykonawczego pliku programu
add_executable(ZadClassKcpp ${SOURCES} ${HEADERS})