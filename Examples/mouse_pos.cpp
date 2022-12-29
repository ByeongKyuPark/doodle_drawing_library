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
        draw_image(box, 0, 0);

        const int mouseX = get_mouse_x();
        const int mouseY = get_mouse_y();
        draw_image(box, mouseX, mouseY);
        std::cout << mouseX << ", " << mouseY << std::endl;
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return -1;
}