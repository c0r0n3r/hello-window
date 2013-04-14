from gi.repository import Gtk

class MyWindow(Gtk.Window):
  def __init__(self):
    Gtk.Window.__init__(self)
    self.connect("delete-event", self.on_delete_event)

    adjustment = Gtk.Adjustment(0, 0, 100, 1, 10, 0)
    self.spinbutton = Gtk.SpinButton()
    self.spinbutton.set_adjustment(adjustment)
    self.add(self.spinbutton)

  def on_output():
    text = self.spinbutton.get_text()
    value = float(text)
    self.spinbutton.set_text("%02f" % value)

  def on_delete_event(self, widget, event):
    Gtk.main_quit()

if __name__ == "__main__":

  my_window = MyWindow()
  my_window.show_all()

  Gtk.main()
