renderer = Gtk.CellRendererText()
column = Gtk.TreeViewColumn(


                            "ID",
                            renderer,
                            text=Model.COL_ID)

tree.append_column(column)
renderer = Gtk.CellRendererText()
column = Gtk.TreeViewColumn(


                            "Name",
                            renderer,
                            text=Model.COL_NAME)

tree.append_column(column)
