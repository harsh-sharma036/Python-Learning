#include <bits/stdc++.h>
using namespace std;

class employee{
    public:
        int id;
        string name;
        void setdata(int i, string n){
            id = i;
            name = n;
        }
        void display(){
            cout<<id<<" "<<name<<endl;
        }
};

int main(){
    int *arr = new int[5];
    for(int i=0; i<5; i++){
        arr[i] = i*i;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    employee *e = new employee[3];
    
    for (int i = 0; i < 3; i++){
        int id;
        string name;
        cout<<"Enter id and name of employee "<<i+1<<endl;
        cin>>id;
        getline(cin, name);
        e[i].setdata(id, name);
    }
    cout<<"The details of the employees are: "<<endl;
    for (int i = 0; i < 3; i++){
        e[i].display();
    }

    delete[] arr;
    delete[] e;

    return 0;

    // if you are using new keyword then you have to use delete keyword to free the memory
    // if you are using new[] keyword then you have to use delete[] keyword to free the memory
    // if you are using malloc() then you have to use free() to free the memory
    // if you are using calloc() then you have to use free() to free the memory

}   