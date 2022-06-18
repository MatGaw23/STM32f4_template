
cmake_minimum_required (VERSION 3.16)

# set the build type
if(NOT CMAKE_BUILD_TYPE) 
    set(CMAKE_BUILD_TYPE Release)
endif(NOT CMAKE_BUILD_TYPE)

if(CMAKE_BUILD_TYPE MATCHES Debug)
  message("Debug build.")
elseif(CMAKE_BUILD_TYPE MATCHES Release)
  message("Release build.")
endif()

# set search path for CMake modules
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake/Modules)
#set(CMAKE_TOOLCHAIN_FILE "CMake/")
# Project specific settings
set(application_name "Staz2022_F4_Template")
set(CMAKE_TOOLCHAIN_FILE "CMake/GNU-ARM-Toolchain.cmake")
project (${application_name} C ASM)

# STM32-specific settings
set(DEVICE_FAMILY STM32F40_41xxx)
# Used linker file (just for testing)
get_filename_component(LINKER_SCRIPT linker/stm32f407vgt.ld ABSOLUTE)

# add libraries
add_subdirectory(src)

# add main project
add_subdirectory(app)