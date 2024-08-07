// Function to return the integer value of a Roman numeral symbol
int value(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

// Function to convert a Roman numeral string to an integer
int romanToInt(char* s) {
    int total = 0;
    int prevValue = 0;

    // Loop through the string until the end
    while (*s) {
        int currentValue = value(*s);

        // If the current value is greater than the previous value, subtract twice the previous value
        if (currentValue > prevValue) {
            total += currentValue - 2 * prevValue;
        } else {
            total += currentValue;
        }

        prevValue = currentValue;
        s++; // Move to the next character
    }

    return total;
}
