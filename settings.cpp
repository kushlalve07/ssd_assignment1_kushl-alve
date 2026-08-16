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

void toggleNotifications(UserSettings& settings) {
    settings.notificationsEnabled = !settings.notificationsEnabled;
    std::cout << "Notifications toggled to: "
              << (settings.notificationsEnabled ? "ON" : "OFF") << std::endl;
}

bool setTheme(UserSettings& settings, const std::string& newTheme) {
    if (newTheme != "light" && newTheme != "dark") {
        std::cout << "Invalid theme requested: " << newTheme << ". Keeping current theme." << std::endl;
        return false;
    }
    settings.theme = newTheme;
    std::cout << "Theme updated to: " << newTheme << std::endl;
    return true;
}

bool setLanguage(UserSettings& settings, const std::string& langCode) {
    static const std::map<std::string, std::string> supportedLanguages = {
        {"en", "English"}, {"es", "Spanish"}, {"fr", "French"}
    };
    auto it = supportedLanguages.find(langCode);
    if (it == supportedLanguages.end()) {
        std::cout << "Unsupported language code: " << langCode << std::endl;
        return false;
    }
    settings.language = langCode;
    std::cout << "Language updated to: " << it->second << " (" << langCode << ")" << std::endl;
    return true;
}

int main() {
    std::cout << "===== Student Portal: Settings =====" << std::endl;

    UserSettings settings;
    settings.notificationsEnabled = true;
    settings.theme = "light";
    settings.language = "en";

    printSettings(settings);

    toggleNotifications(settings);
    setTheme(settings, "dark");
    setLanguage(settings, "es");
    setLanguage(settings, "de");

    std::cout << std::endl << "Final settings:" << std::endl;
    printSettings(settings);

    return 0;
}