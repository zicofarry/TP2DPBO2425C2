from Electronic import Electronic

class Device (Electronic):
    __brand = ""
    __warranty = 0
    __power = 0

    def __init__(self, id = 0, name = "", price = 0, stock = 0, brand = "", warranty = 0, power = 0):
        super().__init__(id, name, price, stock)
        self.__brand = brand
        self.__warranty = warranty
        self.__power = power

    def setBrand(self, brand):
        self.__brand = brand

    def getBrand(self):
        return self.__brand

    def setWarranty(self, warranty):
        self.__warranty = warranty

    def getWarranty(self):
        return self.__warranty

    def setPower(self, power):
        self.__power = power

    def getPower(self):
        return self.__power