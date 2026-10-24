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

// Function: func_0018CD48
// Address: 0x18cd48 - 0x18cda8
void func_0018CD48_0x18cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018CD48_0x18cd48");
#endif

    switch (ctx->pc) {
        case 0x18cd7cu: goto label_18cd7c;
        case 0x18cd90u: goto label_18cd90;
        case 0x18cd98u: goto label_18cd98;
        default: break;
    }

    ctx->pc = 0x18cd48u;

    // 0x18cd48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18cd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18cd4c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x18cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18cd50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18cd54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd5c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x18cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x18cd60: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x18cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18cd64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18cd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18cd68: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18cd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x18cd6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CD6Cu;
    {
        const bool branch_taken_0x18cd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD6Cu;
        // 0x18cd70: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd6c) {
            ctx->pc = 0x18CD7Cu;
            goto label_18cd7c;
        }
    }
    ctx->pc = 0x18CD74u;
    // 0x18cd74: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18CD74u;
    SET_GPR_U32(ctx, 31, 0x18CD7Cu);
    ctx->pc = 0x18CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD74u;
    // 0x18cd78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18CD74u, 0x18CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD7Cu;
label_18cd7c:
    // 0x18cd7c: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x18cd7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x18cd80: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x18cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x18cd84: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x18cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x18cd88: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x18CD88u;
    SET_GPR_U32(ctx, 31, 0x18CD90u);
    ctx->pc = 0x18CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD88u;
    // 0x18cd8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x18CD88u, 0x18CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD90u;
label_18cd90:
    // 0x18cd90: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x18CD90u;
    SET_GPR_U32(ctx, 31, 0x18CD98u);
    ctx->pc = 0x18CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD90u;
    // 0x18cd94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x18CD90u, 0x18CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD98u;
label_18cd98:
    // 0x18cd98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18cd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cda0: 0x3e00008  jr          $ra
    ctx->pc = 0x18CDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDA0u;
        // 0x18cda4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CDA8u;
}
