#! /usr/bin/env python3

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk


def on_button_clicked(button, entry):
    text = entry.get_text()  
    print(text)  


def main():
    window = Gtk.Window()
    window.set_title('Linux Foundation')
    window.set_border_width(50)
    window.connect('destroy', Gtk.main_quit)

    button = Gtk.Button('Click me')
    entry = Gtk.Entry()

    button.connect('clicked', on_button_clicked, entry)  

    box = Gtk.Box(orientation=Gtk.Orientation.VERTICAL, spacing=0)
    box.pack_start(entry, True, True, 0)
    box.pack_start(button, True, True, 0)

    window.add(box)
    window.show_all()
    Gtk.main()
    

if __name__ == "__main__":
    main()
