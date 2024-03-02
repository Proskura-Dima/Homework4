#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int i = 0;
int j = 0;

bool first(int a, int b, int c, int d, int e, int f) {
    bool equal_sides = true;
    vector <int> v1 = { a,b,c };
    vector <int> v2 = { d,e,f };
    for (i; i < 3; i++) {
        if (equal_sides == false) break;
        for (j; j < 3; j++) {
            if (v1.at(i) == v2.at(j)) {
                v2.at(j) = 0;
                break;
            }else if(j==2) {
                equal_sides = false;
            }
        }
    }
    return equal_sides;
}

bool second(int a, int b, int c) {
    int pr;
    vector <int> v1 = { a, b, c };
    for (i; i < 3; i++) {
        for (j; j < 2; j++) {
            if (v1.at(i) < v1.at(i+1)) {
                pr = v1.at(i);
                v1.at(i) = v1.at(i+1);
                v1.at(i + 1) = pr;
            }
        }
    }
    return pow(v1.at(0),2) == pow(v1.at(1),2)+pow(v1.at(2),2);
}

bool third(int a, int b ,int c, int d) {
    int pr;
    vector <int> v1 = { a, b, c, d };
    for (i; i < 4; i++) {
        for (j; j < 3; j++) {
            if (v1.at(i) < v1.at(i + 1)) {
                pr = v1.at(i);
                v1.at(i) = v1.at(i + 1);
                v1.at(i + 1) = pr;
            }
        }
    }
    return v1.at(0) < v1.at(2) + v1.at(3) || v1.at(1) < v1.at(2) + v1.at(3);
}

void fourth (int N,int Z, int L){
    vector <int> vec;
    for (i=1; i <= N; i++) {
        if (i % Z < L) vec.push_back(i);
    }
    for (i; i < vec.size(); i++) {
        cout << vec.at(i)<<endl;
    }
}

void fifth(int N) {
    vector <int> vec;
    for (i=1; i <= N; i++) {
        if (i % (i % 10) == 0) vec.push_back (i);
    }
    for (i; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

void sixth(int N) {
    vector <int> vec;
    bool pr;
    if (N > 3) {
        vec = { 2,3 };
        for (i = 4; i <= N; i++) {
            pr = true;
            for (j = 2; j < N; j++) {
                if (i % j == 0) {
                    pr = false;
                    break;
                }
            }
        }
    } else if(N == 2){
        vec = { 2 };
    } else if (N == 3) {
        vec = { 2, 3 };
    } else {
        vec = {};
        cout << "Not a prime number, not a composite number";
    }
    for (i; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

void seventh(string str, char switsh) {
    vector <string> vec;
    string pr;
    for (i; i < str.size(); i++) {
        if ((str.at(i) == ' ') || ((i + 1) == str.size())) {
            vec.push_back(pr);
            pr = " ";
        }
        else {
            pr.push_back(str.at(i));
        }
    }
    if (switsh == 'a') {
        for (i; i < vec.size(); i++) {
            for (j; j < vec.at(i).size(); j++) {
                if (isupper(vec.at(i).at(j))) {
                    cout << vec.at(j) << endl;
                    break;
                }
            }
        }
    } else if (switsh == 'b') {
        bool isdig;
        for (i; i < vec.size(); i++) {
            isdig = true;
            for (j; j < vec.at(i).size(); j++) {
                if (!isdigit(vec.at(i).at(j))) {
                    isdig = false;
                }
            }
            if (isdig) {
                cout << isdig << endl;
            }
        }
    } else {
        int N;
        cin >> N;
        for (i; i < vec.size();i++) {
            if (vec.at(i).size() <= N) {
                cout << vec.at(i) << endl;
            }
        }
    }
}

void file_wr(string str, string file_name) {
    ofstream ouft;
    ouft.open(file_name + ".txt");
    ouft << str;
    ouft.close();
}

struct Student {
    string name;
    string second_name;
    string middle_name;
    string clas;
    double GPA;
    int age;
    int course;
};

void eight(struct Student stu) {
    file_wr(stu.second_name + " " + stu.name + " " + stu.middle_name + ", age: " + to_string(stu.age) + ", course: " + to_string(stu.course) + ", class: " + stu.clas + ", GPA: "+to_string(stu.GPA),
    stu.second_name);
}

int main()
{
    
}
