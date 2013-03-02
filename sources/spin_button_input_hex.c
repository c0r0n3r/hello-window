static gint
on_input (GtkSpinButton *spin,
          gdouble       *new_val)
{
  static gchar *month[12] = { "January", "February", "March",
                              "April", "May", "June",
                              "July", "August", "September",
                              "October", "November", "December" };


  const gchar *text = gtk_entry_get_text (GTK_ENTRY (spin));
  gint i;

  for (i = 1; i <= sizeof (month) / sizeof (*month); i++)

    if (!strcmp (month[i - 1], text))
      {
        *new_val = i;
        return TRUE;
      }

  *new_val = 0.0;
  return GTK_INPUT_ERROR;
}
