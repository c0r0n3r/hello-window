struct ModelColumns : public Gtk::TreeModel::ColumnRecord
{
  ModelColumns()
  { add(col_id); add(col_name); }

  Gtk::TreeModelColumn<unsigned int> col_id;
  Gtk::TreeModelColumn<Glib::ustring> col_name;

};

ModelColumns Columns;
store = Gtk::ListStore::create(Columns);


