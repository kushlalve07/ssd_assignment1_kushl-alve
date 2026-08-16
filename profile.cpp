#include <iostream>
#include <string>

struct StudentProfile {
    std::string name;
    std::string rollNumber;
    std::string email;
    std::string major;
    int yearOfStudy;
};

void printProfile(const StudentProfile& profile) {
    std::cout << "----- Student Profile -----" << std::endl;
    std::cout << "Name        : " << profile.name << std::endl;
    std::cout << "Roll Number : " << profile.rollNumber << std::endl;
    std::cout << "Email       : " << profile.email << std::endl;
    std::cout << "Major       : " << profile.major << std::endl;
    std::cout << "Year        : " << profile.yearOfStudy << std::endl;
    std::cout << "----------------------------" << std::endl;
}

void updateEmail(StudentProfile& profile, const std::string& newEmail) {
    std::cout << "Updating email from " << profile.email << " to " << newEmail << std::endl;
    profile.email = newEmail;
}

void promoteYear(StudentProfile& profile) {
    profile.yearOfStudy++;
    std::cout << profile.name << " has been promoted to year " << profile.yearOfStudy << std::endl;
}

int main() {
    std::cout << "===== Student Portal: Profile =====" << std::endl;

    StudentProfile student;
    student.name = "Alice Johnson";
    student.rollNumber = "CS21B045";
    student.email = "alice.johnson@example.edu";
    student.major = "Computer Science";
    student.yearOfStudy = 2;

    printProfile(student);

    updateEmail(student, "alice.j.new@example.edu");
    promoteYear(student);

    std::cout << std::endl << "Updated profile:" << std::endl;
    printProfile(student);

    return 0;
}