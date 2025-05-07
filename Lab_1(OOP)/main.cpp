#include <iostream>
#include <fstream>
#include "price.h"

using namespace std;

int main() {

    ifstream input("prices.txt");
    if (!input) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Price total = { 0, 0 };
    int hryvnias, quantity;
    int kopecks;

    while (input >> hryvnias >> kopecks >> quantity) {
        Price item_price = { hryvnias, kopecks };
        Price total_price = multiply(item_price, quantity);
        total = add(total, total_price);
    }

    input.close();
    Price rounded_total = roundPrice(total);

    cout << "Total price: " << total.hryvnias << " uah " << total.kopecks << " kop" << endl;
    cout << "Rounded price: " << rounded_total.hryvnias << " uah " << rounded_total.kopecks << " kop" << endl;

    return 0;
}