#include <string>
using namespace std;
class User
{
private:
    string name;
    time_t dateOfBirth;
    string address;

public:
    User(string name, time_t dateOfBirth, string address);
    string getName();
    string getAddress();
    time_t getDateOfBirth();
    string toString();
};