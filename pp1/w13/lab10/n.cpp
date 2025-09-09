#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

struct date {
    int day, month, year;
    date(int d, int m, int y) : day(d), month(m), year(y) {}
    bool operator < (date another) {
        if (this->year != another.year) return this->year < another.year;
        else if (this->month != another.month) return this->month < another.month;
        else if (this->day != another.day) return this->day < another.day;
        else return true;
    }

    void output() {
        cout << day/10 << day%10 << ' ' << month/10 << month%10 << ' ';
        cout << year/1000;
        year %= 1000;
        cout << year/100;
        year %= 100;
        cout << year/10 << year%10 <<endl;
    }
};

bool cmp(date d1, date d2) {
    return d1 < d2;
}

int main() {
    string s;
    vector <date> v;
    while (true) {
        getline(cin, s);
        if (s == "0") break;
        else {
            int d, m, y;
            stringstream ss;
            ss << s;
            ss >> d >> m >> y;
            date dt(d, m, y);
            v.push_back(dt);
        }
    }
    sort (v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        v[i].output();
    }
    return 0;
}