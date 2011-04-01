g_signal_connect_swapped (G_OBJECT (window), "delete-event",
                          G_CALLBACK (gtk_widget_hide_on_delete_event), window);
