from  tkinter import *
from PIL import ImageTk,Image
root =Tk()
root.title("LOgin form")
root.maxsize(400,400)

root.geometry("350x500")
root.configure(background="#0096DC")
img = Image.open("amazon_logo.png")
resized_img = img.resize((70,70))
img= ImageTk.PhotoImage(resized_img)

img_label = Label(root,image = img)