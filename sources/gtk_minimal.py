from gi.repository import Gtk #*@ \label{gtkminimalpy:include} @*


if __name__ == "__main__":





  window = Gtk.Window() #*@ \label{gtkminimalpy:windownew} @*
  window.connect("delete-event", #*@ \label{gtkminimalpy::delevent} @*
                 Gtk.main_quit)
  window.show() #*@ \label{gtkminimalpy:windowshow} @*
  
  Gtk.main() #*@ \label{gtkminimalpy:gtkrun} @*



