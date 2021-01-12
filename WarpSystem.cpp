/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** WarpSystem.cpp
*/

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor() :
_stability(true)
{}

bool WarpSystem::QuantumReactor::isStable() const
{
    return (_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    _stability = stability;
}

WarpSystem::Core::Core(WarpSystem::QuantumReactor *coreReactor) :
_coreReactor(coreReactor)
{}

WarpSystem::QuantumReactor* WarpSystem::Core::checkReactor() const
{
    return (_coreReactor);
}