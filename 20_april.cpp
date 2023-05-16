#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }
    
    // Calculate the difference between two dates in days
    int difference(const Date& other) const {
       
        int a = (14 - month) / 12;
        int y1 = year - a;
        int m1 = month + 12 * a - 3;
        int jd1 = day + (153 * m1 + 2) / 5 + 365 * y1 + y1 / 4 - y1 / 100 + y1 ;

        int b = (14 - other.month) / 12;
        int y2 = other.year  - b;
        int m2 = other.month + 12 * b - 3;
        int jd2 = other.day + (153 * m2 + 2) / 5 + 365 * y2 + y2 / 4 - y2 / 100 + y2 ;

        // Calculate difference in day
        return jd2 - jd1;
    }
    
    // Calculate the day of the week for a given date (0=Sunday, 1=Monday, etc.)
    int dayOfWeek() const {
        int a = (14 - month) / 12;
        int y = year - a;
        int m = month + 12 * a - 2;
        return (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
    }
    
    // add 15 in current date
    void add15Days() {
        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        day += 15;
        if (day > daysInMonth[month - 1]) {
            day -= daysInMonth[month - 1];
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
    
    // Return the day of the week as a string
    string getDayOfWeek() const {
        string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        return days[dayOfWeek()];
    }
};

int main() {
    
    Date d1(10, 4, 2023);
    Date d2(20, 5, 2023);
    cout << "Difference between dates: " << d1.difference(d2) << " days" << endl;
    cout << "Day of the week: " << d1.getDayOfWeek() << endl;
    d1.add15Days();
    cout << "New date: " << d1.getDay() << "/" << d1.getMonth() << "/" << d1.getYear() << endl;
    return 0;
}