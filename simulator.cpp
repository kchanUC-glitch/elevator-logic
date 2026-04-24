#include <iostream>


using namespace std;

const int MAX_PEOPLE_PER_ELEVATOR = 10;

class person {
    public:
        person(int);

    private: 
        int destination;
        int getDestination();
};

int main () {

    return 0;
};

// implementation for class person
person::person (int destination){
    destination = this->destination;
};
int person::getDestination () {
    return destination;
};