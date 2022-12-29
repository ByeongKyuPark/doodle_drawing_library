#include <doodle.h>
#include <exception>
#include <iostream>
int main(void)
try
{
    create_window(1024, 800);
    constexpr double shapeWidth = 50;
    while (!is_window_closed())
    {
        update_window();
        clear_background(100, 200, 255);
        const int x = get_mouse_x();
        const int y = get_mouse_y();
        set_fill_color(20, 150, 25);

        double offset = 0.0;
        const double angle1 = offset + 2.0 * PI / 1.5 + PI / 6 * ElapsedTime * 7;
        const double angle2 = offset + PI * 2.0 + PI / 5 * ElapsedTime * 10;
        offset += 0.25 * QUARTER_PI * DeltaTime;
        apply_scale(12.0);
        apply_rotate(ElapsedTime);
        draw_star(25.0 * cos(angle1), 25.0 * sin(angle2), Width / 20.0, Height / 20.0);
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return -1;
}