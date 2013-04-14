#include <gtkmm.h> /*@ \label{windowminimalcc:include} @*/

int
main(int argc, char *argv[]) /*@ \label{windowminimalcc:main} @*/
{


  Gtk::Main kit(argc, argv); /*@ \label{windowminimalcc:gtkmain} @*/

  Gtk::Window window; /*@ \label{windowminimalcc:windowdeclare} @*/ /*@ \label{windowminimalcc:windownew} @*/
  window.show(); /*@ \label{windowminimalcc:windowshow} @*/

  Gtk::Main::run(); /*@ \label{windowminimalcc:run} @*/

  return 0; /*@ \label{windowminimalcc:return} @*/
}
