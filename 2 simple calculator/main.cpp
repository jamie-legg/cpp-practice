// This is a simple calculator that performs addition, subtraction, multiplication, and division
// It takes two numbers and an operator as input and outputs the result

// We will need iostream for input and output

#include <iostream>
#include <string>

// Pretty much every C++ program will need to include iostream, as well as have a main function

int main()
{
    std::string commandInput;

    std::cin >> commandInput;

    int opIndex = -1;

    // To validate the input, we need the format [number] [operator] [number]
    // to do this, we'll get the operator and then check if the preceding substring is a number, and the following substring is a number

    // We'll need to check if the operator is valid, and if the numbers are valid

    char op;
    // go through the string and find the operator
    for (int i=0; i<commandInput.length(); i++) {
        if(commandInput[i] == '+' || commandInput[i] == '-' || commandInput[i] == '*' || commandInput[i] == '/' || commandInput[i] == '%' || commandInput[i] == '^' || commandInput[i]== 'x') {
            op = commandInput[i];
            opIndex = i;
            break;
        }
    }

    if(opIndex == -1) {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    // Now we need to get the two numbers
    std::string num1 = commandInput.substr(0, opIndex);
    std::string num2 = commandInput.substr(opIndex + 1, commandInput.length());

    // Check if the numbers
    if(num1.empty() || num2.empty()) {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    // Check if the numbers are valid
    for(int i=0; i<num1.length(); i++) {
        if(!isdigit(num1[i])) {
            std::cout << "Invalid input" << std::endl;
            return 0;
        }
    }

    for(int i=0; i<num2.length(); i++) {
        if(!isdigit(num2[i])) {
            std::cout << "Invalid input" << std::endl;
            return 0;
        }
    }

    // Now we can perform the operation
    int num1Int = std::stoi(num1);
    int num2Int = std::stoi(num2);

    int result;

    switch(op) {
        case '+':
            result = num1Int + num2Int;
            break;
        case '-':
            result = num1Int - num2Int;
            break;
        case '*':
        case 'x':
            result = num1Int * num2Int;
            break;
        case '/':
            result = num1Int / num2Int;
            break;
        case '%':
            result = num1Int % num2Int;
            break;
        case '^':
            result = pow(num1Int, num2Int);
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            return 0;
    }

    std::cout << result << std::endl;

    return 0;

}
