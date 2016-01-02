#include "../std_lib_facilities.h"

double sum(const vector<double>& v) {
    double sumofnum = 0.0; 
    for (double i:v) {
        sumofnum += i;
    };
    return sumofnum;
}

bool supportedUnit(string unit) {
    const vector<string> units = {"cm", "ft", "in", "m"};
    return binary_search(units.begin(), units.end(), unit);
}

double conversionFactor(string unit) {
    if (unit == "ft") {
        return 12*2.54/100;
    } else if (unit == "cm") {
        return 1.0/100;
    } else if (unit == "in") {
        return 2.54/100;
    } else {
        return 1.0;
    }
}

int main () {
    string sint1;
    double int1;
    vector<double> meters;

    string unit;

    while (true) {
        cout << "Type a measurement and a unit (m, cm, in, ft). ";
        if (meters.size() > 0) {
            cout << "\nYou may type '|' for the measurement to find out facts about your values and stop the program. ";
        }
        cin >> sint1 >> unit;
        if (sint1 == "|") {
            if (meters.size() > 0) {
                break;
            } else {
                cout << "That is not a valid choice at this time.\n";
                continue;
            }
        }
        int1 = stod(sint1);

        if (supportedUnit(unit)) {
            meters.push_back(int1 *= conversionFactor(unit));
            sort(meters);
        } else {
            cout << "That is not a valid measurement.\n";
            continue;
        }

        cout << "The smallest number so far is " << meters[0] << " meters. The largest number so far is " << meters[meters.size()-1] << " meters. Your number is " << int1 << " meters.\n";   

        if (int1 == meters[meters.size()-1]) {
            cout << "That's the largest number yet!\n";
        } else if (int1 == meters[0]) {
            cout << "That's the smallest number yet!\n";
        }

        cout << "\n";
    };

    cout << "\n\nThe smallest value is " << meters[0] << " meters.\nThe largest value is " << meters[meters.size()-1] << " meters.\nThe number of values that were inputed is " << meters.size() << " values.\nThe sum of all the values is " << sum(meters) << ".\n";
}