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

// Function: func_002AEE40
// Address: 0x2aee40 - 0x2aef10
void func_002AEE40_0x2aee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AEE40_0x2aee40");
#endif

    switch (ctx->pc) {
        case 0x2aee80u: goto label_2aee80;
        case 0x2aee8cu: goto label_2aee8c;
        case 0x2aee98u: goto label_2aee98;
        case 0x2aeee4u: goto label_2aeee4;
        default: break;
    }

    ctx->pc = 0x2aee40u;

    // 0x2aee40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2aee44: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2aee44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2aee48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2aee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2aee4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aee50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aee50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2aee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2aee58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aee5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2aee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2aee60: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x2aee60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2aee64: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEE64u;
    {
        const bool branch_taken_0x2aee64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE64u;
        // 0x2aee68: 0x59403  sra         $s2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee64) {
            ctx->pc = 0x2AEE74u;
            goto label_2aee74;
        }
    }
    ctx->pc = 0x2AEE6Cu;
    // 0x2aee6c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AEE6Cu;
    {
        const bool branch_taken_0x2aee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE6Cu;
        // 0x2aee70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee6c) {
            ctx->pc = 0x2AEEF0u;
            goto label_2aeef0;
        }
    }
    ctx->pc = 0x2AEE74u;
label_2aee74:
    // 0x2aee74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aee74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee78: 0xc0ac8c6  jal         func_2B2318
    ctx->pc = 0x2AEE78u;
    SET_GPR_U32(ctx, 31, 0x2AEE80u);
    ctx->pc = 0x2AEE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE78u;
    // 0x2aee7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2318u, 0x2AEE78u, 0x2AEE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE80u;
label_2aee80:
    // 0x2aee80: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2aee80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2aee84: 0xc0ac820  jal         func_2B2080
    ctx->pc = 0x2AEE84u;
    SET_GPR_U32(ctx, 31, 0x2AEE8Cu);
    ctx->pc = 0x2AEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE84u;
    // 0x2aee88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2080u, 0x2AEE84u, 0x2AEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE8Cu;
label_2aee8c:
    // 0x2aee8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEE8Cu;
    {
        const bool branch_taken_0x2aee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE8Cu;
        // 0x2aee90: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee8c) {
            ctx->pc = 0x2AEE9Cu;
            goto label_2aee9c;
        }
    }
    ctx->pc = 0x2AEE94u;
    // 0x2aee94: 0x0  nop
    ctx->pc = 0x2aee94u;
    // NOP
label_2aee98:
    // 0x2aee98: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2aee98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2aee9c:
    // 0x2aee9c: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEE9Cu;
    {
        const bool branch_taken_0x2aee9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aee9c) {
            ctx->pc = 0x2AEEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEE9Cu;
            // 0x2aeea0: 0x96020bd8  lhu         $v0, 0xBD8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEEB8u;
            goto label_2aeeb8;
        }
    }
    ctx->pc = 0x2AEEA4u;
    // 0x2aeea4: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2aeea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2aeea8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2aeea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aeeac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AEEACu;
    {
        const bool branch_taken_0x2aeeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeeac) {
            ctx->pc = 0x2AEEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEEACu;
            // 0x2aeeb0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aee98;
        }
    }
    ctx->pc = 0x2AEEB4u;
    // 0x2aeeb4: 0x96020bd8  lhu         $v0, 0xBD8($s0)
    ctx->pc = 0x2aeeb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3032)));
label_2aeeb8:
    // 0x2aeeb8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2aeeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2aeebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aeec0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aeec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aeec4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEEC4u;
    {
        const bool branch_taken_0x2aeec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEC4u;
        // 0x2aeec8: 0xa6020bd8  sh          $v0, 0xBD8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 3032), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeec4) {
            ctx->pc = 0x2AEED0u;
            goto label_2aeed0;
        }
    }
    ctx->pc = 0x2AEECCu;
    // 0x2aeecc: 0xa6000bd8  sh          $zero, 0xBD8($s0)
    ctx->pc = 0x2aeeccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3032), (uint16_t)GPR_U32(ctx, 0));
label_2aeed0:
    // 0x2aeed0: 0x96080bd8  lhu         $t0, 0xBD8($s0)
    ctx->pc = 0x2aeed0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3032)));
    // 0x2aeed4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2aeed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aeed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeedc: 0xc0ac8ba  jal         func_2B22E8
    ctx->pc = 0x2AEEDCu;
    SET_GPR_U32(ctx, 31, 0x2AEEE4u);
    ctx->pc = 0x2AEEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEEDCu;
    // 0x2aeee0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22E8u, 0x2AEEDCu, 0x2AEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEEE4u;
label_2aeee4:
    // 0x2aeee4: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AEEE4u;
    {
        const bool branch_taken_0x2aeee4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeee4) {
            ctx->pc = 0x2AEEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEEE4u;
            // 0x2aeee8: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEEECu;
            goto label_2aeeec;
        }
    }
    ctx->pc = 0x2AEEECu;
label_2aeeec:
    // 0x2aeeec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aeeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aeef0:
    // 0x2aeef0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2aeef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aeef4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2aeef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aeef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aeef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeefc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2aeefcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aef00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aef00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aef04: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF04u;
        // 0x2aef08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEF0Cu;
    // 0x2aef0c: 0x0  nop
    ctx->pc = 0x2aef0cu;
    // NOP
    ctx->pc = 0x2aef10u;
}
