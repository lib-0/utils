cmake_minimum_required(VERSION 3.0)

project(G_0_utils VERSION 1.0 LANGUAGES C)

set(SOURCES
  src/assert.c
  src/bzero.c
  src/memdup.c
  src/nonnull.c
)

add_library(G_0_utils_static STATIC ${SOURCES})
set_target_properties(G_0_utils_static PROPERTIES
  OUTPUT_NAME "-0_utils"
  POSITION_INDEPENDENT_CODE ON
)

add_library(G_0_utils_shared SHARED ${SOURCES})
set_target_properties(G_0_utils_shared PROPERTIES
  OUTPUT_NAME "-0_utils"
  VERSION ${PROJECT_VERSION}
  SOVERSION ${PROJECT_VERSION_MAJOR}
)

target_include_directories(G_0_utils_static
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

target_include_directories(G_0_utils_shared
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

target_compile_definitions(G_0_utils_static
  PRIVATE G_SHARED=0
)

target_compile_definitions(G_0_utils_shared
  PRIVATE G_SHARED=1
)

install(TARGETS G_0_utils_static G_0_utils_shared
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  FILES
    include/-0_utils.h
  DESTINATION
    include
)
