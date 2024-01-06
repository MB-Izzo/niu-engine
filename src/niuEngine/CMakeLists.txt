add_library(Engine STATIC
    main.cpp)

target_link_libraries(Engine PUBLIC Renderer)

target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})