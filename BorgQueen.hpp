/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** BorgQueen.hpp
*/

#ifndef BORGQUEEN_HPP
#define BORGQUEEN_HPP

#include "Borg.hpp"

namespace Borg
{

    class BorgQueen
    {

        private:


        public:
            BorgQueen();
            bool (Borg::Ship::*movePtr)(Destination d);
            void (Borg::Ship::*firePtr)(Federation::Starfleet::Ship *target);
            void (Borg::Ship::*destroyPtr)(Federation::Ship *target);
            bool move(Borg::Ship *ship, Destination dest);
            void fire(Borg::Ship *ship, Federation::Starfleet::Ship *target);
            void destroy(Borg::Ship *ship, Federation::Ship *target);


    };

} // namespace Borg

#endif // BORGQUEEN_HPP