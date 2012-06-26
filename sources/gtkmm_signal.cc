#include <gtkmm.h> /*@ \label{gtksignalcc:includebegin} @*/
#include <iostream> /*@ \label{gtksignalcc:includeend} @*/

void on_button_clicked(const Glib::ustring &hello_msg) /*@ \label{gtksignalcc:slotbuttonclicked} @*/
{
  std::cout << hello_msg << std::endl;
}

class MyWindow : public Gtk::Window /*@ \label{gtksignalcc:mywindowclass} @*/
{
protected:
  virtual bool on_delete_event(GdkEventAny *event) /*@ \label{gtksignalc:methoddeleteevent} @*/


  {
    std::cout << "delete event occurred" << event << std::endl;
    return true;
  }

public:
  MyWindow() : /*@ \label{gtksignalcc:mywindowctorbegin} @*/
    button("Helló Window!")
  {








    button.signal_clicked().connect( /*@ \label{gtksignalcc:sigcptrfun} @*/
    sigc::bind(sigc::ptr_fun(on_button_clicked),
    "Helló Window!"));
    button.signal_clicked().connect( /*@ \label{gtksignalcc:sigcmemfun} @*/
    sigc::mem_fun(*this, &MyWindow::hide));


    add(button);

    button.show();


  } /*@ \label{gtksignalcc:mywindowctorend} @*/

private:
  Gtk::Button button;
};

int main(int argc, char *argv[]) /*@ \label{gtksignalcc:main} @*/
{


  Gtk::Main kit(argc, argv); /*@ \label{gtksignalc:gtkmain} @*/

  MyWindow window;


  Gtk::Main::run(window); /*@ \label{gtksignalcc:gtkmainrun} @*/

  return 0;
}
