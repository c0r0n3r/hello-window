GtkTreeViewColumn *
gtk_tree_view_column_new (void);



GtkTreeViewColumn *
gtk_tree_view_column_new_with_area (GtkCellArea *area);

GtkTreeViewColumn *
gtk_tree_view_column_new_with_attributes (
                                    const gchar *title,
                                    GtkCellRenderer *cell,
                                    ...) G_GNUC_NULL_TERMINATED;
