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

// Function: ResetField214FreeField600F_193A20
// Address: 0x193a20 - 0x193a80
void ResetField214FreeField600F_193A20_0x193a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600F_193A20_0x193a20");
#endif

    switch (ctx->pc) {
        case 0x193a5cu: goto label_193a5c;
        case 0x193a6cu: goto label_193a6c;
        default: break;
    }

    ctx->pc = 0x193a20u;

    // 0x193a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193a24: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x193a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x193a28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x193a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x193a2c: 0x24424960  addiu       $v0, $v0, 0x4960
    ctx->pc = 0x193a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18784));
    // 0x193a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193a3c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x193a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x193a40: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x193a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x193a44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x193A44u;
    {
        const bool branch_taken_0x193a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A44u;
        // 0x193a48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a44) {
            ctx->pc = 0x193A60u;
            goto label_193a60;
        }
    }
    ctx->pc = 0x193A4Cu;
    // 0x193a4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193a50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x193a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a54: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x193A54u;
    SET_GPR_U32(ctx, 31, 0x193A5Cu);
    ctx->pc = 0x193A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A54u;
    // 0x193a58: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x193A54u, 0x193A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A5Cu;
label_193a5c:
    // 0x193a5c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x193a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_193a60:
    // 0x193a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a64: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x193A64u;
    SET_GPR_U32(ctx, 31, 0x193A6Cu);
    ctx->pc = 0x193A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A64u;
    // 0x193a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x193A64u, 0x193A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A6Cu;
label_193a6c:
    // 0x193a6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x193a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a78: 0x3e00008  jr          $ra
    ctx->pc = 0x193A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A78u;
        // 0x193a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193A80u;
}
