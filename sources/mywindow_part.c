static gboolean
my_window_delete_event (GtkWidget *widget,
                        GdkEventAny *event)
{
  return TRUE;
}

static void
my_window_class_init (MyWindowClass *class)
{
  GtkWidgetClass *widget_class;

  widget_class = (GtkWidgetClass *) class;

  widget_class->delete_event = my_window_delete_event;
}
