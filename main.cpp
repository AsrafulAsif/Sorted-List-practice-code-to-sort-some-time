#include <iostream>
#include"SortedType.cpp"
#include"TimeStamp.h"
using namespace std;

int main()
{

    TimeStamp t1(15,34,23);
    TimeStamp t2(13,13,02);
    TimeStamp t3(43,45,12);
    TimeStamp t4(25,36,17);
    TimeStamp t5(52,02,20);
    SortedType<TimeStamp> myarr;
    myarr.InsertItem(t1);
    myarr.InsertItem(t2);
    myarr.InsertItem(t3);
    myarr.InsertItem(t4);
    myarr.InsertItem(t5);
    TimeStamp temp;
    cout<<"The list is :"<<endl;
    for(int i=0;i<myarr.LengthIs();i++){
        myarr.GetNextItem(temp);
        temp.Print();
        }
    TimeStamp t6 ;
    t6.setSecond(25);
    myarr.DeleteItem(t6);
    cout<<endl<<"The Final list is :"<<endl;
    myarr.ResetList();
    TimeStamp t;
    for(int i=0;i<myarr.LengthIs();i++)
    {
       myarr.GetNextItem(t);
       t.Print();

    }






    return 0;
}
