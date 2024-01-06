add_executable(Game
    main.cpp)

target_link_libraries(Game PRIVATE Engine)
target_include_directories(Game PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})