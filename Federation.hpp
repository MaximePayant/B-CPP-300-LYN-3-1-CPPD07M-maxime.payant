/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Federation.hpp
*/

#ifndef FEDERATION_HPP
#define FEDERATION_HPP

#include <iostream>

namespace Borg
{
    class Ship;
}

#include "Destination.hpp"
#include "WarpSystem.hpp"
#include "Borg.hpp"

namespace Federation
{

    namespace Starfleet
    {

        class Captain
        {

            private:
                std::string _name;
                int _age;

            public:
                Captain(std::string name);
                std::string getName() const;
                int getAge() const;
                void setAge(int age);

        }; // Captain

        class Ship
        {

            private:
                int  _length;
                int  _width;
                std::string  _name;
                short  _maxWarp;
                WarpSystem::Core *_coreReactor;
                Captain *_captain;
                Destination _home;
                Destination _location;
                int _shield;
                int _photonTorpedo;

            public:
                Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0);
                void setupCore(WarpSystem::Core *coreReactor);
                void checkCore() const;
                void promote(Captain *captain);
                bool move(Destination d);
                bool move(int warp, Destination d);
                bool move(int warp);
                bool move();
                int getShield();
                void setShield(int shield);
                int getTorpedo();
                void setTorpedo(int torpedo);
                void fire(Borg::Ship *target);
                void fire(int torpedoes, Borg::Ship *target);

        }; // class Ship

        class Ensign
        {

            private:
                std:: string  _name;

            public:
                explicit Ensign(std::string name);

        }; // class Ensign

    } // namespace Starfleet

    class Ship
    {

        private:
            int  _length;
            int  _width;
            std::string  _name;
            short  _maxWarp;
            WarpSystem::Core *_coreReactor;
            Destination _home;
            Destination _location;

        public:
            Ship(int length, int width, std::string name);
            void setupCore(WarpSystem::Core *coreReactor);
            void checkCore() const;
            WarpSystem::Core *getCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();

    }; // class Ship

} // namespace Federation

#endif // FEDERATION_HPP