/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Federation.cpp
*/

#include "Federation.hpp"

///////////////////////////////////////////////////////////////////////////////
/// Starfleet Ship
//
Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0) :
_length(length),
_width(width),
_name(name),
_maxWarp(maxWarp),
_home(EARTH),
_location(_home),
_shield(100),
_photonTorpedo(torpedo)
{
    std::cout
        << "The ship USS "
        << _name
        << " has been finished."
        << std::endl
        << "It is "
        << _length
        << " m in length and "
        << _width
        << " m in width."
        << std::endl
        << "It can go to Warp "
        << _maxWarp
        << "!"
        << std::endl;
    if (torpedo != 0)
        std::cout
            << "Weapons are set: "
            << _photonTorpedo
            << " torpedoes ready."
            << std::endl;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *coreReactor)
{
    _coreReactor = coreReactor;
    std::cout
        << "USS "
        << _name
        << ": The core is set."
        << std::endl;
}

void Federation::Starfleet::Ship::checkCore() const
{
    std::cout
        << "USS "
        << _name
        << ": The core is "
        << (_coreReactor->checkReactor()->isStable() ? "stable" : "unstable")
        << " at the time."
        << std::endl;
}

void Federation::Starfleet::Ship::promote(Captain *captain)
{
    _captain = captain;
    std::cout
        << captain->getName()
        << ": I'm glad to be the captain of the USS "
        << _name
        << "."
        << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (warp <= _maxWarp
    && d != _location
    && _coreReactor->checkReactor()->isStable())
        return (_location = d, true);
    return (false);
}

bool Federation::Starfleet::Ship::move(int warp)
{
    if (warp <= _maxWarp
    && _coreReactor->checkReactor()->isStable())
        return (_location = _home, true);
    return (false);
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    if (d != _location
    && _coreReactor->checkReactor()->isStable())
        return (_location = d, true);
    return (false);
}

bool Federation::Starfleet::Ship::move()
{
    if (_coreReactor->checkReactor()->isStable())
        return (_location = _home, true);
    return (false);
}

int Federation::Starfleet::Ship::getShield()
{
    return (_shield);
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    _shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return (_photonTorpedo);
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    _photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    if (_photonTorpedo)
        std::cout
            << _name
            << ":  Firing  on  target. [TORPEDO] torpedoes  remaining."
            << std::endl;
    else
        std::cout
            << _name
            << ": No more  torpedo  to fire , [CAPTAIN  NAME]!"
            << std::endl;
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
    if (_photonTorpedo < torpedoes)
        std::cout
            << _name
            << ": No enough torpedoes  to fire , [CAPTAIN  NAME]!"
            << std::endl;
    else if (_photonTorpedo)
        std::cout
            << _name
            << ":  Firing on target. [TORPEDO] torpedoes  remaining."
            << std::endl;
    else
        std::cout
            << _name
            << ": No more torpedo to fire, [CAPTAIN  NAME]!"
            << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
/// Captain
//
Federation::Starfleet::Captain::Captain(std::string name) :
_name(name),
_age(0)
{}

std::string Federation::Starfleet::Captain::getName() const
{
    return (_name);
}

int Federation::Starfleet::Captain::getAge() const
{
    return (_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
    _age = age;
}

///////////////////////////////////////////////////////////////////////////////
/// Ensign
//
Federation::Starfleet::Ensign::Ensign(std::string name) :
_name(name)
{
    std::cout
        << "Ensign "
        << _name
        << ", awaiting orders."
        << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
/// Independant Ship
//
Federation::Ship::Ship(int length, int width, std::string name) :
_length(length),
_width(width),
_name(name),
_maxWarp(1),
_home(VULCAN),
_location(_home)
{
    std::cout
        << "The independant ship "
        << _name
        << " just finished its construction."
        << std::endl
        << "It is "
        << _length
        << " m in length and "
        << _width
        << " m in width."
        << std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *coreReactor)
{
    _coreReactor = coreReactor;
    std::cout
        << _name
        << ": The core is set."
        << std::endl;
}

void Federation::Ship::checkCore() const
{
    std::cout
        << _name
        << ": The core is "
        << (_coreReactor->checkReactor()->isStable() ? "stable" : "unstable")
        << " at the time."
        << std::endl;
}

bool Federation::Ship::move(int warp, Destination d)
{
    if (warp <= _maxWarp
    && d != _location
    && _coreReactor->checkReactor()->isStable())
        return (_location = d, true);
    return (false);
}

bool Federation::Ship::move(int warp)
{
    if (warp <= _maxWarp
    && _coreReactor->checkReactor()->isStable())
        return (_location = _home, true);
    return (false);
}

bool Federation::Ship::move(Destination d)
{
    if (d != _location
    && _coreReactor->checkReactor()->isStable())
        return (_location = d, true);
    return (false);
}

bool Federation::Ship::move()
{
    if (_coreReactor->checkReactor()->isStable())
        return (_location = _home, true);
    return (false);
}