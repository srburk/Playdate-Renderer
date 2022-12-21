//
//  spacial.h
//  Simulator
//
//  Created by Sam Burkhard on 12/21/22.
//

#ifndef spacial_h
#define spacial_h

#include <stdio.h>
#include "pd_api.h"

int update(void* userdata);
void setPDPtr(PlaydateAPI* p);

typedef struct Vector_3x1 { int x[3]; } Vector_3x1;

typedef struct Vector_4x1 { int x[4]; } Vector_4x1;

typedef struct Matrix_4x4 { int x[4][4]; } Matrix_4x4;

Matrix_4x4 perspectivePlane(void);

#endif /* spacial_h */
