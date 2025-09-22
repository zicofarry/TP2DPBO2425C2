// Class Electronic Shop
public class Electronic{
    // Atribute
    private int id;
    private String name;
    private int price;
    private int stock;
    
    // Constructor (initializer)
    public Electronic(){
        this.id = 0;
        this.name = "";
        this.price = 0;
        this.stock = 0;
    }

    // Contructor with parameter
    public Electronic(int id, String name, int price, int stock){
        this.id = id;
        this.name = name;
        this.price = price;
        this.stock = stock;
    }

    // Setter and Getter for id
    public void setId(int id){this.id = id;}
    public int getId(){return this.id;}

    // Setter and Getter for name
    public void setName(String name){this.name = name;}
    public String getName(){return this.name;}
    
    // Setter and Getter for price
    public void setPrice(int price){this.price = price;}
    public int getPrice(){return this.price;}

    // Setter and Getter for stock
    public void setStock(int stock){this.stock = stock;}
    public int getStock(){return this.stock;}
}