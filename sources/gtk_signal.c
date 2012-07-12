#include <gtk/gtk.h> /*@ \label{gtksignalc:includebegin} @*/


static void on_button_clicked( GtkWidget *widget, gpointer data) /*@ \label{gtksignalc:callbackbuttonclicked} @*/
{
  g_print ("%s\n", (const char *) data);
}




static gboolean on_delete_event(GtkWidget *widget, /*@ \label{gtksignalc:callbackdeleteevent} @*/
                                GdkEvent  *event,
                                gpointer   data )
{
  g_print ("delete event occurred\n");
  return TRUE;
}


GtkWidget * my_window_new()

{
  GtkWidget *window = gtk_window_new (GTK_WINDOW_TOPLEVEL); /*@ \label{gtksignalc:widgetcreatebegin} @*/
  GtkWidget *button = gtk_button_new_with_label ("Hello Window!"); /*@ \label{gtksignalc:widgetcreateend} @*/

  g_signal_connect (G_OBJECT (window), "delete-event", /*@ \label{gtksignalc:signaldeleteevent} @*/
                    G_CALLBACK (on_delete_event), NULL);
  g_signal_connect (G_OBJECT (window), "destroy", /*@ \label{gtksignalc:signaldestroy} @*/
                    G_CALLBACK (gtk_main_quit), NULL);
  
  g_signal_connect (G_OBJECT (button), "clicked", /*@ \label{gtksignalc:connectclicked} @*/
                    G_CALLBACK (on_button_clicked),
                    "Hello Window!");
  g_signal_connect_swapped (G_OBJECT (button), "clicked", /*@ \label{gtksignalc:connectdestroy} @*/
                            G_CALLBACK (gtk_widget_destroy),
                            G_OBJECT (window));
  
  gtk_container_add (GTK_CONTAINER (window), button); /*@ \label{gtksignalc:addbutton} @*/
  
  gtk_widget_show (button); /*@ \label{gtksignalc:widgetshowbegin} @*/

  return window; /*@ \label{gtksignalc:windowreturn} @*/
}





int main(int  argc, char *argv[]) /*@ \label{gtksignalc:main} @*/
{
  GtkWidget *window;

  gtk_init (&argc, &argv); /*@ \label{gtksignalc:gtkinit} @*/
  
  window = my_window_new();
  gtk_widget_show (window); /*@ \label{gtksignalc:widgetshowend} @*/

  gtk_main (); /*@ \label{gtksignalc:gtkmain} @*/

  return 0;
} /*@ \label{gtksignalc:end} @*/
