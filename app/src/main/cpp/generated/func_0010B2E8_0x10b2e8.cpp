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

// Function: func_0010B2E8
// Address: 0x10b2e8 - 0x10b5b8
void func_0010B2E8_0x10b2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010B2E8_0x10b2e8");
#endif

    switch (ctx->pc) {
        case 0x10b530u: goto label_10b530;
        case 0x10b56cu: goto label_10b56c;
        default: break;
    }

    ctx->pc = 0x10b2e8u;

    // 0x10b2e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10b2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2ec: 0x8ce205b0  lw          $v0, 0x5B0($a3)
    ctx->pc = 0x10b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1456)));
    // 0x10b2f0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x10b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x10b2f4: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x10B2F4u;
    {
        const bool branch_taken_0x10b2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2f4) {
            ctx->pc = 0x10B2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B2F4u;
            // 0x10b2f8: 0x8ce205b8  lw          $v0, 0x5B8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B378u;
            goto label_10b378;
        }
    }
    ctx->pc = 0x10B2FCu;
    // 0x10b2fc: 0x14a0009b  bnez        $a1, . + 4 + (0x9B << 2)
    ctx->pc = 0x10B2FCu;
    {
        const bool branch_taken_0x10b2fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2FCu;
        // 0x10b300: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2fc) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B304u;
    // 0x10b304: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x10b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x10b308: 0x10620089  beq         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x10B308u;
    {
        const bool branch_taken_0x10b308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B308u;
        // 0x10b30c: 0x240202a5  addiu       $v0, $zero, 0x2A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b308) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B310u;
    // 0x10b310: 0x10620087  beq         $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x10B310u;
    {
        const bool branch_taken_0x10b310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b310) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B318u;
    // 0x10b318: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x10b318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x10b31c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10b31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x10b320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B320u;
    {
        const bool branch_taken_0x10b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B320u;
        // 0x10b324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b320) {
            ctx->pc = 0x10B330u;
            goto label_10b330;
        }
    }
    ctx->pc = 0x10B328u;
    // 0x10b328: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10b328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x10b32c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b330:
    // 0x10b330: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x10b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x10b334: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x10B334u;
    {
        const bool branch_taken_0x10b334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B334u;
        // 0x10b338: 0x2862035b  slti        $v0, $v1, 0x35B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)859) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b334) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B33Cu;
    // 0x10b33c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B33Cu;
    {
        const bool branch_taken_0x10b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B33Cu;
        // 0x10b340: 0x28620359  slti        $v0, $v1, 0x359 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)857) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b33c) {
            ctx->pc = 0x10B354u;
            goto label_10b354;
        }
    }
    ctx->pc = 0x10B344u;
    // 0x10b344: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x10B344u;
    {
        const bool branch_taken_0x10b344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B344u;
        // 0x10b348: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b344) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B34Cu;
    // 0x10b34c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B34Cu;
    {
        const bool branch_taken_0x10b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b34c) {
            ctx->pc = 0x10B36Cu;
            goto label_10b36c;
        }
    }
    ctx->pc = 0x10B354u;
label_10b354:
    // 0x10b354: 0x240203b3  addiu       $v0, $zero, 0x3B3
    ctx->pc = 0x10b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    // 0x10b358: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x10B358u;
    {
        const bool branch_taken_0x10b358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B358u;
        // 0x10b35c: 0x286203b4  slti        $v0, $v1, 0x3B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)948) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b358) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B360u;
    // 0x10b360: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B360u;
    {
        const bool branch_taken_0x10b360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B360u;
        // 0x10b364: 0x2402035d  addiu       $v0, $zero, 0x35D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b360) {
            ctx->pc = 0x10B36Cu;
            goto label_10b36c;
        }
    }
    ctx->pc = 0x10B368u;
    // 0x10b368: 0x24020440  addiu       $v0, $zero, 0x440
    ctx->pc = 0x10b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_10b36c:
    // 0x10b36c: 0x1062007f  beq         $v1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x10B36Cu;
    {
        const bool branch_taken_0x10b36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b36c) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B374u;
    // 0x10b374: 0x8ce205b8  lw          $v0, 0x5B8($a3)
    ctx->pc = 0x10b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1464)));
label_10b378:
    // 0x10b378: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x10b378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x10b37c: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x10B37Cu;
    {
        const bool branch_taken_0x10b37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b37c) {
            ctx->pc = 0x10B380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B37Cu;
            // 0x10b380: 0x8ce205c0  lw          $v0, 0x5C0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B400u;
            goto label_10b400;
        }
    }
    ctx->pc = 0x10B384u;
    // 0x10b384: 0x14a00079  bnez        $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x10B384u;
    {
        const bool branch_taken_0x10b384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B384u;
        // 0x10b388: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b384) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B38Cu;
    // 0x10b38c: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x10b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x10b390: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x10B390u;
    {
        const bool branch_taken_0x10b390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B390u;
        // 0x10b394: 0x240202a5  addiu       $v0, $zero, 0x2A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b390) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B398u;
    // 0x10b398: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x10B398u;
    {
        const bool branch_taken_0x10b398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b398) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B3A0u;
    // 0x10b3a0: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x10b3a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x10b3a4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10b3a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x10b3a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B3A8u;
    {
        const bool branch_taken_0x10b3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3A8u;
        // 0x10b3ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3a8) {
            ctx->pc = 0x10B3B8u;
            goto label_10b3b8;
        }
    }
    ctx->pc = 0x10B3B0u;
    // 0x10b3b0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10b3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x10b3b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b3b8:
    // 0x10b3b8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x10b3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x10b3bc: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x10B3BCu;
    {
        const bool branch_taken_0x10b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3BCu;
        // 0x10b3c0: 0x2862035b  slti        $v0, $v1, 0x35B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)859) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3bc) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B3C4u;
    // 0x10b3c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B3C4u;
    {
        const bool branch_taken_0x10b3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3C4u;
        // 0x10b3c8: 0x28620359  slti        $v0, $v1, 0x359 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)857) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3c4) {
            ctx->pc = 0x10B3DCu;
            goto label_10b3dc;
        }
    }
    ctx->pc = 0x10B3CCu;
    // 0x10b3cc: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x10B3CCu;
    {
        const bool branch_taken_0x10b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3CCu;
        // 0x10b3d0: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3cc) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B3D4u;
    // 0x10b3d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B3D4u;
    {
        const bool branch_taken_0x10b3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b3d4) {
            ctx->pc = 0x10B3F4u;
            goto label_10b3f4;
        }
    }
    ctx->pc = 0x10B3DCu;
label_10b3dc:
    // 0x10b3dc: 0x240203b3  addiu       $v0, $zero, 0x3B3
    ctx->pc = 0x10b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    // 0x10b3e0: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x10B3E0u;
    {
        const bool branch_taken_0x10b3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3E0u;
        // 0x10b3e4: 0x286203b4  slti        $v0, $v1, 0x3B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)948) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3e0) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B3E8u;
    // 0x10b3e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B3E8u;
    {
        const bool branch_taken_0x10b3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3E8u;
        // 0x10b3ec: 0x2402035d  addiu       $v0, $zero, 0x35D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3e8) {
            ctx->pc = 0x10B3F4u;
            goto label_10b3f4;
        }
    }
    ctx->pc = 0x10B3F0u;
    // 0x10b3f0: 0x24020440  addiu       $v0, $zero, 0x440
    ctx->pc = 0x10b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_10b3f4:
    // 0x10b3f4: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x10B3F4u;
    {
        const bool branch_taken_0x10b3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b3f4) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B3FCu;
    // 0x10b3fc: 0x8ce205c0  lw          $v0, 0x5C0($a3)
    ctx->pc = 0x10b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1472)));
label_10b400:
    // 0x10b400: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x10b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x10b404: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x10B404u;
    {
        const bool branch_taken_0x10b404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b404) {
            ctx->pc = 0x10B408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B404u;
            // 0x10b408: 0x8ce205c8  lw          $v0, 0x5C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B488u;
            goto label_10b488;
        }
    }
    ctx->pc = 0x10B40Cu;
    // 0x10b40c: 0x14a00057  bnez        $a1, . + 4 + (0x57 << 2)
    ctx->pc = 0x10B40Cu;
    {
        const bool branch_taken_0x10b40c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B40Cu;
        // 0x10b410: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b40c) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B414u;
    // 0x10b414: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x10b414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x10b418: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x10B418u;
    {
        const bool branch_taken_0x10b418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B418u;
        // 0x10b41c: 0x240202a5  addiu       $v0, $zero, 0x2A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b418) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B420u;
    // 0x10b420: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x10B420u;
    {
        const bool branch_taken_0x10b420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b420) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B428u;
    // 0x10b428: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x10b428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x10b42c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10b42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x10b430: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B430u;
    {
        const bool branch_taken_0x10b430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B430u;
        // 0x10b434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b430) {
            ctx->pc = 0x10B440u;
            goto label_10b440;
        }
    }
    ctx->pc = 0x10B438u;
    // 0x10b438: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10b438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x10b43c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b440:
    // 0x10b440: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x10b444: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x10B444u;
    {
        const bool branch_taken_0x10b444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B444u;
        // 0x10b448: 0x2862035b  slti        $v0, $v1, 0x35B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)859) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b444) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B44Cu;
    // 0x10b44c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B44Cu;
    {
        const bool branch_taken_0x10b44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B44Cu;
        // 0x10b450: 0x28620359  slti        $v0, $v1, 0x359 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)857) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b44c) {
            ctx->pc = 0x10B464u;
            goto label_10b464;
        }
    }
    ctx->pc = 0x10B454u;
    // 0x10b454: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x10B454u;
    {
        const bool branch_taken_0x10b454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B454u;
        // 0x10b458: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b454) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B45Cu;
    // 0x10b45c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B45Cu;
    {
        const bool branch_taken_0x10b45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b45c) {
            ctx->pc = 0x10B47Cu;
            goto label_10b47c;
        }
    }
    ctx->pc = 0x10B464u;
label_10b464:
    // 0x10b464: 0x240203b3  addiu       $v0, $zero, 0x3B3
    ctx->pc = 0x10b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    // 0x10b468: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x10B468u;
    {
        const bool branch_taken_0x10b468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B468u;
        // 0x10b46c: 0x286203b4  slti        $v0, $v1, 0x3B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)948) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b468) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B470u;
    // 0x10b470: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B470u;
    {
        const bool branch_taken_0x10b470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B470u;
        // 0x10b474: 0x2402035d  addiu       $v0, $zero, 0x35D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b470) {
            ctx->pc = 0x10B47Cu;
            goto label_10b47c;
        }
    }
    ctx->pc = 0x10B478u;
    // 0x10b478: 0x24020440  addiu       $v0, $zero, 0x440
    ctx->pc = 0x10b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_10b47c:
    // 0x10b47c: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x10B47Cu;
    {
        const bool branch_taken_0x10b47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b47c) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B484u;
    // 0x10b484: 0x8ce205c8  lw          $v0, 0x5C8($a3)
    ctx->pc = 0x10b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1480)));
label_10b488:
    // 0x10b488: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x10b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x10b48c: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x10B48Cu;
    {
        const bool branch_taken_0x10b48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b48c) {
            ctx->pc = 0x10B490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B48Cu;
            // 0x10b490: 0x8ce205d0  lw          $v0, 0x5D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B510u;
            goto label_10b510;
        }
    }
    ctx->pc = 0x10B494u;
    // 0x10b494: 0x14a00035  bnez        $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x10B494u;
    {
        const bool branch_taken_0x10b494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B494u;
        // 0x10b498: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b494) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B49Cu;
    // 0x10b49c: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x10b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x10b4a0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10B4A0u;
    {
        const bool branch_taken_0x10b4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4A0u;
        // 0x10b4a4: 0x240202a5  addiu       $v0, $zero, 0x2A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4a0) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B4A8u;
    // 0x10b4a8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10B4A8u;
    {
        const bool branch_taken_0x10b4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b4a8) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B4B0u;
    // 0x10b4b0: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x10b4b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x10b4b4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10b4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x10b4b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B4B8u;
    {
        const bool branch_taken_0x10b4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4B8u;
        // 0x10b4bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4b8) {
            ctx->pc = 0x10B4C8u;
            goto label_10b4c8;
        }
    }
    ctx->pc = 0x10B4C0u;
    // 0x10b4c0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10b4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x10b4c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10b4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b4c8:
    // 0x10b4c8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x10b4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x10b4cc: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10B4CCu;
    {
        const bool branch_taken_0x10b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4CCu;
        // 0x10b4d0: 0x2862035b  slti        $v0, $v1, 0x35B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)859) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4cc) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B4D4u;
    // 0x10b4d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B4D4u;
    {
        const bool branch_taken_0x10b4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4D4u;
        // 0x10b4d8: 0x28620359  slti        $v0, $v1, 0x359 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)857) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4d4) {
            ctx->pc = 0x10B4ECu;
            goto label_10b4ec;
        }
    }
    ctx->pc = 0x10B4DCu;
    // 0x10b4dc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10B4DCu;
    {
        const bool branch_taken_0x10b4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4DCu;
        // 0x10b4e0: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4dc) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B4E4u;
    // 0x10b4e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B4E4u;
    {
        const bool branch_taken_0x10b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b4e4) {
            ctx->pc = 0x10B504u;
            goto label_10b504;
        }
    }
    ctx->pc = 0x10B4ECu;
label_10b4ec:
    // 0x10b4ec: 0x240203b3  addiu       $v0, $zero, 0x3B3
    ctx->pc = 0x10b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    // 0x10b4f0: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10B4F0u;
    {
        const bool branch_taken_0x10b4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4F0u;
        // 0x10b4f4: 0x286203b4  slti        $v0, $v1, 0x3B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)948) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4f0) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B4F8u;
    // 0x10b4f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B4F8u;
    {
        const bool branch_taken_0x10b4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4F8u;
        // 0x10b4fc: 0x2402035d  addiu       $v0, $zero, 0x35D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4f8) {
            ctx->pc = 0x10B504u;
            goto label_10b504;
        }
    }
    ctx->pc = 0x10B500u;
    // 0x10b500: 0x24020440  addiu       $v0, $zero, 0x440
    ctx->pc = 0x10b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_10b504:
    // 0x10b504: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10B504u;
    {
        const bool branch_taken_0x10b504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b504) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B50Cu;
    // 0x10b50c: 0x8ce205d0  lw          $v0, 0x5D0($a3)
    ctx->pc = 0x10b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1488)));
label_10b510:
    // 0x10b510: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x10b510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x10b514: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x10B514u;
    {
        const bool branch_taken_0x10b514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b514) {
            ctx->pc = 0x10B5ACu;
            goto label_10b5ac;
        }
    }
    ctx->pc = 0x10B51Cu;
    // 0x10b51c: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x10B51Cu;
    {
        const bool branch_taken_0x10b51c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B51Cu;
        // 0x10b520: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b51c) {
            ctx->pc = 0x10B56Cu;
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B524u;
    // 0x10b524: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x10b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x10b528: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B528u;
    {
        const bool branch_taken_0x10b528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B528u;
        // 0x10b52c: 0x240202a5  addiu       $v0, $zero, 0x2A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b528) {
            ctx->pc = 0x10B538u;
            goto label_10b538;
        }
    }
    ctx->pc = 0x10B530u;
label_10b530:
    // 0x10b530: 0x3e00008  jr          $ra
    ctx->pc = 0x10B530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B530u;
        // 0x10b534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B538u;
label_10b538:
    // 0x10b538: 0x0  nop
    ctx->pc = 0x10b538u;
    // NOP
    // 0x10b53c: 0x0  nop
    ctx->pc = 0x10b53cu;
    // NOP
    // 0x10b540: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10B540u;
    {
        const bool branch_taken_0x10b540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b540) {
            ctx->pc = 0x10B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B548u;
    // 0x10b548: 0x948402fe  lhu         $a0, 0x2FE($a0)
    ctx->pc = 0x10b548u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x10b54c: 0x28820200  slti        $v0, $a0, 0x200
    ctx->pc = 0x10b54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x10b550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B550u;
    {
        const bool branch_taken_0x10b550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B550u;
        // 0x10b554: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b550) {
            ctx->pc = 0x10B560u;
            goto label_10b560;
        }
    }
    ctx->pc = 0x10B558u;
    // 0x10b558: 0x28820300  slti        $v0, $a0, 0x300
    ctx->pc = 0x10b558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x10b55c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b55cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b560:
    // 0x10b560: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x10b560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10b564: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B564u;
    {
        const bool branch_taken_0x10b564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B564u;
        // 0x10b568: 0x2882035b  slti        $v0, $a0, 0x35B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)859) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b564) {
            ctx->pc = 0x10B574u;
            goto label_10b574;
        }
    }
    ctx->pc = 0x10B56Cu;
label_10b56c:
    // 0x10b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B56Cu;
        // 0x10b570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B574u;
label_10b574:
    // 0x10b574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B574u;
    {
        const bool branch_taken_0x10b574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B574u;
        // 0x10b578: 0x28820359  slti        $v0, $a0, 0x359 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)857) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b574) {
            ctx->pc = 0x10B58Cu;
            goto label_10b58c;
        }
    }
    ctx->pc = 0x10B57Cu;
    // 0x10b57c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10B57Cu;
    {
        const bool branch_taken_0x10b57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B57Cu;
        // 0x10b580: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b57c) {
            ctx->pc = 0x10B56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B584u;
    // 0x10b584: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B584u;
    {
        const bool branch_taken_0x10b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b584) {
            ctx->pc = 0x10B5A4u;
            goto label_10b5a4;
        }
    }
    ctx->pc = 0x10B58Cu;
label_10b58c:
    // 0x10b58c: 0x240203b3  addiu       $v0, $zero, 0x3B3
    ctx->pc = 0x10b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 947));
    // 0x10b590: 0x1082fff6  beq         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10B590u;
    {
        const bool branch_taken_0x10b590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B590u;
        // 0x10b594: 0x288203b4  slti        $v0, $a0, 0x3B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)948) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b590) {
            ctx->pc = 0x10B56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B598u;
    // 0x10b598: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B598u;
    {
        const bool branch_taken_0x10b598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B598u;
        // 0x10b59c: 0x2402035d  addiu       $v0, $zero, 0x35D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b598) {
            ctx->pc = 0x10B5A4u;
            goto label_10b5a4;
        }
    }
    ctx->pc = 0x10B5A0u;
    // 0x10b5a0: 0x24020440  addiu       $v0, $zero, 0x440
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
label_10b5a4:
    // 0x10b5a4: 0x1082fff1  beq         $a0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x10B5A4u;
    {
        const bool branch_taken_0x10b5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b5a4) {
            ctx->pc = 0x10B56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b56c;
        }
    }
    ctx->pc = 0x10B5ACu;
label_10b5ac:
    // 0x10b5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5ACu;
        // 0x10b5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B5B4u;
    // 0x10b5b4: 0x0  nop
    ctx->pc = 0x10b5b4u;
    // NOP
    ctx->pc = 0x10b5b8u;
}
