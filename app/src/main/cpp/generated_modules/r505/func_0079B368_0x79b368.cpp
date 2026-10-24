#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: func_0079B368
// Address: 0x79b368 - 0x79b5a8
void func_0079B368_0x79b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B368_0x79b368");
#endif

    switch (ctx->pc) {
        case 0x79b37cu: goto label_79b37c;
        case 0x79b390u: goto label_79b390;
        case 0x79b448u: goto label_79b448;
        case 0x79b480u: goto label_79b480;
        case 0x79b530u: goto label_79b530;
        default: break;
    }

    ctx->pc = 0x79b368u;

    // 0x79b368: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x79b368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b36c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x79b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x79b370: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79b370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b374: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B374u;
    {
        const bool branch_taken_0x79b374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b374) {
            ctx->pc = 0x79B378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B374u;
            // 0x79b378: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B384u;
            goto label_79b384;
        }
    }
    ctx->pc = 0x79B37Cu;
label_79b37c:
    // 0x79b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B37Cu;
        // 0x79b380: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B384u;
label_79b384:
    // 0x79b384: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79b384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b388: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B388u;
    {
        const bool branch_taken_0x79b388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B388u;
        // 0x79b38c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b388) {
            ctx->pc = 0x79B398u;
            goto label_79b398;
        }
    }
    ctx->pc = 0x79B390u;
label_79b390:
    // 0x79b390: 0x3e00008  jr          $ra
    ctx->pc = 0x79B390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B390u;
        // 0x79b394: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B398u;
label_79b398:
    // 0x79b398: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B398u;
    {
        const bool branch_taken_0x79b398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B398u;
        // 0x79b39c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b398) {
            ctx->pc = 0x79B3C0u;
            goto label_79b3c0;
        }
    }
    ctx->pc = 0x79B3A0u;
    // 0x79b3a0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79B3A0u;
    {
        const bool branch_taken_0x79b3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b3a0) {
            ctx->pc = 0x79B37Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b37c;
        }
    }
    ctx->pc = 0x79B3A8u;
    // 0x79b3a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b3ac: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x79b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x79b3b0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x79B3B0u;
    {
        const bool branch_taken_0x79b3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B0u;
        // 0x79b3b4: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3b0) {
            ctx->pc = 0x79B37Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b37c;
        }
    }
    ctx->pc = 0x79B3B8u;
    // 0x79b3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B8u;
        // 0x79b3bc: 0x2442c298  addiu       $v0, $v0, -0x3D68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B3C0u;
label_79b3c0:
    // 0x79b3c0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79B3C0u;
    {
        const bool branch_taken_0x79b3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3C0u;
        // 0x79b3c4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3c0) {
            ctx->pc = 0x79B390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b390;
        }
    }
    ctx->pc = 0x79B3C8u;
    // 0x79b3c8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B3C8u;
    {
        const bool branch_taken_0x79b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3C8u;
        // 0x79b3cc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3c8) {
            ctx->pc = 0x79B404u;
            goto label_79b404;
        }
    }
    ctx->pc = 0x79B3D0u;
    // 0x79b3d0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79B3D0u;
    {
        const bool branch_taken_0x79b3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D0u;
        // 0x79b3d4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3d0) {
            ctx->pc = 0x79B37Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b37c;
        }
    }
    ctx->pc = 0x79B3D8u;
    // 0x79b3d8: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x79b3d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x79b3dc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x79b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x79b3e0: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x79b3e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x79b3e4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x79b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x79b3e8: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x79b3e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x79b3ec: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x79b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x79b3f0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x79b3f4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b3f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x79B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3FCu;
        // 0x79b400: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B404u;
label_79b404:
    // 0x79b404: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79B404u;
    {
        const bool branch_taken_0x79b404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B404u;
        // 0x79b408: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b404) {
            ctx->pc = 0x79B390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b390;
        }
    }
    ctx->pc = 0x79B40Cu;
    // 0x79b40c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x79b410: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79b414: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x79b414u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x79b418: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x79b418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x79b41c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79b41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b420: 0x32023  negu        $a0, $v1
    ctx->pc = 0x79b420u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x79b424: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x79b424u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x79b428: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x79b428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x79b42c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x79B42Cu;
    {
        const bool branch_taken_0x79b42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B42Cu;
        // 0x79b430: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b42c) {
            ctx->pc = 0x79B4A4u;
            goto label_79b4a4;
        }
    }
    ctx->pc = 0x79B434u;
    // 0x79b434: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x79b434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79b438: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79B438u;
    {
        const bool branch_taken_0x79b438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B438u;
        // 0x79b43c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b438) {
            ctx->pc = 0x79B46Cu;
            goto label_79b46c;
        }
    }
    ctx->pc = 0x79B440u;
    // 0x79b440: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b444: 0x0  nop
    ctx->pc = 0x79b444u;
    // NOP
label_79b448:
    // 0x79b448: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x79b448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x79b44c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x79b44cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x79b450: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x79b450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x79b454: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x79b454u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79b458: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x79b458u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79b45c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B45Cu;
    {
        const bool branch_taken_0x79b45c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b45c) {
            ctx->pc = 0x79B448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b448;
        }
    }
    ctx->pc = 0x79B464u;
    // 0x79b464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79B464u;
    {
        const bool branch_taken_0x79b464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B464u;
        // 0x79b468: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b464) {
            ctx->pc = 0x79B474u;
            goto label_79b474;
        }
    }
    ctx->pc = 0x79B46Cu;
label_79b46c:
    // 0x79b46c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b470: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x79b470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_79b474:
    // 0x79b474: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B474u;
    {
        const bool branch_taken_0x79b474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b474) {
            ctx->pc = 0x79B4C8u;
            goto label_79b4c8;
        }
    }
    ctx->pc = 0x79B47Cu;
    // 0x79b47c: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x79b47cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_79b480:
    // 0x79b480: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x79b480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x79b484: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x79b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x79b488: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x79b488u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79b48c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x79b48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x79b490: 0x0  nop
    ctx->pc = 0x79b490u;
    // NOP
    // 0x79b494: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B494u;
    {
        const bool branch_taken_0x79b494 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b494) {
            ctx->pc = 0x79B480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b480;
        }
    }
    ctx->pc = 0x79B49Cu;
    // 0x79b49c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79B49Cu;
    {
        const bool branch_taken_0x79b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B49Cu;
        // 0x79b4a0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b49c) {
            ctx->pc = 0x79B4C8u;
            goto label_79b4c8;
        }
    }
    ctx->pc = 0x79B4A4u;
label_79b4a4:
    // 0x79b4a4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x79b4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79b4a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B4A8u;
    {
        const bool branch_taken_0x79b4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4A8u;
        // 0x79b4ac: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4a8) {
            ctx->pc = 0x79B4BCu;
            goto label_79b4bc;
        }
    }
    ctx->pc = 0x79B4B0u;
    // 0x79b4b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b4b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B4B4u;
    {
        const bool branch_taken_0x79b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4B4u;
        // 0x79b4b8: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4b4) {
            ctx->pc = 0x79B4C8u;
            goto label_79b4c8;
        }
    }
    ctx->pc = 0x79B4BCu;
label_79b4bc:
    // 0x79b4bc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x79b4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4c0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b4c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x79b4c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b4c8:
    // 0x79b4c8: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x79B4C8u;
    {
        const bool branch_taken_0x79b4c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x79B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4C8u;
        // 0x79b4cc: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4c8) {
            ctx->pc = 0x79B55Cu;
            goto label_79b55c;
        }
    }
    ctx->pc = 0x79B4D0u;
    // 0x79b4d0: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x79B4D0u;
    {
        const bool branch_taken_0x79b4d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4D0u;
        // 0x79b4d4: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4d0) {
            ctx->pc = 0x79B4DCu;
            goto label_79b4dc;
        }
    }
    ctx->pc = 0x79B4D8u;
    // 0x79b4d8: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x79b4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_79b4dc:
    // 0x79b4dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B4DCu;
    {
        const bool branch_taken_0x79b4dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4DCu;
        // 0x79b4e0: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4dc) {
            ctx->pc = 0x79B4F4u;
            goto label_79b4f4;
        }
    }
    ctx->pc = 0x79B4E4u;
    // 0x79b4e4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79b4e8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x79b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x79b4ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B4ECu;
    {
        const bool branch_taken_0x79b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4ECu;
        // 0x79b4f0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b4ec) {
            ctx->pc = 0x79B504u;
            goto label_79b504;
        }
    }
    ctx->pc = 0x79B4F4u;
label_79b4f4:
    // 0x79b4f4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79b4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b4fc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x79b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x79b500: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x79b500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_79b504:
    // 0x79b504: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x79b504u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x79b508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b50c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x79b50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x79b510: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79b514: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x79b514u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x79b518: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x79b518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79b51c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79B51Cu;
    {
        const bool branch_taken_0x79b51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B51Cu;
        // 0x79b520: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b51c) {
            ctx->pc = 0x79B56Cu;
            goto label_79b56c;
        }
    }
    ctx->pc = 0x79B524u;
    // 0x79b524: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x79b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b528: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x79b528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x79b52c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x79b52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_79b530:
    // 0x79b530: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79b534: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x79b534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x79b538: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x79b538u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x79b53c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x79b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x79b540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79b544: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x79b544u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79b548: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79b548u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x79b54c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B54Cu;
    {
        const bool branch_taken_0x79b54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B54Cu;
        // 0x79b550: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b54c) {
            ctx->pc = 0x79B530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b530;
        }
    }
    ctx->pc = 0x79B554u;
    // 0x79b554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B554u;
    {
        const bool branch_taken_0x79b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B554u;
        // 0x79b558: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b554) {
            ctx->pc = 0x79B56Cu;
            goto label_79b56c;
        }
    }
    ctx->pc = 0x79B55Cu;
label_79b55c:
    // 0x79b55c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x79b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x79b560: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79b560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79b564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b568: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x79b568u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_79b56c:
    // 0x79b56c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b570: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b574: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79b574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79b578: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79b578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79b57c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B57Cu;
    {
        const bool branch_taken_0x79b57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B57Cu;
        // 0x79b580: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b57c) {
            ctx->pc = 0x79B5A0u;
            goto label_79b5a0;
        }
    }
    ctx->pc = 0x79B584u;
    // 0x79b584: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79b588: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x79b588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x79b58c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x79b58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x79b590: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79b590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79b594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b598: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x79b598u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x79b59c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_79b5a0:
    // 0x79b5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5A0u;
        // 0x79b5a4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B5A8u;
}
} // namespace gh_r505
