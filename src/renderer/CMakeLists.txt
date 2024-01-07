include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../libs/glad/include)

add_library(Renderer SHARED
    main.cpp
    Renderer.cpp
    glad.c
    )

#target_link_libraries(Renderer PRIVATE glfw)
target_include_directories(Renderer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

