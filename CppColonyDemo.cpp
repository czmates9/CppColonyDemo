#include <iostream>
#include <vector>

struct ColonyCandidate
{
    int x;
    int y;
    int radius;
    double brightness;
};

int main()
{
    const std::vector<ColonyCandidate> colonies
    {
        { 974, 747, 44, 184.4 },
        { 379, 1214, 28, 190.8 },
        { 443, 67, 46, 168.5 },
        { 1135, 152, 52, 165.3 }
    };

    constexpr double minimumBrightness = 170.0;

    for (const auto& colony : colonies)
    {
        if (colony.brightness >= minimumBrightness)
        {
            std::cout
                << "x=" << colony.x
                << ", y=" << colony.y
                << ", radius=" << colony.radius
                << ", brightness=" << colony.brightness
                << '\n';
        }
    }

    return 0;
}