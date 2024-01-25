// Manage playlists
#include <vector>
#include <string>

std::vector<std::string> playlist;

void addSongToPlaylist(const std::string& songPath) {
    playlist.push_back(songPath);
}

void removeSongFromPlaylist(int index) {
    if (index >= 0 && index < playlist.size()) {
        playlist.erase(playlist.begin() + index);
    }
}