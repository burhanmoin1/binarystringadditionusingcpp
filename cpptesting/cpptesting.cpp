#include <iostream>
#include <string>
#include <bitset>

using namespace std;  // Importing std namespace

int main() {
    // Binary strings
    string a = "11";  // 3 in decimal
    string b = "1";   // 1 in decimal

    // Convert binary strings to integers (base 2)
    int numA = stoi(a, nullptr, 2);
    int numB = stoi(b, nullptr, 2);

    // Sum the integers
    int sum = numA + numB;

    // Convert the sum back to a binary string
    // This can be done using a bitset for a fixed size
    // or by manually converting to a binary string
    string binarySum = bitset<8>(sum).to_string();  // 8-bit binary representation

    // Trim leading zeros for a clean binary output
    binarySum.erase(0, binarySum.find_first_not_of('0'));

    cout << "Binary sum: " << binarySum << endl;

    return 0;
}
