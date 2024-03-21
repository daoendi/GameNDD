#pragma once
#include "Object.h"

class Player : public Object {
private:
    // Các thành viên dữ liệu nếu cần
public:
    // Phương thức Render
    void Render(SDL_Renderer* ren,SDL_Texture* Tex, SDL_Rect src,SDL_Rect dest);
};
