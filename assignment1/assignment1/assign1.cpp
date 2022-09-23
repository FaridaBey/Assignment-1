//  assign1.cpp
//  assignment1
#include <iostream>
#include "Header.h"
using namespace std;

// Part A
 Car::Car()
{
    Car_Brand = " ";
    Car_Type = " ";
    Car_plate = " ";
    Speed = 100;
    Year_Model = 2020;
}
 Car::Car(string brand, int speed, int year)
{
    Car_Brand = brand;
    Speed = speed;
    Year_Model = year;
    Car_Type = " ";
    Car_plate = " ";
}
void Car::set_brand(string a)
{
    Car_Brand = a;
}
void Car::set_type(string b)
{
        
    while(!(b == "Bus" || b == "Private" || b == "Motorcycle" || b == "Truck"))
        {
            cout << "Car Type should be entered as one of the following: Bus, Private, Motorcycle, Truck" << endl;
            cout << "please try setting the type again..." << endl;
            cin >> b;
        }
    Car_Type = b;
}
void Car::set_plate(string c)
{
    while(!(c.length() == 6))
    {
        cout << "Car Plate should be entered as a 6 alpha numerics" << endl;
        cout << "please try setting the plate again..." << endl;
        cin >> c;
    }
    Car_plate = c;
}
void Car::set_speed(int x)
{
    Speed = x;
}
void Car::set_year_model(int y)
{
    Year_Model = y;
}
string Car::get_brand()
{
    return Car_Brand;
}
string Car::get_type()
{
    return Car_Type;
}
string Car::get_plate()
{
    return Car_plate;
}
int Car::get_speed()
{
    return Speed;
}
int Car::get_year_model()
{
    return Year_Model;
}

// Part B
 Road::Road()
{
    Road_Type = ' ';
    Speed_Limit = 0;
}
 Road::Road(char road , int limit)
{
     while(!(road == 'A' || road == 'B' || road == 'C'))
     {
         cout << "Road can only be set as A, B or C:" << endl;
         cout << "please try setting the road again..." << endl;
         cin >> road;
     }
    Road_Type = road;
    Speed_Limit = limit;
}
bool Road::Radar(int car_speed, char road_type)
{
    if(road_type == 'A')
    {
        if(car_speed > 200)
            return 1;
        else if(car_speed <= 200)
            return 0;
    }
    else if(road_type == 'B')
    {
        if(car_speed > 80)
            return 1;
        else if(car_speed <= 80)
            return 0;
    }
    else if(road_type == 'C')
    {
        if(car_speed > 100)
            return 1;
        else if(car_speed <= 100)
            return 0;
    }
    return 0;
}
void Road::allow(string car_type)
{
    
    if(car_type == "Private" || car_type == "Motorcycle")
    {
        if(Road_Type == 'A')
        {
            cout << "Allowed " << endl;
            allowed = 1;
            countA ++;
        }
        else if(Road_Type == 'B')
        {
            cout << "Allowed " << endl;
            allowed = 1;
            countB ++;
        }
        else
        {
            cout << "Not Allowed" << endl;
            allowed = 0;
        }
    }
    else if(car_type == "Truck")
    {
        if(Road_Type == 'A')
        {
            cout << "Not Allowed " << endl;
            allowed = 0;
        }
        else if(Road_Type == 'B')
        {
            cout << "Allowed " << endl;
            allowed = 1;
            countB ++;
        }
        else
        {
            cout << "Allowed" << endl;
            allowed = 1;
            countC ++;
        }
    }
    else
    {
        if(Road_Type == 'B')
        {
            cout << "Allowed " << endl;
            allowed = 1;
            countB ++;
        }
        else
        {
            cout << "Not Allowed" << endl;
            allowed = 0;
        }
    }
}
int Road::age(int Year_Model)
{
    return (2022 - Year_Model);
}
char Road::get_road()
{
    return(Road_Type);
}
int Road::get_limit()
{
    return(Speed_Limit);
}
void Road::set_road(char r)
{
    while(!(r == 'A' || r == 'B' || r == 'C'))
    {
        cout << "Road can only be set as A, B or C:" << endl;
        cout << "please try setting the road again..." << endl;
        cin >> r;
    }
    Road_Type = r;
}
void Road::set_limit(int l)
{
    Speed_Limit = l;
}
