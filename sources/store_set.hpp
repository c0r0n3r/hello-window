




template <class ColumnType> void
set_value(

          int column,
          const ColumnType& data) const;

template <class ColumnType> void
set_value(
          const TreeModelColumn<ColumnType>& column,
          const ColumnType& data) const;

template <class ColumnType> inline TreeValueProxy<ColumnType>
operator[](const TreeModelColumn<ColumnType>& column) const;
