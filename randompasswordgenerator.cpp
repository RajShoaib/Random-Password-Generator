#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generateRandomPassword(int length) {
    const string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-+_:/|~";
    string password = "";

    int charsLength = chars.length();

    
    srand(time(0));

    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charsLength;
        password += chars[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    cout << "Enter the desired password length: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Invalid password length." << endl;
        return 1;
    }

    string password = generateRandomPassword(passwordLength);

    cout << "Generated Password: " << password << endl;

    return 0;
}
