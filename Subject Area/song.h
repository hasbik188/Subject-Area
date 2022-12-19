#pragma once

class song
{
    friend std::string more_listenable(song, song);
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
    bool operator<(const playlist& object)
    {
        return object.genre > genre;
    }
    bool operator>(const playlist& object)
    {
        return object.genre < genre;
    }
    bool operator==(const playlist& object)
    {
        return object.genre == genre;
    }
    int NumberofSongs()
    {
        return number = rand() % 100;
    }
private:
    int number;
};


std::string more_listenable(song object, song object1)
{
    if (object.duration < object1.duration)
        return " is more listenable ";
    else
        return " is less listenable ";
}