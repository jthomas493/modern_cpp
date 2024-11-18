#include <iostream>
#include "math.h"

int main()
{
    int x, y;
    using namespace std;
    // std::cout << "Hello World" << endl
    //           << endl;
    std::cout << "What do you want to add?\n";
    std::cin >> x >> y;
    int result = Add(x, y);
    std::cout << "Your equation is:\n"
              << x << " + " << y << " = " << result << std::endl;
    // return result;
}