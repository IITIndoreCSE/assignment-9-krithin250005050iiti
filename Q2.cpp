
#include <iostream>
using namespace std;

// Define the structure 'Color'
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Declare and initialize an array of 5 'Color' structures
    Color colors[5] = {
        {120, 60, 200},
        {45, 220, 130},
        {255, 100, 0},
        {10, 10, 10},
        {200, 180, 90}
    };

    // Invert the color values of the first 3 elements
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    // Display the new RGB values for all 5 elements
    cout << "New RGB values after inversion:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << ": "
             << "R=" << colors[i].red << ", "
             << "G=" << colors[i].green << ", "
             << "B=" << colors[i].blue << endl;
    }

    return 0;
}
	
