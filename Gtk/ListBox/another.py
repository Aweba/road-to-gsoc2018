import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk 

class ListBoxWindow(Gtk.Window):

    def __init__(self):
        Gtk.Window.__init__(self, title="Language Selector")
        self.set_border_width(10)

        box_outer = Gtk.Box(orientation=Gtk.Orientation.VERTICAL, spacing=6)
        self.add(box_outer)
        holi = Gtk.Label("Choose your favourite language")
        box_outer.add(holi)
        listbox = Gtk.ListBox()
        listbox.set_selection_mode(Gtk.SelectionMode.NONE)
        box_outer.pack_start(listbox, True, True, 0)

        row = Gtk.ListBoxRow()
        hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=50)
        row.add(hbox)
        label = Gtk.Label("Javascript", xalign=0)
        button = Gtk.LinkButton.new_with_label("https://www.javascript.com/","Go to Javascript web")
        hbox.pack_start(label, True, True, 0)
        hbox.add(button)
        listbox.add(row)
       
        row = Gtk.ListBoxRow()
        hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=50)
        row.add(hbox)
        label = Gtk.Label("C", xalign=0)
        button = Gtk.LinkButton("http://www.learn-c.org/","Go to C web")
        hbox.pack_start(label, True, True, 0)
        hbox.add(button)
        listbox.add(row)

        row = Gtk.ListBoxRow()
        hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=50)
        button = Gtk.LinkButton("https://www.python.org/","Go to Python web")
        row.add(hbox)
        label = Gtk.Label("Python", xalign=0)
        hbox.pack_start(label, True, True, 0)
        hbox.add(button)
        listbox.add(row)
        
        row = Gtk.ListBoxRow()
        hbox = Gtk.Box(orientation=Gtk.Orientation.HORIZONTAL, spacing=50)
        button = Gtk.LinkButton("https://www.java.com/es/download/","Go to Java web")
        row.add(hbox)
        label = Gtk.Label("Java", xalign=0)
        hbox.pack_start(label, True, True, 0)
        hbox.add(button)        
        listbox.add(row)
win = ListBoxWindow()
win.connect("delete-event", Gtk.main_quit)
win.show_all()
Gtk.main()
