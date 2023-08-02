from kivy.app import App
from kivy.uix.gridlayout import GridLayout
from kivy.uix.label import Label
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button


class LoginScreen(GridLayout):

    def __init__(self, **kwargs):
        super(LoginScreen, self).__init__(**kwargs)
        self.cols = 2

        self.add_widget(Label(text='Usuario:'))
        self.username = TextInput(multiline=False)
        self.add_widget(self.username)

        self.add_widget(Label(text='Contraseña:'))
        self.password = TextInput(password=True, multiline=False)
        self.add_widget(self.password)

        self.submit = Button(text='Iniciar sesión')
        self.submit.bind(on_press=self.validate_login)
        self.add_widget(self.submit)

    def validate_login(self, instance):
        if self.username.text == 'usuario' and self.password.text == 'contraseña':
            print('Inicio de sesión exitoso')
        else:
            print('Nombre de usuario o contraseña incorrectos')


class LoginApp(App):
    def build(self):
        return LoginScreen()


if __name__ == '__main__':
    LoginApp().run()
