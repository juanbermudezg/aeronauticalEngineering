from kivymd.app import MDApp
from kivy.uix.screenmanager import ScreenManager
from kivy.uix.label import Label
from kivy.lang import Builder

class Ui(ScreenManager):
    pass

class MainApp(MDApp):
    def build (self):
        self.theme_cls.theme_style = 'Dark'
        self.theme_cls.primary_palette = 'Teal'
        Builder.load_file('desing2.kv')

        return Ui()
    def change_style(self, checked, value):
        if value:
            self.theme_cls.theme_style = 'Dark'
        else:
            self.theme_cls.theme_style = 'Light'


if __name__ == "__main__":
    MainApp().run()