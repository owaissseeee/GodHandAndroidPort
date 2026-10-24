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

// Function: ClearDamageCollAndState_19FD50
// Address: 0x19fd50 - 0x19fdb0
void ClearDamageCollAndState_19FD50_0x19fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearDamageCollAndState_19FD50_0x19fd50");
#endif

    switch (ctx->pc) {
        case 0x19fd84u: goto label_19fd84;
        case 0x19fd98u: goto label_19fd98;
        case 0x19fda0u: goto label_19fda0;
        default: break;
    }

    ctx->pc = 0x19fd50u;

    // 0x19fd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19fd54: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x19fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x19fd58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19fd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fd60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fd64: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x19fd68: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x19fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x19fd6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19fd70: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19fd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x19fd74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD74u;
    {
        const bool branch_taken_0x19fd74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD74u;
        // 0x19fd78: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd74) {
            ctx->pc = 0x19FD84u;
            goto label_19fd84;
        }
    }
    ctx->pc = 0x19FD7Cu;
    // 0x19fd7c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x19FD7Cu;
    SET_GPR_U32(ctx, 31, 0x19FD84u);
    ctx->pc = 0x19FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD7Cu;
    // 0x19fd80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x19FD7Cu, 0x19FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD84u;
label_19fd84:
    // 0x19fd84: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x19fd84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x19fd88: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x19fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x19fd8c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x19fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x19fd90: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x19FD90u;
    SET_GPR_U32(ctx, 31, 0x19FD98u);
    ctx->pc = 0x19FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD90u;
    // 0x19fd94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x19FD90u, 0x19FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FD98u;
label_19fd98:
    // 0x19fd98: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x19FD98u;
    SET_GPR_U32(ctx, 31, 0x19FDA0u);
    ctx->pc = 0x19FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FD98u;
    // 0x19fd9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x19FD98u, 0x19FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDA0u;
label_19fda0:
    // 0x19fda0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19fda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fda8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDA8u;
        // 0x19fdac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FDB0u;
}
