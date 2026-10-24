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

// Function: func_001DEE60
// Address: 0x1dee60 - 0x1def48
void func_001DEE60_0x1dee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DEE60_0x1dee60");
#endif

    switch (ctx->pc) {
        case 0x1dee90u: goto label_1dee90;
        case 0x1deea0u: goto label_1deea0;
        case 0x1deed4u: goto label_1deed4;
        case 0x1deef0u: goto label_1deef0;
        case 0x1def00u: goto label_1def00;
        case 0x1def34u: goto label_1def34;
        default: break;
    }

    ctx->pc = 0x1dee60u;

    // 0x1dee60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dee64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1dee64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dee68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dee6c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1dee6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dee70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dee70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dee74: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DEE74u;
    {
        const bool branch_taken_0x1dee74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE74u;
        // 0x1dee78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee74) {
            ctx->pc = 0x1DEEDCu;
            goto label_1deedc;
        }
    }
    ctx->pc = 0x1DEE7Cu;
    // 0x1dee7c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1dee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1dee80: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DEE80u;
    {
        const bool branch_taken_0x1dee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE80u;
        // 0x1dee84: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee80) {
            ctx->pc = 0x1DEEB8u;
            goto label_1deeb8;
        }
    }
    ctx->pc = 0x1DEE88u;
    // 0x1dee88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dee88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dee8c: 0x0  nop
    ctx->pc = 0x1dee8cu;
    // NOP
label_1dee90:
    // 0x1dee90: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEE90u;
    {
        const bool branch_taken_0x1dee90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE90u;
        // 0x1dee94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee90) {
            ctx->pc = 0x1DEEA0u;
            goto label_1deea0;
        }
    }
    ctx->pc = 0x1DEE98u;
    // 0x1dee98: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DEE98u;
    SET_GPR_U32(ctx, 31, 0x1DEEA0u);
    ctx->pc = 0x1DEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEE98u;
    // 0x1dee9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DEE98u, 0x1DEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEEA0u;
label_1deea0:
    // 0x1deea0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1deea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1deea4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1deea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1deea8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DEEA8u;
    {
        const bool branch_taken_0x1deea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEA8u;
        // 0x1deeac: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deea8) {
            ctx->pc = 0x1DEE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dee90;
        }
    }
    ctx->pc = 0x1DEEB0u;
    // 0x1deeb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1DEEB0u;
    {
        const bool branch_taken_0x1deeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEB0u;
        // 0x1deeb4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeb0) {
            ctx->pc = 0x1DEF38u;
            goto label_1def38;
        }
    }
    ctx->pc = 0x1DEEB8u;
label_1deeb8:
    // 0x1deeb8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DEEB8u;
    {
        const bool branch_taken_0x1deeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEB8u;
        // 0x1deebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeb8) {
            ctx->pc = 0x1DEF34u;
            goto label_1def34;
        }
    }
    ctx->pc = 0x1DEEC0u;
    // 0x1deec0: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1deec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1deec4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1deec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1deec8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1deec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1deecc: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DEECCu;
    SET_GPR_U32(ctx, 31, 0x1DEED4u);
    ctx->pc = 0x1DEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEECCu;
    // 0x1deed0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DEECCu, 0x1DEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEED4u;
label_1deed4:
    // 0x1deed4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DEED4u;
    {
        const bool branch_taken_0x1deed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEED4u;
        // 0x1deed8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deed4) {
            ctx->pc = 0x1DEF38u;
            goto label_1def38;
        }
    }
    ctx->pc = 0x1DEEDCu;
label_1deedc:
    // 0x1deedc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1deedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1deee0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DEEE0u;
    {
        const bool branch_taken_0x1deee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEE0u;
        // 0x1deee4: 0x24f10060  addiu       $s1, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deee0) {
            ctx->pc = 0x1DEF18u;
            goto label_1def18;
        }
    }
    ctx->pc = 0x1DEEE8u;
    // 0x1deee8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1deee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deeec: 0x0  nop
    ctx->pc = 0x1deeecu;
    // NOP
label_1deef0:
    // 0x1deef0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEEF0u;
    {
        const bool branch_taken_0x1deef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEF0u;
        // 0x1deef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deef0) {
            ctx->pc = 0x1DEF00u;
            goto label_1def00;
        }
    }
    ctx->pc = 0x1DEEF8u;
    // 0x1deef8: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DEEF8u;
    SET_GPR_U32(ctx, 31, 0x1DEF00u);
    ctx->pc = 0x1DEEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEEF8u;
    // 0x1deefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DEEF8u, 0x1DEF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF00u;
label_1def00:
    // 0x1def00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1def00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1def04: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1def04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1def08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DEF08u;
    {
        const bool branch_taken_0x1def08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF08u;
        // 0x1def0c: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def08) {
            ctx->pc = 0x1DEEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1deef0;
        }
    }
    ctx->pc = 0x1DEF10u;
    // 0x1def10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEF10u;
    {
        const bool branch_taken_0x1def10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF10u;
        // 0x1def14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def10) {
            ctx->pc = 0x1DEF38u;
            goto label_1def38;
        }
    }
    ctx->pc = 0x1DEF18u;
label_1def18:
    // 0x1def18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEF18u;
    {
        const bool branch_taken_0x1def18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF18u;
        // 0x1def1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def18) {
            ctx->pc = 0x1DEF34u;
            goto label_1def34;
        }
    }
    ctx->pc = 0x1DEF20u;
    // 0x1def20: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1def20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1def24: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1def24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1def28: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1def28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1def2c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1DEF2Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF34u);
    ctx->pc = 0x1DEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF2Cu;
    // 0x1def30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1DEF2Cu, 0x1DEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF34u;
label_1def34:
    // 0x1def34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1def34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1def38:
    // 0x1def38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1def38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1def3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1def3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1def40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF40u;
        // 0x1def44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEF48u;
}
