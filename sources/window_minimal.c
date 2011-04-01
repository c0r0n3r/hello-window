#include <gtk/gtk.h>

int
main(int argc, char *argv[])
{
  GtkWidget *window; /*@ \label{windowminimalc:windowdeclare} @*/

  gtk_init (&argc, &argv);

  window = gtk_window_new (GTK_WINDOW_TOPLEVEL); /*@ \label{windowminimalc:windownew} @*/
  gtk_widget_show (window);

  gtk_main (); /*@ \label{windowminimalc:run} @*/

  return 0;
}
