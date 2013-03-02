

int alt_resp[] = {Gtk::RESPONSE_OK,
                  Gtk::RESPONSE_CANCEL,
                  Gtk::RESPONSE_HELP};
size_t alt_resp_size = sizeof(alt_resp) / sizeof(int);
std::vector<int> alt_resp_vector (alt_resp,
                                  alt_resp + alt_resp_size);
dialog->set_alternative_button_order_from_array (alt_resp_vector);
