#include "Graphic/include/graphics.h"
#include <exception>
#include <iostream>
int main(void)
try
{
    create_window(1024, 800);
    const Image box {"box.png" };
    //const Image shield2{ "assets/shield.png" };
    constexpr double shapeWidth = 50;
    while (!is_window_closed())
    {
        update_window();
        clear_background(100,200,300);

        draw_image(box, 0, 0);

        // 4x bigger in the x and 3x bigger in the y
        apply_scale(4.0, 3.0);
        draw_image(box, 0, 0);
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return -1;
}