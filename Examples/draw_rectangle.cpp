#include <doodle.h>
#include <exception>
#include <iostream>
int main(void)
try
{
    create_window(1024, 800);
    const Image box{ "box.png" };
    constexpr double shapeWidth = 50;
    while (!is_window_closed())
    {
        update_window();
        clear_background(100, 200, 255);
        const int x = get_mouse_x();
        const int y = get_mouse_y();
        set_fill_color(170, 120, 250);
        draw_rectangle(x, y, Width / 5.0, Height / 5.0);
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return -1;
}