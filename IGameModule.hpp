#pragma once

#include <optional>

#include "Types.hpp"
#include <string>
#include <vector>

class IDisplayModule;

class IGameModule {
public:
    virtual ~IGameModule() = default;
    virtual const std::vector<Resource>& getResources() = 0;

    virtual std::string& getName() = 0;
    virtual void update(IDisplayModule* api) = 0;

    virtual std::optional<CoreAction> consumeCoreAction() { return std::nullopt; }
};