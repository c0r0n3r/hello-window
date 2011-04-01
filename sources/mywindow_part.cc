class MyWindow : public Gtk::Window
{
  virtual bool on_delete_event (GdkEventAny* event)
  {
    return true;
  }
};









