#include <iostream>
using namespace std;

int main() {
    // Define the constants town, highway mpg & the tank capacity.
    const double TOWN_MPG = 23.5;
    const double HIGHWAY_MPG = 28.9;
    const double GAS_TANK_SIZE = 20.0;

    // Calculate the distance the car can travel in town and on highway
    double townDistance = GAS_TANK_SIZE * TOWN_MPG;
    double highwayDistance = GAS_TANK_SIZE * HIGHWAY_MPG;

    // Display the results
    cout << "The car can travel " << townDistance << " miles on one tank of gas in town." << endl;
    cout << "The car can travel " << highwayDistance << " miles on one tank of gas on the highway." << endl;

    return 0;
}