

#include "header.h"

int main() {
    const int INITIAL_CAPACITY = 100; // 100 from file
    int maxSize = INITIAL_CAPACITY;
    int* data = new int[maxSize];  // Dynamically allocated

    int size = readFileToArray("A1input.txt", data, maxSize);

    if (size > 0) {
        cout << "Data read from file:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    int choice;
	//Main menu loop
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Check if an integer exists in the array" << endl;
        cout << "2. Update value at index" << endl;
        cout << "3. Add a new integer to the array" << endl;
		cout << "4. Remove an integer from the array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            bool exists = false;
            int target;
            cout << "Enter integer to search for: ";
            cin >> target;
            integerExists(data, size, target, exists);
            cout << (exists ? "Integer exists." : "Integer does not exist.") << endl;
            break;
        }
        case 2: {
            updateValueAtIndex(data, size);
            break;
        }
        case 3: {
            newInteger(data, size, maxSize);  // Will resize if full
            break;  //  Added break here
        }
        case 4: {
			removeInteger(data, size);  // Function to remove an integer
        }
    
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);  // Correct exit condition

    delete[] data;  // Clean up memory
    return 0;
}