#ifndef MY_WINDOW
#define MY_WINDOW

#include <gtkmm.h>

namespace MyApp
{
  class MyWindow : public Gtk::Window
  {
    virtual bool on_delete_event (GdkEventAny* event);
  };
}

#endif
