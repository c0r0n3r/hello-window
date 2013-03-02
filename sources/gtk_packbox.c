#include <stdio.h>
#include <stdlib.h>
#include "gtk/gtk.h"

static gboolean delete_event( GtkWidget *widget,
                              GdkEvent  *event,
                              gpointer   data )
{
    gtk_main_quit ();
    return FALSE;
}

static GtkWidget *make_box( gboolean homogeneous,
                            gint     spacing,
                            gboolean expand,
                            gboolean fill,
                            guint    padding ) 
{
    GtkWidget *box;
    GtkWidget *button;
    char padstr[80];
    
    box = gtk_hbox_new (homogeneous, spacing);
    
    button = gtk_button_new_with_label ("gtk_box_pack");
    gtk_box_pack_start (GTK_BOX (box), button, expand, fill, padding);
    gtk_widget_show (button);
    
    button = gtk_button_new_with_label ("(box,");
    gtk_box_pack_start (GTK_BOX (box), button, expand, fill, padding);
    gtk_widget_show (button);
    
    button = gtk_button_new_with_label ("button,");
    gtk_box_pack_start (GTK_BOX (box), button, expand, fill, padding);
    gtk_widget_show (button);
    
    if (expand == TRUE)
	    button = gtk_button_new_with_label ("TRUE,");
    else
	    button = gtk_button_new_with_label ("FALSE,");
    
    gtk_box_pack_start (GTK_BOX (box), button, expand, fill, padding);
    gtk_widget_show (button);
    
    button = gtk_button_new_with_label (fill ? "TRUE," : "FALSE,");
    gtk_box_pack_start (GTK_BOX (box), button, expand, fill, padding);
    gtk_widget_show (button);
    
    sprintf (padstr, "%d);", padding);
    
    button = gtk_button_new_with_label (padstr);
    gtk_box_pack_start (GTK_BOX (box), button, expand, fill, padding);
    gtk_widget_show (button);
    
    return box;
}

int main( int   argc,
          char *argv[]) 
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *box1;
    GtkWidget *box2;
    GtkWidget *separator;
    GtkWidget *label;
    GtkWidget *quitbox;
    int which;
    
    gtk_init (&argc, &argv);
    
    if (argc != 2) {
	fprintf (stderr, "usage: packbox num, where num is 1, 2, or 3.\n");
	exit (1);
    }
    
    which = atoi (argv[1]);

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

    g_signal_connect (G_OBJECT (window), "delete_event",
		      G_CALLBACK (delete_event), NULL);
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);
    
    box1 = gtk_vbox_new (FALSE, 0);
    
    switch (which) {
    case 1:
	label = gtk_label_new ("gtk_hbox_new (FALSE, 0);");
	
	gtk_misc_set_alignment (GTK_MISC (label), 0, 0);

	gtk_box_pack_start (GTK_BOX (box1), label, FALSE, FALSE, 0);
	
	gtk_widget_show (label);
	
	box2 = make_box (FALSE, 0, FALSE, FALSE, 0);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);

	box2 = make_box (FALSE, 0, TRUE, FALSE, 0);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	box2 = make_box (FALSE, 0, TRUE, TRUE, 0);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	separator = gtk_hseparator_new ();
	
	gtk_box_pack_start (GTK_BOX (box1), separator, FALSE, TRUE, 5);
	gtk_widget_show (separator);
	
	label = gtk_label_new ("gtk_hbox_new (TRUE, 0);");
	gtk_misc_set_alignment (GTK_MISC (label), 0, 0);
	gtk_box_pack_start (GTK_BOX (box1), label, FALSE, FALSE, 0);
	gtk_widget_show (label);
	
	box2 = make_box (TRUE, 0, TRUE, FALSE, 0);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	box2 = make_box (TRUE, 0, TRUE, TRUE, 0);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	separator = gtk_hseparator_new ();
	gtk_box_pack_start (GTK_BOX (box1), separator, FALSE, TRUE, 5);
	gtk_widget_show (separator);
	
	break;

    case 2:
	label = gtk_label_new ("gtk_hbox_new (FALSE, 10);");
	gtk_misc_set_alignment (GTK_MISC (label), 0, 0);
	gtk_box_pack_start (GTK_BOX (box1), label, FALSE, FALSE, 0);
	gtk_widget_show (label);
	
	box2 = make_box (FALSE, 10, TRUE, FALSE, 0);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	box2 = make_box (FALSE, 10, TRUE, TRUE, 0);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	separator = gtk_hseparator_new ();
	gtk_box_pack_start (GTK_BOX (box1), separator, FALSE, TRUE, 5);
	gtk_widget_show (separator);
	
	label = gtk_label_new ("gtk_hbox_new (FALSE, 0);");
	gtk_misc_set_alignment (GTK_MISC (label), 0, 0);
	gtk_box_pack_start (GTK_BOX (box1), label, FALSE, FALSE, 0);
	gtk_widget_show (label);
	
	box2 = make_box (FALSE, 0, TRUE, FALSE, 10);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	box2 = make_box (FALSE, 0, TRUE, TRUE, 10);
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	separator = gtk_hseparator_new ();
	gtk_box_pack_start (GTK_BOX (box1), separator, FALSE, TRUE, 5);
	gtk_widget_show (separator);
	break;
    
    case 3:
	box2 = make_box (FALSE, 0, FALSE, FALSE, 0);

	label = gtk_label_new ("end");
	gtk_box_pack_end (GTK_BOX (box2), label, FALSE, FALSE, 0);
	gtk_widget_show (label);
	
	gtk_box_pack_start (GTK_BOX (box1), box2, FALSE, FALSE, 0);
	gtk_widget_show (box2);
	
	separator = gtk_hseparator_new ();
	gtk_widget_set_size_request (separator, 400, 5);
	gtk_box_pack_start (GTK_BOX (box1), separator, FALSE, TRUE, 5);
	gtk_widget_show (separator);    
    }
    
    quitbox = gtk_hbox_new (FALSE, 0);
    
    button = gtk_button_new_with_label ("Quit");
    
    g_signal_connect_swapped (G_OBJECT (button), "clicked",
			      G_CALLBACK (gtk_main_quit),
			      G_OBJECT (window));
    gtk_box_pack_start (GTK_BOX (quitbox), button, TRUE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (box1), quitbox, FALSE, FALSE, 0);
    
    gtk_container_add (GTK_CONTAINER (window), box1);
    
    gtk_widget_show (button);
    gtk_widget_show (quitbox);
    
    gtk_widget_show (box1);
    gtk_widget_show (window);
    
    gtk_main ();

    return 0;
}
