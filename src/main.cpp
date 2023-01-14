#include <iostream>
#include "Utils.h"
#include "User.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    time_t dateOfBirth = GetDate(1995,7,15);
    time_t &ref = dateOfBirth;
    printf("%p\n",&ref);
    printf("%s",DateToString(dateOfBirth).c_str());
    // User user("Ganesh Poojary",dateOfBirth,"uppunda");
    // std::cout << user.toString();
}
