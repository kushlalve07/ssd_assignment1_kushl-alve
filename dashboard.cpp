#include <iostream>
#include <string>
#include <vector>

struct Course {
    std::string code;
    std::string name;
    double attendancePercent;
    double grade;
};

void printCourseTable(const std::vector<Course>& courses) {
    std::cout << "Code    Course Name              Attendance   Grade" << std::endl;
    std::cout << "----    -----------              ----------   -----" << std::endl;
    for (const auto& c : courses) {
        std::cout << c.code << "    " << c.name;
        int pad = 25 - static_cast<int>(c.name.length());
        for (int i = 0; i < pad; i++) std::cout << " ";
        std::cout << c.attendancePercent << "%        " << c.grade << std::endl;
    }
}