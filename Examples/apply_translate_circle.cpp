#include <doodle.h>
#include <exception>
#include <iostream>
int main(void)
try
{
    create_window(1024, 800);
    const Image robot{ "robot.png" };
    constexpr double shapeWidth = 50;
    while (!is_window_closed())
    {
        update_window();
        clear_background(100, 200, 300);

        const double outterRadius = std::sqrt(Width * Width / 9.0 + Height * Height / 9.0) - shapeWidth;
        const double innerRadius = std::sqrt(Width * Width / 12.0 + Height * Height / 9.0) - shapeWidth;
        const double x = std::cos(ElapsedTime) * outterRadius;
        const double y = std::sin(ElapsedTime) * outterRadius;
        apply_translate(x, y);
        draw_image(robot, 0, 0);
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return -1;
}