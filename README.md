# AI-Powered Bug Explanation Generator

A simple C++ command-line tool that reads compiler or runtime error messages and provides beginner-friendly explanations along with suggested fixes. This helps new developers better understand confusing error messages and debug their code faster.

---

## Features

- Supports common C++ compiler errors (e.g., GCC, Clang)
- Rule-based matching of error messages to explanations
- Beginner-friendly explanations and actionable suggestions
- Handles multi-line error input via console
- Easily extensible knowledge base of error patterns and fixes

---

## Getting Started

### Prerequisites

- A C++ compiler such as `g++` or `clang++`
- Basic command-line knowledge

### Installation

1. Clone this repository:

```bash
git clone https://github.com/your-username/bug-explanation-generator.git
cd bug-explanation-generator
Compile the source code:

bash
Copy
Edit
g++ -o bug_explainer bug_explainer.cpp
Usage
Run the executable:

bash
Copy
Edit
./bug_explainer
Paste one or more compiler/runtime error messages into the console, then enter an empty line to get explanations and fix suggestions.

Example input:

go
Copy
Edit
main.cpp:10:5: error: expected ';' before '}' token
main.cpp:15:10: error: undeclared identifier 'myVar'
Example output:

pgsql
Copy
Edit
Error: main.cpp:10:5: error: expected ';' before '}' token
Explanation: You missed a semicolon ';' before the closing brace '}'.
Suggestion: Add a semicolon at the end of the previous statement.
-----------------------------
Error: main.cpp:15:10: error: undeclared identifier 'myVar'
Explanation: You used a variable or function that has not been declared.
Suggestion: Declare the variable or function before using it, and check for typos.
-----------------------------
How It Works
The program reads input lines representing compiler or runtime errors.

It matches the input against a set of known error patterns stored in a dictionary.

If a match is found, it outputs a clear explanation and a suggested fix.

If no match is found, it outputs a generic help message.

Extending the Project
Add more error patterns and explanations in the errorDatabase map in bug_explainer.cpp.

Improve pattern matching using regular expressions or fuzzy matching.

Integrate AI APIs (e.g., OpenAI GPT) for dynamic explanations.

Create a graphical interface or IDE plugin.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Contact
Created by Your Name — feel free to open issues or submit pull requests!

yaml
Copy
Edit

---

Would you like me to help you generate the full folder structure, a `LICENSE` file, or any other docs for your repo?
