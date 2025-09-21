#include "Device.cpp"

class SmartDevice : public Device {
private:
    string os;
    int storage; // in GB
    int ram;     // in GB

public:
    SmartDevice() : Device(), os(""), storage(0), ram(0) {}
    SmartDevice(int id, string name, string category, int price, string brand, int warranty, int power,
                string os, int storage, int ram)
        : Device(id, name, category, price, brand, warranty, power),
          os(os), storage(storage), ram(ram) {}

    void setOS(string os) { this->os = os; }
    string getOS() const { return os; }

    void setStorage(int storage) { this->storage = storage; }
    int getStorage() const { return storage; }

    void setRAM(int ram) { this->ram = ram; }
    int getRAM() const { return ram; }

    void showInfo() override {
        Device::showInfo();
        cout << ", OS: " << os << ", Storage: " << storage << "GB, RAM: " << ram << "GB";
    }

    ~SmartDevice() {}
};
