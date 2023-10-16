

set(TARGET_NAME FeynmanPhysics)

file(GLOB HEADER_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Public/*.h)
file(GLOB SOURCE_FILES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.h ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.cpp)

# Note: for header-only libraries change all PUBLIC flags to INTERFACE and create an interface
# target: add_library(${TARGET_NAME} INTERFACE)
add_library(${TARGET_NAME} ${HEADER_FILES} ${SOURCE_FILES})
# 把自己的public加入include列表。方便private使用
target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Public)


target_link_libraries(${TARGET_NAME} PUBLIC Math)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Core/Math/Public)