# This file will be regenerated, do not edit

cmake_minimum_required(VERSION 3.8.2)

project (top_impl_Instance C)

add_definitions(-DCAMKES)

if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  add_compile_options("$<$<CONFIG:Release>:-Oz>")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fstack-usage)
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

includeGlobalComponents()

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/types)

DeclareCAmkESComponent(emitter_impl_test_event_port_src
  SOURCES components/emitter_impl_test_event_port_src//src/emitter.c components/emitter_impl_test_event_port_src/src/sb_emitter_impl.c
  INCLUDES components/emitter_impl_test_event_port_src/includes/ types/includes
)

DeclareCAmkESComponent(consumer_impl_test_event_port_snk
  SOURCES components/consumer_impl_test_event_port_snk//src/consumer.c components/consumer_impl_test_event_port_snk/src/sb_consumer_impl.c
  INCLUDES components/consumer_impl_test_event_port_snk/includes/ types/includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  LIBS SB_Type_Library
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
