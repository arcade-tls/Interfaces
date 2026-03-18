#pragma once

#include <string>

class IDisplayModule;

class IGameModule {
    public:
        virtual ~IGameModule() = default;

        virtual std::string& getName() = 0;
        virtual void update(IDisplayModule* api) = 0;
};
