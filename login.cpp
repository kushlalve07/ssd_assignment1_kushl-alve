#include <iostream>
#include <string>
#include <map>

// Simple in-memory user store: username -> password
std::map<std::string, std::string> userStore = {
    {"alice",   "pass123"},
    {"bob",     "securepwd"},
    {"charlie", "letmein"}
};

const int MAX_ATTEMPTS = 3;

int main() {
    std::cout << "===== Student Portal: Login =====" << std::endl;
    return 0;
}