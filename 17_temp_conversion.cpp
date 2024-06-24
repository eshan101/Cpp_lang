#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main(){
    double temp;
    char unit;
    cout<<"***** Temperature Conversion *****\n";
    cout << "F = Farenheit\n";
    cout << "C = Celcius\n";
    cout<<"What unit would u like to convert to : \n";
    cin>>unit;

    if(unit == 'F' || unit == 'f'){
        cout<< "Enter the temp in Celcius : ";
        cin>> temp;

        temp = (1.8 * temp) + 32;
        cout<<"temperature is : "<< temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        cout<< "Enter the temp in Farenheit : ";
        cin>> temp;

        temp = (temp - 32) / 1.8;
        cout<<"temperature is : "<< temp << "C\n";

    }
    else{
        cout<<"Please enter only C or F\n";
    }

 return 0;
}