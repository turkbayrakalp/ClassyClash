#include "raylib.h"

class Prop {

public:
    Prop(Vector2, Texture2D);
    void Render(Vector2);
    Rectangle getCollisionRec(Vector2 knightPos);
private:
    Vector2 worldPos{};
    Texture2D texture{};
    float scale{4.0f};

};