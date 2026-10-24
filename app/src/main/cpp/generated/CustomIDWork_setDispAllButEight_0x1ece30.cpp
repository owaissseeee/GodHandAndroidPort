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

// Function: CustomIDWork_setDispAllButEight
// Address: 0x1ece30 - 0x1ecf30
void CustomIDWork_setDispAllButEight_0x1ece30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_setDispAllButEight_0x1ece30");
#endif

    switch (ctx->pc) {
        case 0x1ece68u: goto label_1ece68;
        case 0x1ece78u: goto label_1ece78;
        case 0x1eceacu: goto label_1eceac;
        case 0x1eced0u: goto label_1eced0;
        case 0x1ecee0u: goto label_1ecee0;
        case 0x1ecf14u: goto label_1ecf14;
        default: break;
    }

    ctx->pc = 0x1ece30u;

    // 0x1ece30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ece30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ece34: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ece34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ece38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ece3c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ece3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ece40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ece44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ece44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ece48: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1ECE48u;
    {
        const bool branch_taken_0x1ece48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE48u;
        // 0x1ece4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece48) {
            ctx->pc = 0x1ECEB4u;
            goto label_1eceb4;
        }
    }
    ctx->pc = 0x1ECE50u;
    // 0x1ece50: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1ece50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1ece54: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ECE54u;
    {
        const bool branch_taken_0x1ece54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE54u;
        // 0x1ece58: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece54) {
            ctx->pc = 0x1ECE90u;
            goto label_1ece90;
        }
    }
    ctx->pc = 0x1ECE5Cu;
    // 0x1ece5c: 0x24f10060  addiu       $s1, $a3, 0x60
    ctx->pc = 0x1ece5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1ece60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ece60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece64: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1ece64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ece68:
    // 0x1ece68: 0x12120003  beq         $s0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECE68u;
    {
        const bool branch_taken_0x1ece68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1ECE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE68u;
        // 0x1ece6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece68) {
            ctx->pc = 0x1ECE78u;
            goto label_1ece78;
        }
    }
    ctx->pc = 0x1ECE70u;
    // 0x1ece70: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ECE70u;
    SET_GPR_U32(ctx, 31, 0x1ECE78u);
    ctx->pc = 0x1ECE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE70u;
    // 0x1ece74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ECE70u, 0x1ECE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE78u;
label_1ece78:
    // 0x1ece78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ece78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ece7c: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x1ece7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1ece80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1ECE80u;
    {
        const bool branch_taken_0x1ece80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE80u;
        // 0x1ece84: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece80) {
            ctx->pc = 0x1ECE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ece68;
        }
    }
    ctx->pc = 0x1ECE88u;
    // 0x1ece88: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1ECE88u;
    {
        const bool branch_taken_0x1ece88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE88u;
        // 0x1ece8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece88) {
            ctx->pc = 0x1ECF18u;
            goto label_1ecf18;
        }
    }
    ctx->pc = 0x1ECE90u;
label_1ece90:
    // 0x1ece90: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1ECE90u;
    {
        const bool branch_taken_0x1ece90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ECE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE90u;
        // 0x1ece94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece90) {
            ctx->pc = 0x1ECF14u;
            goto label_1ecf14;
        }
    }
    ctx->pc = 0x1ECE98u;
    // 0x1ece98: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1ece98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1ece9c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1ece9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ecea0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ecea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ecea4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ECEA4u;
    SET_GPR_U32(ctx, 31, 0x1ECEACu);
    ctx->pc = 0x1ECEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECEA4u;
    // 0x1ecea8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ECEA4u, 0x1ECEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECEACu;
label_1eceac:
    // 0x1eceac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1ECEACu;
    {
        const bool branch_taken_0x1eceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEACu;
        // 0x1eceb0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eceac) {
            ctx->pc = 0x1ECF18u;
            goto label_1ecf18;
        }
    }
    ctx->pc = 0x1ECEB4u;
label_1eceb4:
    // 0x1eceb4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1eceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1eceb8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ECEB8u;
    {
        const bool branch_taken_0x1eceb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEB8u;
        // 0x1ecebc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eceb8) {
            ctx->pc = 0x1ECEF8u;
            goto label_1ecef8;
        }
    }
    ctx->pc = 0x1ECEC0u;
    // 0x1ecec0: 0x24f10060  addiu       $s1, $a3, 0x60
    ctx->pc = 0x1ecec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1ecec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ecec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecec8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1ecec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ececc: 0x0  nop
    ctx->pc = 0x1ececcu;
    // NOP
label_1eced0:
    // 0x1eced0: 0x12120003  beq         $s0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECED0u;
    {
        const bool branch_taken_0x1eced0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1ECED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECED0u;
        // 0x1eced4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eced0) {
            ctx->pc = 0x1ECEE0u;
            goto label_1ecee0;
        }
    }
    ctx->pc = 0x1ECED8u;
    // 0x1eced8: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ECED8u;
    SET_GPR_U32(ctx, 31, 0x1ECEE0u);
    ctx->pc = 0x1ECEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECED8u;
    // 0x1ecedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ECED8u, 0x1ECEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECEE0u;
label_1ecee0:
    // 0x1ecee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ecee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ecee4: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x1ecee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1ecee8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1ECEE8u;
    {
        const bool branch_taken_0x1ecee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEE8u;
        // 0x1eceec: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecee8) {
            ctx->pc = 0x1ECED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eced0;
        }
    }
    ctx->pc = 0x1ECEF0u;
    // 0x1ecef0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECEF0u;
    {
        const bool branch_taken_0x1ecef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEF0u;
        // 0x1ecef4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecef0) {
            ctx->pc = 0x1ECF18u;
            goto label_1ecf18;
        }
    }
    ctx->pc = 0x1ECEF8u;
label_1ecef8:
    // 0x1ecef8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECEF8u;
    {
        const bool branch_taken_0x1ecef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ECEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEF8u;
        // 0x1ecefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecef8) {
            ctx->pc = 0x1ECF14u;
            goto label_1ecf14;
        }
    }
    ctx->pc = 0x1ECF00u;
    // 0x1ecf00: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x1ecf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1ecf04: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1ecf04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ecf08: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ecf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ecf0c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ECF0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF14u);
    ctx->pc = 0x1ECF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF0Cu;
    // 0x1ecf10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ECF0Cu, 0x1ECF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF14u;
label_1ecf14:
    // 0x1ecf14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ecf14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ecf18:
    // 0x1ecf18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ecf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecf1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ecf1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecf20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecf24: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF24u;
        // 0x1ecf28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECF2Cu;
    // 0x1ecf2c: 0x0  nop
    ctx->pc = 0x1ecf2cu;
    // NOP
    ctx->pc = 0x1ecf30u;
}
