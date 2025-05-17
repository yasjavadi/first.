#include <iostream>

using namespace std;//عددی را از ورودی دریافت کرده و بیان کند چه روزی از هفته است

int main()
{
   int num;
   cin>>num;
   cout<<"enter a day:";
   if(num==1){
    cout<<"Saturday.";
   else if(num==2)
    cout<<"Sunday.";
    else if(num==3)
        cout<<"Monday.";
    else if(num==4)
        cout<<"Tuesday.";
    else if(num==5)
        cout<<"Wednesday.";
    else if(num==6)
        cout<<"Thursday.";
    else
        cout<<"Friday.";
   }

    return 0;
}
