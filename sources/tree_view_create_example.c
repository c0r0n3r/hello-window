  renderer = gtk_cell_renderer_text_new ();
  gtk_tree_view_insert_column_with_attribute (
                         GTK_TREE_VIEW (view),
                         -1,      
                         "ID",  
                         renderer,
                         "text", COL_ID,
                         NULL);

  renderer = gtk_cell_renderer_text_new ();
  gtk_tree_view_insert_column_with_attributes (
                          GTK_TREE_VIEW (view),
                          -1,      
                          "Name",  
                          renderer,
                          "text", COL_NAME,
                          NULL);

