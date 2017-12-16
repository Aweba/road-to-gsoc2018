#include <gtk/gtk.h>
#include <webkit/webkit.h>

void OpenResource(GtkWidget *widget, gpointer *data)
{
    gboolean state = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(data));

    if(state) {
        /* Create the widgets */
        GtkWidget *main_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        GtkWidget *scrolled_window = gtk_scrolled_window_new(NULL, NULL);
        GtkWidget *web_view = webkit_web_view_new();

        /* Place the WebKitWebView in the GtkScrolledWindow */
        gtk_container_add(GTK_CONTAINER(scrolled_window), web_view);
        gtk_container_add(GTK_CONTAINER(main_window), scrolled_window);

        /* Open a webpage */
        const gchar *resource = gtk_button_get_label(GTK_BUTTON(data));

        if(g_strcmp0(resource, "Java") == 0)
        {
            g_print(resource);
            webkit_web_view_load_uri(WEBKIT_WEB_VIEW(web_view), "http://java-gnome.sourceforge.net/");
        }
        else if (g_strcmp0(resource, "Python") == 0)
        {
            g_print(resource);
            webkit_web_view_load_uri(WEBKIT_WEB_VIEW(web_view), "https://lazka.github.io/pgi-docs/#Gtk-3.0/classes/Window.html#Gtk.Window");
        }
        else if (g_strcmp0(resource, "C") == 0)
        {
            g_print(resource);
            webkit_web_view_load_uri(WEBKIT_WEB_VIEW(web_view), "https://developer.gnome.org/gtk3/stable/");
        }
        else if (g_strcmp0(resource, "JavaScript") == 0)
        {
            g_print(resource);
            webkit_web_view_load_uri(WEBKIT_WEB_VIEW(web_view), "https://developer.gnome.org/platform-overview/stable/tour-gjs.html.en");
        }

        /* Show the result */
        gtk_window_set_default_size(GTK_WINDOW(main_window), 800, 600);
        gtk_widget_show_all(main_window);
    }
}


int main (int argc, char *argv[])
{
    GtkWidget *win, *grid, *b1, *b2, *cb1, *cb2, *cb3, *cb4;

    gtk_init (&argc, &argv);

    win = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title (GTK_WINDOW (win), "Language Selector");
    gtk_window_set_default_size (GTK_WINDOW (win), 60, 80);
    gtk_container_set_border_width (GTK_CONTAINER (win), 10);

    grid = gtk_grid_new ();
    
    b1 = gtk_button_new_with_label ("Quit");
    g_signal_connect (b1, "clicked", G_CALLBACK (gtk_main_quit), NULL);

    b2 = gtk_button_new_with_label("Learn");

    cb1 = gtk_check_button_new_with_label ("Java");
    cb2 = gtk_check_button_new_with_label ("Python");
    cb3 = gtk_check_button_new_with_label ("C");
    cb4 = gtk_check_button_new_with_label ("JavaScript");

    g_signal_connect(b2, "clicked", G_CALLBACK(OpenResource), cb1);
    g_signal_connect(b2, "clicked", G_CALLBACK(OpenResource), cb2);
    g_signal_connect(b2, "clicked", G_CALLBACK(OpenResource), cb3);
    g_signal_connect(b2, "clicked", G_CALLBACK(OpenResource), cb4);

    gtk_grid_attach (GTK_GRID (grid), b1, 1, 3, 1, 1);
    gtk_grid_attach (GTK_GRID (grid), b2, 3, 3, 1, 1);
    gtk_grid_attach (GTK_GRID (grid), cb1, 1, 1, 1, 1);
    gtk_grid_attach (GTK_GRID (grid), cb2, 1, 2, 1, 1);
    gtk_grid_attach (GTK_GRID (grid), cb3, 3, 1, 1, 1);
    gtk_grid_attach (GTK_GRID (grid), cb4, 3, 2, 1, 1);

    gtk_container_add (GTK_CONTAINER (win), grid);

    g_signal_connect (win, "destroy", G_CALLBACK (gtk_main_quit), NULL);
    gtk_widget_show_all(win);
    
    gtk_main();
    return 0;
}

