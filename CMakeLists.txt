# Minimalistic Cmake project structure setup!
# Set the  minimum required version of cmake for this project
cmake_minimum_required(VERSION 3.27.0)

# Set the prject Name the Version and the used Language
project(WEBSERVER_C VERSION 1.0.0 LANGUAGES C)


# Used Variables for the executable file and the used library
set(EXECUTABLE_NAME Webserver)
set(LIBRARY_NAME Webserver_lib)

# Add the library
add_library(${LIBRARY_NAME} webserver.c)

# Add the executable
add_executable(${EXECUTABLE_NAME} main.c)

# Link the library with the executable
target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})


