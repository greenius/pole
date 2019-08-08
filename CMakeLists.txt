add_library (mapimessage STATIC
	    MapiMessage.cpp
	    pole.cpp
	    mapiUtils.cpp
	    StreamPropertyReader.cpp
	    StreamReader.cpp
)

# target_link_libraries(mapimessage config common)

# add_subdirectory(tests)

add_custom_command(
  TARGET mapimessage
  POST_BUILD  COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_CURRENT_SOURCE_DIR} ${LOCAL_INCLUDE_DIR}/mapimessage
)

