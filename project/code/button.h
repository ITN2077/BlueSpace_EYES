/*
 * button.h
 *
 *  Created on: 2024��4��13��
 *      Author: pc
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include "zf_common_headfile.h"

typedef struct{
    uint8 status;
    uint8 time;
    uint8 level;
    uint8 level_last;
    uint8 decetion_flag;
}Button_Stash;
#define KEY_Number      (4)

#define page_0_max                      (3)
#define page_0_min                      (1)
#define page_shexiangtou_max            (4)
#define page_shexiangtou_min            (8)
#define page_pid_max                    (5)
#define page_pid_min                    (0)

#define mpu6050_0                       (line_unit)
#define tuxiang_0                       (2*line_unit)
#define pid_0                           (3*line_unit)

#define kp_31                           (0)
#define ki_31                           (line_unit)
#define kd_31                           (2*line_unit)
#define dt_31                           (3*line_unit)
#define target_31                       (4*line_unit)

#define line_unit                       (17)
#define column_unit                     (16)

extern Button_Stash Button[KEY_Number];

void menu_page(void);
void button_status_get(uint8 interrupt_time);
void menu_button_init(void);


#endif /* BUTTON_H_ */
