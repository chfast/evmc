# EVMC: Ethereum Client-VM Connector API
# Copyright 2018 Pawel Bylica.
# Licensed under the MIT License. See the LICENSE file.

include(GNUInstallDirs)

add_library(evmc-examplevm examplevm.c)
target_link_libraries(evmc-examplevm PRIVATE evmc)
set_target_properties(
    evmc-examplevm PROPERTIES
    DEBUG_POSTFIX ""
    RUNTIME_OUTPUT_DIRECTORY ..
    LIBRARY_OUTPUT_DIRECTORY ..
)

install(
    TARGETS evmc-examplevm
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
