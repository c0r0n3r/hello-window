result = dialog.run()


if result == Gtk.ResponseType.OK: #*@ \label{dialogrunpy:switchcaseok} @*
  do_application_specific_something()

else: #*@ \label{dialogrunpy:switchcasedefault} @*
  do_nothing_since_dialog_was_cancelled();



