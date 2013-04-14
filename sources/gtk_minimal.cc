#include <gtkmm.h> /*@ \label{gtkminimalcc:include} @*/

int
main(int argc, char *argv[]) /*@ \label{gtkminimalcc:main} @*/
{


  Gtk::Main kit(argc, argv); /*@ \label{gtkminimalcc:gtkmain} @*/

  Gtk::Window window; /*@ \label{gtkminimalcc:windowdeclare} @*/ /*@ \label{gtkminimalcc:windownew} @*/


  window.show(); /*@ \label{gtkminimalcc:windowshow} @*/

  Gtk::Main::run(); /*@ \label{gtkminimalcc:gtkrun} @*/

  return 0; /*@ \label{gtkminimalcc:return} @*/
}
