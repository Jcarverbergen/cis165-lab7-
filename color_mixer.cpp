#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

const int COLOR_SIZE = 20;

int main() {
    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];
    const char* result = nullptr;

    cout << "Enter the first primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> first_color;

    cout << "Enter the second primary color (red, blue, yellow): ";
    cin >> setw(COLOR_SIZE) >> second_color;

    bool first_valid =
        strcmp(first_color, "red") == 0 ||
        strcmp(first_color, "blue") == 0 ||
        strcmp(first_color, "yellow") == 0;

    bool second_valid =
        strcmp(second_color, "red") == 0 ||
        strcmp(second_color, "blue") == 0 ||
        strcmp(second_color, "yellow") == 0;

    if (!first_valid || !second_valid) {
        cout << "Error: enter red, blue, or yellow." << endl;
        return 1;
    }

    if (strcmp(first_color, second_color) == 0) {
        result = first_color;
    } else if (
        (strcmp(first_color, "red") == 0 &&
         strcmp(second_color, "blue") == 0) ||
        (strcmp(first_color, "blue") == 0 &&
         strcmp(second_color, "red") == 0)) {
        result = "purple";
    } else if (
        (strcmp(first_color, "red") == 0 &&
         strcmp(second_color, "yellow") == 0) ||
        (strcmp(first_color, "yellow") == 0 &&
         strcmp(second_color, "red") == 0)) {
        result = "orange";
    } else {
        result = "green";
    }

    cout << "Resulting color: " << result << endl;

    return 0;
}
