/* Assignment 3
 * Question 2
 * Recursive function to check whether number is palindrome or not
 * Worked in a group of 2
 * Kruti Patel. Student ID:
 * Bertin Mihigo Sano. Student ID: 40157663
 */


#include <iostream>
using namespace std;

const int max_students = 100;

// Function prototypes
void inputgrades(int grades[], int N);
void highestgrades(const int grades[], int N);
void lowestgrades(const int grades[], int N);
double averagegrade(const int grades[], int N);
double mediangrade(const int grades[], int N);

int A_grades(const int grades[], int N);
int B_grades(const int grades[], int N);
int C_grades(const int grades[], int N);
int D_grades(const int grades[], int N);
int F_grades(const int grades[], int N);

int main() {
    int N;
    std::scanf()
    int grades[max_students];

    cout << "Enter the number of students (N): ";
    cin >> N;

    inputgrades(grades, N);


    cout << "Highest 4 grades:\n";
    highestgrades(grades, N);


    cout << "Lowest 4 grades:\n";
    lowestgrades(grades, N);

    double average = averagegrade(grades, N);
    cout << "Average grade: " << average << "\n";

    double median = mediangrade(grades, N);
    cout << "Median grade: " << median << "\n";
    cout << " numbers of students with A grades: " << A_grades( grades, N) << endl;

    cout << "numbers of students with B grades: " << B_grades( grades, N) << endl;

    cout << " numbers of students with C grades: " << C_grades( grades, N) << endl;

    cout << " numbers of students with D grades: " << D_grades(grades, N) << endl;

    cout << " numbers of students with F grades: " << F_grades(grades, N) << endl;

    return 0;
}

void inputgrades(int grades[], int N) {
    cout << "Enter the grades of " << N << " students:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Grade for student " << i + 1 << ": ";
        cin >> grades[i];
    }
}

void highestgrades(const int grades[], int N) {
    int highestgrades[4] = {0};

//4 highest grades:

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (grades[i] > highestgrades[j]) {
                for (int k = 3; k > j; --k) {
                    highestgrades[k] = highestgrades[k - 1];
                }
                highestgrades[j] = grades[i];
                break;
            }
        }
    }


    for (int i = 0; i < 4; ++i) {
        cout << highestgrades[i] << "\n";
    }
}

void lowestgrades(const int grades[], int N) {
    int lowestgrades[4] = {100};

//lowest 4 grades:
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (grades[i] < lowestgrades[j]) {
                for (int k = 3; k > j; --k) {
                    lowestgrades[k] = lowestgrades[k - 1];
                }
                lowestgrades[j] = grades[i];
                break;
            }
        }
    }

    for (int i = 0; i < 4; ++i) {
        cout << lowestgrades[i] << "\n";
    }
}

//Average:

double averagegrade(const int grades[], int N) {
    double sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += grades[i];
    }
    return sum / N;
}

//Median:

double mediangrade(const int grades[], int N) {
    int sortedgrades[max_students];
    for (int i = 0; i < N; ++i) {
        sortedgrades[i] = grades[i];
    }


    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (sortedgrades[j] > sortedgrades[j + 1]) {
                int temp = sortedgrades[j];
                sortedgrades[j] = sortedgrades[j + 1];
                sortedgrades[j + 1] = temp;
            }
        }
    }

    if (N % 2 == 0) {

        int midIndex = N / 2;
        return static_cast<double>(sortedgrades[midIndex - 1] + sortedgrades[midIndex]) / 2.0;
    } else {

        return static_cast<double>(sortedgrades[N / 2]);
    }
}

// more function details here -- bertin



// numbers of students with A grades
int A_grades(const int grades[], int N){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(grades[i]>=90)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}

// numbers of students with B grades
int B_grades(const int grades[], int N){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(grades[i]>=80 && grades[i]<90)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}

// numbers of students with C grades
int C_grades(const int grades[], int N){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(grades[i]>=65 && grades[i]<80)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}

// numbers of students with D grades
int D_grades(const int grades[], int N){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(grades[i]>=50 && grades[i]<65)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}

// numbers of students with F grades
int F_grades(const int grades[], int N){
    int counter=0; // a variable to count number of grades in A range
    if(N){
        for(int i=0;i<N;i++){
            if(grades[i]<50)
                counter++;
            else
                continue;
        }
    }
    else{
        cout << "Issue with number of students\n";
        exit(EXIT_FAILURE);
    }
    return counter;
}