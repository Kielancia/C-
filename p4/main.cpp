#include <iostream>

using namespace std;

int main()
{
    cout << "Hello in Frank's Carpet Cleaning Service" << endl;
    cout << "Number of small rooms: ";
    int numberOfSmallRooms{0};
    cin >> numberOfSmallRooms;
    cout << "Number of large rooms: ";
    int numberOfLargeRooms{0};
    cin >> numberOfLargeRooms;

    int smallRoomPrice {25};
    int largeRoomPrice {35};
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numberOfSmallRooms << endl;
    cout << "Number of large rooms: " << numberOfLargeRooms << endl;
    cout << "Price per small room: $" << smallRoomPrice << endl;
    cout << "Price per large room: $" << largeRoomPrice << endl;
    float cost = smallRoomPrice*numberOfSmallRooms + largeRoomPrice*numberOfLargeRooms;
    cout << "Cost: $" << cost << endl;
    float tax=cost*0.06;
    cout << "Tax: $" << tax << endl;
    cout << "=============================" << endl;
    cout << "Total estimate: $" << cost+tax << endl;
    int numberOfDays{30};
    cout << "This estimate is valid for " << numberOfDays << " days" << endl;
    return 0;
}
