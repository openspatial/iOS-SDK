//
//  OpenSpatialConstants.h
//  OpenSpatial
//
//  Created by Neel on 8/11/15.
//  Copyright (c) 2015 Nod Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#define DEPRECATED_ATTRIBUTE        __attribute__((deprecated))


typedef enum ODataTag {
    OS_RAW_ACCELEROMETER_TAG = 0x20, /* 3x int16: x y z */
    OS_RAW_GYRO_TAG          = 0x21, /* 3x int16: x y z */
    OS_RAW_COMPASS_TAG       = 0x22, /* 3x int16: x y z */
    OS_EULER_ANGLES_TAG      = 0x23, /* 3x int16: roll pitch yaw */
    OS_TRANSLATIONS_TAG      = 0x24, /* 3x int16: x y z */
    OS_ANALOG_DATA_TAG       = 0x25, /* 3X int16: x y z */
    OS_RELATIVE_XY_TAG       = 0x10, /* 2x int16: deltax deltay */
    OS_DIRECTION_GESTURE_TAG = 0xa0, /* 1x uint8: enumeration */
    OS_SLIDER_GESTURE_TAG    = 0xa1, /* 1x uint8: enumeration */
    OS_BUTTON_EVENT_TAG      = 0xa2, /* 1x uint8: button_number */
    OS_BOUNDARY_TAG          = 0x9d, /* No data; end of related data group */
    OS_HEARTBEAT_TAG         = 0x9e, /* No data; "I am alive" */
    OS_NULL_TAG              = 0x9f, /* No data; filler */
} ODataTag;

typedef enum OControlAction{
    OCONTROL_GET_PARAMETER = 0,
    OCONTROL_SET_PARAMETER = 1,
    OCONTROL_GET_ID = 2,
    OCONTROL_GET_PARAMETER_RANGE = 3,
    OCONTROL_ENABLE_DATA = 4,
    OCONTROL_DISABLE_DATA = 5,
} OControlAction;


#define X @"x"
#define Y @"y"
#define Z @"z"
#define TRIGGER @"trigger"
#define ROLL @"roll"
#define PITCH @"pitch"
#define YAW @"yaw"
#define TOUCH_0 @"touch0"
#define TOUCH_1 @"touch1"
#define TOUCH_2 @"touch2"
#define TACTILE_0 @"tactile0"
#define TACTILE_1 @"tactile1"
#define GEST_OPCODE @"gest"
#define GEST_DATA @"data"
#define G_OP_SCROLL 0x0001
#define G_OP_DIRECTION 0x0002
#define GRIGHT 0x01
#define GLEFT 0x02
#define GDOWN 0x03
#define GUP 0x04
#define GCW 0x05
#define GCCW 0x06
#define SLIDE_LEFT 0x01
#define SLIDE_RIGHT 0x02
#define BUTTON_UNUSED 0
#define BUTTON_UP 2
#define BUTTON_DOWN 1
#define XA @"accelerometer x"
#define YA @"accelerometer y"
#define ZA @"accelerometer z"
#define XG @"gyroscope x"
#define YG @"gyroscope y"
#define ZG @"gyroscope y"

@interface OpenSpatialConstants : NSObject

@end
