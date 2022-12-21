//
//  spacial.c
//  Simulator
//
//  Created by Sam Burkhard on 12/21/22.
//

#include "renderer.h"

static PlaydateAPI* pd = NULL;

void setPDPtr(PlaydateAPI* p) {
    pd = p;
}

int update(void* userdata)
{
    PlaydateAPI* pd = userdata;
    
    pd->graphics->clear(kColorWhite);
    
    for (int i = 0; i < sizeof perspectivePlane(); i++) {
        char int_str[20];
        sprintf(int_str, "%d", i);
        pd->graphics->drawText(int_str, strlen(" "), kASCIIEncoding, 75 + (10*i), 50);
    }
        
    pd->system->drawFPS(0,0);

    return 1;
}

// clipping pane
const int right = 10;
const int top = 25;
const int near = 10;
const int far = 50;

Matrix_4x4 perspectivePlane() {
    Matrix_4x4 perspectivePlane = {
        {(near/far), 0, 0, 0},
        {0, (near/top), 0, 0},
        {0, 0, (-far/(far-near)), 0},
        {0, 0, -1, 0}
    };
    return perspectivePlane;
}
