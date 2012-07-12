from gi.repository import Gtk #*@ \label{gtksignalpy:include} @*

def on_button_clicked(button, hello_msg):
  print(hello_msg)


def on_delete_event(my_window, event): #*@ \label{gtksignalpy:callbackdeleteevent} @*
  print("delete event occurred")
  return True

def my_window_new():
  my_window = Gtk.Window()
  my_window.connect("destroy", Gtk.main_quit) #*@ \label{gtksignalpy:signaldestroy} @*
  my_window.connect("delete-event", on_delete_event) #*@ \label{gtksignalpy:signaldeleteevent} @*

  button = Gtk.Button("Hello Window")
  button.connect("clicked", on_button_clicked, "Hello Window") #*@ \label{gtksignalpy:connectclicked} @*
  button.connect_object("clicked", Gtk.Widget.destroy, my_window) #*@ \label{gtksignalpy:connectdestroy} @*
  my_window.add(button)

  return my_window


if __name__ == "__main__": #*@ \label{gtksignalpy:main} @*

  my_window = my_window_new()
  my_window.show_all()

  Gtk.main() #*@ \label{gtksignalpy:end} @*
