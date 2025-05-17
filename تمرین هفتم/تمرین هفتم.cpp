#include <iostream>

using namespace std;//عددی را به عنوان نمره دریافت کرده و وضغیت دانش آموز را مشخص کند

int main()
{
    float num;
    cout<<"enter a number:";
    cin>>num;
    if(num>=14&&num<==16){
        cout<<" the grade is C.";
        else if(num>=16&&num<==18)
         cout<<" the grade is B.";
        else if(num>=18||num==20)
            cout<<" the grade is A.";
    }



    return 0;
}
