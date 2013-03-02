static gint
on_output (GtkSpinButton *spin)

{
  static gchar *month[12] = { "January", "February", "March",
                              "April", "May", "June",
                              "July", "August", "September",
                              "October", "November", "December" };
  GtkAdjustment *adjustment = gtk_spin_button_get_adjustment (spin);
  gint value = gtk_adjustment_get_value (adjustment);
  const gchar *text = gtk_entry_get_text (GTK_ENTRY (spin));



  if (value && strcmp (month[i - 1], text))
    {
      gtk_entry_set_text (GTK_ENTRY (spin), month[i - 1]);

    }


  return TRUE;
}
