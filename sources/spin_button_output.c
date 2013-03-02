static gint
on_input (GtkSpinButton *spin, /*@ \label{spinbuttonformatc:input} @*/
          gdouble       *new_val)
{
  gchar *err = NULL;


  *new_val = g_strtod (gtk_entry_get_text (GTK_ENTRY (spin)), &err); /*@ \label{spinbuttonformatc:inputset} @*/
  if (*err) /*@ \label{spinbuttonformatc:inputreturn} @*/
    return GTK_INPUT_ERROR;




  return TRUE;
}
