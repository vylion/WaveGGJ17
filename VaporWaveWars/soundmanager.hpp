#ifndef SOUNDMANAGER_HPP
#define SOUNDMANAGER_HPP

#include <map>
#include <iostream>
#include "commons.hpp"
//#define SOUND static sf::Sound

class SoundManager {

    public:
        static void load();

        static void playSound(std::string name);
        static void playMusic(std::string name);
        static void stopMusic(std::string name);
        static void pauseMusic(std::string name);
        static void setLoop(bool loop, std::string name);
        static void setPitch(float pitch, std::string name);
        static void setVolume(float volume, std::string name);
        static void setPosition(float x, float y, float z, std::string name);
        static void setGlobalSoundVolumen(float volume);
        static void setGlobalMusicVolumen(float volume);

    private:


        //INITIALIZE YOUR VARIABLES AS STATIC sf::Music or sf::SoundBuffer
        /* Example:*/
        static sf::Music     worldMusic;
        static sf::SoundBuffer     atk1;
        static sf::SoundBuffer     atk2;
        static sf::SoundBuffer     atk3;
        static sf::SoundBuffer     atk4;
        static sf::SoundBuffer     atk5;
        static sf::SoundBuffer     atk6;
        static sf::SoundBuffer     atk7;
        static sf::SoundBuffer     atk8;
        static sf::SoundBuffer     atk9;
        static sf::SoundBuffer     atk10;
        static sf::SoundBuffer     atk11;
        static sf::SoundBuffer     atk12;
        static sf::SoundBuffer     atk13;
        static sf::SoundBuffer     atk14;
        static sf::SoundBuffer     atk15;
        static sf::SoundBuffer     atk16;
        static sf::SoundBuffer     atk17;
        static sf::SoundBuffer     atk18;
        static sf::SoundBuffer     atk19;
        static sf::SoundBuffer     atk20;




        static std::map<std::string, sf::Sound> soundMap;
        static std::map<std::string, sf::Music> musicMap;
        static std::map<std::string, sf::Sound>::iterator sit;
        static std::map<std::string, sf::Music>::iterator mit;

};

#endif // SOUNDMANAGER_HPP