/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** WarpSystem.hpp
*/

#ifndef WARP_SYSTEM_HPP
#define WARP_SYSTEM_HPP

namespace WarpSystem
{

    class QuantumReactor
    {

        private:
            bool _stability;

        public:
            QuantumReactor();

        bool isStable() const;
        void setStability(bool stability);

    }; // class QuantumReactor


    class Core
    {

        private:
            QuantumReactor *_coreReactor;

        public:
            Core(QuantumReactor *coreReactor);
            QuantumReactor *checkReactor() const;

    }; // class Core

} // namespace WarpSystem

#endif // WARP_SYSTEM_HPP