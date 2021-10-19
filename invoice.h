#include <iostream>
#include <string>

class Invoice {

    public:
        // Constructor with member initialzer list
        Invoice(std::string part_number, std::string part_description, int item_quantity, int item_price)
        : partNumber{part_number}, partDescription{part_description},quantity{item_quantity}, price{item_price} {}

        std::string getPartNumber(){
            return partNumber;
        }

        std::string getPartDescription(){
            return partDescription;
        }

        int getQuantity(){
            return quantity;
        }

        int getPrice(){
            return price;
        }

        double getVat(){
            return vat;
        }

        double getDiscount(){
            return discount;
        }

        void setPartNumber(std::string part_number){
            if(part_number.length() > 0){

                partNumber = part_number;
                
            }else{

                std::cout << "Part number entered is empty";

            }
        }

        void setPartDescription(std::string part_description){
            if(part_description.length() > 0){

                partDescription = part_description;

            }else{

                std::cout << "Part description entered is empty";

            }
        }

        void setQuantity(int item_quantity){
            if(item_quantity > 0){

                quantity = item_quantity;

            }else{

                std::cout << "Minimum allowed quantity is 1";

            }
        }

        void setPrice(int item_price){
            if( item_price > 0){

                price = item_price;

            }else{

                std::cout << "The item price is invalid";

            }
        }

        void setVat(double item_vat){
            if(item_vat >= 0){

                vat = item_vat;

            }else{

                std::cout << "The item VAT is invalid";

            }
        }

        void setDiscount(double item_discount){
            if(item_discount >= 0){

                discount = item_discount;

            }else{

                std::cout << "The item discount is invalid";

            }
        }

        void getInvoiveAmount(){

            double total_price = (price * quantity) - (quantity * discount);
            double total_amount = total_price + (total_price * vat);

            std::cout << "The invoice details is as below:" << std::endl;
            std::cout << "Item Part Number: " << partNumber << std::endl;
            std::cout << "Item Description: " << partDescription << std::endl;
            std::cout << "Item quantity: " << quantity << std::endl;
            std::cout << "Item price: " << price << std::endl;
            std::cout << "Item discount: " << discount << std::endl;
            std::cout << "Total Price (Discount inclusive):" << total_price << std::endl;
            std::cout << "Total Amount(VAT Inclusive): " << total_amount << std::endl;

        }





    private:
        std::string partNumber;
        std::string partDescription;
        int quantity;
        int price;
        double vat{0.20};
        double discount{10.00}; 


};