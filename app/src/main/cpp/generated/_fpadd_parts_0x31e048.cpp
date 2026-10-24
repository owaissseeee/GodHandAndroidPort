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

// Function: _fpadd_parts
// Address: 0x31e048 - 0x31e288
void _fpadd_parts_0x31e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x31e048");
#endif

    switch (ctx->pc) {
        case 0x31e05cu: goto label_31e05c;
        case 0x31e070u: goto label_31e070;
        case 0x31e128u: goto label_31e128;
        case 0x31e160u: goto label_31e160;
        case 0x31e210u: goto label_31e210;
        default: break;
    }

    ctx->pc = 0x31e048u;

    // 0x31e048: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x31e048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e04c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x31e04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31e050: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x31e050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e054: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E054u;
    {
        const bool branch_taken_0x31e054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e054) {
            ctx->pc = 0x31E058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E054u;
            // 0x31e058: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E064u;
            goto label_31e064;
        }
    }
    ctx->pc = 0x31E05Cu;
label_31e05c:
    // 0x31e05c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E05Cu;
        // 0x31e060: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E064u;
label_31e064:
    // 0x31e064: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x31e064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E068u;
    {
        const bool branch_taken_0x31e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E068u;
        // 0x31e06c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e068) {
            ctx->pc = 0x31E078u;
            goto label_31e078;
        }
    }
    ctx->pc = 0x31E070u;
label_31e070:
    // 0x31e070: 0x3e00008  jr          $ra
    ctx->pc = 0x31E070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E070u;
        // 0x31e074: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E078u;
label_31e078:
    // 0x31e078: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E078u;
    {
        const bool branch_taken_0x31e078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E078u;
        // 0x31e07c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e078) {
            ctx->pc = 0x31E0A0u;
            goto label_31e0a0;
        }
    }
    ctx->pc = 0x31E080u;
    // 0x31e080: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31E080u;
    {
        const bool branch_taken_0x31e080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e080) {
            ctx->pc = 0x31E05Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e05c;
        }
    }
    ctx->pc = 0x31E088u;
    // 0x31e088: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x31e088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e08c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x31e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31e090: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x31E090u;
    {
        const bool branch_taken_0x31e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E090u;
        // 0x31e094: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e090) {
            ctx->pc = 0x31E05Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e05c;
        }
    }
    ctx->pc = 0x31E098u;
    // 0x31e098: 0x3e00008  jr          $ra
    ctx->pc = 0x31E098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E098u;
        // 0x31e09c: 0x24425bd0  addiu       $v0, $v0, 0x5BD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E0A0u;
label_31e0a0:
    // 0x31e0a0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x31E0A0u;
    {
        const bool branch_taken_0x31e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A0u;
        // 0x31e0a4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0a0) {
            ctx->pc = 0x31E070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e070;
        }
    }
    ctx->pc = 0x31E0A8u;
    // 0x31e0a8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31E0A8u;
    {
        const bool branch_taken_0x31e0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A8u;
        // 0x31e0ac: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0a8) {
            ctx->pc = 0x31E0E4u;
            goto label_31e0e4;
        }
    }
    ctx->pc = 0x31E0B0u;
    // 0x31e0b0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31E0B0u;
    {
        const bool branch_taken_0x31e0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0B0u;
        // 0x31e0b4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0b0) {
            ctx->pc = 0x31E05Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e05c;
        }
    }
    ctx->pc = 0x31E0B8u;
    // 0x31e0b8: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x31e0b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31e0bc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x31e0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x31e0c0: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x31e0c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31e0c4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x31e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x31e0c8: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x31e0c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x31e0cc: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x31e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x31e0d0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x31e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31e0d4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x31e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e0d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31e0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31e0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31E0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0DCu;
        // 0x31e0e0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E0E4u;
label_31e0e4:
    // 0x31e0e4: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x31E0E4u;
    {
        const bool branch_taken_0x31e0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0E4u;
        // 0x31e0e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0e4) {
            ctx->pc = 0x31E070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e070;
        }
    }
    ctx->pc = 0x31E0ECu;
    // 0x31e0ec: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x31e0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31e0f0: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x31e0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31e0f4: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x31e0f4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x31e0f8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x31e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x31e0fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31e0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31e100: 0x32023  negu        $a0, $v1
    ctx->pc = 0x31e100u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x31e104: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x31e104u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x31e108: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x31e108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x31e10c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x31E10Cu;
    {
        const bool branch_taken_0x31e10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E10Cu;
        // 0x31e110: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e10c) {
            ctx->pc = 0x31E184u;
            goto label_31e184;
        }
    }
    ctx->pc = 0x31E114u;
    // 0x31e114: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x31e114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31e118: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31E118u;
    {
        const bool branch_taken_0x31e118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E118u;
        // 0x31e11c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e118) {
            ctx->pc = 0x31E14Cu;
            goto label_31e14c;
        }
    }
    ctx->pc = 0x31E120u;
    // 0x31e120: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x31e120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e124: 0x0  nop
    ctx->pc = 0x31e124u;
    // NOP
label_31e128:
    // 0x31e128: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x31e128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x31e12c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31e12cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31e130: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x31e130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x31e134: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x31e134u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31e138: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x31e138u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31e13c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E13Cu;
    {
        const bool branch_taken_0x31e13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e13c) {
            ctx->pc = 0x31E128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e128;
        }
    }
    ctx->pc = 0x31E144u;
    // 0x31e144: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31E144u;
    {
        const bool branch_taken_0x31e144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E144u;
        // 0x31e148: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e144) {
            ctx->pc = 0x31E154u;
            goto label_31e154;
        }
    }
    ctx->pc = 0x31E14Cu;
label_31e14c:
    // 0x31e14c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x31e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e150: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x31e150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_31e154:
    // 0x31e154: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31E154u;
    {
        const bool branch_taken_0x31e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e154) {
            ctx->pc = 0x31E1A8u;
            goto label_31e1a8;
        }
    }
    ctx->pc = 0x31E15Cu;
    // 0x31e15c: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x31e15cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_31e160:
    // 0x31e160: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x31e160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x31e164: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x31e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x31e168: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x31e168u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31e16c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x31e16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x31e170: 0x0  nop
    ctx->pc = 0x31e170u;
    // NOP
    // 0x31e174: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E174u;
    {
        const bool branch_taken_0x31e174 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e174) {
            ctx->pc = 0x31E160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e160;
        }
    }
    ctx->pc = 0x31E17Cu;
    // 0x31e17c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31E17Cu;
    {
        const bool branch_taken_0x31e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E17Cu;
        // 0x31e180: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e17c) {
            ctx->pc = 0x31E1A8u;
            goto label_31e1a8;
        }
    }
    ctx->pc = 0x31E184u;
label_31e184:
    // 0x31e184: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x31e184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31e188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E188u;
    {
        const bool branch_taken_0x31e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E188u;
        // 0x31e18c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e188) {
            ctx->pc = 0x31E19Cu;
            goto label_31e19c;
        }
    }
    ctx->pc = 0x31E190u;
    // 0x31e190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31e190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e194: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E194u;
    {
        const bool branch_taken_0x31e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E194u;
        // 0x31e198: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e194) {
            ctx->pc = 0x31E1A8u;
            goto label_31e1a8;
        }
    }
    ctx->pc = 0x31E19Cu;
label_31e19c:
    // 0x31e19c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x31e19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e1a0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x31e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e1a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31e1a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e1a8:
    // 0x31e1a8: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x31E1A8u;
    {
        const bool branch_taken_0x31e1a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x31E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1A8u;
        // 0x31e1ac: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1a8) {
            ctx->pc = 0x31E23Cu;
            goto label_31e23c;
        }
    }
    ctx->pc = 0x31E1B0u;
    // 0x31e1b0: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E1B0u;
    {
        const bool branch_taken_0x31e1b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1B0u;
        // 0x31e1b4: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1b0) {
            ctx->pc = 0x31E1BCu;
            goto label_31e1bc;
        }
    }
    ctx->pc = 0x31E1B8u;
    // 0x31e1b8: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x31e1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_31e1bc:
    // 0x31e1bc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E1BCu;
    {
        const bool branch_taken_0x31e1bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1BCu;
        // 0x31e1c0: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1bc) {
            ctx->pc = 0x31E1D4u;
            goto label_31e1d4;
        }
    }
    ctx->pc = 0x31E1C4u;
    // 0x31e1c4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x31e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x31e1c8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x31e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x31e1cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E1CCu;
    {
        const bool branch_taken_0x31e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1CCu;
        // 0x31e1d0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1cc) {
            ctx->pc = 0x31E1E4u;
            goto label_31e1e4;
        }
    }
    ctx->pc = 0x31E1D4u;
label_31e1d4:
    // 0x31e1d4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x31e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x31e1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e1dc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x31e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x31e1e0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x31e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_31e1e4:
    // 0x31e1e4: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x31e1e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x31e1e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e1ec: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x31e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x31e1f0: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x31e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x31e1f4: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x31e1f4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x31e1f8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31e1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31e1fc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31E1FCu;
    {
        const bool branch_taken_0x31e1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1FCu;
        // 0x31e200: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1fc) {
            ctx->pc = 0x31E24Cu;
            goto label_31e24c;
        }
    }
    ctx->pc = 0x31E204u;
    // 0x31e204: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x31e204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e208: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x31e208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x31e20c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x31e20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_31e210:
    // 0x31e210: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x31e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31e214: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x31e214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x31e218: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x31e218u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x31e21c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x31e21cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x31e220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31e224: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x31e224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31e228: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x31e228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x31e22c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31E22Cu;
    {
        const bool branch_taken_0x31e22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E22Cu;
        // 0x31e230: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e22c) {
            ctx->pc = 0x31E210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e210;
        }
    }
    ctx->pc = 0x31E234u;
    // 0x31e234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E234u;
    {
        const bool branch_taken_0x31e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E234u;
        // 0x31e238: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e234) {
            ctx->pc = 0x31E24Cu;
            goto label_31e24c;
        }
    }
    ctx->pc = 0x31E23Cu;
label_31e23c:
    // 0x31e23c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x31e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x31e240: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x31e240u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x31e244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e248: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x31e248u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_31e24c:
    // 0x31e24c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31e250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e254: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x31e254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x31e258: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x31e258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x31e25c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E25Cu;
    {
        const bool branch_taken_0x31e25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E25Cu;
        // 0x31e260: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e25c) {
            ctx->pc = 0x31E280u;
            goto label_31e280;
        }
    }
    ctx->pc = 0x31E264u;
    // 0x31e264: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x31e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31e268: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x31e268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x31e26c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x31e26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x31e270: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31e270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31e274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31e278: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x31e278u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x31e27c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x31e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_31e280:
    // 0x31e280: 0x3e00008  jr          $ra
    ctx->pc = 0x31E280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E280u;
        // 0x31e284: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E288u;
}
