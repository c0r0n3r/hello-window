gboolean
on_delete_event (GtkWidget *widget,
                 GdkEvent  *event,
                 gpointer   user_data) 
{
  return TRUE;
}

g_signal_connect (G_OBJECT (window), "delete-event",
                  G_CALLBACK (on_delete_event), NULL);
