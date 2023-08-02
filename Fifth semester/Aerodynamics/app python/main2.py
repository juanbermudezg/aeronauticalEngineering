from PIL import Image
from PIL import ImageTk
from tkinter.ttk import *
import webview
import tkinter
from tkinter import filedialog
import tkinter.font as tkFont
import webbrowser
from tkinter import ttk
gradiente_Temp=0
euler=2.71828
frontera_Internacional=11000
constante_Internacional=287
gravedad_Internacional=9.81
temperatura_Inicial_Internacional=288.15
temperatura_11_Internacional=216.65
presion_11_Internacional=22614.2066
gradiente_Tropofera=-0.0065
gradiente_Estratosfera=0
densidad_Incial_Internacional=1.225
densidad_Incial_Imperial=0.002355
presion_Inicial_Internacional=101325
presion_Incial_Imperial=2215.22
temperatura_Temp=0
densidad_Temp=0
presion_Temp=0
Gringo=1#1 es imperial, 0 es internacional
class window1():
    def __init__(self):
            #custom_font = tkFont.Font(family="Lumos", size=60, weight="bold")
            self.vari=False
            self.ventana = tkinter.Tk()
            
            self.ventana.geometry("1920x1080")
            self.ventana.configure(bg="white")
            self.ventana.resizable(width=False, height=False)
            self.ventana.title("Calculadora de atmósferas - Inicio")
            self.var=""
            
            self.etiqueta = tkinter.Label(self.ventana, text = "Calculadora de atmósferas", bg = "gray99", font=("Times ", 60, "bold"))
            self.etiqueta.pack(fill=tkinter.X)
            self.etiquet3 = tkinter.Label(self.ventana, text = "", bg="white", font="Times 10")
            self.etiquet3.pack(fill=tkinter.X)
           
            self.esave=tkinter.PhotoImage(file="esave.png")
            photoimage_esave = self.esave.subsample(25) 
  
            self.esave_b=tkinter.Button(self.ventana, text = 'Escuela de Aviación del Ejército - ESAVE',font="Times 15",bg="white", command= self.esavep, image = photoimage_esave, 
                    compound = "left").pack(side = "top")
            
            self.etiqueta6=tkinter.Label(self.ventana, text="", bg="white", font="Times 30")
            self.etiqueta6.pack()
            
            
            self.etiqueta5=tkinter.Label(self.ventana, text="Creado por Juan Andrés Bermúdez Gómez", bg="white", font="Times 30")
            self.etiqueta5.pack()
            self.linkedln=tkinter.PhotoImage(file='linkedln.png')
            photoimage_linkedln = self.linkedln.subsample(10) 
  
            self.linkedln_b=tkinter.Button(self.ventana, command= self.linkedinp, image = photoimage_linkedln, 
                    compound = "top", bg="white")
            self.linkedln_b.config(width=100, height=100)
            self.linkedln_b.pack()

            self.github=tkinter.PhotoImage(file='github.png')
            photoimage_github = self.github.subsample(10) 
            self.etiqueta8=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta8.pack()
            self.github_b=tkinter.Button(self.ventana, command= self.githubp, image = photoimage_github, 
                    compound = "top", bg="white")
            self.github_b.config(width=100, height=100)
            self.github_b.pack()
            
            
            self.etiqueta6=tkinter.Label(self.ventana, text="", bg="white", font="Times 30")
            self.etiqueta6.pack()

            
            self.botonSalida = tkinter.Button(self.ventana, text="Empezar a calcular", padx=50, pady=10, font="Times 15", bg="gray99", fg="black", command= lambda: [self.ventana2()])
            self.botonSalida.pack()
            self.etiqueta16=tkinter.Label(self.ventana, text="", bg="white", font="Times 30")
            self.etiqueta16.pack()
            self.botonSalida = tkinter.Button(self.ventana, text="Exit", padx=50, pady=10, font="Times 15", bg="black", fg="white", command= lambda: [self.ventana.destroy()])
            self.botonSalida.pack()
            self.ventana.mainloop()
    def selectionFolder(self):
                self.folder=filedialog.askdirectory(title="Folder", initialdir="C:/")
    def esavep(self):
            webview.create_window('Escuela de Aviación del Ejército', 'https://www.esave.mil.co')
            webview.start()
    def linkedinp(self):
            webbrowser.open('https://www.linkedin.com/in/juanbermudezgomez/')
            webview.create_window('Linkedin - Desarrollador', 'https://www.linkedin.com/in/juanbermudezgomez/')
            webview.start()
    def githubp(self):
            webbrowser.open('https://github.com/juanbermudezg')
            webview.create_window('GitHub - Desarrollador', 'https://github.com/juanbermudezg')
            webview.start()
    def ventana2(self):
        self.ventana.destroy() 
        window2()

class window2():
    
    
    def __init__(self):
            global clase10
            self.vari=False
            self.ventana = tkinter.Tk()
            self.ventana.geometry("1920x1080")
            self.ventana.configure(bg="white")
            self.ventana.resizable(width=False, height=False)
            self.ventana.title("Calculadora de atmósferas - Magnitudes")
            self.var=""
            self.etiqueta = tkinter.Label(self.ventana, text = "Escribe el valor de la altura", bg = "gray99", font=("Times ", 30, "bold"))
            self.etiqueta.pack(fill=tkinter.X)
            self.etiqueta17=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta17.pack()
            self.magnitude = tkinter.Entry(self.ventana, font="Times 15", bg = "snow")
            self.magnitude.pack()
            self.etiqueta18=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta18.pack()
            self.etiqueta1 = tkinter.Label(self.ventana, text = "¿Cuál es la unidad de medida?", bg = "gray99", font=("Times ", 15))
            self.etiqueta1.pack(fill=tkinter.X)
            self.etiqueta15=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta15.pack()
            
            #self.style2 = Style(self.ventana) 
            #self.style2.configure("TRadiobutton", background = "white", foreground = "black", font = ("Times", 15))
            clase10   = tkinter.IntVar()
            
            self.clase11 = ttk.Radiobutton(self.ventana, text='Metros (m)', variable=clase10, value=1)
            self.clase11.pack()
            self.clase22 = ttk.Radiobutton(self.ventana, text='Kilometros (km)', variable=clase10, value=2)
            self.clase22.pack()
            self.clase33 = ttk.Radiobutton(self.ventana, text='Pies (ft)', variable=clase10, value=3)
            self.clase33.pack()
            self.clase44 = ttk.Radiobutton(self.ventana, text='Pulgadas (in)', variable=clase10, value=4)
            self.clase44.pack()
            self.etiqueta16=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta16.pack()
            self.etiqueta4=tkinter.Label(self.ventana, text="¿Los resultados deben mostrarse en cuál sistema?", bg="white", font="Times 15")
            self.etiqueta4.pack()
            self.style = Style(self.ventana) 
            self.style.configure("TRadiobutton", background = "white",  
                foreground = "black", font = ("Times", 15))
            self.clase   = tkinter.IntVar()
            self.clase1 = ttk.Radiobutton(self.ventana, text='Imperial', 
                                      variable=self.clase, value=1)
            self.clase1.pack()
            
            self.clase2 = ttk.Radiobutton(self.ventana, text='Internacional', 
                                      variable=self.clase, value=2)
            self.clase2.pack()

            self.etiqueta19=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta19.pack()
            self.botonGradiente = tkinter.Button(self.ventana, text="¿Un gradiente diferente? ¡Click acá!", padx=100, pady=20, font="Times 15", bg = "white", command= self.gradienteSelect)
            self.botonGradiente.pack()
            
            self.etiqueta20=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta20.pack()
            self.etiqueta40=tkinter.Label(self.ventana, text="¿Existió un cambio en el gradiente?", bg="white", font="Times 15")
            self.etiqueta40.pack()         
            self.checkbox_var = tkinter.IntVar()
            self.ventanas_abiertas = []# crear el checkbox
            self.checkbox = tkinter.Checkbutton(self.ventana, variable=self.checkbox_var, bg="white", height=5, width=15)
            self.checkbox.pack()
            self.botonAcceso = tkinter.Button(self.ventana, text="¡Calcular!", padx=100, pady=20, font="Times 20", bg = "white", command= self.verificationData)
            self.botonAcceso.pack()
            self.etiqueta200=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta200.pack()

            self.botonSalida = tkinter.Button(self.ventana, text="Salir", padx=50, pady=10, font="Times 15", bg="black", fg="white", command= lambda: [self.ventana.destroy()])
            self.botonSalida.pack()
    def gradienteSelect(self):
        if len(self.ventanas_abiertas) < 1:
        # crear una nueva ventana
            self.ventanaHija = tkinter.Toplevel(self.ventana)
            self.ventanas_abiertas.append(self.ventanaHija)  # agregar la ventana a la lista de ventanas abiertas

            # modificar la nueva ventana
            self.ventanaHija.title("Calculadora de atmósferas - Selección de gradiente")  # cambiar el título de la ventana
            self.ventanaHija.geometry("450x450")
            self.ventanaHija.configure(bg="white")
            self.ventanaHija.resizable(width=False, height=False)
            
            self.var=""
            self.etiqueta_ventanaHija = tkinter.Label(self.ventanaHija, text = "Escribe el valor de la gradiente", bg = "gray99", font=("Times ", 15, "bold"))
            self.etiqueta_ventanaHija.pack(fill=tkinter.X)
            self.etiqueta17_ventanaHija=tkinter.Label(self.ventanaHija, text="", bg="white", font="Times 15")
            self.etiqueta17_ventanaHija.pack()
            self.magnitude_ventanaHija = tkinter.Entry(self.ventanaHija, font="Times 15", bg = "snow")
            self.magnitude_ventanaHija.pack()
            self.etiqueta18_ventanaHija=tkinter.Label(self.ventanaHija, text="", bg="white", font="Times 15")
            self.etiqueta18_ventanaHija.pack()
            self.etiqueta1_ventanaHija = tkinter.Label(self.ventanaHija, text = "¿Cuál es la unidad de medida?", bg = "gray99", font=("Times ", 15))
            self.etiqueta1_ventanaHija.pack(fill=tkinter.X)
            
            
            self.style2_ventanaHija = Style(self.ventanaHija) 
            self.style2_ventanaHija.configure("TRadiobutton", background = "white",  
                foreground = "black", font = ("Times", 15))
            self.clase10_ventanaHija   = tkinter.IntVar()
            self.clase11_ventanaHija = ttk.Radiobutton(self.ventanaHija, text='°C/km', 
                                      variable=self.clase10_ventanaHija, value=1)
            self.clase11_ventanaHija.pack()
            self.clase22_ventanaHija = ttk.Radiobutton(self.ventanaHija, text='K/m', 
                                      variable=self.clase10_ventanaHija, value=2)
            self.clase22_ventanaHija.pack()
            self.clase33_ventanaHija = ttk.Radiobutton(self.ventanaHija, text='°F/ft', 
                                      variable=self.clase10_ventanaHija, value=3)
            self.clase33_ventanaHija.pack()
            
            self.botonAcceso_ventanaHija = tkinter.Button(self.ventanaHija, text="¡Cambiar gradiente!", padx=100, pady=20, font="Times 20", bg = "white", command=self.dataVerification)
            self.botonAcceso_ventanaHija.pack()
            self.etiqueta200_ventanaHija=tkinter.Label(self.ventanaHija, text="", bg="white", font="Times 15")
            self.etiqueta200_ventanaHija.pack()

            self.botonSalida_ventanaHija = tkinter.Button(self.ventanaHija, text="Salir", padx=50, pady=10, font="Times 15", bg="black", fg="white", command= lambda: [self.ventanaHija.destroy()])
            self.botonSalida_ventanaHija.pack()
            self.ventana.mainloop()
            
        else:
            tkinter.messagebox.showwarning('Aviso', 'Se ha alcanzado el límite de ventanas abiertas.')
            self.ventanaHija.destroy()
            self.ventanas_abiertas = []
    def dataVerification(self):
        if self.clase10_ventanaHija!=None:
            try:
                self.magnitud1_ventanaHija=float(self.magnitude_ventanaHija.get())  
                self.conversion()
                self.magnitude_ventanaHija.delete(0,tkinter.END)
                self.clase10_ventanaHija.set(None)
            except:
                self.magnitude_ventanaHija.delete(0,tkinter.END)
                self.clase10_ventanaHija.set(None)
                self.mensaje="Verifica que en la magnitud escribiste un número o llenaste los datos correctamente"
                tkinter.messagebox.showinfo("Error", self.mensaje)
                self.ventanaHija.destroy()
        else:
                self.magnitude_ventanaHija.delete(0,tkinter.END)
                self.clase10_ventanaHija.set(None)
                self.mensaje="Verifica que en la magnitud escribiste un número o llenaste los datos correctamente"
                tkinter.messagebox.showinfo("Error", self.mensaje)
                self.ventanaHija.destroy()     
    def verificationData(self):
       
        if clase10!=None and self.clase!=None:
   
            try:
              
                self.magnitud1=float(self.magnitude.get())  

                self.hacerOperacion()
             
            except:
                self.magnitude.delete(0,tkinter.END)
                self.mensaje="Verifica que en la magnitud escribiste un número o llenaste los datos correctamente"
                tkinter.messagebox.showinfo("Error", self.mensaje)
                
        else:
                self.magnitude.delete(0,tkinter.END)
                self.clase.set(None)
        
                self.mensaje="Verifica que en la magnitud escribiste un número o llenaste los datos correctamente"
                tkinter.messagebox.showinfo("Error", self.mensaje)
                
    def conversion(self):
        global gradiente_Temp
        gradiente_Temp=0
        self.skbo=float(self.magnitude_ventanaHija.get())
     
        if self.clase10_ventanaHija.get()==1:
            gradiente_Temp=self.skbo/1000
      
        elif self.clase10_ventanaHija.get()==2:
            gradiente_Temp=self.skbo
         
        else:
            gradiente_Temp=((self.skbo+459.67)*5/9)/3.28084
        
    def hacerOperacion(self):
    
            global temperatura_Temp
            global densidad_Temp
            global presion_Temp
            global Gringo
            if self.checkbox_var.get()==1:
             
                #gradiente_Tropofera=gradiente_Temp
                
                if clase10.get() == 1:
                  
                    if self.magnitud1 <=frontera_Internacional:
                       
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Temp*self.magnitud1)
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Temp)))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                       
                    else:
                   
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                elif clase10.get()==2:
                    self.magnitud1=self.magnitud1*1000
                    if self.magnitud1 <=frontera_Internacional:
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Temp*self.magnitud1)
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Temp)))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                    else:
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                elif clase10.get()==3:
                
                    self.magnitud1=self.magnitud1/3.281
                    
                    
                    if self.magnitud1 <=frontera_Internacional:
                     
                    
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Temp*self.magnitud1)
                       
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Temp)))
                      
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                
                        
                    else:
                    
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                elif clase10.get()==4:
                    self.magnitud1=self.magnitud1/39.37
                    
                    if self.magnitud1 <=frontera_Internacional:
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Temp*self.magnitud1)
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Temp)))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                        
                    else:
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
               
                self.a=self.clase.get()
            
                if self.a == 1:
                    temperatura_Temp=(temperatura_Temp-273.15)*9/5+32
                    presion_Temp=presion_Temp/(6895*144)
                    densidad_Temp=densidad_Temp/515.4
                    Gringo=1
                    
                else:
                    
                    Gringo=0
                self.ventana.destroy()
             
                window3()
            else:
               
                gradiente_Tropofera=-0.0065
                
                if clase10.get() == 1:
                   
                    if self.magnitud1 <=frontera_Internacional:
                       
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Tropofera*self.magnitud1)
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Tropofera)))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                       
                       
                    else:
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                elif clase10.get()==2:
                    
                    self.magnitud1=self.magnitud1*1000
                    if self.magnitud1 <=frontera_Internacional:
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Tropofera*self.magnitud1)
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Tropofera)))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                    else:
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                elif clase10.get()==3:
                    
                    self.magnitud1=self.magnitud1/3.281
                    
                    if self.magnitud1 <=frontera_Internacional:
                        
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Tropofera*self.magnitud1)
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Tropofera)))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                        
                    else:
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                elif clase10.get()==4:
                    
                    self.magnitud1=self.magnitud1/39.37
                    
                    if self.magnitud1 <=frontera_Internacional:
                        temperatura_Temp=temperatura_Inicial_Internacional+(gradiente_Tropofera*self.magnitud1)
                        presion_Temp=presion_Inicial_Internacional*(temperatura_Temp/temperatura_Inicial_Internacional)**(-(gravedad_Internacional/(constante_Internacional*gradiente_Tropofera)))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                        
                    else:
                        temperatura_Temp=temperatura_11_Internacional
                        presion_Temp=presion_11_Internacional*euler**(-gravedad_Internacional/(constante_Internacional*temperatura_Temp)*(self.magnitud1-frontera_Internacional))
                        densidad_Temp=presion_Temp/(temperatura_Temp*constante_Internacional)
                        
                self.a=self.clase.get()
                if self.a == 1:
                    temperatura_Temp=(temperatura_Temp-273.15)*9/5+32
                    presion_Temp=presion_Temp/(6895*144)
                    densidad_Temp=densidad_Temp/515.4
                    Gringo=1
                    print(temperatura_Temp)
                else:
                    Gringo=0
                self.ventana.destroy()
                
               
                window3()
class window3():
    def __init__(self):
            self.vari=False
            self.ventana = tkinter.Tk()
            self.ventana.geometry("1920x1080")
            self.ventana.configure(bg="white")
            self.ventana.resizable(width=False, height=False)
            self.ventana.title("Calculadora de atmósferas - Resultados")
            self.var=""
            self.etiqueta1=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta1.pack()
            self.etiqueta = tkinter.Label(self.ventana, text = "Resultados", bg = "gray99", font=("Times ", 30, "bold"))
            self.etiqueta.pack(fill=tkinter.X)
            self.etiqueta17=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta17.pack()
            if Gringo==1:
               
                self.resultado_Temperatura=str(temperatura_Temp)+" °F"
                self.resultado_Presion=str(presion_Temp)+" lb/ft^2"
                self.resultado_Densidad=str(densidad_Temp)+" slug/ft^3"
               
            else:
             
                self.resultado_Temperatura=str(temperatura_Temp)+" K"
                self.resultado_Presion=str(presion_Temp)+" Pa"
                self.resultado_Densidad=str(densidad_Temp)+" kg/m^3"
               
            self.etiqueta3=tkinter.Label(self.ventana, text="Temperatura:", bg="white", font=("Times ", 20, "bold"))
            self.etiqueta3.pack()
            self.etiqueta2=tkinter.Label(self.ventana, text=self.resultado_Temperatura, bg="white", font="Times 15")
            self.etiqueta2.pack()
            self.etiqueta4=tkinter.Label(self.ventana, text="Presión:", bg="white", font=("Times ", 20, "bold"))
            self.etiqueta4.pack()
            self.etiqueta5=tkinter.Label(self.ventana, text=self.resultado_Presion, bg="white", font="Times 15")
            self.etiqueta5.pack()
            self.etiqueta6=tkinter.Label(self.ventana, text="Densidad:", bg="white", font=("Times ", 20, "bold"))
            self.etiqueta6.pack()
            self.etiqueta7=tkinter.Label(self.ventana, text=self.resultado_Densidad, bg="white", font="Times 15")
            self.etiqueta7.pack()
            self.etiqueta17=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta17.pack()
            self.botonAtras = tkinter.Button(self.ventana, text="Volver", padx=50, pady=10, font="Times 15", bg="snow", fg="black", command= self.borrar)
            self.botonAtras.pack()
            self.etiqueta20=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta20.pack()
            self.botonPaso = tkinter.Button(self.ventana, text="Paso a paso", padx=50, pady=10, font="Times 15", bg="snow", fg="black", command= lambda: [self.paso()])
            self.botonPaso.pack()
            self.etiqueta22=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta22.pack()
            self.imagen = Image.open("img1.png")
            self.imagen_tk = ImageTk.PhotoImage(self.imagen)
            self.etiqueta23=tkinter.Label(self.ventana, image=self.imagen_tk)
            self.etiqueta23.pack()
            self.etiqueta29=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta29.pack()
            self.botonSalida = tkinter.Button(self.ventana, text="Salir", padx=50, pady=10, font="Times 15", bg="black", fg="white", command= lambda: [self.ventana.destroy()])
            self.botonSalida.pack()
            self.etiqueta18=tkinter.Label(self.ventana, text="", bg="white", font="Times 15")
            self.etiqueta18.pack()
            
    def borrar(self):
        self.ventana.destroy()
        main()
    def paso(self):
        self.mensaje="Funcionalidad implementada proximamente"
        tkinter.messagebox.showinfo("Pardon moi", self.mensaje)
def main():
    window1()
main()