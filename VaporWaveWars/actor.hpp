#ifndef ENEMY_H
#define ENEMY_H

#include "commons.hpp"
#include "character.hpp"
#include "compas.hpp"

class Actor
{
public:
    Actor();
    Actor(int num);
    bool update(float deltaTime, sf::RenderWindow *window);
    void draw(sf::RenderWindow *window);
    bool hitBy(Compas enemy) const;
    Compas getAttack() const;
    virtual bool event(sf::Event e, bool def) = 0;

protected:
    Compas compas;
    PlayerState::playerState animate;
    virtual bool updateLogic(float deltaTime, sf::RenderWindow *window) = 0;
private:
    Character *character;
};

#endif // ENEMY_H
