#include <gtk/gtk.h>
int main (int argc, char *argv[])
{
    GtkWidget *win, *label, *grid, *b1, *b2, *c1,*c2,*c3,*c4;
    gtk_init (&argc,&argv);
    win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(win), "Language Selector");//cambiar titulo de ventana
    gtk_window_set_default_size(GTK_WINDOW (win), 200, 200);


    grid = gtk_grid_new();
    b1 = gtk_button_new_with_label ("Quit");
    b2 = gtk_button_new_with_label ("Learn");
    c1 = gtk_check_button_new_with_label ("Java");
    c2 = gtk_check_button_new_with_label ("C");
    c3 = gtk_check_button_new_with_label ("Python");
    c4 = gtk_check_button_new_with_label ("JavaScript");
    gtk_grid_attach(GTK_GRID (grid),b1,1,3,1,1);//quit
    gtk_grid_attach(GTK_GRID (grid),b2,3,3,1,1);//izquierda, arriba, ancho, alto
    gtk_grid_attach(GTK_GRID (grid),c1,1,1,1,1);
    gtk_grid_attach(GTK_GRID (grid),c2,3,1,1,1);
    gtk_grid_attach(GTK_GRID (grid),c3,1,2,1,1);
    gtk_grid_attach(GTK_GRID (grid),c4,3,2,1,1);


    gtk_container_add(GTK_CONTAINER (win),grid);
   
    gtk_widget_show_all(win);//para mostrar la ventana
    g_signal_connect (b1, "clicked", G_CALLBACK (gtk_main_quit), NULL);//para cerrar el programa
    g_signal_connect (win, "destroy", G_CALLBACK (gtk_main_quit), NULL);//para cerrar el programa
    gtk_main();
    return 0;

}
