#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (((MASK_ABICALLS|MASK_SPLIT_ADDRESSES))|MASK_EXPLICIT_RELOCS)
#ifdef IN_GCC
# include "options.h"
# include "config/elfos.h"
# include "config/mips/mips.h"
# include "config/mips/elf.h"
# include "config/os161.h"
# include "config/os161-elf.h"
# include "config/mips/os161.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */