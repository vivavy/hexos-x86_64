/*
 * Copyright (c) 2024 Ivan Chetchasov <chetvano@gmail.com>. All rights reserved.
 * Use of this source code is governed by a Mozilla Public License 2.0
 * that can be found in the LICENSE file.
 * 
 * This file contains the platform-specific implementations of functions and macros.
 */

#include <platform.h>

void hlt(void)
{
    while (true)
    {
        asm volatile("hlt");
    }
}
