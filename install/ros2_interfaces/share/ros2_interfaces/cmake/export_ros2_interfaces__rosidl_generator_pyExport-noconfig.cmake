#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ros2_interfaces::ros2_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET ros2_interfaces::ros2_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ros2_interfaces::ros2_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libros2_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libros2_interfaces__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets ros2_interfaces::ros2_interfaces__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_ros2_interfaces::ros2_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libros2_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
