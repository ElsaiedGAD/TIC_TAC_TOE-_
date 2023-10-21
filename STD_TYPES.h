
#ifndef _STD_TYPES_H
#define _STD_TYPES_H


#define CPU_TYPE_8   8
#define CPU_TYPE_16  16
#define CPU_TYPE_32  32
#define CPU_TYPE_64  64


/******************************/

#define CPU_TYPE (CPU_TYPE_64)
/********************************/

#if (CPU_TYPE == CPU_TYPE_64)
typedef unsigned char  boolean ;
typedef unsigned char  uint_8  ;
typedef unsigned short uint_16 ;
typedef unsigned int   uint_32 ;
typedef unsigned long long  uint_64 ;

typedef signed char  sint_8  ;
typedef signed short sint_16 ;
typedef signed int   sint_32 ;
typedef signed long long  sint_64 ;

typedef float  float_32 ;
typedef double float_64 ;
#endif
/***********************************/

#if (CPU_TYPE == CPU_TYPE_32)
typedef unsigned char  boolean ;
typedef unsigned char  uint_8  ;
typedef unsigned short uint_16 ;
typedef unsigned long   uint_32 ;
typedef unsigned long long  uint_64 ;

typedef signed char  sint_8  ;
typedef signed short sint_16 ;
typedef signed long   sint_32 ;
typedef signed long long  sint_64 ;

typedef float  float_32 ;
typedef double float_64 ;
#endif
/***********************************/

#if (CPU_TYPE == CPU_TYPE_16)
typedef unsigned char  boolean ;
typedef unsigned char  uint_8  ;
typedef unsigned short uint_16 ;
typedef unsigned long   uint_32 ;
typedef unsigned long long  uint_64 ;

typedef signed char  sint_8  ;
typedef signed short sint_16 ;
typedef signed long   sint_32 ;
typedef signed long long  sint_64 ;

typedef float  float_32 ;
typedef double float_64 ;
#endif
/***********************************/

#endif // _STD_TYPES_H
