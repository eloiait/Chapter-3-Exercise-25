#include <iostream>

int main() {
    // Variable declarations
    double rowLength;          // R: Length of the row in feet
    double endPostSpace;       // E: Space used by an end-post assembly in feet
    double vineSpace;          // S: Space between vines in feet
    int numVines;              // V: Number of grapevines (whole number)

    // Input prompts
    std::cout << "Enter the length of the row (in feet): ";
    std::cin >> rowLength;

    std::cout << "Enter the amount of space used by an end-post assembly (in feet): ";
    std::cin >> endPostSpace;

    std::cout << "Enter the amount of space between vines (in feet): ";
    std::cin >> vineSpace;

    // Calculate the number of grapevines that fit in the row
    // Using integer division / casting to fit whole grapevines (truncates decimal part)
    numVines = static_cast<int>((rowLength - 2 * endPostSpace) / vineSpace);

    // Display the result
    std::cout << "\nThe number of grapevines that will fit in the row is: "
        << numVines << std::endl;

    return 0;
}