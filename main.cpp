#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

// A struct to hold explanation and fix suggestion
struct Explanation {
    std::string explanation;
    std::string fixSuggestion;
};

// Our knowledge base of common errors and their explanations + fixes
std::map<std::string, Explanation> errorDatabase = {
    {
        "expected ';' before '}' token",
        {
            "You missed a semicolon ';' before the closing brace '}'.",
            "Add a semicolon at the end of the previous statement."
        }
    },
    {
        "undeclared identifier",
        {
            "You used a variable or function that has not been declared.",
            "Declare the variable or function before using it, and check for typos."
        }
    },
    {
        "cannot convert",
        {
            "There is a type mismatch between variables or expressions.",
            "Check variable types and use explicit casts if needed."
        }
    },
    {
        "redefinition of",
        {
            "You have defined the same variable, function, or class more than once.",
            "Remove or rename duplicate definitions."
        }
    },
    {
        "expected primary-expression before",
        {
            "The compiler expected an expression but found something else.",
            "Check syntax around the indicated location, such as missing operators or incorrect syntax."
        }
    },
    {
        "invalid conversion from",
        {
            "You are trying to convert between incompatible types.",
            "Make sure types match or use proper casting."
        }
    },
    {
        "no matching function for call to",
        {
            "You are calling a function with arguments that do not match any available function signature.",
            "Check the function name and argument types."
        }
    },
    {
        "segmentation fault",
        {
            "Your program tried to access invalid memory (segmentation fault).",
            "Check pointers and array indices; ensure they are valid before accessing."
        }
    }
};

// Function to find the best explanation for the error message
Explanation findExplanation(const std::string& errorMsg) {
    for (const auto& pair : errorDatabase) {
        if (errorMsg.find(pair.first) != std::string::npos) {
            return pair.second;
        }
    }
    return {
        "Sorry, no detailed explanation is available for this error.",
        "Try to search the error message online or check your code carefully."
    };
}

// Main program entry point
int main() {
    std::cout << "=== AI-Powered Bug Explanation Generator ===\n";
    std::cout << "Paste your compiler/runtime error messages below.\n";
    std::cout << "Enter an empty line to process the input.\n\n";

    // Read multiline input until empty line
    std::vector<std::string> errorMessages;
    std::string line;
    while (true) {
        std::getline(std::cin, line);
        if (line.empty()) break;
        errorMessages.push_back(line);
    }

    // Process each error message
    std::cout << "\n--- Explanation Results ---\n\n";
    for (const auto& err : errorMessages) {
        std::cout << "Error: " << err << "\n";
        Explanation exp = findExplanation(err);
        std::cout << "Explanation: " << exp.explanation << "\n";
        std::cout << "Suggestion: " << exp.fixSuggestion << "\n";
        std::cout << "-----------------------------\n";
    }

    std::cout << "Thank you for using the Bug Explanation Generator!\n";
    return 0;
}

