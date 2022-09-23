//  main.cpp
//  assignment1
#include <iostream>
#include <queue>
using namespace std;
#include "Header.h"

int main()
{
    double highest;
    
    Road roadA('A', 200);
    Road roadB('B', 80);
    Road roadC('C', 100);
    
    
    Car car1("BMW",110,2018);
    car1.set_type("Private");
    car1.set_plate("ALS197");
    Car car2;
    car2.set_type("Truck");
    car2.set_plate("CAL902");
    car2.set_brand("Toyota");
    car2.set_speed(100);
    car2.set_year_model(2015);
    Car car3("KIA", 170, 2020);
    car3.set_type("Private");
    car3.set_plate("MAR246");
    Car car4;
    car4.set_type("Bus");
    car4.set_plate("LAS367");
    car4.set_brand("hyundai");
    car4.set_speed(80);
    car4.set_year_model(1993);
    Car car5("Yamaha", 200, 2022);
    car5.set_type("Motorcycle");
    car5.set_plate("ARK152");
    Car car6("Honda", 210, 2019);
    car6.set_type("Motorcycle");
    car6.set_plate("KAZ904");
    Car car7("Dodge", 150, 2011);
    car7.set_type("Truck");
    car7.set_plate("WAL220");;
    Car car8("Mercedes", 60, 2007);
    car8.set_type("Bus");
    car8.set_plate("VOL903");
    Car car9("mercedes",87,2008);
    car9.set_type("Private");
    car9.set_plate("HEL609");
    Car car10("Range Rover",200,2020);
    car10.set_type("Private");
    car10.set_plate("ZOM300");
    Car car11("BMW",220,2001);
    car11.set_type("Motorcycle");
    car11.set_plate("VRO108");
    Car car12("Nissan",70,2010);
    car12.set_type("Truck");
    car12.set_plate("AWE007");
    
    queue<Car> Traffic;
    Traffic.push(car1);
    Traffic.push(car2);
    Traffic.push(car3);
    Traffic.push(car4);
    Traffic.push(car5);
    Traffic.push(car6);
    Traffic.push(car7);
    Traffic.push(car8);
    Traffic.push(car9);
    Traffic.push(car10);
    Traffic.push(car11);
    Traffic.push(car12);
    
    while (! (Traffic.empty()))
    {
        cout << "In Road A:" << endl ;
        
        roadA.allow(Traffic.front().get_type());
       if(roadA.allowed)
        {
            if (roadA.Radar(Traffic.front().get_speed(), 'A'))
            {
                cout << "Type: "<< Traffic.front().get_type()<<"    license Plate: "<< Traffic.front().get_plate();
                cout << "   Speed: "<< Traffic.front().get_speed()<<"  Brand: "<< Traffic.front().get_brand();
                cout << "   Year Model: "<< Traffic.front().get_year_model()  << endl;
                cout << "This vehicle will be fined" << endl;
            }
        }
        

        
        cout << endl << "In Road B:" << endl ;
        
        roadB.allow(Traffic.front().get_type());
        if(roadB.allowed)
        {
            if (roadB.Radar(Traffic.front().get_speed(), 'B'))
            {
                cout << "Type: "<< Traffic.front().get_type()<<"    license Plate: "<< Traffic.front().get_plate();
                cout << "   Speed: "<< Traffic.front().get_speed()<<"  Brand: "<< Traffic.front().get_brand();
                cout << "   Year Model: "<< Traffic.front().get_year_model()  << endl;
                cout << "This vehicle will be fined" << endl;
            }
        }
        
   
        
        cout <<  endl << "In Road C:" << endl ;
        
        roadC.allow(Traffic.front().get_type());
        if(roadC.allowed)
        {
            if (roadC.Radar(Traffic.front().get_speed(), 'C'))
            {
                cout << "Type: "<< Traffic.front().get_type()<<"    license Plate: "<< Traffic.front().get_plate();
                cout << "   Speed: "<< Traffic.front().get_speed()<<"  Brand: "<< Traffic.front().get_brand();
                cout << "   Year Model: "<< Traffic.front().get_year_model()  << endl;
                cout << "This vehicle will be fined" << endl;
            }
        }
        
        cout << "The vehicle is " << roadA.age(Traffic.front().get_year_model()) << " years" << endl << endl;
        cout << "........................................................" << endl;

        Traffic.pop();
     
    }
    cout << "Number of cars passed on road A = " << roadA.countA << endl;
    cout << "Number of cars passed on road B = " << roadB.countB << endl;
    cout << "Number of cars passed on road C = " << roadC.countC << endl;
    
    if((roadA.countA > roadB.countB)&&(roadA.countA > roadC.countC))
        highest = roadA.countA;
    else if((roadB.countB > roadC.countC)&&(roadB.countB > roadA.countA))
        highest = roadB.countB;
    else
        highest = roadC.countC;
    
    cout << "Road A effeciency " << ((roadA.countA / highest)*100) << " %" << endl;
    cout << "Road B effeciency " << ((roadB.countB / highest)*100) << " %" << endl;
    cout << "Road C effeciency " << ((roadC.countC / highest)*100) << " %" << endl;
    
    
   
    
    
    
    
    
    
    
    
    

    return 0;
}
