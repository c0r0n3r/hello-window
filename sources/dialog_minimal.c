#include <gtk/gtk.h>

int
main(int argc, char *argv[])
{
  GtkWidget *dialog; /*@ \label{dialogminimalc:dialogdeclare} @*/

  gtk_init (&argc, &argv);

  dialog = gtk_dialog_new (); /*@ \label{dialogminimalc:dialognew} @*/

  gtk_dialog_run (GTK_DIALOG (dialog)); /*@ \label{dialogminimalc:dialogrun} @*/

  return 0;
}
