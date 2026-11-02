#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "franka_kdl::franka_kdl" for configuration ""
set_property(TARGET franka_kdl::franka_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(franka_kdl::franka_kdl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfranka_kdl.so"
  IMPORTED_SONAME_NOCONFIG "libfranka_kdl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS franka_kdl::franka_kdl )
list(APPEND _IMPORT_CHECK_FILES_FOR_franka_kdl::franka_kdl "${_IMPORT_PREFIX}/lib/libfranka_kdl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
