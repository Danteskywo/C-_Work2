#include <iostream>
#include <string>

void chargeByCopy(int battery)
{
    battery += 10;
    std::cout << "Copy inside function: " << battery << "%\n";
}
void chargeByReference(int& battery)
{
    battery += 10;
    std::cout << "Reference inside function:" << battery << "%\n";
}
int main()
{
    int rover{70};
    int scout{40};
    chargeByCopy(rover);
    chargeByReference(scout);

    std::cout << "Rover after copy charge:" << rover << "%\n";
    std::cout << "Scout after reference charge:" << scout << "%\n";
    return 0;
}

