/**
 * @file anotherHeader.h
 * @author Fabxx
 * @brief  
             Behavior of header guards with #ifndef and #define:

               -In the header file you type the code prototype.

               -In the associated source file, you #include and develop the prototypes. 
                This will copy only ONCE the prototypes from the header, and will define the
                header guard.

                -When including in more source files, the developed functions won't be copied again, but instead
                the first copy will be referenced.
 * 
 * 
 *              -A good naming convention to avoid conflicts with header guards is to have complex names
 *               with uppercase and underscores.
 * 
 *              - #pragma once behaves like header guards but it's not standard C++, some compilers might not support it.
 * @version 0.1
 * @date 2024-10-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef ANOTHER_HEADER_H
#define ANOTHER_HEADER_H

int declaredFunc();

#endif
