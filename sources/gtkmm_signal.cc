#include <gtkmm.h>
#include <iostream>

static void hello(const Glib::ustring &hello_msg)
{
  std::cout << hello_msg << std::endl;
}

class MyWindow : public Gtk::Window
{
private:
  Gtk::Button button;

protected:
  virtual bool on_delete_event(GdkEventAny *event)
  {
    std::cout << "delete event occurred" << std::endl;
  
    return true;
  }

  void destroy()
  {
    Gtk::Main::quit();
  }

public:
  MyWindow() :
    button("Hello Window")
  {
    button.signal_clicked().connect(
    sigc::bind(sigc::ptr_fun(hello), "Hello Window"));
    button.signal_clicked().connect(
    sigc::mem_fun(*this, &MyWindow::destroy));

    add(button);

    button.show();
  }
};

int main(int argc,
         char *argv[])
{
  Gtk::Main kit(argc, argv);

  MyWindow window;

  Gtk::Main::run(window);

  return 0;
}
