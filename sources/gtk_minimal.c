#include <gtk/gtk.h> /*@ \label{gtkminimalc:include} @*/

int
main(int argc, char *argv[]) /*@ \label{gtkminimalc:main} @*/
{
  GtkWidget *window; /*@ \label{gtkminimalc:windowdeclare} @*/

  gtk_init (&argc, &argv); /*@ \label{gtkminimalc:gtkmain} @*/

  window = gtk_window_new (GTK_WINDOW_TOPLEVEL); /*@ \label{gtkminimalc:windownew} @*/
  g_signal_connect(G_OBJECT(window), "delete-event", /*@ \label{gtkminimalc:windowdelete} @*/
                   G_CALLBACK(gtk_main_quit), NULL);
  gtk_widget_show (window); /*@ \label{gtkminimalc:windowshow} @*/

  gtk_main (); /*@ \label{gtkminimalc:gtkrun} @*/

  return 0; /*@ \label{gtkminimalc:return} @*/
} /*@ \label{gtkminimalc:end} @*/
