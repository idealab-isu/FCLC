//
// Created by smenon on 9/16/22.
//

#include <string>
using namespace std;

class Invoice{
public:
    Invoice(string, string, int, int);
    string getPartnum();
    void setPartnum(string number);
    string getPartdes();
    void setPartdes(string description);
    int getQuantity();
    void setQuantity(int quantity);
    int getPrice();
    void setPrice(int price);

    int getInvoiceAmount();

private:
    string part_num;
    string part_des;
    int quantity;
    int price;

};
