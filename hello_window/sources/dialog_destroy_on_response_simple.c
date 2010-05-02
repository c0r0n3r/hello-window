g_signal_connect_swapped (G_OBJECT (dialog), "response",
                          G_CALLBACK (gtk_widget_destroy), dialog);
