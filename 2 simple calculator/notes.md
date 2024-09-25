# Simple Calculator

## New Concepts

- `std::numeric_limits` - A library that provides the maximum and minimum values for a given type
- `std::stoi` - A function that converts a string to an integer (string to integer - s to i)
- `std::isdigit` - A function that checks if a character is a digit (0-9)
- `std::substr` - A function that returns a substring of a string (start_index, length)
- `std::pow` - A function that returns the power of a number (base, exponent)

## Notes

- Integer operations in c++ are slightly more complicated since we need to account for overflow and underflow
- We can use the `std::numeric_limits` library to get the maximum and minimum values for a given type

- Example
- ```c++
  #include <iostream>
  #include <limits>

  int main() {
      std::cout << "Maximum value for an int: " << std::numeric_limits<int>::max() << std::endl;
      std::cout << "Minimum value for an int: " << std::numeric_limits<int>::min() << std::endl;
      return 0;
  }
  ```

- Output
- ```
  Maximum value for an int: 2147483647
  Minimum value for an int: -2147483648
  ```
