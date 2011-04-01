

gboolean
on_delete_event (GtkWidget *widget,
                 GdkEvent *event,
                 gpointer user_data)
{
  g_print("on_delete_event\n");

  return TRUE;
}
