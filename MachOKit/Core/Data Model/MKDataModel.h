//----------------------------------------------------------------------------//
//|
//|             MachOKit - A Lightweight Mach-O Parsing Library
//! @file       MKDataModel.h
//!
//! @author     D.V.
//! @copyright  Copyright (c) 2014-2015 D.V. All rights reserved.
//|
//| Permission is hereby granted, free of charge, to any person obtaining a
//| copy of this software and associated documentation files (the "Software"),
//| to deal in the Software without restriction, including without limitation
//| the rights to use, copy, modify, merge, publish, distribute, sublicense,
//| and/or sell copies of the Software, and to permit persons to whom the
//| Software is furnished to do so, subject to the following conditions:
//|
//| The above copyright notice and this permission notice shall be included
//| in all copies or substantial portions of the Software.
//|
//| THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//| OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//| MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//| IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//| CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//| TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//| SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//----------------------------------------------------------------------------//

#include <MachOKit/macho.h>
#import <Foundation/Foundation.h>

#import <MachOKit/MKAbstractDataModel.h>
#import <MachOKit/MKILP32DataModel.h>
#import <MachOKit/MKLP64DataModel.h>
#import <MachOKit/MKX86DataModel.h>
#import <MachOKit/MKARMDataModel.h>

#import <MachOKit/MKDarwinDataModels.h>

#define MKSwapLValue16(LVALUE, DATA_MODEL) \
    (LVALUE = DATA_MODEL.byteOrder->swap16( LVALUE ))
#define MKSwapLValue32(LVALUE, DATA_MODEL) \
    (LVALUE = DATA_MODEL.byteOrder->swap32( LVALUE ))
#define MKSwapLValue64(LVALUE, DATA_MODEL) \
    (LVALUE = DATA_MODEL.byteOrder->swap64( LVALUE ))

#define MKSwapLValue16s(LVALUE, DATA_MODEL) \
    (LVALUE = (int16_t)DATA_MODEL.byteOrder->swap16( (uint16_t)LVALUE ))
#define MKSwapLValue32s(LVALUE, DATA_MODEL) \
    (LVALUE = (int32_t)DATA_MODEL.byteOrder->swap32( (uint32_t)LVALUE ))
#define MKSwapLValue64s(LVALUE, DATA_MODEL) \
    (LVALUE = (int32_t)DATA_MODEL.byteOrder->swap64( (uint32_t)LVALUE ))

