#include <iostream>
#include <string>
#include <ctime>
#include "song.h"

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
    std::cout << track.NumberofSongs() << " playlists with this song" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    playlist track2;
    track2.name = "True Love";
    std::cout << "name of song is " << track2.name << std::endl;
    track2.musician = "Kanye West";
    std::cout << "the author of song is " << track2.musician << std::endl;
    track2.album = "Donda 2";
    std::cout << "the album is " << track2.album << std::endl;
    track2.duration = 2.29;
    std::cout << "the duration is " << track2.duration << "minutes" << std::endl;
    track2.title = "Top 100 Billboard";
    std::cout << "this song is in " << track2.title << std::endl;
    track2.label = "Sony Music Entertainment";
    std::cout << "this song was released on " << track2.label << std::endl;
    track2.genre = track2.WhatGenre(track2);
    std::cout << "genre is " << track2.genre << std::endl;
    track2.date_of_create = "26.08.2022";
    std::cout << "it was released on " << track2.date_of_create << std::endl;
    std::cout << track2.NumberofSongs() << " playlists with this song" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    if (track < track2)
    {
        std::cout << "second track is popular than first track" << std::endl;
    }
    if (track > track2)
    {
        std::cout << "first track is popular than second track" << std::endl;
    }
    if (track == track2)
    {
        std::cout << "the genre of songs is similar";
    }
    std::cout << "Is " <<track.name << " more listenable than " << track2.name << "?" << std::endl;
    std::cout << track.name << more_listenable(track, track2) << track2.name << std::endl;

}
