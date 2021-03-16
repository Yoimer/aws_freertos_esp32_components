# include paths of this components.
set(COMPONENT_ADD_INCLUDEDIRS include)

# source files of this components.
set(COMPONENT_SRCDIRS src)

set(COMPONENT_REQUIRES esp_idf_lib_helpers)

set(COMPONENT_REQUIRES i2cdev)

# add this components, this will define a CMake library target.
register_component()