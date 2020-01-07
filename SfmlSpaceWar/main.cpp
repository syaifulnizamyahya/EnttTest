#include <cstdlib>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

#include "Application/Application.h"

int main(int argc, char* argv[])
{
    spdlog::set_level(spdlog::level::debug); 
    spdlog::debug("Running SpaceWar!");

    Application app;
    app.run();

    return EXIT_SUCCESS;
}
