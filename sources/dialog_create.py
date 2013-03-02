class Dialog(Gtk.Dialog, Container):
  def __init__(self,
               title=None,
               parent=None,
               flags=0,
               buttons=None,
               _buttons_property=None,
               **kwars):
