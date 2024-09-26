#include <iostream>

int main() {
    // The rate the ocean will rise.
    const double riseRate = 1.5;

    // How many X years it will have risen by.
    double riseIn5Years = riseRate * 5;
    double riseIn7Years = riseRate * 7;
    double riseIn10Years = riseRate * 10;

    // Displaying how much is will have risen by.
    std::cout << "The ocean's level will be " << riseIn5Years << " millimeters higher in 5 years." << std::endl;
    std::cout << "The ocean's level will be " << riseIn7Years << " millimeters higher in 7 years." << std::endl;
    std::cout << "The ocean's level will be " << riseIn10Years << " millimeters higher in 10 years." << std::endl;
}