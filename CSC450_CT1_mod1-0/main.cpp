//CT1: Assignment #1
// Created by jt on 1/20/2024.
//
#include <iostream>
#include <string>


using namespace std;

int main() {
    const string person[5] = {"Gwen", "Stacy", "1234 Liberty Way", "New York City", "12345"};
    for (const string& i: person) {
        cout << i << endl;
    }
    return 0;
}
