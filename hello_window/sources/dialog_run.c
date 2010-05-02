gint result = gtk_dialog_run (GTK_DIALOG (dialog));
switch (result)
  {
    case GTK_RESPONSE_OK: /*@ \label{dialogrunc:switchcaseok} @*/
       do_application_specific_something ();
       break;
    default: /*@ \label{dialogrunc:switchcasedefault} @*/
       do_nothing_since_dialog_was_cancelled ();
       break;
  }
gtk_widget_destroy (dialog);
