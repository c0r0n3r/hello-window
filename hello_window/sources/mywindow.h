#ifndef MY_WINDOW
#define MY_WINDOW

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GTK_TYPE_MY_WINDOW \
(my_window_get_type ())
#define GTK_MY_WINDOW(obj) \
(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MY_WINDOW, MyWindow))
#define GTK_MY_WINDOW_CLASS(klass) \
(G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MY_WINDOW, MyWindowClass))
#define GTK_IS_MY_WINDOW(obj) \
(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MY_WINDOW))
#define GTK_IS_MY_WINDOW_CLASS(klass) \
(G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MY_WINDOW))
#define GTK_MY_WINDOW_GET_CLASS(obj) \
(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MY_WINDOW, MyWindowClass))

typedef struct _MyWindow      MyWindow;
typedef struct _MyWindowClass MyWindowClass;

struct _MyWindow
{
  GtkWindow parent_instance;
};

struct _MyWindowClass
{
  GtkWindowClass parent_class;
};

GType      my_window_get_type (void) G_GNUC_CONST;
GtkWidget* my_window_new      (void);

G_END_DECLS

#endif /*@ \label{mywindowh:lastline} @*/
