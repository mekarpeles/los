#ifndef KMAIN_H
#define KMAIN_H

#include <compiler.h>
#include <stdint.h>
#include <multiboot.h>

extern struct multiboot_info boot_info;

BEGIN_DECLS

void multiboot_main(struct multiboot_info *mb_boot_info, uint64_t magic);

END_DECLS

#endif
