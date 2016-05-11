#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Your code here
    ofstream test_file;
    test_file.open("result.txt");
    test_file << "2333";
    test_file.close();
    return 0;
}