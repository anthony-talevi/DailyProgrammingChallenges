// Convert string to integer value based on the following table
// 'a' = 1
// 'b' = 2
// 'c' = 4
// ...
// 'z' = 27


#include <iostream>
//#include <string>

int main() {
    while(true)
    {
        std::string tovalue;
        int value = 0;
        std::cout << "Enter a series of unseparated characters:";
        std::cin >> tovalue;
        
        if(tovalue == "quit")
        {
            return 0;
        }
        
        for(int i = 0; i<tovalue.length(); i++)
        {
        // convert the char at position i to its ASCII int value, then subtract 96 to get to zero the values with 'a' being equal to 1
            value += (int)tovalue[i] - 96;
        
        }
        std::cout << "The total value of the word is: " << value << "\n";
    }
}
