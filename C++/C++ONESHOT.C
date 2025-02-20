// C++ ONESHOT _ date - 20/02/2024

#include <iostream> // preprocessor command
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
class Employee
{
public: // access specifier
    string name;
    int salary;
    Employee(string n, int s , int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    void printDetails()
    {
        cout << "The Name of Employee is " << this->name << " and his salary is " << this->salary << endl;
    }

    void getSecretPassword(){
        cout<<"The Secret Password is "<<this->secretPassword<<endl;
    }
private:
    int secretPassword;
};
class Programmer : public Employee
{
    public: 
    int errors;
};
int main()
{
    // cout<<"Hello World!"<<endl;
    // cout<<"LOL HAPPENS"<<endl;
    // data types in c++
    // int x,z,y;
    // short sa=9;
    // cout<< sa<<endl;

    // // CamelCase Notation
    // int marksInMaths = 83;
    // cout<<marksInMaths<<endl;

    // // integers declaration
    // short a;     // 2 bytes
    // int b;       // 4 bytes
    // long c;      // 4 bytes
    // long long d;  // 8 bytes

    // // float declaration
    // float const score = 45.32; // constant variable
    // double score2 = 453.32;
    // long double score3 = 4532.32;
    // // score = 55.36; // cannot change the value of constant variable
    // cout<<"The score is "<<score<<endl;

    // User input and output
    //  int a,b;
    //  cout<<"Enter the value of a: "<<endl;
    //  cin>>a;
    //  cout<<"Enter the value of b: "<<endl;
    //  cin>>b;
    //  // Arithmetic Operators in C++
    //  cout<<"a + b is "<< a + b<<endl;
    //  cout<<"a - b is "<< a - b<<endl;
    //  cout<<"a * b is "<< a * b<<endl;
    //  //typecasting using float
    //  cout<<"a / b is "<<(float) a / b<<endl;

    // if-else statement and else if ladder
    // int age;
    // cout << "What is Your Age : " << endl;
    // cin >> age;

    // if(age>=150 || age<1){
    //     cout<<"Invalid Age"<<endl;
    // }
    // else if(age>=18){
    //     cout<<"You Can Vote"<<endl;

    // }

    // else{
    //     cout<<"You're Not Eligible to Vote"<<endl;
    // }

    // Switch Case Statement
    // switch (age)
    // {
    // case 12:
    //     /* code */
    //     cout << "You're 12 Years Old" << endl;
    //     break;
    // case 18:
    //     /* code */
    //     cout << "You're 18 Years Old" << endl;
    //     break;
    // default:
    // {
    //     cout << "You're Neither 12 or nor 18 Years Old" << endl;
    //     break;
    // }
    // break;
    // }

    // Loops in C++
    // int index = 0;
    // while(index<34){
    //     cout<<"WE ARE AT INDEX NUMBER "<<index<<endl;
    //     index++;
    // }

    // it will run atleast one time without checking the condition
    //  do {
    //      cout<<"WE ARE AT INDEX NUMBER "<<index<<endl;
    //      index++;}while(index>3454);

    // for (int i = 0; i < 34; i++)
    // {
    //     /* code */
    //     cout<<"The Value of i is"<<i<<endl;
    // }

    // Functions in C++
    //     int a,b;
    // cout<<"enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<sum(a,b);

    // Arrays in C++
    // int marks[6] ;
    // for (int i = 0; i <6; i++)
    // {
    //     cout<<"Enter the marks for "<<i+1<<"th student "<<endl;
    //     cin >> marks[i] ;
    // }
    // for (int i = 0; i <6; i++)
    // {
    //     cout<<"The marks for "<<i+1<<"th student is "<<marks[i]<<endl;
    // }

    // int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // typecasting

    // int a = 45;
    // float b = 45.46;
    // cout << "The value of a is " << (float)a/41 << endl;
    // cout << "The value of b is " << (int)b << endl;

    // Strings in C++
    // string nitesh = "Nitesh";
    //     cout<<"The Name is :"<<nitesh<<endl;
    //     cout<<"The Name Length is :"<<nitesh.length()<<endl;
    //     cout<<"The Name is :"<<nitesh.substr(0,4)<<endl;//it will print from 0 index to 4 letter
    //     cout<<"The Name is :"<<nitesh.substr(2,3)<<endl;

    // float a = 34;
    // float *ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<< &a<<endl;
    // cout<<"The value of a is "<<*(ptra)<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

    // objects and classes in c++ in this we will create a class and object of that class
    //  template is a class which can take any data type

    Employee har("NiteshIsLoL", 344 , 435566);
    har.name = "Nitesh";
    har.salary = 100;
    har.printDetails();
    har.getSecretPassword();
    // cout<<har.secretPassword; // cannot access the private members of the class
    // cout<<"The Name of Employee is "<<har.name<<" and his salary is "<<har.salary<<endl;
    return 0;
}