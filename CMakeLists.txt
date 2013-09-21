cmake_minimum_required(VERSION 2.8)

project(fury)

set(EXECUTABLE_NAME "fury")
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules")
file(GLOB_RECURSE source_files src/*.cpp)
add_executable(${EXECUTABLE_NAME} ${source_files})

find_package(SFML 2 REQUIRED graphics window system)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()

find_package(OpenGL REQUIRED)
if (OPENGL_FOUND)
  include_directories(${OPENGL_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${OPENGL_LIBRARIES})
endif()

find_package(GLUT REQUIRED)
if (GLUT_FOUND)
  include_directories(${GLUT_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${GLUT_LIBRARIES})
endif()
