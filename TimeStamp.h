#ifndef TIMESTAMP_H
#define TIMESTAMP_H
using namespace std;
class TimeStamp
{
    public:
        TimeStamp();
        TimeStamp(int,int,int);
        void Print();
        bool operator==(TimeStamp);
        bool operator!=(TimeStamp);
        void setSecond(int);


    protected:

    private:
        int Second;
        int Minute;
        int Hour;
};

#endif // STUDENTINFO_H
