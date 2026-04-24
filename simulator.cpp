#include <iostream>
#include <vector>
#include <string>


using namespace std;

const int MAX_PEOPLE_PER_ELEVATOR = 10;

class Person {
    public:
        Person(int);

    private: 
        int destination;
        int getDestination();
};

class Elevator {
    public:
        Elevator();
        void addDestination(Person);
        void display();
        int getCurrFloor();
        vector<int> getDestinations();
    private:
        int currFloor;
        string name;
        int currNumPeople;
        vector<int> destinations;   
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