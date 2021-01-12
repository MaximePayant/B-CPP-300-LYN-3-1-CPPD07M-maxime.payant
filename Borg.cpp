/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Borg.cpp
*/

#include "Borg.hpp"

Borg::Ship::Ship() :
_side(300),
_maxWarp(9),
_home(UNICOMPLEX),
_location(_home)
{
    std::cout
        << "We are the Borgs. Lower your shields and surrender yourselves unconditionally."
        << std::endl
        << "Your biological characteristics and technologies will be assimilated."
        << std::endl
        << "Resistance is futile."
        << std::endl;
}

void Borg::Ship::setupCore(WarpSystem::Core *coreReactor)
{
    _coreReactor = coreReactor;
}

void Borg::Ship::checkCore() const
{
    std::cout
        << (_coreReactor->checkReactor()->isStable() ?
            "Everything is in order." : "Critical failure imminent.")
        << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    if (warp <= _maxWarp
    && d != _location
    && _coreReactor->checkReactor()->isStable())
        return (_location = d, true);
    return (false);
}

bool Borg::Ship::move(int warp)
{
    if (warp <= _maxWarp
    && _coreReactor->checkReactor()->isStable())
        return (_location = _home, true);
    return (false);
}

bool Borg::Ship::move(Destination d)
{
    if (d != _location
    && _coreReactor->checkReactor()->isStable())
        return (_location = d, true);
    return (false);
}

bool Borg::Ship::move()
{
    if (_coreReactor->checkReactor()->isStable())
        return (_location = _home, true);
    return (false);
}