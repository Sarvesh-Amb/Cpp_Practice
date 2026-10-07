#include <iostream>

// Recursive function to find and print numbers of a specific length
void findCombinations(int digits[], int numDigits, int maxRange, long long currentNum, int currentLength, int targetLength) {
    // Base Case: If the number has reached the targeted length, print it
    if (currentLength == targetLength) {
        if (currentNum <= maxRange) {
            std::cout << currentNum << " ";
        }
        return;
    }

    // Loop through each available digit to build the next step of the number
    for (int i = 0; i < numDigits; ++i) {
        // Avoid leading zeros for numbers longer than 1 digit
        if (currentNum == 0 && digits[i] == 0 && targetLength > 1) {
            continue; 
        }

        long long nextNum = currentNum * 10 + digits[i];

        // Only dive deeper if the newly formed number is within the range limit
        if (nextNum <= maxRange) {
            findCombinations(digits, numDigits, maxRange, ne`xtNum, currentLength + 1, targetLength);
        }
    }
}

int main() {
    int maxRange;
    int numDigits;

    std::cout << "Enter maximum range limit (e.g., 1000): ";
    std::cin >> maxRange;

    std::cout << "Enter number of digits to use (e.g., 2): ";
    std::cin >> numDigits;

    // Use a standard fixed-size array instead of std::vector
    int digits[10]; 
    std::cout << "Enter the " << numDigits << " digits separated by spaces: ";
    for (int i = 0; i < numDigits; ++i) {
        std::cin >> digits[i];
    }

    std::cout << "\n--- Generating Output ---\n";

    // Loop through lengths: 1-digit numbers, 2-digit numbers, 3-digit numbers...
    // The loop stops when a length yields no valid numbers under the range limit
    for (int length = 1; length <= 10; ++length) {
        findCombinations(digits, numDigits, maxRange, 0, 0, length);
        
        // Print a new line after finishing all numbers of the current length
        std::cout << "\n";
    }

    return 0;
}
