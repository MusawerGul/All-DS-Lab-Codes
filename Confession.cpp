#include <iostream>
using namespace std;

const int DAYS = 7;

void getTimeSpent(int reading[], int writing[]);
int calculateTotalTime(int reading, int writing);
void roastFeedback(int dailyTotal);
void weeklySummary(int weeklyTotal);

int main() {
    int reading[DAYS];
    int writing[DAYS];
    int dailyTotal, weeklyTotal = 0;

    // Collecting data for each day
    cout << "Confession Page Weekly Time-Waster Tracker\n";
    getTimeSpent(reading, writing);

    // Processing each day’s data and providing roast feedback
    for (int i = 0; i < DAYS; i++) {
        dailyTotal = calculateTotalTime(reading[i], writing[i]);
        weeklyTotal += dailyTotal;

        cout << "\nDay " << (i + 1) << " Total Time Spent: " << dailyTotal << " minutes" << endl;
        roastFeedback(dailyTotal);
    }

    // Weekly summary roast
    cout << "\nWeekly Summary:\n";
    weeklySummary(weeklyTotal);

    return 0;
}

// Function to take user input for time spent reading and writing confessions
void getTimeSpent(int reading[], int writing[]) {
    for (int i = 0; i < DAYS; i++) {
        cout << "\nEnter time spent reading confessions on Day " << (i + 1) << " (in minutes): ";
        cin >> reading[i];
        cout << "Enter time spent writing confessions on Day " << (i + 1) << " (in minutes): ";
        cin >> writing[i];
    }
}

// Function to calculate the total time spent on confessions for the day
int calculateTotalTime(int reading, int writing) {
    return reading + writing;
}

// Function to provide roast feedback based on daily total time
void roastFeedback(int dailyTotal) {
    if (dailyTotal >= 120) {
        cout << "Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se? "
                "Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai?";
    } else if (dailyTotal >= 60) {
        cout << "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? "
                "Thora focus apne real goals pe bhi rakho, shayad kuch ban jao.";
    } else {
        cout << "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. "
                "Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!";
    }
}

// Function to provide weekly summary roast based on total weekly time
void weeklySummary(int weeklyTotal) {
    cout << "Total Weekly Time Spent on Confessions: " << weeklyTotal << " minutes" << endl;

    if (weeklyTotal > 600) {
        cout << "Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? "
                "Jawan admi ho ya waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!";
    } else {
        cout << "Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, "
                "warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!";
    }
}