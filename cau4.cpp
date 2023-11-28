#include <iostream>
#include <iomanip>

using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    // Constructor #2
    Inventory(int itemNumber, double cost, int quantity) {
        this->itemNumber = itemNumber;
        this->cost = (cost >= 0) ? cost : 0.0;
        this->quantity = (quantity >= 0) ? quantity : 0;
        setTotalCost();
    }

    // Setter functions
    void setItemNumber(int itemNumber) {
        this->itemNumber = (itemNumber >= 0) ? itemNumber : 0;
    }

    void setQuantity(int quantity) {
        this->quantity = (quantity >= 0) ? quantity : 0;
        setTotalCost();
    }

    void setCost(double cost) {
        this->cost = (cost >= 0) ? cost : 0.0;
        setTotalCost();
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Getter functions
    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    // Test the class
    Inventory item1;
    Inventory item2(1234, 10.99, 50);

    cout << fixed << setprecision(2);

    cout << "Item 1 - Default constructor:\n";
    cout << "Item number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Total cost: $" << item1.getTotalCost() << endl << endl;

    cout << "Item 2 - Constructor #2:\n";
    cout << "Item number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: $" << item2.getCost() << endl;
    cout << "Total cost: $" << item2.getTotalCost() << endl << endl;

    item1.setItemNumber(4321);
    item1.setQuantity(100);
    item1.setCost(5.99);

    cout << "Item 1 - After setting new values:\n";
    cout << "Item number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Total cost: $" << item1.getTotalCost() << endl;

    return 0;
}


