#include "actor.hpp"

Actor::Actor() {}

void Actor::draw(sf::RenderWindow *window) {
    window->draw(character);
}

bool Actor::update(float deltaTime, sf::RenderWindow *window) {
    character.update(deltaTime);
    if (animate) {
        character.setState(PlayerState::attacking);
        animate = false;
    }
    return this->updateLogic(deltaTime, window);
}
