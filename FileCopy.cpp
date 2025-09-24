#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string srcFile, destFile;
    cout << "Enter source file name: ";
    cin >> srcFile;
    cout << "Enter destination file name: ";
    cin >> destFile;

    ifstream src(srcFile, ios::binary);
    ofstream dest(destFile, ios::binary);

    if (!src) {
        cout << "Source file not found!" << endl;
        return 1;
    }

    dest << src.rdbuf();

    cout << "File copied successfully." << endl;

    src.close();
    dest.close();
    return 0;
}
