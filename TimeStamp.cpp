#include "TimeStamp.h"
#include <iostream>
using namespace std;
TimeStamp::TimeStamp()
{
    Second =0;
    Minute =0;
    Hour =0;
}
TimeStamp::TimeStamp(int i,int n, int c){
Second=i;
Minute=n;
Hour=c;
}

void TimeStamp::Print(){
cout<<"Second: "<<Second<<"     Minute :"<<Minute<<"      Hour :"<<Hour<<endl;

}
void TimeStamp::setSecond(int s)
{
     Second=s;
}
bool TimeStamp::operator!=(TimeStamp s)
{
  return(Second!=s.Second);
}

bool TimeStamp::operator==(TimeStamp s)
{
  return (Second==s.Second);
}
