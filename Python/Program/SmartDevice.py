from Device import Device

class SmartDevice (Device):
    __os = ""
    __storage = 0
    __ram = 0

    def __init__(self, id=0, name="", price=0, stock=0, brand="", warranty=0, power=0, os="", storage=0, ram=0):
        super().__init__(id, name, price, stock, brand, warranty, power)
        self.__os = os
        self.__storage = storage
        self.__ram = ram
    
    def setOS(self, os):
        self.__os = os

    def getOS(self):
        return self.__os
    
    def setStorage(self, storage):
        self.__storage = storage

    def getStorage(self):
        return self.__storage
    
    def setRAM(self, ram):
        self.__ram = ram

    def getRAM(self):
        return self.__ram