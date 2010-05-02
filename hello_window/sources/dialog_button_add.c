cancel_button = gtk_dialog_add_button (GTK_DIALOG (dialog),
                                       GTK_STOCK_CANCEL,
                                       GTK_RESPONSE_CANCEL);
 
ok_button = gtk_dialog_add_button (GTK_DIALOG (dialog),
                                   GTK_STOCK_OK,
                                   GTK_RESPONSE_OK);
  
gtk_widget_grab_default (ok_button);

help_button = gtk_dialog_add_button (GTK_DIALOG (dialog),
                                     GTK_STOCK_HELP,
                                     GTK_RESPONSE_HELP);
