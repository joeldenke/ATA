#ifndef _H_EDITOR
#define _H_EDITOR

#define GUI_HEIGHT 50

typedef struct
{
    GLuint gui;
    GLuint couch;
}textures;

textures texture;

void init_editor();

void editor_undo(int latest_object);

void editor_create_object( int mouse_x, int mouse_y, int property_id, int *free_struct_space );

void editor_start_move_object( int mouse_x, int mouse_y, int *old_mouse_x, int *old_mouse_y );

void editor_update_move_object( int mouse_x, int mouse_y, int *old_mouse_x, int *old_mouse_y );

void editor_show( int screen_max_x, int screen_max_y );

void clean_up_editor();

#endif // _H_EDITOR
