/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Borg.hpp
*/

#ifndef BORG_HPP
#define BORG_HPP

#include <iostream>

namespace Federation
{
    namespace Starfleet
    {
        class Ship;
    }
    class Ship;
}

#include "Federation.hpp"
#include "Destination.hpp"
#include "WarpSystem.hpp"

namespace Borg
{

    class Ship
    {

        private:
            int _side;
            short _maxWarp;
            WarpSystem::Core *_coreReactor;
            Destination _home;
            Destination _location;
            int _shield;
            int _weaponFrequency;
            int _repair;

        public:
            Ship(int weaponFrequency = 20, short repair = 3);
            void setupCore(WarpSystem::Core *coreReactor);
            void checkCore() const;
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int shield);
            int getWeaponFrequency();
            void setWeaponFrequency(int frequency);
            short getRepair();
            void setRepair(short repair);
            void fire(Federation::Starfleet::Ship *target);
            void fire(Federation::Ship *target);
            void repair();

    }; // class Ship

} // namespace Borg

#endif // BORG_HPP