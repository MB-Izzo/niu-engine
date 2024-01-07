add_executable(Game
    main.cpp)

target_link_libraries(Game PRIVATE Engine)
target_include_directories(Game PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_command(TARGET Game POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    $<TARGET_FILE:Renderer>
    $<TARGET_FILE_DIR:Game>
)