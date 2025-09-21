#include "Electronic.cpp"

class Device : public Electronic {
protected:
    string brand;
    int warranty;
    int power;

public:
    Device () {
        brand = "";
        warranty = 0;
        power = 0;
    };

    Device (string brand, int warranty, int power) {
        this->brand = brand;
        this->warranty = warranty;
        this->power = power;
    }

    void setBrand(string brand) { this->brand = brand; }
    string getBrand() const { return brand; }

    void setWarranty(int warranty) { this->warranty = warranty; }
    int getWarranty() const { return warranty; }

    void setPower(int power) { this->power = power; }
    int getPower() const { return power; }

    // void showInfo() override {
    //     Electronic::showInfo();
    //     cout << "Brand: " << brand << ", Warranty: " << warranty << " months, Power: " << power << "W";
    // }

    ~Device() {}
};
