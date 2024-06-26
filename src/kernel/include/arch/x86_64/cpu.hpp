/*
 * Copyright (c) 2024 Ivan Chetchasov <chetvano@gmail.com>. All rights reserved.
 * Use of this source code is governed by a Mozilla Public License 2.0
 * that can be found in the LICENSE file.
 * 
 * CPU architecture specific definitions.
 */

inline void halt(void) {
    asm volatile("hlt\n\tjmp .-1");
}
