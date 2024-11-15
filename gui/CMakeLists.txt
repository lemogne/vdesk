cmake_minimum_required(VERSION 3.20)
project(vdesk)


find_package(wxWidgets REQUIRED COMPONENTS net core base stc aui propgrid)
include(${wxWidgets_USE_FILE})

if (NOT CMAKE_BUILD_TYPE STREQUAL Debug)
	add_compile_options(-Os -flto)
else()
	add_compile_options(-O0)
endif()

add_executable(vdesk main.cpp vdesk_gui.cpp)
target_link_libraries(vdesk ${wxWidgets_LIBRARIES} X11)

if (NOT CMAKE_BUILD_TYPE STREQUAL Debug)
	ADD_CUSTOM_COMMAND(TARGET vdesk
	POST_BUILD
	COMMAND   ${CMAKE_STRIP} vdesk)
endif()
