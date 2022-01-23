#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

typedef const char* cstring;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;

#include "glad/glad.h"
char std_int8_1char(char x);
char std_int8_16_1short(short x);
char std_int8_32_1int(int x);
char std_int8_64_1long(long long x);
char std_int8_uint8_1uchar(uchar x);
char std_int8_uint16_1ushort(ushort x);
char std_int8_uint32_1uint(uint x);
char std_int8_uint64_1ulong(ulong x);
short std_int16_8_1char(char x);
short std_int16_1short(short x);
short std_int16_32_1int(int x);
short std_int16_64_1long(long long x);
short std_int16_uint8_1uchar(uchar x);
short std_int16_uint16_1ushort(ushort x);
short std_int16_uint32_1uint(uint x);
short std_int16_uint64_1ulong(ulong x);
int std_int32_8_1char(char x);
int std_int32_16_1short(short x);
int std_int32_1int(int x);
int std_int32_64_1long(long long x);
int std_int32_uint8_1uchar(uchar x);
int std_int32_uint16_1ushort(ushort x);
int std_int32_uint32_1uint(uint x);
int std_int32_uint64_1ulong(ulong x);
long long std_int64_8_1char(char x);
long long std_int64_16_1short(short x);
long long std_int64_32_1int(int x);
long long std_int64_1long(long long x);
long long std_int64_uint8_1uchar(uchar x);
long long std_int64_uint16_1ushort(ushort x);
long long std_int64_uint32_1uint(uint x);
long long std_int64_uint64_1ulong(ulong x);
uchar std_uint8_int8_1char(char x);
uchar std_uint8_int16_1short(short x);
uchar std_uint8_int32_1int(int x);
uchar std_uint8_int64_1long(long long x);
uchar std_uint8_1uchar(uchar x);
uchar std_uint8_16_1ushort(ushort x);
uchar std_uint8_32_1uint(uint x);
uchar std_uint8_64_1ulong(ulong x);
ushort std_uint16_int8_1char(char x);
ushort std_uint16_int16_1short(short x);
ushort std_uint16_int32_1int(int x);
ushort std_uint16_int64_1long(long long x);
ushort std_uint16_1ushort(ushort x);
ushort std_uint16_8_1uchar(uchar x);
ushort std_uint16_32_1uint(uint x);
ushort std_uint16_64_1ulong(ulong x);
uint std_uint32_int8_1char(char x);
uint std_uint32_int16_1short(short x);
uint std_uint32_int32_1int(int x);
uint std_uint32_int64_1long(long long x);
uint std_uint32_1uint(uint x);
uint std_uint32_8_1uchar(uchar x);
uint std_uint32_16_1ushort(ushort x);
uint std_uint32_64_1ulong(ulong x);
ulong std_uint64_int8_1char(char x);
ulong std_uint64_int16_1short(short x);
ulong std_uint64_int32_1int(int x);
ulong std_uint64_int64_1long(long long x);
ulong std_uint64_1ulong(ulong x);
ulong std_uint64_8_1uchar(uchar x);
ulong std_uint64_16_1ushort(ushort x);
ulong std_uint64_32_1uint(uint x);
ulong std_uint64_64_1ulong(ulong x);
#include "GLFW/glfw3.h"
int main(void);

char stdINT8_MIN = (char )(-128);
char stdINT8_MAX = (char )127;
short stdINT16_MIN = (short )(-32768);
short stdINT16_MAX = (short )32767;
int stdINT32_MIN = (int )(-2147483647);
int stdINT32_MAX = (int )2147483647;
long long stdINT64_MIN = (long long )(-2147483647);
long long stdINT64_MAX = (long long )2147483647;
uchar stdUINT8_MAX = (uchar )255;
ushort stdUINT16_MAX = (ushort )65535;
uint stdUINT32_MAX = (uint )2147483647;
ulong stdUINT64_MAX = (ulong )2147483647;
char stdINT_LEAST8_MIN = (char )(-128);
char stdINT_LEAST8_MAX = (char )127;
short stdINT_LEAST16_MIN = (short )(-32768);
short stdINT_LEAST16_MAX = (short )32767;
int stdINT_LEAST32_MIN = (int )(-2147483647);
int stdINT_LEAST32_MAX = (int )2147483647;
long long stdINT_LEAST64_MIN = (long long )(-2147483647);
long long stdINT_LEAST64_MAX = (long long )2147483647;
uchar stdUINT_LEAST8_MAX = (uchar )255;
ushort stdUINT_LEAST16_MAX = (ushort )65535;
uint stdUINT_LEAST32_MAX = (uint )2147483647;
ulong stdUINT_LEAST64_MAX = (ulong )2147483647;
char stdINT_FAST8_MIN = (char )(-128);
char stdINT_FAST8_MAX = (char )127;
short stdINT_FAST16_MIN = (short )(-32768);
short stdINT_FAST16_MAX = (short )32767;
int stdINT_FAST32_MIN = (int )(-2147483647);
int stdINT_FAST32_MAX = (int )2147483647;
long long stdINT_FAST64_MIN = (long long )(-2147483647);
long long stdINT_FAST64_MAX = (long long )2147483647;
uchar stdUINT_FAST8_MAX = (uchar )255;
ushort stdUINT_FAST16_MAX = (ushort )65535;
uint stdUINT_FAST32_MAX = (uint )2147483647;
ulong stdUINT_FAST64_MAX = (ulong )2147483647;
long long stdINTPTR_MIN = (long long )(-2147483647);
long long stdINTPTR_MAX = (long long )2147483647;
ulong stdUINTPTR_MAX = (ulong )2147483647;
long long stdPTRDIFF_MIN = (long long )(-2147483647);
long long stdPTRDIFF_MAX = (long long )2147483647;
ulong stdSIZE_MAX = (ulong )2147483647;
int stdSIG_ATOMIC_MIN = (int )(-2147483647);
int stdSIG_ATOMIC_MAX = (int )2147483647;
int stdWCHAR_MIN = (int )(-2147483647);
int stdWCHAR_MAX = (int )2147483647;
long long stdWINT_MIN = (long long )(-2147483647);
long long stdWINT_MAX = (long long )2147483647;
char std_int8_1char(char x) {
return (char )x;
}
char std_int8_16_1short(short x) {
return (char )x;
}
char std_int8_32_1int(int x) {
return (char )x;
}
char std_int8_64_1long(long long x) {
return (char )x;
}
char std_int8_uint8_1uchar(uchar x) {
return (char )x;
}
char std_int8_uint16_1ushort(ushort x) {
return (char )x;
}
char std_int8_uint32_1uint(uint x) {
return (char )x;
}
char std_int8_uint64_1ulong(ulong x) {
return (char )x;
}
short std_int16_8_1char(char x) {
return (short )x;
}
short std_int16_1short(short x) {
return (short )x;
}
short std_int16_32_1int(int x) {
return (short )x;
}
short std_int16_64_1long(long long x) {
return (short )x;
}
short std_int16_uint8_1uchar(uchar x) {
return (short )x;
}
short std_int16_uint16_1ushort(ushort x) {
return (short )x;
}
short std_int16_uint32_1uint(uint x) {
return (short )x;
}
short std_int16_uint64_1ulong(ulong x) {
return (short )x;
}
int std_int32_8_1char(char x) {
return (int )x;
}
int std_int32_16_1short(short x) {
return (int )x;
}
int std_int32_1int(int x) {
return (int )x;
}
int std_int32_64_1long(long long x) {
return (int )x;
}
int std_int32_uint8_1uchar(uchar x) {
return (int )x;
}
int std_int32_uint16_1ushort(ushort x) {
return (int )x;
}
int std_int32_uint32_1uint(uint x) {
return (int )x;
}
int std_int32_uint64_1ulong(ulong x) {
return (int )x;
}
long long std_int64_8_1char(char x) {
return (long long )x;
}
long long std_int64_16_1short(short x) {
return (long long )x;
}
long long std_int64_32_1int(int x) {
return (long long )x;
}
long long std_int64_1long(long long x) {
return (long long )x;
}
long long std_int64_uint8_1uchar(uchar x) {
return (long long )x;
}
long long std_int64_uint16_1ushort(ushort x) {
return (long long )x;
}
long long std_int64_uint32_1uint(uint x) {
return (long long )x;
}
long long std_int64_uint64_1ulong(ulong x) {
return (long long )x;
}
uchar std_uint8_int8_1char(char x) {
return (uchar )x;
}
uchar std_uint8_int16_1short(short x) {
return (uchar )x;
}
uchar std_uint8_int32_1int(int x) {
return (uchar )x;
}
uchar std_uint8_int64_1long(long long x) {
return (uchar )x;
}
uchar std_uint8_1uchar(uchar x) {
return (uchar )x;
}
uchar std_uint8_16_1ushort(ushort x) {
return (uchar )x;
}
uchar std_uint8_32_1uint(uint x) {
return (uchar )x;
}
uchar std_uint8_64_1ulong(ulong x) {
return (uchar )x;
}
ushort std_uint16_int8_1char(char x) {
return (ushort )x;
}
ushort std_uint16_int16_1short(short x) {
return (ushort )x;
}
ushort std_uint16_int32_1int(int x) {
return (ushort )x;
}
ushort std_uint16_int64_1long(long long x) {
return (ushort )x;
}
ushort std_uint16_1ushort(ushort x) {
return (ushort )x;
}
ushort std_uint16_8_1uchar(uchar x) {
return (ushort )x;
}
ushort std_uint16_32_1uint(uint x) {
return (ushort )x;
}
ushort std_uint16_64_1ulong(ulong x) {
return (ushort )x;
}
uint std_uint32_int8_1char(char x) {
return (uint )x;
}
uint std_uint32_int16_1short(short x) {
return (uint )x;
}
uint std_uint32_int32_1int(int x) {
return (uint )x;
}
uint std_uint32_int64_1long(long long x) {
return (uint )x;
}
uint std_uint32_1uint(uint x) {
return (uint )x;
}
uint std_uint32_8_1uchar(uchar x) {
return (uint )x;
}
uint std_uint32_16_1ushort(ushort x) {
return (uint )x;
}
uint std_uint32_64_1ulong(ulong x) {
return (uint )x;
}
ulong std_uint64_int8_1char(char x) {
return (ulong )x;
}
ulong std_uint64_int16_1short(short x) {
return (ulong )x;
}
ulong std_uint64_int32_1int(int x) {
return (ulong )x;
}
ulong std_uint64_int64_1long(long long x) {
return (ulong )x;
}
ulong std_uint64_1ulong(ulong x) {
return (ulong )x;
}
ulong std_uint64_8_1uchar(uchar x) {
return (ulong )x;
}
ulong std_uint64_16_1ushort(ushort x) {
return (ulong )x;
}
ulong std_uint64_32_1uint(uint x) {
return (ulong )x;
}
ulong std_uint64_64_1ulong(ulong x) {
return (ulong )x;
}
int main(void) {
glfwInit();
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
GLFWwindow *win = glfwCreateWindow(1080, 720, "Test", ((void*)0), ((void*)0));
while ((!glfwWindowShouldClose(win)))
{
glfwPollEvents();
glfwSwapBuffers(win);
}
glfwDestroyWindow(win);
glfwTerminate();
return 0;
}
