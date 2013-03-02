void
gtk_list_store_append (GtkListStore *list_store,
                       GtkTreeIter  *iter,
                       GtkTreeIter  *parent);

void
gtk_list_store_insert_before (GtkListStore *list_store,
                              GtkTreeIter  *iter,
                              GtkTreeIter  *parent,
                              GtkTreeIter  *sibling);

