#include <iostream>
using std::cin;
using std::cout;
using std::string;



struct car{
    string model;
    int year;
    string colour;
};
void paintCar(car &car, string colour);
void printCar(car car);

int main()
{
    car car1;
    car car2;

    car1.model = "Mustang";
    car1.year = 2004;
    car1.colour = "yellow";
    
    car2.model = "Ferrari";
    car2.year = 2001;
    car2.colour = "red";

    paintCar(car1, "Silver");
    printCar(car1);

    return 0;
}

void printCar(car car){
    cout<<car.model<<'\n';
    cout<<car.year<<'\n';
    cout<<car.colour<<'\n';
}

void paintCar(car &car, string colour){
    car.colour = colour;
}