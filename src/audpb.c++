#include <SFML/Audio.hpp>

sf::Music music;

if (!music.openFromFile("path/to/song.ogg")) {
    return EXIT_FAILURE;
}

music.play();