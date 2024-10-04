/**
 * @file anotherHeader.h
 * @author Fabxx
 * @brief Header guards are designed to ensure that the contents of a given 
 *        header file are not copied more than once into any single file, 
 *        in order to prevent duplicate definitions.
          
          Duplicate declarations are fine but even if your header file is composed of 
          all declarations (no definitions) it’s still a best practice to include header guards.

          header guards do not prevent the contents of a header file from being copied (once) 
          into separate project files. This is a good thing, because we often need to reference the contents 
          of a given header from different project files.
 * 
 *       NOTES:
 * 
 *              -All header files should have header guards to avoid definition duplication issues.
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
