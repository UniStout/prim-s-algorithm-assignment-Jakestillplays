#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Input file example:
// ------------------
// 3 (vertices/V)
// 3 (edges/E)
// 0 1 4 (0 = current node, 1 = connected node, 4 = weight)
// 1 2 5
// 0 2 6
// ------------------

std::ifstream inputFile("Input.txt");
if (!inputFile) {
    std::cerr << "Error: Unable to open the file." << std::endl;
    // Handle error (e.g., exit the program)
    return 1;
}
