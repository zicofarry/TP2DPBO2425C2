#include <bits/stdc++.h>
using namespace std;

// Class Electronic Shop
class Electronic{
    private:
        int id;
        string name;
        int price;
        int stock;
    
    public:
        // Constructor (initializer)
        Electronic(){
            id = 0;
            name = "";
            price = 0;
            stock = 0;
        };

        // Contructor with parameter
        Electronic(int id, string name, int price, int stock){
            this->id = id;
            this->name = name;
            this->price = price;
            this->stock = stock;
        }

        // Setter and Getter for id
        void setId(int id){this->id = id;}
        int getId(){return id;}

        // Setter and Getter for name
        void setName(string name){this->name = name;}
        string getName(){return name;}
        
        // Setter and Getter for price
        void setPrice(int price){this->price = price;}
        int getPrice(){return price;}

        // Setter and Getter for stock
        void setStock(int stock){this->stock = stock;}
        int getStock(){return stock;}

        // virtual void showInfo() {
        //     cout << "ID: " << id
        //         << ", Name: " << name
        //         << ", stock: " << stock
        //         << ", Price: " << price << endl;
        // }

        // Desctructor
        ~Electronic(){}
};