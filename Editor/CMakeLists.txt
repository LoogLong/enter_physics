

set(TARGET_NAME Editor)

file(GLOB TARGET_HEADERS CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Public/*.h)
file(GLOB TARGET_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.h ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})
