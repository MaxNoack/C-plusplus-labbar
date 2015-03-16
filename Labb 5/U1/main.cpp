#include <iostream>
#include <cstdlib>
#include <random>
#include <queue>
#include <time.h>
#include "kund.h"
using namespace std;

int main() {
    int hours;
    int customersPerHour;
    cout << "Amount of hours: " << endl;
    cin >> hours;

    cout << "Amount of customers per hour (0-60): " << endl;
    cin >> customersPerHour;

    if(customersPerHour < 0 || customersPerHour > 60) {
        cout << "Amount of customers per hour must be greater than 60." << endl;
        return 1;
        }


    queue<Kund> q;
    bool available = true;
    int handledCustomers = 0;
    int currentServiceTime = 0;
    int customersPerMinute = 0;
    int totalCustomers = 0;

    srand(time(NULL));
    default_random_engine generator;
    poisson_distribution<int> distribution(customersPerHour / 60.0);

    for(int m = 0; m < hours * 60; m++) {

        int cPerH = distribution(generator);
        //Generate customers
        for(int c = 0; c < cPerH; c++) {
            Kund kund(m);
            q.push(kund);
            totalCustomers++;
            }

        //If ATM is available
        if(available && !q.empty()) {
            currentServiceTime = q.front().betjaning();
            available = false;
            }

        // If service is still ongoing
        if(!available && currentServiceTime > 0) {
            currentServiceTime--;
            }

        //If the servicetime is over for current customer
        if(!available && currentServiceTime <= 0) {
            q.pop();
            available = true;
            handledCustomers++;
            }

        customersPerMinute += (q.size());
        //cout << "End of minute nr " << m << ". " << endl;
        }

    cout << "Total amount of customers handled: " << handledCustomers << endl;
    cout << "Average length of queue: " << customersPerMinute / (hours * 60.0) << endl;
    cout << "Total amount of queuers: " << totalCustomers << endl;
    }






