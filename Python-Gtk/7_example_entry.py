import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

def on_entry_activated(entry, entryme,label):
    text = entryme.get_text()
    label.set_text(text)  

def on_entry_activated2(entry, entryme):
    text = entryme.get_text()
    label.set_text(text)

def main():
    window = Gtk.Window()
    box = Gtk.Box(orientation=Gtk.Orientation.VERTICAL, spacing=0)

    label = Gtk.Label('Enter a message and press <ENTER>...')
    label2 = Gtk.Label('Another message')

    button = Gtk.Button("Enviar")

    entry = Gtk.Entry()
    entry.connect('activate', on_entry_activated, label)  
    entry2 = Gtk.Entry()
    entry2.connect('activate', on_entry_activated2, label2)
    button.connect('clicked',on_entry_activated,entry, label)
    button.connect('clicked', on_entry_activated, entry2, label2)

    box.pack_start(entry, True, True, 0)
    box.pack_start(entry2,True, True, 0)
    box.pack_start(label, True, True, 0)
    box.pack_start(label2,True, True, 0)
    box.pack_start(button, True, True, 0)

    window.add(box)
    window.show_all()
    Gtk.main()

if __name__ == "__main__":
    main()
