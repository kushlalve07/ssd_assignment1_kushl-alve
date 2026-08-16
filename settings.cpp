#include <iostream>
#include <string>
#include <map>

struct UserSettings {
    bool notificationsEnabled;
    std::string theme;
    std::string language;
};

void printSettings(const UserSettings& settings) {
    std::cout << "----- Current Settings -----" << std::endl;
    std::cout << "Notifications : " << (settings.notificationsEnabled ? "ON" : "OFF") << std::endl;
    std::cout << "Theme         : " << settings.theme << std::endl;
    std::cout << "Language      : " << settings.language << std::endl;
    std::cout << "-----------------------------" << std::endl;
}