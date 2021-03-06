#ifndef PLAYER_H
#define PLAYER_H

#include "commons.hpp"
#include "compas.hpp"
#include "actor.hpp"
class Player : public Actor {
public:
    Player();
    Player(int num);
    bool event(sf::Event e) final override;
protected:
    bool updateLogic(float deltaTime, sf::RenderWindow *window);
private:
    float time;
    bool error;
    bool mod;
    float clock = 0.0;
};

#endif // PLAYER_H
