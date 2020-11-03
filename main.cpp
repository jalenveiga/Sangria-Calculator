#include <iostream>
#include <string>
#include <iomanip>

int main() {
// VARIABLES AND CONSTANTS
    std::string wine = "";
    const double defaultServings =6.0;
    double apples= 2.0;
    double oranges= 1.0;
    int brandy= 60;
    int OJ = 120;
    int qty= 750;
    int servings =0;


// INPUT
    std::cout << "Enter your favorite type of red wine: ";
    std::cin >> wine;
    std::cout << std::endl;

    std::cout << "How many servings do you need? ";
    std::cin >> servings;
    std::cout << std::endl;

// PROCESSING
    apples *= servings / defaultServings;
    oranges *= servings / defaultServings;
    brandy *= servings / defaultServings;
    OJ *= servings / defaultServings;
    qty *= servings / defaultServings;

//OUTPUT
    // std::cout << "1234567890123456789012345678901234567890\n";
    std::cout << std::left
              << std::setw(15) << "Sangria recipe using " << wine << " for " << servings << " servings: \n"
              << std::setw(15) << "Wine (ml): "
              << std::right
              << std::setw(7)  << qty
              << std::setw(15) << "\nOJ (ml):       "
              << std::setw(7)  << OJ
              << std::setw(15) << "\nBrandy (ml):   "
              << std::setw(7)  << brandy
              << std::setw(15) << "\nOrange (cups): "
              << std::fixed << std::setprecision(2)
              << std::setw(7)  <<  oranges
              << std::setw(15) << "\nApples (cups): "
              << std::setw(7)  << apples
              << std::fixed << std::setprecision(2);


    return 0;
}