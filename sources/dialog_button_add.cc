cancel_button = dialog->add_button (
                                    Gtk::Stock::Cancel,
                                    Gtk::Response::Cancel);
 
ok_button = dialog->add_button (
                                Gtk::Stock::Ok,
                                Gtk::Response::Ok);
  
ok_button->grab_default ();

help_button = dialog->add_button (
                                  Gtk::Stock::Help,
                                  Gtk::Response::Help);
