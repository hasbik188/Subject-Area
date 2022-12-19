#include <iostream>
#include <string>
#include <ctime>

class song
{
public:
    std::string name;
    std::string musician;
    std::string album;
    double duration;
    std::string label;
};

class playlist: public song
{
public:
    std::string title;
    std::string genre;
    std::string WhatGenre(playlist object) {
        if (label == "UMG Records")
            return object.genre = "Alternative";
        if (label == "Sony Music Entertainment")
            return object.genre = "Hip-Hop";
        if (label == "Warner Music Group")
            return object.genre = "Pop";
    }
    std::string date_of_create;
    int NumberofSongs()
    {
        return number = rand() % 100;
    }
private:
    int number;
};

int main()
{
    srand(time(0));
    playlist track;
    track.name = "Morrow";
    std::cout << "name of song is " << track.name << std::endl;
    track.musician = "070 Shake";
    std::cout << "the author of song is " << track.musician << std::endl;
    track.album = "Modus Vivendi";
    std::cout << "the album is " << track.album << std::endl;
    track.duration = 4.07;
    std::cout << "the duration is " << track.duration << "minutes" << std::endl;
    track.title = "Top 100 Alternative songs";
    std::cout << "this song is in " << track.title << std::endl;
    track.label = "UMG Records";
    std::cout << "this song was released on " << track.label << std::endl;
    track.genre = track.WhatGenre(track);
    std::cout << "genre is " << track.genre << std::endl;
    track.date_of_create = "12.04.2019";
    std::cout << "it was released on " << track.date_of_create << std::endl;
    std::cout << track.NumberofSongs() << " songs in this playlist" << std::endl;
}
