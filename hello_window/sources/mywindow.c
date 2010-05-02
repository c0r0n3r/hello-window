#include "mywindow.h"

G_DEFINE_TYPE (MyWindow, my_window, GTK_TYPE_WINDOW)

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

GtkWidget *
my_window_new ()
{
  return g_object_new (GTK_TYPE_MY_WINDOW, NULL);
}

static void
my_window_init (MyWindow *window)
{
} /*@ \label{mywindowc:lastline} @*/
