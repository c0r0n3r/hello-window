cancel_button = dialog.add_button(

                Gtk.STOCK_CANCEL,
                Gtk.ResponseType.CANCEL);

ok_button = dialog.add_button(

            Gtk.STOCK_OK,
            Gtk.ResponseType.OK);

ok_button.grab_default();

help_button = dialog.add_button(

              Gtk.STOCK_HELP,
              Gtk.ResponseType.HELP);
