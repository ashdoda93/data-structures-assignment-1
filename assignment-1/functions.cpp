#include "functions.h"
//reads file and stores integers in array
int readFileToArray(const string& filename, int arr[], int maxSize) {
    ifstream inFile(filename);
    int value, count = 0;

    if (!inFile) {
        cerr << "Error: Could not open file." << endl;
        return -1;
    }

    while (inFile >> value && count < maxSize) {
        arr[count++] = value;
    }

    inFile.close();
    return count;
}
//checks if integer exists in array
void integerExists(const int arr[], int size, int value, bool& exists) {
	exists = false; // Initialize exists to false
	
	cout << "Enter an integer to check if it exists in the array: ";
	cin >> value; // Read the integer to check
	for (int i = 0; i < size; ++i) {
		if (arr[i] == value) {
			exists = true; // Set exists to true if value is found
			cout << "Integer exists in the array at index: " << i << endl;
			return;
		}
		
	}
	
}
//updates value at specified index
void updateValueAtIndex(int arr[], int size) {
    string indexStr, newValueStr;
    int index, newValue;

    cout << "Enter the index to update: ";
    cin >> indexStr;
    try {
        index = stoi(indexStr);
    }
    catch (const invalid_argument&) {
        cout << "Error: Invalid index input. Please enter a valid integer." << endl;
        return;
    }
    catch (const out_of_range&) {
        cout << "Error: Index input is out of range for type int." << endl;
        return;
    }
    cout << "Enter the new value: ";
    cin >> newValueStr;
    try {
            long long temp = stoll(newValueStr);
            if (temp < numeric_limits<int>::min() || temp > numeric_limits<int>::max()) {
                throw out_of_range("New value is outside the range of int.");
            }
            newValue = static_cast<int>(temp);
        }
        catch (const invalid_argument&) {
            cout << "Error: Invalid new value input. Please enter a valid integer." << endl;
            return;
        }
        catch (const out_of_range& e) {
            cout << "Error: " << e.what() << endl;
            return;
        }

    if (index >= 0 && index < size) {
        
        int oldValue = arr[index];
        arr[index] = newValue;
        cout << "Value (" << oldValue << ") at index " << index << " updated to " << newValue << "." << endl;
    }
    else {
        cout << "Error: Index out of bounds." << endl;
    }

    cout << "Current array contents: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//adds new integer to array, resizes if necessary
void newInteger(int*& arr, int& size, int& max) {
   int newValue;  
   string newValueStr;
   cout << "Enter a new integer to add to the array: ";  
   cin >> newValueStr; 
   try {
	   long long temp = stoll(newValueStr);
	   if (temp < numeric_limits<int>::min() || temp > numeric_limits<int>::max()) {
		   throw out_of_range("New value is outside the range of int.");
	   }
	   newValue = static_cast<int>(temp);
   }
   catch (const invalid_argument&) {
	   cout << "Error: Invalid new value input. Please enter a valid integer." << endl;
	   return;
   }
   catch (const out_of_range& e) {
	   cout << "Error: " << e.what() << endl;
	   return;
   }

   if (size < max) { // Check if the current size is within the maximum allowed size  
       arr[size++] = newValue; // Add the new integer and increment size  
       cout << "New integer added successfully." << endl;  
	   cout << "Current array contents: ";
	   for (int i = 0; i < size; ++i) { // Print current array contents
		   cout << arr[i] << " ";
	   }
	   cout << endl;
   } else {  
       int newSize = max * 2; // Double the size of the array  
       int* newArr = new int[newSize]; // Create a new array with the new size  

       for (int i = 0; i < size; ++i) {  
           newArr[i] = arr[i]; // Copy old values to the new array  
       }  

       delete[] arr; // Free the old array memory  
       arr = newArr; // Point arr to the new array  

	   //add the new integer to the end of the  new array
	   arr[size++] = newValue; 
       cout << "New integer added successfully." << endl; 
	   cout << "Array resized to " << newSize << " integers." << endl;
	   for (int i = 0; i < size; ++i) {
		   cout << arr[i] << " ";
	   }
   }  
}
//removes specified integer from array
void removeInteger(int*& arr, int& size) {
	bool found = false;
	int value;
	cout << "Enter an integer to remove from the array: ";
	cin >> value; // Read the integer to remove
	for (int i = 0; i < size; ++i) {
		if (arr[i] == value) {
			found = true;
			// Shift elements to the left
			for (int j = i; j < size - 1; ++j) {
				arr[j] = arr[j + 1];
			}
			--size; // Decrease size
			cout << "Integer " << value << " removed from the array." << endl;
			cout << "Current array contents: ";
			for (int k = 0; k < size; ++k) { // Print current array contents
				cout << arr[k] << " ";
			}
			break;
		}
	}
	if (!found) {
		cout << "Integer " << value << " not found in the array." << endl;
		cout << "Current array contents: ";
		for (int k = 0; k < size; ++k) { // Print current array contents
			cout << arr[k] << " ";
		}
	}
}