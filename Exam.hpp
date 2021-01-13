/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Exam.hpp
*/

#ifndef EXAM_HPP
#define EXAM_HPP

#include <iostream>

class Exam
{
    private:
        bool m_cheat;

    public:
        Exam(const bool *isCheating);

        void start(const std::size_t& count);
        void (Exam::*kobayashiMaru)(const std::size_t& count);
        bool isCheating() const;

        static bool cheat;
};

#endif // EXAM_HPP