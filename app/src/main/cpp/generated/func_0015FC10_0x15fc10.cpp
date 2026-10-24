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

// Function: func_0015FC10
// Address: 0x15fc10 - 0x15fcb8
void func_0015FC10_0x15fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015FC10_0x15fc10");
#endif

    switch (ctx->pc) {
        case 0x15fc38u: goto label_15fc38;
        case 0x15fc44u: goto label_15fc44;
        case 0x15fc88u: goto label_15fc88;
        case 0x15fc90u: goto label_15fc90;
        default: break;
    }

    ctx->pc = 0x15fc10u;

    // 0x15fc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15fc14: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x15fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x15fc18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fc1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15fc20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fc24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15fc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fc2c: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x15fc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x15fc30: 0xac436e30  sw          $v1, 0x6E30($v0)
    ctx->pc = 0x15fc30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x566E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x566E30u, _value); } while (0);
    // 0x15fc34: 0x0  nop
    ctx->pc = 0x15fc34u;
    // NOP
label_15fc38:
    // 0x15fc38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fc3c: 0xc0e543e  jal         func_3950F8
    ctx->pc = 0x15FC3Cu;
    SET_GPR_U32(ctx, 31, 0x15FC44u);
    ctx->pc = 0x15FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC3Cu;
    // 0x15fc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3950F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3950F8u, 0x15FC3Cu, 0x15FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC44u;
label_15fc44:
    // 0x15fc44: 0x0  nop
    ctx->pc = 0x15fc44u;
    // NOP
    // 0x15fc48: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15FC48u;
    {
        const bool branch_taken_0x15fc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC48u;
        // 0x15fc4c: 0xae026e30  sw          $v0, 0x6E30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc48) {
            ctx->pc = 0x15FC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fc38;
        }
    }
    ctx->pc = 0x15FC50u;
    // 0x15fc50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15fc54: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x15fc58: 0x24427a2c  addiu       $v0, $v0, 0x7A2C
    ctx->pc = 0x15fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x15fc5c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x15fc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x15fc60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A30u));
    // 0x15fc64: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x15fc68: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x15fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x15fc6c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x15fc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15fc70: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FC70u;
    {
        const bool branch_taken_0x15fc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC70u;
        // 0x15fc74: 0xae252d08  sw          $a1, 0x2D08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc70) {
            ctx->pc = 0x15FC90u;
            goto label_15fc90;
        }
    }
    ctx->pc = 0x15FC78u;
    // 0x15fc78: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x15fc78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x15fc7c: 0x26106c00  addiu       $s0, $s0, 0x6C00
    ctx->pc = 0x15fc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x15fc80: 0xc0a64da  jal         func_299368
    ctx->pc = 0x15FC80u;
    SET_GPR_U32(ctx, 31, 0x15FC88u);
    ctx->pc = 0x15FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC80u;
    // 0x15fc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299368u, 0x15FC80u, 0x15FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC88u;
label_15fc88:
    // 0x15fc88: 0xc0a8250  jal         func_2A0940
    ctx->pc = 0x15FC88u;
    SET_GPR_U32(ctx, 31, 0x15FC90u);
    ctx->pc = 0x15FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC88u;
    // 0x15fc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0940u, 0x15FC88u, 0x15FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC90u;
label_15fc90:
    // 0x15fc90: 0x8e222d08  lw          $v0, 0x2D08($s1)
    ctx->pc = 0x15fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11528)));
    // 0x15fc94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15fc98: 0x8c630800  lw          $v1, 0x800($v1)
    ctx->pc = 0x15fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x15fc9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15fc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fca0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15fca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fca8: 0xae222d08  sw          $v0, 0x2D08($s1)
    ctx->pc = 0x15fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11528), GPR_U32(ctx, 2));
    // 0x15fcac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x15FCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCB0u;
        // 0x15fcb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FCB8u;
}
