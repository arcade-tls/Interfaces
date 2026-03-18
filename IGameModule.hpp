#pragma once

#include <string>

class GraphicsApi;

class IGameModule {
public:
    virtual ~IGameModule() = default;

    virtual std::string &getName() = 0;
    virtual void update(GraphicsApi *api) = 0;
};
