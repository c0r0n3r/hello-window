#include <gtk/gtk.h>                                            |#include <gtkmm.h>
                                                                |#include <iostream>
static void hello( GtkWidget *widget,                           |
                   gpointer   data )                            |void hello()
{                                                               |{
  g_print ("Hello World\n");                                    |  std::cout << "Hello World" << std::endl;
}                                                               |}
                                                                |
static gboolean delete_event( GtkWidget *widget,                |class MyWindow : public Gtk::Window
                              GdkEvent  *event,                 |{
                              gpointer   data )                 |private:
{                                                               |  Gtk::Button button;
  g_print ("delete event occurred\n");                          |
                                                                |protected:
  return TRUE;                                                  |  virtual bool on_delete_event(GdkEventAny *event)
}                                                               |  {
                                                                |    std::cout << "delete event occurred" << std::endl;
static void destroy( GtkWidget *widget,                         |
                     gpointer   data )                          |    return true;
{                                                               |  }
    gtk_main_quit ();                                           |
}                                                               |  void on_button_clicked()
                                                                |  {
int main( int   argc,                                           |    Gtk::Main::quit();
          char *argv[] )                                        |  }
{                                                               |
  GtkWidget *window;                                            |public:
  GtkWidget *button;                                            |  MyWindow() :
                                                                |    button("Hello World")
  gtk_init (&argc, &argv);                                      |  {
                                                                |    button.signal_clicked().connect(sigc::ptr_fun(hello));
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);                |    button.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_button_clicked));
                                                                |
  g_signal_connect (G_OBJECT (window), "delete_event",          |    add(button);
                    G_CALLBACK (delete_event), NULL);           |
                                                                |    button.show();
  g_signal_connect (G_OBJECT (window), "destroy",               |  }
                    G_CALLBACK (destroy), NULL);                |};
                                                                |
  gtk_container_set_border_width (GTK_CONTAINER (window), 10);  |int main(int argc,
                                                                |         char *argv[])
  button = gtk_button_new_with_label ("Hello World");           |{
                                                                |  Gtk::Main kit(argc, argv);
  g_signal_connect (G_OBJECT (button), "clicked",               |
                    G_CALLBACK (hello), NULL);                  |  MyWindow window;
                                                                |
  GtkWidget *window;                                            |public:
  GtkWidget *button;                                            |  MyWindow() :
                                                                |    button("Hello World")
  gtk_init (&argc, &argv);                                      |  {
                                                                |    button.signal_clicked().connect(sigc::ptr_fun(hello));
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);                |    button.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_button_clicked));
                                                                |
  g_signal_connect (G_OBJECT (window), "delete_event",          |    add(button);
                    G_CALLBACK (delete_event), NULL);           |
                                                                |    button.show();
  g_signal_connect (G_OBJECT (window), "destroy",               |  }
                    G_CALLBACK (destroy), NULL);                |};
                                                                |
  gtk_container_set_border_width (GTK_CONTAINER (window), 10);  |int main(int argc,
                                                                |         char *argv[])
  button = gtk_button_new_with_label ("Hello World");           |{
                                                                |  Gtk::Main kit(argc, argv);
  g_signal_connect (G_OBJECT (button), "clicked",               |
                    G_CALLBACK (hello), NULL);                  |  MyWindow window;
                                                                |
  g_signal_connect_swapped (G_OBJECT (button), "clicked",       |  Gtk::Main::run(window);
                            G_CALLBACK (gtk_widget_destroy),    |
                            G_OBJECT (window));                 |  return 0;
                                                                |}
  gtk_container_add (GTK_CONTAINER (window), button);

  gtk_widget_show (button);
  gtk_widget_show (window);

  gtk_main ();

  return 0;
}
