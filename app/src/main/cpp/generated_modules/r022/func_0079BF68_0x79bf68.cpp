#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: func_0079BF68
// Address: 0x79bf68 - 0x79c1a8
void func_0079BF68_0x79bf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BF68_0x79bf68");
#endif

    switch (ctx->pc) {
        case 0x79bf7cu: goto label_79bf7c;
        case 0x79bf90u: goto label_79bf90;
        case 0x79c048u: goto label_79c048;
        case 0x79c080u: goto label_79c080;
        case 0x79c130u: goto label_79c130;
        default: break;
    }

    ctx->pc = 0x79bf68u;

    // 0x79bf68: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x79bf68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf6c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x79bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x79bf70: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79bf70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79bf74: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF74u;
    {
        const bool branch_taken_0x79bf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bf74) {
            ctx->pc = 0x79BF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BF74u;
            // 0x79bf78: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BF84u;
            goto label_79bf84;
        }
    }
    ctx->pc = 0x79BF7Cu;
label_79bf7c:
    // 0x79bf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF7Cu;
        // 0x79bf80: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF84u;
label_79bf84:
    // 0x79bf84: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79bf84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79bf88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF88u;
    {
        const bool branch_taken_0x79bf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF88u;
        // 0x79bf8c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf88) {
            ctx->pc = 0x79BF98u;
            goto label_79bf98;
        }
    }
    ctx->pc = 0x79BF90u;
label_79bf90:
    // 0x79bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF90u;
        // 0x79bf94: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF98u;
label_79bf98:
    // 0x79bf98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BF98u;
    {
        const bool branch_taken_0x79bf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF98u;
        // 0x79bf9c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf98) {
            ctx->pc = 0x79BFC0u;
            goto label_79bfc0;
        }
    }
    ctx->pc = 0x79BFA0u;
    // 0x79bfa0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79BFA0u;
    {
        const bool branch_taken_0x79bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bfa0) {
            ctx->pc = 0x79BF7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf7c;
        }
    }
    ctx->pc = 0x79BFA8u;
    // 0x79bfa8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79bfac: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x79bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x79bfb0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x79BFB0u;
    {
        const bool branch_taken_0x79bfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFB0u;
        // 0x79bfb4: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfb0) {
            ctx->pc = 0x79BF7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf7c;
        }
    }
    ctx->pc = 0x79BFB8u;
    // 0x79bfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFB8u;
        // 0x79bfbc: 0x2442cdb0  addiu       $v0, $v0, -0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BFC0u;
label_79bfc0:
    // 0x79bfc0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x79BFC0u;
    {
        const bool branch_taken_0x79bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFC0u;
        // 0x79bfc4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfc0) {
            ctx->pc = 0x79BF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf90;
        }
    }
    ctx->pc = 0x79BFC8u;
    // 0x79bfc8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79BFC8u;
    {
        const bool branch_taken_0x79bfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFC8u;
        // 0x79bfcc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfc8) {
            ctx->pc = 0x79C004u;
            goto label_79c004;
        }
    }
    ctx->pc = 0x79BFD0u;
    // 0x79bfd0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79BFD0u;
    {
        const bool branch_taken_0x79bfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFD0u;
        // 0x79bfd4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfd0) {
            ctx->pc = 0x79BF7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf7c;
        }
    }
    ctx->pc = 0x79BFD8u;
    // 0x79bfd8: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x79bfd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x79bfdc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x79bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x79bfe0: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x79bfe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x79bfe4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x79bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x79bfe8: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x79bfe8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x79bfec: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x79bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x79bff0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x79bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x79bff4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79bff8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79bff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79bffc: 0x3e00008  jr          $ra
    ctx->pc = 0x79BFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFFCu;
        // 0x79c000: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C004u;
label_79c004:
    // 0x79c004: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79C004u;
    {
        const bool branch_taken_0x79c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C004u;
        // 0x79c008: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c004) {
            ctx->pc = 0x79BF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf90;
        }
    }
    ctx->pc = 0x79C00Cu;
    // 0x79c00c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x79c00cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x79c010: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x79c010u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79c014: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x79c014u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x79c018: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x79c018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x79c01c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79c01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c020: 0x32023  negu        $a0, $v1
    ctx->pc = 0x79c020u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x79c024: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x79c024u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x79c028: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x79c028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x79c02c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x79C02Cu;
    {
        const bool branch_taken_0x79c02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C02Cu;
        // 0x79c030: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c02c) {
            ctx->pc = 0x79C0A4u;
            goto label_79c0a4;
        }
    }
    ctx->pc = 0x79C034u;
    // 0x79c034: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x79c034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79c038: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79C038u;
    {
        const bool branch_taken_0x79c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C038u;
        // 0x79c03c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c038) {
            ctx->pc = 0x79C06Cu;
            goto label_79c06c;
        }
    }
    ctx->pc = 0x79C040u;
    // 0x79c040: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79c040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c044: 0x0  nop
    ctx->pc = 0x79c044u;
    // NOP
label_79c048:
    // 0x79c048: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x79c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x79c04c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x79c04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x79c050: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x79c050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x79c054: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x79c054u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79c058: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x79c058u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79c05c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C05Cu;
    {
        const bool branch_taken_0x79c05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c05c) {
            ctx->pc = 0x79C048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c048;
        }
    }
    ctx->pc = 0x79C064u;
    // 0x79c064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79C064u;
    {
        const bool branch_taken_0x79c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C064u;
        // 0x79c068: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c064) {
            ctx->pc = 0x79C074u;
            goto label_79c074;
        }
    }
    ctx->pc = 0x79C06Cu;
label_79c06c:
    // 0x79c06c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c070: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x79c070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_79c074:
    // 0x79c074: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79C074u;
    {
        const bool branch_taken_0x79c074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c074) {
            ctx->pc = 0x79C0C8u;
            goto label_79c0c8;
        }
    }
    ctx->pc = 0x79C07Cu;
    // 0x79c07c: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x79c07cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_79c080:
    // 0x79c080: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x79c080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x79c084: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x79c084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x79c088: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x79c088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79c08c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x79c08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x79c090: 0x0  nop
    ctx->pc = 0x79c090u;
    // NOP
    // 0x79c094: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C094u;
    {
        const bool branch_taken_0x79c094 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c094) {
            ctx->pc = 0x79C080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c080;
        }
    }
    ctx->pc = 0x79C09Cu;
    // 0x79c09c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79C09Cu;
    {
        const bool branch_taken_0x79c09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C09Cu;
        // 0x79c0a0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c09c) {
            ctx->pc = 0x79C0C8u;
            goto label_79c0c8;
        }
    }
    ctx->pc = 0x79C0A4u;
label_79c0a4:
    // 0x79c0a4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x79c0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x79c0a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C0A8u;
    {
        const bool branch_taken_0x79c0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0A8u;
        // 0x79c0ac: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0a8) {
            ctx->pc = 0x79C0BCu;
            goto label_79c0bc;
        }
    }
    ctx->pc = 0x79C0B0u;
    // 0x79c0b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79c0b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79C0B4u;
    {
        const bool branch_taken_0x79c0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0B4u;
        // 0x79c0b8: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0b4) {
            ctx->pc = 0x79C0C8u;
            goto label_79c0c8;
        }
    }
    ctx->pc = 0x79C0BCu;
label_79c0bc:
    // 0x79c0bc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x79c0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0c0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c0c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x79c0c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79c0c8:
    // 0x79c0c8: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x79C0C8u;
    {
        const bool branch_taken_0x79c0c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x79C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0C8u;
        // 0x79c0cc: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0c8) {
            ctx->pc = 0x79C15Cu;
            goto label_79c15c;
        }
    }
    ctx->pc = 0x79C0D0u;
    // 0x79c0d0: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x79C0D0u;
    {
        const bool branch_taken_0x79c0d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0D0u;
        // 0x79c0d4: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0d0) {
            ctx->pc = 0x79C0DCu;
            goto label_79c0dc;
        }
    }
    ctx->pc = 0x79C0D8u;
    // 0x79c0d8: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x79c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_79c0dc:
    // 0x79c0dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C0DCu;
    {
        const bool branch_taken_0x79c0dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0DCu;
        // 0x79c0e0: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0dc) {
            ctx->pc = 0x79C0F4u;
            goto label_79c0f4;
        }
    }
    ctx->pc = 0x79C0E4u;
    // 0x79c0e4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79c0e8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x79c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x79c0ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79C0ECu;
    {
        const bool branch_taken_0x79c0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0ECu;
        // 0x79c0f0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0ec) {
            ctx->pc = 0x79C104u;
            goto label_79c104;
        }
    }
    ctx->pc = 0x79C0F4u;
label_79c0f4:
    // 0x79c0f4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79c0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c0fc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x79c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x79c100: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x79c100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_79c104:
    // 0x79c104: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x79c104u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x79c108: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c10c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x79c10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x79c110: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79c114: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x79c114u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x79c118: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x79c118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c11c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79C11Cu;
    {
        const bool branch_taken_0x79c11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C11Cu;
        // 0x79c120: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c11c) {
            ctx->pc = 0x79C16Cu;
            goto label_79c16c;
        }
    }
    ctx->pc = 0x79C124u;
    // 0x79c124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x79c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c128: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x79c128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x79c12c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x79c12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_79c130:
    // 0x79c130: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79c134: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x79c134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x79c138: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x79c138u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x79c13c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x79c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x79c140: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79c144: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x79c144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c148: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79c148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x79c14c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79C14Cu;
    {
        const bool branch_taken_0x79c14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C14Cu;
        // 0x79c150: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c14c) {
            ctx->pc = 0x79C130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c130;
        }
    }
    ctx->pc = 0x79C154u;
    // 0x79c154: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79C154u;
    {
        const bool branch_taken_0x79c154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C154u;
        // 0x79c158: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c154) {
            ctx->pc = 0x79C16Cu;
            goto label_79c16c;
        }
    }
    ctx->pc = 0x79C15Cu;
label_79c15c:
    // 0x79c15c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x79c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x79c160: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x79c160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x79c164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79c164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c168: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x79c168u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_79c16c:
    // 0x79c16c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c170: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c174: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79c178: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79c178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79c17c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C17Cu;
    {
        const bool branch_taken_0x79c17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C17Cu;
        // 0x79c180: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c17c) {
            ctx->pc = 0x79C1A0u;
            goto label_79c1a0;
        }
    }
    ctx->pc = 0x79C184u;
    // 0x79c184: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x79c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x79c188: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x79c188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x79c18c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x79c18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x79c190: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79c190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79c194: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c198: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x79c198u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x79c19c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x79c19cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_79c1a0:
    // 0x79c1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1A0u;
        // 0x79c1a4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C1A8u;
}
} // namespace gh_r022
