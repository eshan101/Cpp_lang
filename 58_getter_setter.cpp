#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Stove{
    private:
        int temperature = 0;
    public:
        int getTemperature(){
            //getter
            return temperature;
        }

    void setTemperature(int temperature){
        //setter
        if (temperature < 0){
        this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

int main()
{
    /*
    Abstraction = hiding unncessary data from outside a class
    getter = function that makes a private attribute READABLE
    setter = function that makes a private attribute WRITABLE
    */
   Stove stove;
   stove.setTemperature(10000);
   cout<<"Temperature is : "<<stove.getTemperature();

    return 0;
}