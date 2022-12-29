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
        set_fill_color(0, 255, 0); //green
        draw_rectangle(0, 0, Width * 0.6, Height * 0.6);
        draw_rectangle(0, -Width / 4.0, Width * 0.2, Height * 0.2);
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return -1;
}