cmake_minimum_required(VERSION 3.5)


get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})


project(${ProjectId} LANGUAGES C CXX)

set(CMAKE_C_STANDARD 99) 
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Extrait du fichier CmakeList.txt
#Ajouter les fichiers sources de votre projet
set(SRCS
    img_bmp/img_bmp.c
    )
#Ajouter les fichiers headers de votre projet
set(HEADERS
    img_bmp/img_bmp.h
    )
add_executable(${ProjectId} main.c ${SRCS} ${HEADERS})

#enable_testing()
#include(CTest)
#add_subdirectory(test)
