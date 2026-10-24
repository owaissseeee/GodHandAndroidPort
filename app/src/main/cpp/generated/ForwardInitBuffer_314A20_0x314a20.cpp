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

// Function: ForwardInitBuffer_314A20
// Address: 0x314a20 - 0x314a90
void ForwardInitBuffer_314A20_0x314a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314A20_0x314a20");
#endif

    switch (ctx->pc) {
        case 0x314a54u: goto label_314a54;
        case 0x314a6cu: goto label_314a6c;
        case 0x314a74u: goto label_314a74;
        default: break;
    }

    ctx->pc = 0x314a20u;

    // 0x314a20: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314a24: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314a28: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314a28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314a2c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314a30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314a34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314a38: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314A38u;
    {
        const bool branch_taken_0x314a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A38u;
        // 0x314a3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a38) {
            ctx->pc = 0x314A7Cu;
            goto label_314a7c;
        }
    }
    ctx->pc = 0x314A40u;
    // 0x314a40: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314a40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314a44: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x314a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x314a48: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314a4c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314A4Cu;
    SET_GPR_U32(ctx, 31, 0x314A54u);
    ctx->pc = 0x314A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314A4Cu;
    // 0x314a50: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314A4Cu, 0x314A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A54u;
label_314a54:
    // 0x314a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a58: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314A58u;
    {
        const bool branch_taken_0x314a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A58u;
        // 0x314a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a58) {
            ctx->pc = 0x314A7Cu;
            goto label_314a7c;
        }
    }
    ctx->pc = 0x314A60u;
    // 0x314a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a64: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314A64u;
    SET_GPR_U32(ctx, 31, 0x314A6Cu);
    ctx->pc = 0x314A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314A64u;
    // 0x314a68: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314A64u, 0x314A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A6Cu;
label_314a6c:
    // 0x314a6c: 0xc066770  jal         func_199DC0
    ctx->pc = 0x314A6Cu;
    SET_GPR_U32(ctx, 31, 0x314A74u);
    ctx->pc = 0x314A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314A6Cu;
    // 0x314a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199DC0u, 0x314A6Cu, 0x314A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A74u;
label_314a74:
    // 0x314a74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314A74u;
    {
        const bool branch_taken_0x314a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A74u;
        // 0x314a78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a74) {
            ctx->pc = 0x314A84u;
            goto label_314a84;
        }
    }
    ctx->pc = 0x314A7Cu;
label_314a7c:
    // 0x314a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314a84:
    // 0x314a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314a88: 0x3e00008  jr          $ra
    ctx->pc = 0x314A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A88u;
        // 0x314a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314A90u;
}
