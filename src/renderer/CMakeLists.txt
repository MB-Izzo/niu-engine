include_directories(GLAD PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../libs/glad/include)

add_library(Renderer SHARED
    main.cpp
    glad.c)

target_link_libraries(Renderer PRIVATE glfw)
target_include_directories(Renderer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} PRIVATE ${GLFW_INCLUDES_DIRS})

