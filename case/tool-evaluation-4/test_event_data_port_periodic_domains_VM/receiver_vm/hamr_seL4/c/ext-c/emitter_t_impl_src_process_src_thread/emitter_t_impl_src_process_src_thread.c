#include <emitter_t_impl_src_process_src_thread_api.h>
#include <emitter_t_impl_src_process_src_thread.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char* component_id = "top_impl_Instance_src_process_src_thread";

Unit receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread.c", "", "receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise_", 0);

  printf("%s: receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise_ called\n", component_id);

  // example usage of api setters

  S8 t0 = receiver_vm_Base_Types_Integer_8_example(SF_LAST);
  api_put_write_port__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF t0);

  /* example usage of api loggers. Commented out as the constructed String may be too long
  api_logInfo__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF string("Example logInfo"));

  api_logDebug__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF string("Example logDebug"));

  api_logError__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF string("Example logError"));
  */
}

Unit receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread.c", "", "receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_finalise_", 0);
}

Unit receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread.c", "", "receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_timeTriggered_", 0);

}
