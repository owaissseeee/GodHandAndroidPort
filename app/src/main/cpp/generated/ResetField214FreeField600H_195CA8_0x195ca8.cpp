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

// Function: ResetField214FreeField600H_195CA8
// Address: 0x195ca8 - 0x195d08
void ResetField214FreeField600H_195CA8_0x195ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600H_195CA8_0x195ca8");
#endif

    switch (ctx->pc) {
        case 0x195ce4u: goto label_195ce4;
        case 0x195cf4u: goto label_195cf4;
        default: break;
    }

    ctx->pc = 0x195ca8u;

    // 0x195ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195cac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x195cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x195cb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x195cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x195cb4: 0x24424c30  addiu       $v0, $v0, 0x4C30
    ctx->pc = 0x195cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
    // 0x195cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195cc4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x195cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x195cc8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x195cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x195ccc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x195CCCu;
    {
        const bool branch_taken_0x195ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CCCu;
        // 0x195cd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ccc) {
            ctx->pc = 0x195CE8u;
            goto label_195ce8;
        }
    }
    ctx->pc = 0x195CD4u;
    // 0x195cd4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x195cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x195cd8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x195cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cdc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x195CDCu;
    SET_GPR_U32(ctx, 31, 0x195CE4u);
    ctx->pc = 0x195CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CDCu;
    // 0x195ce0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x195CDCu, 0x195CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CE4u;
label_195ce4:
    // 0x195ce4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x195ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_195ce8:
    // 0x195ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cec: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x195CECu;
    SET_GPR_U32(ctx, 31, 0x195CF4u);
    ctx->pc = 0x195CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CECu;
    // 0x195cf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x195CECu, 0x195CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CF4u;
label_195cf4:
    // 0x195cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x195cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d00: 0x3e00008  jr          $ra
    ctx->pc = 0x195D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D00u;
        // 0x195d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195D08u;
}
