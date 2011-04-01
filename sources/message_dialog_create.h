GtkWidget*
gtk_message_dialog_new (GtkWindow      *parent,
                        GtkDialogFlags  flags,
                        GtkMessageType  type,
                        GtkButtonsType  buttons,
                        const gchar    *message_format,
                        ...) G_GNUC_PRINTF (5, 6);

GtkWidget*
gtk_message_dialog_new_with_markup (GtkWindow      *parent,
                                    GtkDialogFlags  flags,
                                    GtkMessageType  type,
                                    GtkButtonsType  buttons,
                                    const gchar    *message_format,
                                    ...) G_GNUC_PRINTF (5, 6);
