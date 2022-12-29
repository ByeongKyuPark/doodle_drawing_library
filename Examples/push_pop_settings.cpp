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
        clear_background(100, 200, 255);

        push_settings();
        draw_image(robot, -300, -300);//default

        push_settings();
        apply_scale(2.0);
        apply_rotate(ElapsedTime);
        draw_image(robot, -150, -150); //scale X2 , rotate X1

        push_settings();
        apply_translate(150, 150);
        apply_rotate(ElapsedTime * 4.0);
        draw_image(robot, -150, -150); //scale X2 , rotate X5(=1+4), translate (100,100)

        pop_settings();
        draw_image(robot, 150, 150);   //scale X2 , rotate X1

        pop_settings();
        draw_image(robot, 300, 300); //default
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << e.what() << '\n';
    return -1;
}