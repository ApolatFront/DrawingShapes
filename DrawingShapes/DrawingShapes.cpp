#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;

    cout << "Give the height for your shape: ";
    cin >> height;
    cout << "Give the width for your shape: ";
    cin >> width;

    cout << "Width: " << width << " Height: " << height << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
