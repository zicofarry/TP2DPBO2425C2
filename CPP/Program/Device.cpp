#include "Electronic.cpp"

class Device : public Electronic {
protected:
    string brand;
    int warranty;  // in months
    int power;     // watt

public:
    Device() : Electronic(), brand(""), warranty(0), power(0) {}
    Device(int id, string name, string category, int price, string brand, int warranty, int power)
        : Electronic(id, name, category, price), brand(brand), warranty(warranty), power(power) {}

    void setBrand(string brand) { this->brand = brand; }
    string getBrand() const { return brand; }

    void setWarranty(int warranty) { this->warranty = warranty; }
    int getWarranty() const { return warranty; }

    void setPower(int power) { this->power = power; }
    int getPower() const { return power; }

    void showInfo() override {
        Electronic::showInfo();
        cout << "Brand: " << brand << ", Warranty: " << warranty << " months, Power: " << power << "W";
    }

    ~Device() {}
};
