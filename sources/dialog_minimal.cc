#include <gtkmm.h>

int
main(int argc, char *argv[])
{


  Gtk::Main kit(argc, argv);

  Gtk::Dialog dialog; /*@ \label{dialogminimalcc:dialognew} @*/

  dialog.run(); /*@ \label{dialogminimalcc:dialogrun} @*/

  return 0;
}
