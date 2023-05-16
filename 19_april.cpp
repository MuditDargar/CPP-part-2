#include<iostream>
#include<string>
using namespace std ;

class date{
    private:
        int day;
        int month;
        int year;
    public:
        date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        }
          9
    int difference(const date& other) const {
        
        int a = (14 - month) / 12;
        int y1 = year + 4800 - a;
        int m1 = month + 12 * a - 3;
        int jd1 = day + (153 * m1 + 2) / 5 + 365 * y1 + y1 / 4 - y1 / 100 + y1 / 400 - 32045;

        int b = (14 - other.month) / 12;
        int y2 = other.year + 4800 - b;
        int m2 = other.month + 12 * b - 3;
        int jd2 = other.day + (153 * m2 + 2) / 5 + 365 * y2 + y2 / 4 - y2 / 100 + y2 / 400 - 32045;

       
        return jd2 - jd1;
    }
    
};
int main(){


return 0;
}