/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Exam.cpp
*/

#include "Exam.hpp"

bool Exam::cheat = false;

Exam::Exam(const bool *isCheating) :
m_cheat(*isCheating)
{}

void Exam::start(const std::size_t& count)
{
    std::cout
        << "[The exam is starting]" << std::endl
        << count
        << " Klingon vessels appeared out of nowhere." << std::endl
        << "they are fully armed and shielded" << std::endl;
    if (m_cheat != cheat)
        std::cout << "What the... someone changed the parameters of the exam !" << std::endl;
    else
        std::cout << "This exam is hard... you lost again." << std::endl;
}

bool Exam::isCheating() const
{
    return (cheat);
}