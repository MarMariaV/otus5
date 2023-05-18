cmake_minimum_required(VERSION 3.2)

project(otus5)

add_executable(otus5 main.cpp document.cpp graphiceditor.cpp mainwindow.cpp settings.cpp shapes.cpp)

if (MSVC)
    target_compile_options(otus5 PRIVATE
        /W4
    )
else ()
    target_compile_options(otus5 PRIVATE
        -Wall -Wextra -pedantic
    )
endif()

