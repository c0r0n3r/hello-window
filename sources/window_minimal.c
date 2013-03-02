#include <gtk/gtk.h> /*@ \label{windowminimalc:include} @*/

int
main(int argc, char *argv[]) /*@ \label{windowminimalc:main} @*/
{
  GtkWidget *window; /*@ \label{windowminimalc:windowdeclare} @*/

  gtk_init (&argc, &argv); /*@ \label{windowminimalc:gtkmain} @*/

  window = gtk_window_new (GTK_WINDOW_TOPLEVEL); /*@ \label{windowminimalc:windownew} @*/
  g_signal_connect(G_OBJECT(window), "delete-event", /*@ \label{windowminimalc:windowdelete} @*/
                   G_CALLBACK(gtk_main_quit), NULL);
  gtk_widget_show (window); /*@ \label{windowminimalc:windowshow} @*/

  gtk_main (); /*@ \label{windowminimalc:run} @*/

  return 0; /*@ \label{windowminimalc:return} @*/
}
