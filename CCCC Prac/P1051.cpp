#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <semaphore.h>
#include <unordered_set>

struct student {
    std::string name;
    int score;
    int score2;
    bool g;
    bool x;
    int paper;
    int scolarship;
};

student compare(student a, student b) {
    if (a.scolarship > b.scolarship) {
        return a;
    }else if (a.scolarship < b.scolarship) {
        return b;
    }
}
int main() {
    int count;
    std::cin >> count;
    int total_sc = 0;
    student tmp;
    tmp.scolarship = 0;
    for (int i = 0; i < count; i++) {
        student student;
        char tmp1, tmp2;
        std::cin >> student.name >> student.score >> student.score2 >> tmp1 >> tmp2 >> student.paper;
        student.g = tmp1 == 'Y' ? true : false;
        student.x = tmp2 == 'Y' ? true : false;
        student.scolarship = 0;

        if (student.score > 80 && student.paper >= 1) {
            student.scolarship += 8000;
        }
        if (student.score > 85 && student.score2 > 80) {
            student.scolarship += 4000;
        }
        if (student.score > 90) {
            student.scolarship += 2000;
        }
        if (student.score > 85 && student.x) {
            student.scolarship += 1000;
        }
        if (student.score2 > 80 && student.g) {
            student.scolarship += 850;
        }
        tmp = compare(student, tmp);
        total_sc += student.scolarship;
    }

    std::cout << tmp.name << std::endl << tmp.scolarship << std::endl << total_sc << std::endl;

    return 0;
}