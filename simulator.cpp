#include <iostream>
#include <set>
#include <algorithm>
#include <string>


using namespace std;

const int MAX_PEOPLE_PER_ELEVATOR = 10;

class Person {
    public:
        Person(int);
        int getDestination();
    private: 
        int destination;
};

class Elevator {
    public:
        Elevator();
        void addDestination(Person);
        void removeDestination(Person);
        void display();
        void setDirection(bool direction);
        int getCurrFloor();
        set<int> getDestinations();
    private:
        int currFloor;
        int currNumPeople;
        bool isGoingUp;
        string name;
        set<int> destinations;   
};

int main () {
    Person Konner(9);
    Person Austin(1);

    Elevator elevator;
    elevator.addDestination(Konner);
    elevator.addDestination(Austin);

    elevator.display();

    return 0;
};

// implementation for class person
Person::Person (int destination){
    destination = this->destination;
};
int Person::getDestination () {
    return destination;
}

void Elevator::display() {
    
}
// elevator methods
void Elevator::addDestination (Person person) {
    currNumPeople++;
    destinations.insert(person.getDestination());
}
void Elevator::setDirection(bool direction) {
    isGoingUp = direction;
}
void Elevator::removeDestination (Person person) {
    destinations.erase(person.getDestination());
}
