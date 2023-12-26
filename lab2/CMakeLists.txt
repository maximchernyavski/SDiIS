cmake_minimum_required(VERSION 3.26)
project(Lab2)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/Affiliates)
include_directories(src/Department)
include_directories(src/Employee)
include_directories(src/Machinery)
include_directories(src/Material)
include_directories(src/Order)
include_directories(src/Position)
include_directories(src/Position/Rabotyaga)
include_directories(src/Project)
include_directories(src/Storage)

add_executable(Lab2
        src/Affiliates/affilates.cpp
        src/Affiliates/affilates.hpp
        src/Department/department.cpp
        src/Department/department.hpp
        src/Employee/employee.cpp
        src/Employee/employee.hpp
        src/Machinery/machinery.cpp
        src/Machinery/machinery.hpp
        src/Material/material.cpp
        src/Material/material.hpp
        src/Order/order.cpp
        src/Order/order.hpp
        src/Position/Rabotyaga/rabotyaga.cpp
        src/Position/Rabotyaga/rabotyaga.hpp
        src/Position/position.cpp
        src/Position/position.hpp
        src/Project/project.cpp
        src/Project/project.hpp
        src/Storage/storage.cpp
        src/Storage/storage.hpp
        main.cpp)
