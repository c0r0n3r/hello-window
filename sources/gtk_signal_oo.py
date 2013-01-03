from gi.repository import Gtk

def on_button_clicked(button, hello_msg):
  print(hello_msg)

class MyWindow(Gtk.Window):
  def do_delete_event(self, event):
    print("delete event occurred")
    return True

  def __init__(self):
    Gtk.Window.__init__(self)
    self.connect("destroy", Gtk.main_quit)


    self.button = Gtk.Button("Hello Window")
    self.button.connect("clicked", on_button_clicked, "Hello Window")
    self.button.connect_object("clicked", Gtk.Widget.destroy, self)
    self.add(self.button)




if __name__ == "__main__":

  my_window = MyWindow()
  my_window.show_all()

  Gtk.main()
