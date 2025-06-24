#include <iostream>
#include <string.h>

using namespace std;


class student{

    public:

    int roll;
    char name[100];
    char course[100];

};

class dog{

     public:

     char country[100];
     char name[100];
     int age;

};

class moter{

    public:

    char name[100];
    int model;
    char city[100];
    int price;


};



int main() {
    student  std1 , std2 , std3;

  



    std1.roll = 9772;
    strcpy(std1.name, "dharmik");
   
    strcpy(std1.course, "full-stack");

    
    std2.roll = 9914;
    strcpy(std2.name, "utsav");
    strcpy(std2.course, "web-devlopment");


    std3.roll = 8597;
    strcpy(std3.name, "pratik");
    strcpy(std3.course, "graffic");

   

    cout << std1.roll << endl;
    cout << std1.name << endl;
    cout << std1.course << endl;
    


    cout<< "----------------------------" << endl;

    cout << std2.roll << endl;
    cout << std2.name << endl;
    cout << std2.course << endl;

    
    cout<< "----------------------------" << endl;

    cout << std3.roll << endl;
    cout << std3.name << endl;
    cout << std3.course << endl;

    cout<< "----------------------------" << endl;

    dog dog1 , dog2 ;

    strcpy(dog1.country, "india");
    strcpy(dog1.name, "jurman shefad");
    dog1.age=5;

    strcpy(dog2.country, "switrgerland");
    strcpy(dog2.name, "sibarian husky");
    dog2.age=15;


    cout << "dog country: " << dog1.country << endl;
    cout << "dog name: " << dog1.name << endl;
    cout << "dog age: " << dog1.age<< endl;


    cout<< "----------------------------" << endl;


    cout << "dog country: " << dog2.country << endl;
    cout << "dog name: " << dog2.name << endl;
    cout << "dog age: " << dog2.age<< endl;

    

    moter moter1 , moter2;

    strcpy(moter1.name," MARUTI");
    moter1.model=  2020;
    strcpy(moter1.city, "BHAVNAGAR");
    moter1.price= 2100000;

    strcpy(moter2.name," ODDIE");
    moter2.model= 2024; 
    strcpy(moter2.city, "AHEMDABAD");
    moter2.price= 10000000;

    cout<< "-------------CAR FAIRE---------------" << endl;

    cout << endl;
    

    cout << "moter name: " << moter1.name << endl;
    cout << "moter model: "<< moter1.model <<endl;
    cout << "moter city: " << moter1.city << endl;
    cout << "moter price: " << moter1.price << endl;


    cout<< "----------------------------" << endl;
  

    cout << "moter name: " << moter2.name << endl;
    cout << "moter model: " << moter2.model << endl;
    cout << "moter city: " << moter2.city << endl;
    cout << "moter price: " << moter2.price << endl;


    cout<< "----------------------------" << endl;
    return 0;

}