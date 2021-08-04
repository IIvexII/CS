/*
    Question 1. Create a class called Invoice that an AL-Jannat Store might use to represent an invoice
    for an item sold at the store. An Invoice should include six data members: 
    1. a item number (string)
    2. a item description (string),
    3. a quantity of the item being purchased (int)
    4. a price per item (int) 
    5. a value-added tax (VAT) rate as a decimal (double)
    6. and a discount rate as a decimal (double).
    Your class should have a constructor that initializes the six data members. The constructor should
    initialize the first four data members with values from parameters and the last two data members
    to default values of 0.20 per cent and zero respectively.
    Provide a set and a get functions for each data members. In addition, provide a member function
    named Get_Invoice_Amount that calculates the invoice amount (i.e., multiplies the quantity by the
    price per item and applies the text and discount amounts), then returns the amount.
    Write a test program to demonstrate Invoice’s capabilities.
*/
#include <iostream>
using namespace std;

class Invoice{
    private:
        string itemNum, itemDescription;
        int itemQuantity,itemPrice;
        double itemTax, itemDiscount;
    public:
        Invoice(string num, string desc, int quantity, int price, double tax=0.20,double disc=0.0){
            itemNum = num;
            itemDescription = desc;
            itemQuantity = quantity;
            itemPrice = price;
            itemTax = tax;
            itemDiscount = disc;
        }
        // Set Functions
        void setNumber(string num){
            itemNum = num;
        }
        void setDescription(string description){
            itemDescription = description;
        }
        void setQuantity(int quantity){
            itemQuantity = quantity;
        }
        void setPrice(int price){
            itemPrice = price;
        }
        void setTax(int tax){
            itemTax = tax;
        }
        void setDiscount(int discount){
            itemDiscount = discount;
        }
        // Get functions
        string getNumber(){
            return itemNum;
        }
        string getDescription(){
            return itemDescription;
        }
        int getQuantity(){
            return itemQuantity;
        }
        int getPrice(){
            return itemPrice;
        }
        double getTax(){
            return itemTax;
        }
        double getDiscount(){
            return itemDiscount;
        }
        // Get Invoice Amount function
        double getInvoiceAmount(){
            double price = itemQuantity * itemPrice,
                   calTax = itemQuantity * itemPrice * itemTax,
                   finalAmount = price + calTax - itemDiscount;

            return finalAmount;
        }
};
int main(){
    Invoice purchases[3] =  {
                                Invoice("25485", "HP mouse", 25, 600),
                                Invoice("25482", "DELL Keyboard", 24, 1024, 0.4, 900),
                                Invoice("25484", "Red Dragon Headphones", 5, 2015, 0.1, 50)
                            };
    for(int i=0; i<3; i++){
        cout << "####### Item " << i+1 << " #######" << endl;
        cout << "Item Number: " << purchases[i].getNumber() << endl;
        cout << "Description: " << purchases[i].getDescription() << endl;
        cout << "Quantity: " << purchases[i].getQuantity() << endl;
        cout << "Price of 1 item: " << purchases[i].getPrice() << endl;
        cout << "Tax: " << (purchases[i].getTax()*100) << "%" << endl;
        cout << "Discount: " << purchases[i].getDiscount() << endl;
        cout << "Total Price: " << purchases[i].getInvoiceAmount() << endl;
    }
    return 0;
}