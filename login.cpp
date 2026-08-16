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

bool validateCredentials(const std::string& username, const std::string& password) {
    auto it = userStore.find(username);
    if (it == userStore.end()) {
        return false; // user does not exist
    }
    return it->second == password;
}

int main() {
    std::cout << "===== Student Portal: Login =====" << std::endl;
    return 0;
}