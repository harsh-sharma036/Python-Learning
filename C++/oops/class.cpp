#include <bits/stdc++.h>
using namespace std;


class car{
    string name;
    int maxSpeed;
    int noOfGears;
    int noOfSeats;
    int noOfWheels;

    public:
    car(){
        // cout<<"Constructor called"<<endl;
    }
    car(int x){
        // cout<<"Constructor22222 called"<<endl;
        this->maxSpeed = x;
    }
    ~car(){  //destructor can be called only once
        // cout<<"Destructor called"<<endl;
    }
    // ~car(){
    //     cout<<"Destcalled"<<endl;
    // }


    // Mutator Member Function / Setter
    void setValues(string name, int maxSpeed, int noOfGears, int noOfSeats, int noOfWheels){
        this->name = name;
        // this->maxSpeed = maxSpeed;
        this->noOfGears = noOfGears;
        this->noOfSeats = noOfSeats;
        this->noOfWheels = noOfWheels;
    }

    // Inspector Member Function / Getter
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Max Speed: "<<maxSpeed<<endl;
        cout<<"No of Gears: "<<noOfGears<<endl;
        cout<<"No of Seats: "<<noOfSeats<<endl;
        cout<<"No of Wheels: "<<noOfWheels<<endl;
    }

    // faciliator member function
    void print(){
        cout<<"Report of the this car"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Max Speed: "<<maxSpeed<<endl;
        cout<<"No of Gears: "<<noOfGears<<endl;
        cout<<"No of Seats: "<<noOfSeats<<endl;
        cout<<"No of Wheels: "<<noOfWheels<<endl;
    }
};

int main(){
    // cout<<sizeof(car)<<endl;
    car alto(120);
    alto.setValues("Alto",100, 5, 4, 4);
    alto.display();
    alto.print();
    return 0;
}


// Difference between Constructor and Destructor in C++ : 

// S. No.	                    Constructor	                                                                                                                     Destructor
// 1.	        Constructor helps to initialize the object of a class.                         	                                Whereas destructor is used to destroy the instances.
// 2.	        It is declared as className( arguments if any ){Constructor’s Body }.	                                        Whereas it is declared as ~ className( no arguments ){ }.
// 3.	        Constructor can either accept arguments or not.	                                                                While it can’t have any arguments.
// 4.	        A constructor is called when an instance or object of a class is created.	                                    It is called while object of the class is freed or deleted.
// 5.	        Constructor is used to allocate the memory to an instance or object.	                                        While it is used to deallocate the memory of an object of a class.
// 6.	        Constructor can be overloaded.	                                                                                While it can’t be overloaded.
// 7.	        The constructor’s name is same as the class name.	                                                            Here, its name is also same as the class name preceded by the tiled (~) operator.
// 8.	        In a class, there can be multiple constructors.	                                                                While in a class, there is always a single destructor.
// 9.	        There is a concept of copy constructor which is used to initialize an object from another object.              	While here, there is no copy destructor concept.
// 10.	        They are often called in successive order.	                                                                    They are often called in reverse order of constructor.