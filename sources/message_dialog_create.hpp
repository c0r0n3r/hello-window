explicit 
MessageDialog (
const Glib::ustring& message,
bool use_markup = false,
MessageType type = MESSAGE_INFO,
ButtonsType buttons = BUTTONS_OK,
bool modal = false);



MessageDialog (
Gtk::Window& parent,
const Glib::ustring& message,
bool use_markup = false,
MessageType type = MESSAGE_INFO,
ButtonsType buttons = BUTTONS_OK,
bool modal = false);
