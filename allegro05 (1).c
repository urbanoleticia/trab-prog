#include <allegro5/allegro5.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <stdbool.h>
#include <stdio.h>

int main(){
    al_init();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_image_addon();
    al_install_keyboard();

    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 100.0);
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    ALLEGRO_DISPLAY* disp = al_create_display(400, 300);
    ALLEGRO_BITMAP* image = al_load_bitmap("Sprites_game.png");

    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(disp));
    al_register_event_source(queue, al_get_timer_event_source(timer));

    bool redraw = true;
    ALLEGRO_EVENT event;

    bool keys[ALLEGRO_KEY_MAX] = {0};

    int x = 0;
    int y = 0;
    int si = 0;
    int flags = 0;
    int n = 0;
    al_start_timer(timer);
    while(1){
        al_wait_for_event(queue, &event);

        if(event.type == ALLEGRO_EVENT_TIMER){
            redraw = true;
            n++;
            if(n%12 == 0)
                si = (si+1)%5;
        }else if(event.type == ALLEGRO_EVENT_KEY_DOWN){
            keys[event.keyboard.keycode] = true;
        }else if(event.type == ALLEGRO_EVENT_KEY_UP){
            keys[event.keyboard.keycode] = false;
        }else if(event.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;

        if(redraw && al_is_event_queue_empty(queue)){
            if(keys[ALLEGRO_KEY_RIGHT]){
                x += 2;
                flags = 0;
            }if(keys[ALLEGRO_KEY_LEFT]){
                x -= 2;
                flags = ALLEGRO_FLIP_HORIZONTAL;
            }

            if(keys[ALLEGRO_KEY_DOWN])
                y += 2;
            if(keys[ALLEGRO_KEY_UP])
                y -= 2;

            if(keys[ALLEGRO_KEY_ESCAPE])
                break;

            al_clear_to_color(al_map_rgb(150, 150, 200));
            al_draw_bitmap_region(image, 56*si, 174*3, 60, 65, x, y, flags);
            al_flip_display();
            redraw = false;
        }
    }

    al_destroy_display(disp);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);
}
