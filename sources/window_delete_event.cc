bool
on_delete_event (GdkEventAny* event)


{
  return true;
}

window.signal_delete_event().connect(
  sigc::ptr_fun(on_delete_event));
