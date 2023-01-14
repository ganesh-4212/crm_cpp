#include <iostream>
#include "Utils.h"
#include "User.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    time_t dateOfBirth = GetDate(1995,7,15);
    User user("Ganesh Poojary",dateOfBirth,"uppunda");
    std::cout << user.toString();
}
