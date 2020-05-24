set(VERSION "2.8.4") # Create var "VERSION"

# Disable sh.exe mingw error
set(DCMAKE_SH="CMAKE_SH-NOTFOUND")

cmake_minimum_required(VERSION ${VERSION})
project(SharedAPI)

file(GLOB HEADERS "include/*.h" "include/*.hpp")

# Enable DLL build w/ option() and SHARED flag in add_library()
# http://mariobadr.com/creating-a-header-only-library-with-cmake.html
add_library(SharedAPI INTERFACE)

# Make the library IDE-friendly by allowing CLion to see it as part of a project
target_sources(SharedAPI INTERFACE ${HEADERS})

# Make the library available for import in other cmake projects
target_include_directories(SharedAPI INTERFACE include/)


