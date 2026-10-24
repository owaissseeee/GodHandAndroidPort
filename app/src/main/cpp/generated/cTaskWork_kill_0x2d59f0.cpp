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

// Function: cTaskWork_kill
// Address: 0x2d59f0 - 0x2d5a48
void cTaskWork_kill_0x2d59f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskWork_kill_0x2d59f0");
#endif

    switch (ctx->pc) {
        case 0x2d5a24u: goto label_2d5a24;
        case 0x2d5a2cu: goto label_2d5a2c;
        default: break;
    }

    ctx->pc = 0x2d59f0u;

    // 0x2d59f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d59f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d59f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d59f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d59f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d59f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d59fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d59fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5a04: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2d5a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d5a08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D5A08u;
    {
        const bool branch_taken_0x2d5a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A08u;
        // 0x2d5a0c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a08) {
            ctx->pc = 0x2D5A30u;
            goto label_2d5a30;
        }
    }
    ctx->pc = 0x2D5A10u;
    // 0x2d5a10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5a14: 0x10910006  beq         $a0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5A14u;
    {
        const bool branch_taken_0x2d5a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A14u;
        // 0x2d5a18: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a14) {
            ctx->pc = 0x2D5A30u;
            goto label_2d5a30;
        }
    }
    ctx->pc = 0x2D5A1Cu;
    // 0x2d5a1c: 0xc0ebebc  jal         func_3AFAF0
    ctx->pc = 0x2D5A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D5A24u);
    ctx->pc = 0x3AFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAF0u, 0x2D5A1Cu, 0x2D5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A24u;
label_2d5a24:
    // 0x2d5a24: 0xc0ebeac  jal         func_3AFAB0
    ctx->pc = 0x2D5A24u;
    SET_GPR_U32(ctx, 31, 0x2D5A2Cu);
    ctx->pc = 0x2D5A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5A24u;
    // 0x2d5a28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAB0u, 0x2D5A24u, 0x2D5A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5A2Cu;
label_2d5a2c:
    // 0x2d5a2c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2d5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2d5a30:
    // 0x2d5a30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d5a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A3Cu;
        // 0x2d5a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5A44u;
    // 0x2d5a44: 0x0  nop
    ctx->pc = 0x2d5a44u;
    // NOP
    ctx->pc = 0x2d5a48u;
}
