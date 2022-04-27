
/*********************
 *      INCLUDES
 *********************/
#include "UI.h"

#include "lvgl/lvgl.h"



/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/


void project(void)
{
    lv_obj_t * obj = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj, 200, 200);
    lv_obj_align(obj, LV_ALIGN_CENTER, 0, 0);

}


