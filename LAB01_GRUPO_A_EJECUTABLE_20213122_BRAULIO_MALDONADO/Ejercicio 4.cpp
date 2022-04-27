#include<iostream>
#include <random>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <list>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <climits>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <Windows.h>
#include <cstdlib>
#include <cmath>
#pragma warning( disable: 4996)
//By Braulio Nayap Maldonado Casilla
using namespace std;
string getDate(int hour,int min, int sec, int year, int mon, int day) {
    ostringstream Hour; Hour << hour;
    ostringstream Min; Min << min;
    ostringstream Sec; Sec << sec;
    ostringstream Year; Year << year;
    ostringstream Mon; Mon << mon;
    ostringstream Day; Day << day;
    string h, m, s, d, mth, y;
    if(hour < 10){ h = "0"+Hour.str(); }
    else{ h = Hour.str(); }
    if (min < 10) { m = "0" + Min.str(); }
    else { m = Min.str(); }
    if (sec < 10) { s = "0" + Sec.str(); }
    else { s = Sec.str(); }
    if (day < 10) { d = "0" + Day.str(); }
    else { d = Day.str(); }
    if (mon < 10) { mth = "0" + Mon.str(); }
    else { mth = Mon.str(); }
    y = Year.str();
    string Fecha=h+"/"+m+"/"+s+" _ "+d+"-"+mth+"-"+y;


    return Fecha;
}

int main() {
    int minutos = 0;
    time_t now = time(0);
    tm* timePtr = localtime(&now);

    int hour = timePtr->tm_hour;
    int min = timePtr->tm_min;
    int sec = timePtr->tm_sec;
    int year = timePtr->tm_year;
    int mon = timePtr->tm_mon;
    int day = timePtr->tm_mday;
    cout << "Ingrese los minutos a disminuir a la hora actual: "  << endl;
    cin >> minutos;
    mon = mon + 1;
    year = year + 1900;
    min = min - minutos;
    while (true) {
        if (min < 0) {
            min = 60 + min;
            hour = hour - 1;
            if (hour < 0) {
                hour = 23;
                day = day - 1;
                if (day < 1) {
                    day = 30;
                    mon = mon - 1;
                    if (mon < 1) {
                        mon = 12;
                        year = year - 1;
                    }
                }
            }
        }
        else { break; }
    }
    string fechaactual=getDate(hour,min,sec,year,mon,day);
    cout <<"La fecha era " << fechaactual <<" hace " <<minutos<< " minutos." << endl;
    return 0;
}
