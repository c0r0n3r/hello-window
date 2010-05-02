#include <gtkmm.h>

int
main(int argc, char *argv[])
{


  Gtk::Main kit(argc, argv);

  Gtk::Window window; /*@ \label{windowminimalcc:windowdeclare} @*/ /*@ \label{windowminimalcc:windownew} @*/
  window.show();

  Gtk::Main::run(); /*@ \label{windowminimalcc:run} @*/

  return 0;
}
