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

// Function: ResetField214FreeField600G_193CA8
// Address: 0x193ca8 - 0x193d08
void ResetField214FreeField600G_193CA8_0x193ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600G_193CA8_0x193ca8");
#endif

    switch (ctx->pc) {
        case 0x193ce4u: goto label_193ce4;
        case 0x193cf4u: goto label_193cf4;
        default: break;
    }

    ctx->pc = 0x193ca8u;

    // 0x193ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193cac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x193cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x193cb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x193cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x193cb4: 0x24424a48  addiu       $v0, $v0, 0x4A48
    ctx->pc = 0x193cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19016));
    // 0x193cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193cc4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x193cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x193cc8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x193cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x193ccc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x193CCCu;
    {
        const bool branch_taken_0x193ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CCCu;
        // 0x193cd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ccc) {
            ctx->pc = 0x193CE8u;
            goto label_193ce8;
        }
    }
    ctx->pc = 0x193CD4u;
    // 0x193cd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x193cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193cd8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x193cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cdc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x193CDCu;
    SET_GPR_U32(ctx, 31, 0x193CE4u);
    ctx->pc = 0x193CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CDCu;
    // 0x193ce0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x193CDCu, 0x193CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CE4u;
label_193ce4:
    // 0x193ce4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x193ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_193ce8:
    // 0x193ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cec: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x193CECu;
    SET_GPR_U32(ctx, 31, 0x193CF4u);
    ctx->pc = 0x193CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CECu;
    // 0x193cf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x193CECu, 0x193CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CF4u;
label_193cf4:
    // 0x193cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x193cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d00: 0x3e00008  jr          $ra
    ctx->pc = 0x193D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D00u;
        // 0x193d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193D08u;
}
