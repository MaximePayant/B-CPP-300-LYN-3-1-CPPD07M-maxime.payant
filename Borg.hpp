/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Borg.hpp
*/

#ifndef BORG_HPP
#define BORG_HPP

#include <iostream>

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

        public:
            Ship();
            void setupCore(WarpSystem::Core *coreReactor);
            void checkCore() const;
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();

    }; // class Ship

} // namespace Borg

#endif // BORG_HPP