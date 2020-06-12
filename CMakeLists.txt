set(VERSION "2.8.4") # Create var "VERSION"

# Disable sh.exe mingw error
set(DCMAKE_SH="CMAKE_SH-NOTFOUND")

cmake_minimum_required(VERSION ${VERSION})
project(SharedAPI)

file(GLOB_RECURSE HEADERS "include/*.h" "include/*.hpp")

# http://mariobadr.com/creating-a-header-only-library-with-cmake.html
add_library(SharedAPI INTERFACE)

# Make the library IDE-friendly by allowing CLion to see it as part of a project
target_sources(SharedAPI INTERFACE ${HEADERS})
# https://stackoverflow.com/questions/46245738/in-clion-header-only-library-file-does-not-belong-to-any-project-target-code
# ^^ GO HERE TO SEE HOW TO FIX WARNINGS ABOUT HEADERS NOT PART OF INTERFACE PROJECT ^^
# ^^ (Mark shared_api/ as a project dir in CLion) ^^

# Make the library available for import in other cmake projects
target_include_directories(SharedAPI INTERFACE include/)


