class library:
  def __init__(self):
      self.no_books=0
      self.books=[]
    
  def addbook(self,b):
      self.books.append(b)
      self.no_books=len(self.books)
    
  def showinfo(self):
      # print(f"The books are {self.books}")
      print(f"The number of books are {self.no_books}. The books are: ")
      for book in self.books:
        print(book)

b1=library()
b1.addbook("harry potter")
b1.addbook("pysics")
b1.addbook("mathematics") 
b1.addbook("rich dad poor dad")
b1.showinfo()
       
