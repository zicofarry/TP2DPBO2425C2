public class Device extends Electronic {
    private String brand;
    private int warranty;
    private int power;

    public Device() {
        this.brand = "";
        this.warranty = 0;
        this.power = 0;
    }

    public Device(String brand, int warranty, int power) {
        this.brand = brand;
        this.warranty = warranty;
        this.power = power;
    }

    public void setBrand(String brand) { this.brand = brand; }
    public String getBrand() { return this.brand; }

    public void setWarranty(int warranty) { this.warranty = warranty; }
    public int getWarranty() { return this.warranty; }

    public void setPower(int power) { this.power = power; }
    public int getPower() { return this.power; }
}
