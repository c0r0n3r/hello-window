static gboolean
on_output (GtkSpinButton *spin) /*@ \label{spinbuttonformatc:output} @*/

{
  GtkAdjustment *adjustment = gtk_spin_button_get_adjustment (spin);
  gdouble value = gtk_adjustment_get_value (adjustment);
  gint digits = gtk_spin_button_get_digits (spin);
  gchar *buf = g_strdup_printf ("%0.*f", digits, value); /*@ \label{spinbuttonformatc:outputformat} @*/

  if (strcmp (buf, gtk_entry_get_text (GTK_ENTRY (spin)))) /*@ \label{spinbuttonformatc:outputcompare} @*/
    gtk_entry_set_text (GTK_ENTRY (spin), buf); /*@ \label{spinbuttonformatc:outputset} @*/

  g_free (buf);

  return TRUE; /*@ \label{spinbuttonformatc:outputreturn} @*/
}
