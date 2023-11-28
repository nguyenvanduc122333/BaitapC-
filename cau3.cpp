#include <iostream>
#include <string>
using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;
public:
    RetailItem(string d, int u, double p) {
        description = d;
        unitsOnHand = u;
        price = p;
    }
    void setDescription(string d) {
        description = d;
    }
    void setUnitsOnHand(int u) {
        unitsOnHand = u;
    }
    void setPrice(double p) {
        price = p;
    }
    string getDescription() const {
        return description;
    }
    int getUnitsOnHand() const {
        return unitsOnHand;
    }
    double getPrice() const {
        return price;
    }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\t"<<"Description\t"<<"Units On Hand \t"<<"Price"<<endl;
	cout<<"----------------------------------------------------------"<<endl;
    cout << "Item #1  "<< "\t" << item1.getDescription()<<"\t\t" << item1.getUnitsOnHand()<< "\t"<< item1.getPrice()<< "\t"<<endl;
    cout << "Item #2  " << item2.getDescription()<< "\t\t" << item2.getUnitsOnHand()<< "\t"<< item2.getPrice() << "\t"<<endl;
    cout << "Item #3  "<< "\t" << item3.getDescription()<< "\t\t" << item3.getUnitsOnHand()<< "\t"<< item3.getPrice()<< "\t" <<endl;
	cout<<"----------------------------------------------------------"<<endl;
   

    return 0;
}

