
TreeViewColumn();

explicit TreeViewColumn(const Glib::ustring& title);


TreeViewColumn(const Glib::ustring& title, CellRenderer& cell);

template<class T_ModelColumnType>
TreeViewColumn(
               const Glib::ustring& title,
               const TreeModelColumn<T_ModelColumnType>& column);

