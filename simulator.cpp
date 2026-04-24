#include <iostream>


using namespace std;

const int MAX_PEOPLE_PER_ELEVATOR = 10;

class Person {
    public:
        Person(int);

    private: 
        int destination;
        int getDestination();
};

int main () {

    return 0;
};

// implementation for class person
Person::Person (int destination){
    destination = this->destination;
};
int Person::getDestination () {
    return destination;
};