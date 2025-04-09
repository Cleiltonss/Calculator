#include <iostream> 
#include <algorithm>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;


// Operation
class Calculator {
    public:
        double number1, number2;
        string operation;

        // Add function
        string calculate() {
            stringstream result;
            
            if (operation == "SUM" || operation == "+") {
                result << "\n" << number1 << " + " << number2 << " = " << number1 + number2 << "\n";
            } else if (operation == "SUBTRACT" || operation == "-") {
                result << "\n" << number1 << " - " << number2 << " = " << number1 - number2 << "\n";
            } else if (operation == "MULTIPLY" || operation == "*") {
                result << "\n" << number1 << " * " << number2 << " = " << number1 * number2 << "\n";
            } else if (operation == "DIVIDE" || operation == "/") {
                if (number2 == 0) {
                    result << "\nIt is not possible to divide by 0. Sorry!\n";
                } else {
                    result << "\n" << number1 << " / " << number2 << " = " << number1 / number2 << "\n";
                }
            } else {
                result << "\n" << "Try again!";
            }

            return result.str();
        }
};


// Convert to upper text
string upper(string text) {
    transform(text.begin(), text.end(), text.begin(), [](unsigned char c){ return std::toupper(c); });
    return text;
}



int main() {
    // History of operations
    vector<string> history;

    int option = 1; 
    while (option > 0 && option < 3) {


        // Menu
        cout << "\n\033[1;34m================ CALCULATOR MENU ================\033[0m\n";
        cout << "1. Perform a calculation\n" << "2. View history\n" << "0. Exit\n" << "Select an option: ";
        cin >> option;

        // cout << "\nWant calculate something? [Y/N]\n";
        // cin >> wantContinue; 
        // wantContinue = upper(wantContinue);
        // if ( wantContinue != "Y") {
        //     break;
        // }

        
        Calculator operationN;

        // Calculate
        if (option == 1) {
            cout << "\ndefine the first number: ";
            cin >> operationN.number1;

            cout << "\ndefine the second number: ";
            cin >> operationN.number2;

            cout << "\ndefine the operation: ";
            cin >> operationN.operation;
            operationN.operation = upper(operationN.operation);

            string result = operationN.calculate();  
            cout << result;

            // Add the result to the history of operations
            history.push_back(result);

        } else if (option == 2) {
            // Show history of calculator
            cout << "\n\033[1;35m================ CALCULATOR HISTORY ================\033[0m\n";
            for(string each_operation: history) {cout << each_operation;};

            if (history.empty() == true) {
                cout << "\nThere is no operation yet!\n\n";
            }

            

        } else if (option == 0) {

            // Create and open a text file
            ofstream file("Calculator_History.txt");

            // Put every operation in the file
            if (file.is_open()) {
                file << "Calculator_History:\n\n";
                
                int count = 1; // Number of the operation
                for (const string& operation : history) {
                    file << count++ << ". " << operation;
                }

                file << "\nEnd.\n";
                file.close();
                cout << "\033[1;32m\nHistory saved to 'Calculator_History.txt'\033[0m\n";

            } else {
                cout << "\nCould not save history to file.\n";
            }


            // Exit the calculator
            cout << "\nBye Bye, see you next time!\n";
            break;
        }
          
        
    }

    
    cout << "\n";
    return 0;
}