// This program runs the 3x+1 problem.

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    for (int x = 4; x < 10; x++) {
        int a = x;
        while (a > 1) {

            //if even
            if (a % 2 == 0) {

                std::cout << a << " / 2 = " << a / 2 << "\n";
                a = a / 2;
            }
            if (a == 1) { break; }
            //if odd
            if (a % 2 != 0) {

                std::cout << a << " * 3 + 1 = " << a * 3 + 1 << "\n";
                a = 3 * a + 1;
            }
        }
            
        std::cout << ("x is now completed.\n\n");
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
