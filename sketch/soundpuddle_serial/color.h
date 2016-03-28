#include "Arduino.h"
#include <math.h>
#include <stdio.h>

#define hsv_depth 256

/* --- PUBLIC CONSTANTS ----------------------------------------------------- */

/**
 * @brief   The different color encodings which are available
 */
typedef enum {
    COLOR_TYPE_RGB      = 0x00,     /**< Color represented by red, green, and blue levels */
    COLOR_TYPE_HSV,                 /**< Color represented by hue, saturation, anc value */
    COLOR_TYPE_HSL,                 /**< Color represented by hue, saturation, and luminance */
    MAX_COLOR_TYPE,                 /**< Total number of implemented color types */
    COLOR_TYPE_INVALID              /**< Invalid color type */
} color_type_t;

/**
 * @brief   Return values from color operations
 */
typedef enum {
    COLOR_SUCCESS       = 0x00,     /**< Color manipulation was successful */
    COLOR_ERR_TYPE,                 /**< A color has invalid @see color_type_t "type" */
    COLOR_ERR_LEVEL,                /**< A color field has an invalid value */
    MAX_COLOR_ERR,                  /**< Total number of color errors */
    COLOR_ERR_INVALID               /**< Invalid color error */
} color_err_t;

float Hue_2_RGB( float v1, float v2, float vH );
void HSL(float H, float S, float L, float& Rval, float& Gval, float& Bval);
void hsv2rgb(float h, float s, float v, uint8_t& Rvalue, uint8_t& Gvalue, uint8_t& Bvalue);
// void make_rgb_lut(float hue_offset, float hsvalue_floor, float rgain, float ggain, float bgain, int rgb_max);
unsigned long assemble_ledframe(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global);