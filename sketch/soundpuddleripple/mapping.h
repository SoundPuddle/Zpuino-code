#ifndef __MAPPING_H__
#define __MAPPING_H__

extern unsigned int ledmapping[];
#define FLUSH_OFFSET 3912 /* In words */
#define FLUSH_SIZE 36 /* In words */
#define DIRECTMAP_OFFSET 1956 /* In words */ 
#define NUMLEDS 1920 
extern int getLedCount();

#endif
