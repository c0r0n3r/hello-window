int result = dialog.run();
switch (result)
{
case Gtk::RESPONSE_OK: /*@ \label{dialogruncc:switchcaseok} @*/
  do_application_specific_something();
  break;
default: /*@ \label{dialogruncc:switchcasedefault} @*/
  do_nothing_since_dialog_was_cancelled();
  break;
}

