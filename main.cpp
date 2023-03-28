// Section 6
// Challenge

/*
 * Amadou's Carpet Cleaning Service
 * Charges: 
 * $25 per small room
 * $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small and large rooms they would like cleaned
 * and provide an estimate as such as:
 * 
 * Estimate for carpet cleaning service
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * =============================================================
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 */

#include <iostream>

using namespace std;

int main () {
    
    
    cout << "Hello, welcome to Amadou's Carpet Cleaning Services" << endl;
    
    int small_rooms {0};
    cout << "\nEnter the number of small rooms you would like cleaned: ";
    cin >> small_rooms;
    
    int large_rooms {0};
    cout << "\nEnter the number of large rooms you would like cleaned: ";
    cin >> large_rooms;
    
    
    const double price_small_room {25.0};
    const double price_large_room {35.0};
    
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\n Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    
    cout << "Cost: $" << (small_rooms * price_small_room) + (large_rooms * price_large_room) << endl;
    cout << "Tax: $" << ((small_rooms * price_small_room) + (large_rooms * price_large_room))
    * sales_tax << endl;
    
    cout << "================================================================" << endl;
    cout << "Total Estimate: $" << ((small_rooms * price_small_room) 
    + (large_rooms * price_large_room)) * sales_tax + ((small_rooms * price_small_room) +
      (large_rooms * price_large_room)) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl << endl;
    

    
    return 0;
}