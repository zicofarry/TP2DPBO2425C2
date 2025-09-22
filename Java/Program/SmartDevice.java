public class SmartDevice extends Device {
    private String os;
    private int storage;
    private int ram;

    public SmartDevice() {
        this.os = "";
        this.storage = 0;
        this.ram = 0;
    }

    public SmartDevice(String os, int storage, int ram) {
        this.os = os;
        this.storage = storage;
        this.ram = ram;
    }

    public SmartDevice(int id, String name, int price, int stock, String brand, int warranty, int power, String os, int storage, int ram) {
        setId(id);
        setName(name);
        setPrice(price);
        setStock(stock);
        setBrand(brand);
        setWarranty(warranty);
        setPower(power);
        this.os = os;
        this.storage = storage;
        this.ram = ram;
    }

    public void setOS(String os) { this.os = os; }
    public String getOS() { return this.os; }

    public void setStorage(int storage) { this.storage = storage; }
    public int getStorage() { return this.storage; }

    public void setRAM(int ram) { this.ram = ram; }
    public int getRAM() { return this.ram; }
}
