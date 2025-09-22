# Class Electronic
class Electronic:
    # Attribute
    __id = 0
    __name = ""
    __price = 0
    __stock = 0

    # Constructor
    def __init__(self, id = 0, name = "", price = 0, stock = 0):
        self.__id = id
        self.__name = name
        self.__price = price
        self.__stock = stock
    
    # Setter and getter
    def setId(self, id):
        self.__id = id

    def getId(self):
        return self.__id
    
    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name
    
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price
        
    def setStock(self, stock):
        self.__stock = stock

    def getStock(self):
        return self.__stock
