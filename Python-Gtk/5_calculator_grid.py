import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

class CalcWindow(Gtk.Window):

    def __init__(self):
        Gtk.Window.__init__(self, title="Calculator")

        grid = Gtk.Grid()
        self.add(grid)

        button1 = Gtk.Button(label="7")
        button2 = Gtk.Button(label="8")
        button3 = Gtk.Button(label="9")
        button4 = Gtk.Button(label="4")
        button5 = Gtk.Button(label="5")
        button6 = Gtk.Button(label="6")
        button7 = Gtk.Button(label="1")
        button8 = Gtk.Button(label="2")
        button9 = Gtk.Button(label="3")
        button10 = Gtk.Button(label="0")
        button11 = Gtk.Button(label=".")
        button12 = Gtk.Button(label="=")
        button13 = Gtk.Button(label="/")
        button14 = Gtk.Button(label="x")
        button15 = Gtk.Button(label="-")
        button16 = Gtk.Button(label="+")

        grid.add(button1)
        grid.add(button2)
        grid.add(button3)
        grid.add(button13)
        grid.attach_next_to(button4, button1, Gtk.PositionType.BOTTOM, 1, 1)
        grid.attach_next_to(button5, button4, Gtk.PositionType.RIGHT,1,1)
        grid.attach_next_to(button6, button5, Gtk.PositionType.RIGHT, 1, 1)
        grid.attach_next_to(button14, button6, Gtk.PositionType.RIGHT,1,1)
        grid.attach_next_to(button7, button4, Gtk.PositionType.BOTTOM, 1, 1)
        grid.attach_next_to(button8, button7, Gtk.PositionType.RIGHT,1,1)
        grid.attach_next_to(button9, button8, Gtk.PositionType.RIGHT, 1, 1)
        grid.attach_next_to(button15, button9, Gtk.PositionType.RIGHT,1,1)
        grid.attach_next_to(button10, button7, Gtk.PositionType.BOTTOM, 1, 1)
        grid.attach_next_to(button11, button10, Gtk.PositionType.RIGHT,1,1)
        grid.attach_next_to(button12, button11, Gtk.PositionType.RIGHT, 1, 1)
        grid.attach_next_to(button16, button12, Gtk.PositionType.RIGHT,1,1)


win = CalcWindow()
win.connect("delete-event", Gtk.main_quit)
win.show_all()
Gtk.main()
