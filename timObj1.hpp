// ------------------------------------
// --------- Class for Cars -----------
// This program has one class and this class 
// can use parent  public and private atributes
// This program about cars models and you have 
// chuse number and give you this nomer car 
// tecnical information.
// ------------------------------------

#include <iostream>
using namespace std;

class Car {
        private:
                int salary;

        public:
                string name;
                string model;
                string klas;
                string style;
                string color;
                int year;
                int speed;
                float matorLitr;

                Car(string x, string y, string z, string q, string k, int a, int b, float c);


                void setSalary(int g){
                        salary = g;
                }
                int getSalary(){
                        return salary;
                }
};

Car::Car(string x, string y, string z, string q, string k, int a, int b, float c) {
        name = x;
        model = y;
        klas = z;
        style = q;
        color = k;
        year = a;
        speed = b;
        matorLitr = c;
}


