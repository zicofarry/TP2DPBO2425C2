#include "Device.cpp"

class SmartDevice : public Device {
private:
    string os;
    int storage;
    int ram;

public:
    SmartDevice () {
        os = "";
        storage = 0;
        ram = 0;
    }

    SmartDevice (int id, string name, int price, int stock, string brand, int warranty, int power, string os, int storage, int ram) {
        setId(id);
        setName(name);
        setPrice(price);
        setStock(stock);
        setBrand(brand);
        setWarranty(warranty);
        setPower(power);
        this->os = os;
        this->storage = storage;
        this->ram = ram;
    }

    void setOS(string os) { this->os = os; }
    string getOS() const { return os; }

    void setStorage(int storage) { this->storage = storage; }
    int getStorage() const { return storage; }

    void setRAM(int ram) { this->ram = ram; }
    int getRAM() const { return ram; }

    // void showInfo() override {
    //     Device::showInfo();
    //     cout << ", OS: " << os << ", Storage: " << storage << "GB, RAM: " << ram << "GB";
    // }

    ~SmartDevice() {}
};
