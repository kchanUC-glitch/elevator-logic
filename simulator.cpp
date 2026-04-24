#include <iostream>
#include <vector>
#include <string>


using namespace std;

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
}