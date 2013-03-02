typedef enum
{



  COL_ID,
  COL_NAME,
  NUM_COLS
} ModelColumns;


store = gtk_list_store_new (NUM_COLS,
                            G_TYPE_UINT,
                            G_TYPE_STRING);
