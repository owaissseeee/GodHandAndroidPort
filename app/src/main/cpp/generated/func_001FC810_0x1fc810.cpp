#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001FC810
// Address: 0x1fc810 - 0x1fc988
void func_001FC810_0x1fc810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FC810_0x1fc810");
#endif

    switch (ctx->pc) {
        case 0x1fc860u: goto label_1fc860;
        case 0x1fc888u: goto label_1fc888;
        case 0x1fc900u: goto label_1fc900;
        default: break;
    }

    ctx->pc = 0x1fc810u;

    // 0x1fc810: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x1fc810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1fc814: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1fc814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1fc818: 0x11000058  beqz        $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1FC818u;
    {
        const bool branch_taken_0x1fc818 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC818u;
        // 0x1fc81c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc818) {
            ctx->pc = 0x1FC97Cu;
            goto label_1fc97c;
        }
    }
    ctx->pc = 0x1FC820u;
    // 0x1fc820: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc824: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x1fc824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
    // 0x1fc828: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1fc828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1fc82c: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1FC82Cu;
    {
        const bool branch_taken_0x1fc82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC82Cu;
        // 0x1fc830: 0x250b0038  addiu       $t3, $t0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc82c) {
            ctx->pc = 0x1FC97Cu;
            goto label_1fc97c;
        }
    }
    ctx->pc = 0x1FC834u;
    // 0x1fc834: 0x8d6300a0  lw          $v1, 0xA0($t3)
    ctx->pc = 0x1fc834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x1fc838: 0x18600050  blez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1FC838u;
    {
        const bool branch_taken_0x1fc838 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1FC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC838u;
        // 0x1fc83c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc838) {
            ctx->pc = 0x1FC97Cu;
            goto label_1fc97c;
        }
    }
    ctx->pc = 0x1FC840u;
    // 0x1fc840: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FC840u;
    {
        const bool branch_taken_0x1fc840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc840) {
            ctx->pc = 0x1FC844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC840u;
            // 0x1fc844: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8ECu;
            goto label_1fc8ec;
        }
    }
    ctx->pc = 0x1FC848u;
    // 0x1fc848: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fc848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fc84c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FC84Cu;
    {
        const bool branch_taken_0x1fc84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC84Cu;
        // 0x1fc850: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc84c) {
            ctx->pc = 0x1FC8E8u;
            goto label_1fc8e8;
        }
    }
    ctx->pc = 0x1FC854u;
    // 0x1fc854: 0x250d0088  addiu       $t5, $t0, 0x88
    ctx->pc = 0x1fc854u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 136));
    // 0x1fc858: 0x8d6200a0  lw          $v0, 0xA0($t3)
    ctx->pc = 0x1fc858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x1fc85c: 0x0  nop
    ctx->pc = 0x1fc85cu;
    // NOP
label_1fc860:
    // 0x1fc860: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fc860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc864: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fc864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc868: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1fc868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fc86c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FC86Cu;
    {
        const bool branch_taken_0x1fc86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC86Cu;
        // 0x1fc870: 0x24ec0001  addiu       $t4, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc86c) {
            ctx->pc = 0x1FC8D4u;
            goto label_1fc8d4;
        }
    }
    ctx->pc = 0x1FC874u;
    // 0x1fc874: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1fc874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1fc878: 0x1624021  addu        $t0, $t3, $v0
    ctx->pc = 0x1fc878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1fc87c: 0x1a25021  addu        $t2, $t5, $v0
    ctx->pc = 0x1fc87cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1fc880: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1fc880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc884: 0x0  nop
    ctx->pc = 0x1fc884u;
    // NOP
label_1fc888:
    // 0x1fc888: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x1fc888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fc88c: 0xc4e00050  lwc1        $f0, 0x50($a3)
    ctx->pc = 0x1fc88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc890: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fc890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fc894: 0x0  nop
    ctx->pc = 0x1fc894u;
    // NOP
    // 0x1fc898: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC898u;
    {
        const bool branch_taken_0x1fc898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fc898) {
            ctx->pc = 0x1FC89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC898u;
            // 0x1fc89c: 0x8d6200a0  lw          $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8C0u;
            goto label_1fc8c0;
        }
    }
    ctx->pc = 0x1FC8A0u;
    // 0x1fc8a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fc8a4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1fc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc8a8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1fc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1fc8ac: 0xc4e00050  lwc1        $f0, 0x50($a3)
    ctx->pc = 0x1fc8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc8b0: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x1fc8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1fc8b4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1fc8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1fc8b8: 0xe4e10050  swc1        $f1, 0x50($a3)
    ctx->pc = 0x1fc8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 80), bits); }
    // 0x1fc8bc: 0x8d6200a0  lw          $v0, 0xA0($t3)
    ctx->pc = 0x1fc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
label_1fc8c0:
    // 0x1fc8c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc8c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fc8c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8c8: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1fc8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fc8cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FC8CCu;
    {
        const bool branch_taken_0x1fc8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8CCu;
        // 0x1fc8d0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8cc) {
            ctx->pc = 0x1FC888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc888;
        }
    }
    ctx->pc = 0x1FC8D4u;
label_1fc8d4:
    // 0x1fc8d4: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x1fc8d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8d8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fc8dc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1fc8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fc8e0: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1FC8E0u;
    {
        const bool branch_taken_0x1fc8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8e0) {
            ctx->pc = 0x1FC8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC8E0u;
            // 0x1fc8e4: 0x8d6200a0  lw          $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc860;
        }
    }
    ctx->pc = 0x1FC8E8u;
label_1fc8e8:
    // 0x1fc8e8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1fc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1fc8ec:
    // 0x1fc8ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8f0: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x1fc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1fc8f4: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FC8F4u;
    {
        const bool branch_taken_0x1fc8f4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1FC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F4u;
        // 0x1fc8f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8f4) {
            ctx->pc = 0x1FC97Cu;
            goto label_1fc97c;
        }
    }
    ctx->pc = 0x1FC8FCu;
    // 0x1fc8fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fc8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc900:
    // 0x1fc900: 0x24e30038  addiu       $v1, $a3, 0x38
    ctx->pc = 0x1fc900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x1fc904: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x1fc904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x1fc908: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1fc908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fc90c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC90Cu;
    {
        const bool branch_taken_0x1fc90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC90Cu;
        // 0x1fc910: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc90c) {
            ctx->pc = 0x1FC91Cu;
            goto label_1fc91c;
        }
    }
    ctx->pc = 0x1FC914u;
    // 0x1fc914: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC914u;
    {
        const bool branch_taken_0x1fc914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC914u;
        // 0x1fc918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc914) {
            ctx->pc = 0x1FC924u;
            goto label_1fc924;
        }
    }
    ctx->pc = 0x1FC91Cu;
label_1fc91c:
    // 0x1fc91c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fc91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc920: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1fc920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc924:
    // 0x1fc924: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC924u;
    {
        const bool branch_taken_0x1fc924 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc924) {
            ctx->pc = 0x1FC928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC924u;
            // 0x1fc928: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC92Cu;
    // 0x1fc92c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fc930: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x1fc930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
    // 0x1fc934: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1fc934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1fc938: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fc93c: 0x5449000a  bnel        $v0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FC93Cu;
    {
        const bool branch_taken_0x1fc93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1fc93c) {
            ctx->pc = 0x1FC940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC93Cu;
            // 0x1fc940: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC944u;
    // 0x1fc944: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x1fc944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc948: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fc94c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc950: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fc950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fc954: 0x304effff  andi        $t6, $v0, 0xFFFF
    ctx->pc = 0x1fc954u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc958: 0x1c6102b  sltu        $v0, $t6, $a2
    ctx->pc = 0x1fc958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1fc95c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC95Cu;
    {
        const bool branch_taken_0x1fc95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC95Cu;
        // 0x1fc960: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc95c) {
            ctx->pc = 0x1FC97Cu;
            goto label_1fc97c;
        }
    }
    ctx->pc = 0x1FC964u;
    // 0x1fc964: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1fc964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1fc968:
    // 0x1fc968: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fc968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fc96c: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x1fc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1fc970: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1fc970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fc974: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1FC974u;
    {
        const bool branch_taken_0x1fc974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC974u;
        // 0x1fc978: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc974) {
            ctx->pc = 0x1FC900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc900;
        }
    }
    ctx->pc = 0x1FC97Cu;
label_1fc97c:
    // 0x1fc97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC984u;
    // 0x1fc984: 0x0  nop
    ctx->pc = 0x1fc984u;
    // NOP
    ctx->pc = 0x1fc988u;
}
