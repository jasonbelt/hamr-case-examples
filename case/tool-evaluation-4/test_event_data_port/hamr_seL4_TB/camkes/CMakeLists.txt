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

DeclareCAmkESComponent(emitter_t_impl_test_event_data_port_src
  SOURCES components/emitter_t_impl_test_event_data_port_src//src/emitter.c components/emitter_t_impl_test_event_data_port_src/src/sb_emitter_t_impl.c
  INCLUDES components/emitter_t_impl_test_event_data_port_src/includes/ types/includes
)

DeclareCAmkESComponent(consumer_t_impl_test_event_data_port_dest
  SOURCES components/consumer_t_impl_test_event_data_port_dest//src/consumer.c components/consumer_t_impl_test_event_data_port_dest/src/sb_consumer_t_impl.c
  INCLUDES components/consumer_t_impl_test_event_data_port_dest/includes/ types/includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  LIBS SB_Type_Library
)

DeclareCAmkESComponent(sb_dest_deq_Monitor
  SOURCES components/sb_Monitors/sb_dest_deq_Monitor/src/sb_dest_deq_Monitor.c
  INCLUDES components/sb_Monitors/sb_dest_deq_Monitor/includes/ types/includes
)

DeclareCAmkESRootserver(top_impl_Instance.camkes)
