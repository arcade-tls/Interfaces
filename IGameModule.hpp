#pragma once

#include "Types.hpp"
#include <string>
#include <vector>

class IDisplayModule;

class IGameModule {
    public:
        virtual ~IGameModule() = default;
        virtual std::vector<Resource>& getRessources() = 0;

        virtual std::string& getName() = 0;
        virtual void update(IDisplayModule* api) = 0;
};
