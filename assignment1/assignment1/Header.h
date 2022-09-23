//  Header.h
//  assignment1
//Part A
#include <string>
using namespace std;
  class Car
  {
    public:
      Car();
      Car(string Car_Brand, int Max_Speed, int Year_Model);
      void set_brand(string a);
      void set_type(string b);
      void set_plate(string c);
      void set_speed(int x);
      void set_year_model(int y);
      string get_brand();
      string get_type();
      string get_plate();
      int get_speed();
      int get_year_model();

    private:
      string Car_Brand;
      string Car_Type;
      string Car_plate;
      int Speed;
      int Year_Model;
  };
//Part B
  class Road
  {
    public:
      Road();
      Road(char Road_Type , int Speed_Limit);
      bool Radar(int car_speed, char road_type);
      void allow(string car_type);
      int age(int Year_Model);
      char get_road();
      int get_limit();
      void set_road(char r);
      void set_limit(int l);
      int countA = 0;
      int countB = 0;
      int countC = 0;
      bool allowed;

    private:
      char Road_Type;
      int Speed_Limit;
  };
