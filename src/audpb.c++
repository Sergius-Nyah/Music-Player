#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
using namespace std

sf::Music music;

int main() {
    if (!music.openFromFile("path/to/song.ogg")) {
        return EXIT_FAILURE; // No song found
    }

    while (true) {
        cout << "Enter command (play, pause, stop): ";
        string command;
        getline(std::cin, command);

        if (command == "play") {
            music.play();
        } else if (command == "pause") {
            music.pause();
        } else if (command == "stop") {
            music.stop();
        } else if (command == "exit") {
            break;
        } else {
            cout << "Unknown command\n";
        }
    }

    return 0;
}
