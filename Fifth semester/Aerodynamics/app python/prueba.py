from kivy.app import App
from kivy.uix.label import Label
from kivy.graphics import Color, Rectangle

class TestApp(App):
    def build(self):
        label = Label(text='Bienvenido a la calculadora de atmósferas', font_size='30sp', font_name='Times', color=(14/255, 26/255, 64/255, 1), bold=True)
        with label.canvas.before:
            Color(190/255, 190/255, 190/255, 1) 
            self.rect = Rectangle(size=label.size, pos=label.pos)
        label.bind(size=self._update_rect, pos=self._update_rect)
        return label
        
        
    def _update_rect(self, instance, value):
        self.rect.pos = instance.pos
        self.rect.size = instance.size

if __name__ == '__main__':
    TestApp().run()
