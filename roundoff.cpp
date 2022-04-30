#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

    double FMidGr(double PG, double TMG){
    double FMG = (PG + TMG) / 2;

    return FMG;
    }

    double FinalGr(double FMG, double TFG){
    double FFG = ( FMG*2 + TFG) / 3;

    return FFG;
    }

int main()
{
    double PG, TMG, FMG, TFG;

    cout << "Enter Prelims Grade: ";
    cin >> PG;

    cout << "Enter Tentative Midterm Grade: ";
    cin >> TMG;

    cout << "Enter Tentative Final Grade: ";
    cin >> TFG;

    cout << endl;
    cout << "Final Midterm Grade: " <<  fixed << setprecision(2) << FMidGr(PG, TMG) << endl;
    cout << "Final Final Grade: " <<  fixed << setprecision(2) << FinalGr(FMG, TFG) << endl;

    return 0;
}
