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

// Function: func_0037AB00
// Address: 0x37ab00 - 0x37aba0
void func_0037AB00_0x37ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037AB00_0x37ab00");
#endif

    switch (ctx->pc) {
        case 0x37ab4cu: goto label_37ab4c;
        case 0x37ab64u: goto label_37ab64;
        default: break;
    }

    ctx->pc = 0x37ab00u;

    // 0x37ab00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37ab04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37ab08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37ab0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37ab10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ab14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37ab14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab18: 0x82230025  lb          $v1, 0x25($s1)
    ctx->pc = 0x37ab18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x37ab1c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37AB1Cu;
    {
        const bool branch_taken_0x37ab1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB1Cu;
        // 0x37ab20: 0x2630012c  addiu       $s0, $s1, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab1c) {
            ctx->pc = 0x37AB38u;
            goto label_37ab38;
        }
    }
    ctx->pc = 0x37AB24u;
    // 0x37ab24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x37ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37ab28: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37AB28u;
    {
        const bool branch_taken_0x37ab28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37ab28) {
            ctx->pc = 0x37AB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AB28u;
            // 0x37ab2c: 0x82030026  lb          $v1, 0x26($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AB6Cu;
            goto label_37ab6c;
        }
    }
    ctx->pc = 0x37AB30u;
    // 0x37ab30: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x37AB30u;
    {
        const bool branch_taken_0x37ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB30u;
        // 0x37ab34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab30) {
            ctx->pc = 0x37AB8Cu;
            goto label_37ab8c;
        }
    }
    ctx->pc = 0x37AB38u;
label_37ab38:
    // 0x37ab38: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x37ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37ab3c: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x37AB3Cu;
    {
        const bool branch_taken_0x37ab3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ab3c) {
            ctx->pc = 0x37AB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37AB3Cu;
            // 0x37ab40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AB8Cu;
            goto label_37ab8c;
        }
    }
    ctx->pc = 0x37AB44u;
    // 0x37ab44: 0xc0dd7be  jal         func_375EF8
    ctx->pc = 0x37AB44u;
    SET_GPR_U32(ctx, 31, 0x37AB4Cu);
    ctx->pc = 0x375EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375EF8u, 0x37AB44u, 0x37AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AB4Cu;
label_37ab4c:
    // 0x37ab4c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x37AB4Cu;
    {
        const bool branch_taken_0x37ab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB4Cu;
        // 0x37ab50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab4c) {
            ctx->pc = 0x37AB88u;
            goto label_37ab88;
        }
    }
    ctx->pc = 0x37AB54u;
    // 0x37ab54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37ab54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab58: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x37ab58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ab5c: 0xc0dd734  jal         func_375CD0
    ctx->pc = 0x37AB5Cu;
    SET_GPR_U32(ctx, 31, 0x37AB64u);
    ctx->pc = 0x37AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AB5Cu;
    // 0x37ab60: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375CD0u, 0x37AB5Cu, 0x37AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AB64u;
label_37ab64:
    // 0x37ab64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37AB64u;
    {
        const bool branch_taken_0x37ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB64u;
        // 0x37ab68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab64) {
            ctx->pc = 0x37AB8Cu;
            goto label_37ab8c;
        }
    }
    ctx->pc = 0x37AB6Cu;
label_37ab6c:
    // 0x37ab6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37ab70: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AB70u;
    {
        const bool branch_taken_0x37ab70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB70u;
        // 0x37ab74: 0x9602000e  lhu         $v0, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab70) {
            ctx->pc = 0x37AB80u;
            goto label_37ab80;
        }
    }
    ctx->pc = 0x37AB78u;
    // 0x37ab78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37AB78u;
    {
        const bool branch_taken_0x37ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB78u;
        // 0x37ab7c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ab78) {
            ctx->pc = 0x37AB84u;
            goto label_37ab84;
        }
    }
    ctx->pc = 0x37AB80u;
label_37ab80:
    // 0x37ab80: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x37ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_37ab84:
    // 0x37ab84: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x37ab84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_37ab88:
    // 0x37ab88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37ab88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37ab8c:
    // 0x37ab8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37ab8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ab90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ab90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x37AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AB94u;
        // 0x37ab98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AB9Cu;
    // 0x37ab9c: 0x0  nop
    ctx->pc = 0x37ab9cu;
    // NOP
    ctx->pc = 0x37aba0u;
}
