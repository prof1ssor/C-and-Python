//C++

#include <iostream>
#include <string>

std::string coder(int &coderType, std::string& entery, int& shift) {
    std::string result = "";  // Holds the result after encoding/decoding

    for (char c : entery) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';  // Check if letter is lowercase or uppercase

            if (coderType == 1) {
                // Encoding: Shift forward
                result += (c - base + shift) % 26 + base;
            } else if (coderType == 2) {
                // Decoding: Shift backward
                result += (c - base - shift + 26) % 26 + base;
            } else {
                std::cout << "Invalid Input" << std::endl;
            }
        } else {
            // Non-alphabetic characters remain unchanged
            result += c;
        }
    }
    return result;  // Return the encoded/decoded result
}

int main() {
    int coderType, shift;
    std::string entery;

    std::cout << "Please enter 1 to Encode and 2 to Decode: ";
    std::cin >> coderType;

    std::cout << "Please enter what to code: ";
    std::cin >> entery;

    std::cout << "Please enter how many shifts you want: ";
    std::cin >> shift;

    // Call the coder function and store the result
    std::string result = coder(coderType, entery, shift);

    // Output the result
    std::cout << "The Coded value is: " << result << std::endl;

    return 0;
}


//PYTHON

alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

code = input("Type 1 to ENCODE and 2 to DECODE : ")
userInput = input("Write over here : ")
shiftSize = int(input("Enter shift number Password here : "))
coded = []

for char in userInput:
    if char in alphabet:
        index = alphabet.index(char)
        if code == "1":
            new_index = (index + shiftSize) % 26
        elif code == "2":
            new_index = (index - shiftSize) % 26
            
        coded.append(alphabet[new_index])
    else:
        coded.append(char)

result = ''.join(coded)
print(f"The result is : {result}")
