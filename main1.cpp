
#include <iostream>
#include <string>


int new_variant(int number_variant, std::string student_surname);

int main() {
    int number_variant;
    
    std::cin >> number_variant;

    std::string student_surname;
    std::cin >> student_surname;

    int final_variant = new_variant(number_variant, student_surname);

    std::cout << final_variant;

    return 0;
}

int new_variant(int number_variant, std::string student_surname) {
    return student_surname[0] % number_variant + 1;
}
