// 5. Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the
// marks obtained in two subjects and class result contains the total marks
// obtained in the test. The class result can inherit the details of the marks
// obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;

class Students {
protected:
    int roll_number;

public:
    // Set the roll number of the student
    void get_rollnum(int roll) {
        roll_number = roll;
    }
};

class Test : public Students {
protected:
    int sub1;
    int sub2;

public:
    // Set the marks obtained in two subjects
    void get_marks(int s1, int s2) {
        sub1 = s1;
        sub2 = s2;
    }
};

class result : public Test {
private:
    int total_marks;

public:
    // Calculate the total marks obtained
    void total() {
        total_marks = sub1 + sub2;
    }

    // Display the roll number, marks in subjects, and total marks
    void showdetailse() {
        cout << "\n Roll number : " << roll_number;
        cout << "\n sub 1 : " << sub1 << " / " << " sub 2 :" << sub2;
        cout << "\n total marks : " << total_marks;
    }
};

int main() {
    result a;

    // Set the roll number
    a.get_rollnum(50);

    // Set the marks obtained in two subjects
    a.get_marks(80, 90);

    // Calculate the total marks
    a.total();

    // Display the details
    a.showdetailse();

    return 0;
}

