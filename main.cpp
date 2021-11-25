#include <iostream>
#include "factorial.h"
#include "is_prime.h"
#include "text_parser.h"

int main() {
    int number = 4;
    std::cout << "4! = " << factorial(number) << std::endl;
    if (isPrime(number)) {
        std::cout << "4 is prime" << std::endl;
    } else {
        std::cout << "4 is not prime" << std::endl;
    }
    std::string text = "Hello World!";
    TextParser parser(text);
    parser.parseText();
    std::cout << "Word count in text '" << text << "': " << parser.getWordCount() << std::endl;

    return 0;
}
