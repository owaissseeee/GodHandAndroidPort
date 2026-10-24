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

// Function: func_00186A20
// Address: 0x186a20 - 0x186a80
void func_00186A20_0x186a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186A20_0x186a20");
#endif

    switch (ctx->pc) {
        case 0x186a5cu: goto label_186a5c;
        case 0x186a6cu: goto label_186a6c;
        default: break;
    }

    ctx->pc = 0x186a20u;

    // 0x186a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186a24: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x186a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x186a28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x186a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x186a2c: 0x24423078  addiu       $v0, $v0, 0x3078
    ctx->pc = 0x186a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12408));
    // 0x186a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186a3c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x186a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x186a40: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x186a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x186a44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x186A44u;
    {
        const bool branch_taken_0x186a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A44u;
        // 0x186a48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a44) {
            ctx->pc = 0x186A60u;
            goto label_186a60;
        }
    }
    ctx->pc = 0x186A4Cu;
    // 0x186a4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x186a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x186a50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x186a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a54: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x186A54u;
    SET_GPR_U32(ctx, 31, 0x186A5Cu);
    ctx->pc = 0x186A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A54u;
    // 0x186a58: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x186A54u, 0x186A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A5Cu;
label_186a5c:
    // 0x186a5c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x186a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_186a60:
    // 0x186a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a64: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x186A64u;
    SET_GPR_U32(ctx, 31, 0x186A6Cu);
    ctx->pc = 0x186A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A64u;
    // 0x186a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x186A64u, 0x186A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A6Cu;
label_186a6c:
    // 0x186a6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x186a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186a78: 0x3e00008  jr          $ra
    ctx->pc = 0x186A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A78u;
        // 0x186a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186A80u;
}
