/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Admiral.hpp
*/

#ifndef ADMIRAL_HPP
#define ADMIRAL_HPP

#include <iostream>

#include "Federation.hpp"
#include "Borg.hpp"

namespace Federation
{

    namespace Starfleet
    {

        class Admiral
        {

            private:
                std::string _name;

            public:
                Admiral(std::string name);
                bool (Federation::Starfleet::Ship::*movePtr)(Destination d);
                void (Federation::Starfleet::Ship::*firePtr)(Borg::Ship *target);
                bool move(Federation::Starfleet::Ship *ship, Destination dest);
                void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);

        }; // clas Admiral

    } // namespace Starfleet

} // namespace Federation

#endif // ADMIRAL_HPP