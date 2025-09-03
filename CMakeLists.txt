cmake_minimum_required(VERSION 3.16)

project(QT_C_Project3_Right_Triangle LANGUAGES C)

add_executable(QT_C_Project3_Right_Triangle main.c)

include(GNUInstallDirs)
install(TARGETS QT_C_Project3_Right_Triangle
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
