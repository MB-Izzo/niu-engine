add_library(Engine STATIC
    main.cpp
    AnApi.h "Window.cpp")

target_link_libraries(Engine PUBLIC Renderer PRIVATE glfw)

target_include_directories(Engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})