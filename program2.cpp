// Spencer Krum
// CS162
// Karla Fant
// Program 2
// DBAD License
// Oct 22, 2010


#include <iostream>
#include "program2.h"


using namespace std;


int main () {
    magickarlafreecode();
    intro();
    baseline_info info;
    baseline(info);
//    cout << info.numfields;
    product_db product[info.numfields];
    //addproduct(product, 0);
    //displayitem(product, 0);
    for (int i = 0; i <= info.numfields; i++){
        addproduct(product, i);
        displayitem(product[i]);
    }
    for (int i = 0; i <= info.numfields; i++){
        displayitem(product[i]);
    }
}

void addproduct(product_db product[], int i){
    cout << "The following questions conecern only product #" << (i+1) << endl;
    cout << "What is the short name of this particular product?" << endl;
    io(product[i].shortname);
    cout << "What is the url or store associated with this particular product?" << endl;
    io(product[i].url);
    cout << "What is the price of this particular product?" << endl;
    cin >> product[i].price;
    cin.ignore();
    cout << "How does this particular product meet or not meet your first criterion?" << endl;
    io(product[i].criterion1);
    cout << "How does this particular product meet or not meet your second criterion?" << endl;
    io(product[i].criterion2);
    cout << "How does this particular product meet or not meet your third criterion?" << endl;
    io(product[i].criterion3);
    cout << "This concludes questioning about producd #" << (i+1) << endl;
}

void displayitem (product_db product) {
    cout << "Name: " << product.shortname << endl;
    cout << "URL or store: " << product.url << endl;
    cout << "Name: " << product.price << endl;
    cout << "Price: " << product.price << endl;
    cout << "Criterion 1: " << product.criterion1 << endl;
    cout << "Criterion 2: " << product.criterion2 << endl;
    cout << "Criterion 3: " << product.criterion3  << endl;
}

void io (char field[]) {
    int size = sizeof(field);
    cin.get(field, size);
    cin.ignore(size, '\n');
}

void baseline(baseline_info& info){
    cout << "What kind of product are you looking for?" << endl;
    io(info.productname);
    cout << "What is your first criterion?" << endl;
    io(info.criterion1);
    cout << "What weight, on a 1 to 10 scale, do you put on this criterion?" << endl;
    cin >> info.weight1;
    cin.ignore();
    cout << "What is your second criterion?" << endl;
    io(info.criterion2);
    cout << "What weight, on a 1 to 10 scale, do you put on this criterion?" << endl;
    cin >> info.weight2;
    cin.ignore();
    cout << "What is your second criterion?" << endl;
    io(info.criterion3);
    cout << "What weight, on a 1 to 10 scale, do you put on this criterion?" << endl;
    cin >> info.weight3;
    cin.ignore();
    cout << "What is the maximum price you are willing to pay for your product?" << endl;
    cin >> info.maxprice;
    cin.ignore();
    cout << "How many items do you expect to get data for? " << endl;
    cin >> info.numfields;
    cin.ignore();
}





int selecttype(){
    int i;
    cout << "This program can produce three types of questions.\n";
    cout << "1. True or False" << endl;
    cout << "2. 4 response multiple choice" << endl;
    cout << "3. Short answer" << endl;
    cout << "At the prompt below, please enter the number corresponding to desired type." << endl;
    while (true) {

        cout << "Type: ";
        cin >> i;
        cin.ignore(100, '\n');
        if (i == 1)
            break;
        if (i == 2)
            break;
        if (i == 3)
            break;
        cout << "Please input a number from above" << endl;
    }
    cout << "made it" << endl;
    return i;
}

void magickarlafreecode(){
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout.setf(ios::showpoint);
}

void intro(){
    cout << "CS 162 Program 2" << endl;
    cout << "Prototype product comparator." << endl;
}
