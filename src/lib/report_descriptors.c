#include "report_descriptors.h"
typedef enum {
    HID_USAGE_POINTER = 0x01,
    HID_USAGE_MOUSE = 0x02,
    HID_USAGE_GAMEPAD = 0x05,
    HID_USAGE_KEYBOARD = 0x06,
    HID_USAGE_HAT_SWITCH = 0x39,
    HID_USAGE_X = 0x30,
    HID_USAGE_Y,
    HID_USAGE_Z,
    HID_USAGE_Rx,
    HID_USAGE_Ry,
    HID_USAGE_Rz,
    HID_USAGE_Slider,
    HID_USAGE_Dial,
    HID_USAGE_Wheel,
    HID_USAGE_COUNTED_BUFFER = 0x3A,
    HID_USAGE_CONSUMER_AC_PAN = 0x0238
} HID_Usage;

typedef enum {
    HID_USAGE_PAGE_GENERIC_DESKTOP = 0x01,
    HID_USAGE_PAGE_KEYBOARD = 0x07,
    HID_USAGE_PAGE_LED = 0x08,
    HID_USAGE_PAGE_BUTTON = 0x09,
    HID_USAGE_PAGE_CONSUMER = 0x0c,
} HID_Usage_Page;

typedef enum {
    HID_COLLECTION_PHYSICAL = 0x00,
    HID_COLLECTION_APPLICATION = 0x01,
    HID_COLLECTION_LOGICAL = 0x02,
} HID_Collection;

typedef enum {
    HID_UNIT_NONE,
    HID_UNIT_DEGREES = 0x14
} HID_Unit;

const USB_Descriptor_HIDReport_Datatype_t ps3_report_descriptor[] = {
    // Controller
    HID_RI_USAGE_PAGE(8, HID_USAGE_PAGE_GENERIC_DESKTOP),
    HID_RI_USAGE(8, HID_USAGE_GAMEPAD),
    HID_RI_COLLECTION(8, HID_COLLECTION_APPLICATION),
    HID_RI_LOGICAL_MINIMUM(8, 0),
    HID_RI_LOGICAL_MAXIMUM(8, 1),
    HID_RI_PHYSICAL_MINIMUM(8, 0),
    HID_RI_PHYSICAL_MAXIMUM(8, 1),
    HID_RI_REPORT_SIZE(8, 1),
    HID_RI_REPORT_COUNT(8, 13),
    HID_RI_USAGE_PAGE(8, HID_USAGE_PAGE_BUTTON),
    HID_RI_USAGE_MINIMUM(8, 0x01),
    HID_RI_USAGE_MAXIMUM(8, 0x0D),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                        HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                        HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION),
    HID_RI_REPORT_COUNT(8, 0x03),
    HID_RI_INPUT(8, HID_IOF_CONSTANT | HID_IOF_ARRAY | HID_IOF_ABSOLUTE |
                        HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                        HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION),
    HID_RI_USAGE_PAGE(8, HID_USAGE_PAGE_GENERIC_DESKTOP),
    HID_RI_LOGICAL_MAXIMUM(8, 7),
    HID_RI_PHYSICAL_MAXIMUM(16, 315),
    HID_RI_REPORT_SIZE(8, 4),
    HID_RI_REPORT_COUNT(8, 0x01),
    HID_RI_UNIT(8, HID_UNIT_DEGREES),
    HID_RI_USAGE(8, HID_USAGE_HAT_SWITCH),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                        HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                        HID_IOF_PREFERRED_STATE | HID_IOF_NULLSTATE),
    HID_RI_UNIT(8, HID_UNIT_NONE),
    HID_RI_REPORT_COUNT(8, 0x01),
    HID_RI_INPUT(8, HID_IOF_CONSTANT | HID_IOF_ARRAY | HID_IOF_ABSOLUTE |
                        HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                        HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION),
    HID_RI_LOGICAL_MAXIMUM(16, 255),
    HID_RI_PHYSICAL_MAXIMUM(16, 255),
    HID_RI_USAGE(8, HID_USAGE_X),
    HID_RI_USAGE(8, HID_USAGE_Y),
    HID_RI_USAGE(8, HID_USAGE_Z),
    HID_RI_USAGE(8, HID_USAGE_Rz),
    HID_RI_REPORT_SIZE(8, 8),
    HID_RI_REPORT_COUNT(8, 4),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                        HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                        HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION),
    HID_RI_USAGE_PAGE(16, 0xFF00),
    HID_RI_USAGE(8, 0x20),
    HID_RI_USAGE(8, 0x21),
    HID_RI_USAGE(8, 0x22),
    HID_RI_USAGE(8, 0x23),
    HID_RI_USAGE(8, 0x24),
    HID_RI_USAGE(8, 0x25),
    HID_RI_USAGE(8, 0x26),
    HID_RI_USAGE(8, 0x27),
    HID_RI_USAGE(8, 0x28),
    HID_RI_USAGE(8, 0x29),
    HID_RI_USAGE(8, 0x2A),
    HID_RI_USAGE(8, 0x2B),
    HID_RI_REPORT_COUNT(8, 12),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                        HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                        HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION),
    HID_RI_USAGE(16, 0x2621),
    HID_RI_REPORT_COUNT(8, 32),
    HID_RI_FEATURE(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                          HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                          HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION | HID_IOF_NON_VOLATILE),
    HID_RI_USAGE(16, 0x2621),
    HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                         HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                         HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION |
                         HID_IOF_NON_VOLATILE),
    HID_RI_LOGICAL_MAXIMUM(16, 1023),
    HID_RI_PHYSICAL_MAXIMUM(16, 1023),
    HID_RI_USAGE(8, 0x2C),
    HID_RI_USAGE(8, 0x2D),
    HID_RI_USAGE(8, 0x2E),
    HID_RI_USAGE(8, 0x2F),
    HID_RI_REPORT_SIZE(8, 16),
    HID_RI_REPORT_COUNT(8, 4),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                        HID_IOF_NO_WRAP | HID_IOF_LINEAR |
                        HID_IOF_PREFERRED_STATE | HID_IOF_NO_NULL_POSITION |
                        HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
};

const USB_Descriptor_HIDReport_Datatype_t kbd_report_descriptor[] = {
    HID_RI_USAGE_PAGE(8, HID_USAGE_PAGE_GENERIC_DESKTOP),
    HID_RI_USAGE(8, HID_USAGE_KEYBOARD),
    HID_RI_COLLECTION(8, 0),
    HID_RI_REPORT_ID(8, REPORT_ID_KBD),
    HID_RI_USAGE_PAGE(8, 0),
    HID_RI_USAGE_MINIMUM(8, 0xE0),
    HID_RI_USAGE_MAXIMUM(8, 0xE7),
    HID_RI_LOGICAL_MINIMUM(8, 0x00),
    HID_RI_LOGICAL_MAXIMUM(8, 0x01),
    HID_RI_REPORT_SIZE(8, 0x01),
    HID_RI_REPORT_COUNT(8, 0x08),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
    HID_RI_REPORT_COUNT(8, 0x01),
    HID_RI_REPORT_SIZE(8, 0x08),
    HID_RI_INPUT(8, HID_IOF_CONSTANT),
    HID_RI_USAGE_PAGE(8, 0),
    HID_RI_USAGE_MINIMUM(8, 0x01),
    HID_RI_USAGE_MAXIMUM(8, 0x05),
    HID_RI_REPORT_COUNT(8, 0x05),
    HID_RI_REPORT_SIZE(8, 0x01),
    HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE |
                         HID_IOF_NON_VOLATILE),
    HID_RI_REPORT_COUNT(8, 0x01),
    HID_RI_REPORT_SIZE(8, 0x03),
    HID_RI_OUTPUT(8, HID_IOF_CONSTANT),
    HID_RI_LOGICAL_MINIMUM(8, 0x00),
    HID_RI_LOGICAL_MAXIMUM(16, 0xFF),
    HID_RI_USAGE_PAGE(8, 0x07),
    HID_RI_USAGE_MINIMUM(8, 0x00),
    HID_RI_USAGE_MAXIMUM(8, 0xFF),
    HID_RI_REPORT_COUNT(8, SIMULTANEOUS_KEYS),
    HID_RI_REPORT_SIZE(8, 0x08),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_ARRAY | HID_IOF_ABSOLUTE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE_PAGE(8, HID_USAGE_PAGE_GENERIC_DESKTOP),
    HID_RI_USAGE(8, HID_USAGE_MOUSE),
    HID_RI_COLLECTION(8, 0),
    HID_RI_REPORT_ID(8, REPORT_ID_MOUSE),
    HID_RI_USAGE(8, HID_USAGE_POINTER),
    HID_RI_COLLECTION(8, 0),
    HID_RI_USAGE_PAGE(8, 0),
    HID_RI_USAGE_MINIMUM(8, 0x01),
    HID_RI_USAGE_MAXIMUM(8, Buttons),
    HID_RI_LOGICAL_MINIMUM(8, 0x00),
    HID_RI_LOGICAL_MAXIMUM(8, 0x01),
    HID_RI_REPORT_COUNT(8, Buttons),
    HID_RI_REPORT_SIZE(8, 0x01),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
    HID_RI_REPORT_SIZE(8, (8 - (Buttons % 8))),
    HID_RI_REPORT_COUNT(8, 0x01),
    HID_RI_INPUT(8, HID_IOF_CONSTANT | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
    HID_RI_USAGE_PAGE(8, HID_USAGE_PAGE_GENERIC_DESKTOP),
    HID_RI_USAGE(8, HID_USAGE_X),
    HID_RI_USAGE(8, HID_USAGE_Y),
    HID_RI_USAGE(8, HID_USAGE_Wheel),
    HID_RI_LOGICAL_MINIMUM(8, -127),
    HID_RI_LOGICAL_MAXIMUM(8, 127),
    HID_RI_REPORT_COUNT(8, 0x03),
    HID_RI_REPORT_SIZE(8, 8),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE |
                        (AbsoluteCoords ? HID_IOF_ABSOLUTE : HID_IOF_RELATIVE)),
    HID_RI_USAGE_PAGE(8, 0),
    HID_RI_USAGE(16, 0),
    HID_RI_LOGICAL_MINIMUM(16, -127),
    HID_RI_LOGICAL_MAXIMUM(16, 127),
    HID_RI_REPORT_COUNT(8, 0x01),
    HID_RI_REPORT_SIZE(8, 8),
    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_RELATIVE),
    HID_RI_END_COLLECTION(0),
    HID_RI_END_COLLECTION(0),
};