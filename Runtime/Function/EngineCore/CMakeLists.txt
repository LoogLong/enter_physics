

set(TARGET_NAME EngineCore)

file(GLOB HEADER_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Public/*.h)
file(GLOB SOURCE_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.h ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.cpp)

# Note: for header-only libraries change all PUBLIC flags to INTERFACE and create an interface
# target: add_library(${TARGET_NAME} INTERFACE)
add_library(${TARGET_NAME} ${HEADER_FILES} ${SOURCE_FILES})
message(HEADER_FILES ${HEADER_FILES})

target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Public)

target_link_libraries(${TARGET_NAME} Global)
target_link_libraries(${TARGET_NAME} Window)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Function/Global/Public)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Function/Window/Public)
