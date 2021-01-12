/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Borg.cpp
*/

#include "Borg.hpp"

Borg::Ship::Ship(int weaponFrequency, short repair) :
_side(300),
_maxWarp(9),
_home(UNICOMPLEX),
_location(_home),
_shield(100),
_weaponFrequency(weaponFrequency),
_repair(repair)
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

int Borg::Ship::getShield()
{
    return (_shield);
}

void Borg::Ship::setShield(int shield)
{
    _shield = shield;
}

int Borg::Ship::getWeaponFrequency()
{
    return (_weaponFrequency);
}

void Borg::Ship::setWeaponFrequency(int frequency)
{
    _weaponFrequency = frequency;
}

short Borg::Ship::getRepair()
{
    return (_repair);
}

void Borg::Ship::setRepair(short repair)
{
    _repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    std::cout
        << "Firing on target with "
        << _weaponFrequency
        << "GW frequency."
        << std::endl;
    target->setShield(target->getShield() - _weaponFrequency);
}

void Borg::Ship::fire(Federation::Ship *target)
{
    std::cout
        << "Firing on target with "
        << _weaponFrequency
        << "GW frequency."
        << std::endl;
    target->getCore()->checkReactor()->setStability(false);
}

void Borg::Ship::repair()
{
    if (_repair > 0) {
        _repair -= 1;
        std::cout
            << "Begin shield re-initialisation...  Done. Awaiting further instructions."
            << std::endl;
        _shield = 100;
    }
    else {
        std::cout
            << "Energy cells depleted, shield weakening."
            << std::endl;
    }
}