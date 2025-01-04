cmake_minimum_required(VERSION 3.10)

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
)

target_include_directories(G_0_utils_static
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

install(TARGETS G_0_utils_static
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

install(
  FILES
    include/-0/utils.h
    include/-0/utils_shortcut.h
  DESTINATION
    include/-0
)
