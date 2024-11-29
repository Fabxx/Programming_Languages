/**
 * @file anotherHeader.h
 * @author Fabxx
 * @brief
 * 
 *              -All header files should have header guards to avoid declaration duplication issues.
                 The first include will copy the declarations in the respective source code, but after
                 that, all other #include directives will referr to the already copied definitions in 
                 the source file, because the header has already been defined.
 * 
 *              -A good naming convention to avoid conflicts with header guards is to have complex names
 *               with uppercase and underscores.
 * 
 *              - #pragma once preprocessor directive has the same behavior as header guards. 
 *               However this is not defined by the C++ standard and some compilers may not 
 *               support it.
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
