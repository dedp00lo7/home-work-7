
#include <iostream>
#include "mylib.h"
#include <fstream>
#define NUM 10
#define CHANGE(a,b) if(a>b){c=a;a=b;b=c;}





using namespace std;
void aarrch(int arr, int size)
{   int c;
    for(int i=0; i<size; ++i)
    {
        CHANGE(arr[i], arr[i+1]);
    }
}
int main()

{
   //5
    const  float arr[10.0]={ };
    MyLib::arrayinten(arr,10.0);
    //2
    int a,b;
    cin>>a>>b;
#define FUNC if(a>0&&a<b){cout<<"true"<<endl;}\
else{\
cout<<"false"<<endl;}

   //3
    int aarr[NUM]={1,2,3,4,5,6,7,8,9,10};
    aarrch(aarr, NUM);
    
    //4
    #pragma pack(push, 1)
    struct Employee {
    unsigned short age;
    double salary;
    };
    #pragma pack(pop)
    Employee * pEmployee = new Employee;
    pEmployee->age = 30;
    pEmployee->salary=3000;
    cout << sizeof(Employee)<<endl;
    cout<<pEmployee;
    Employee e1;
    e1.salary=2500;
    e1.age=30;
      
    ofstream fout("data.txt");
    
    fout<<e1.age<<endl<<e1.salary;
    fout.close();
    
    
    
    return 0;
}
