

set(TARGET_NAME GameLaunch)

file(GLOB TARGET_HEADERS CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Public/*.h)
file(GLOB TARGET_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.h ${CMAKE_CURRENT_SOURCE_DIR}/Private/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${TARGET_NAME} ${TARGET_HEADERS} ${TARGET_SOURCES})

target_link_libraries(${TARGET_NAME} Base)
target_link_libraries(${TARGET_NAME} LoogPhysics)
target_link_libraries(${TARGET_NAME} RHI)
target_link_libraries(${TARGET_NAME} Window)
target_link_libraries(${TARGET_NAME} EngineCore)


target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Core/Base/Public)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Function/EngineCore/Public)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Function/LoogPhysics/Public)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Function/Render/Public)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Function/RHI/Public)
target_include_directories(${TARGET_NAME} PUBLIC ${PROJCET_SOURCE_DIR}/Runtime/Function/Window/Public)
