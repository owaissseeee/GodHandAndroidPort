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

// Function: ClearObjActiveFlag_199C68
// Address: 0x199c68 - 0x199cc8
void ClearObjActiveFlag_199C68_0x199c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearObjActiveFlag_199C68_0x199c68");
#endif

    switch (ctx->pc) {
        case 0x199c9cu: goto label_199c9c;
        case 0x199cb0u: goto label_199cb0;
        case 0x199cb8u: goto label_199cb8;
        default: break;
    }

    ctx->pc = 0x199c68u;

    // 0x199c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199c6c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x199c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x199c70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c7c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x199c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x199c80: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x199c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x199c84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x199c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x199c88: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x199c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x199c8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199C8Cu;
    {
        const bool branch_taken_0x199c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C8Cu;
        // 0x199c90: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c8c) {
            ctx->pc = 0x199C9Cu;
            goto label_199c9c;
        }
    }
    ctx->pc = 0x199C94u;
    // 0x199c94: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x199C94u;
    SET_GPR_U32(ctx, 31, 0x199C9Cu);
    ctx->pc = 0x199C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C94u;
    // 0x199c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x199C94u, 0x199C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C9Cu;
label_199c9c:
    // 0x199c9c: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x199c9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x199ca0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x199ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x199ca4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x199ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x199ca8: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x199CA8u;
    SET_GPR_U32(ctx, 31, 0x199CB0u);
    ctx->pc = 0x199CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CA8u;
    // 0x199cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x199CA8u, 0x199CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CB0u;
label_199cb0:
    // 0x199cb0: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x199CB0u;
    SET_GPR_U32(ctx, 31, 0x199CB8u);
    ctx->pc = 0x199CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199CB0u;
    // 0x199cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x199CB0u, 0x199CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CB8u;
label_199cb8:
    // 0x199cb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x199CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CC0u;
        // 0x199cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199CC8u;
}
