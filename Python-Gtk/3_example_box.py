import gi
gi.require_version ('Gtk', '3.0')
from gi.repository import Gtk
# We are going to define our own class
class MyWindow(Gtk.Window):
    def __init__(self):
        Gtk.Window.__init__(self, title="Hello World")

        label = Gtk.Label("This is a normal label")
        vbox_left.pack_start(label, True, True, 0)


        self.box = Gtk.Box(spacing=6)
        self.add(self.box)

        self.button1 = Gtk.Button(label="7")
        self.button1.connect("clicked", self.on_button1_clicked)
        self.box.pack_start(self.button1, True, True, 0)

        self.button2 = Gtk.Button(label="8")
        self.button2.connect("clicked", self.on_button2_clicked)
        self.box.pack_start(self.button2, True, True, 0)

        self.button3 = Gtk.Button(label="9")
        self.button3.connect("clicked", self.on_button3_clicked)
        self.box.pack_start(self.button3, True, True, 0)

    def on_button1_clicked(self, widget):
        print("Hello World")
    def on_button2_clicked(self, widget):
        print("Goodbye")
    def on_button3_clicked(self, widget):
        print("Again")

win = MyWindow()
win.connect("delete-event", Gtk.main_quit)
win.show_all()
Gtk.main()

