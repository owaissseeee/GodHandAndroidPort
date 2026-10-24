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

// Function: func_00183380
// Address: 0x183380 - 0x1833e0
void func_00183380_0x183380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00183380_0x183380");
#endif

    switch (ctx->pc) {
        case 0x1833bcu: goto label_1833bc;
        case 0x1833ccu: goto label_1833cc;
        default: break;
    }

    ctx->pc = 0x183380u;

    // 0x183380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183384: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x183384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x183388: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x183388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18338c: 0x24422b48  addiu       $v0, $v0, 0x2B48
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11080));
    // 0x183390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18339c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18339cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1833a0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1833a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1833a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1833A4u;
    {
        const bool branch_taken_0x1833a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1833A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833A4u;
        // 0x1833a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833a4) {
            ctx->pc = 0x1833C0u;
            goto label_1833c0;
        }
    }
    ctx->pc = 0x1833ACu;
    // 0x1833ac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1833acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1833b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1833b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833b4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1833B4u;
    SET_GPR_U32(ctx, 31, 0x1833BCu);
    ctx->pc = 0x1833B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833B4u;
    // 0x1833b8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1833B4u, 0x1833BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833BCu;
label_1833bc:
    // 0x1833bc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1833bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1833c0:
    // 0x1833c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1833c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833c4: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x1833C4u;
    SET_GPR_U32(ctx, 31, 0x1833CCu);
    ctx->pc = 0x1833C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833C4u;
    // 0x1833c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x1833C4u, 0x1833CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833CCu;
label_1833cc:
    // 0x1833cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1833ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1833d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1833d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1833d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1833d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1833d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1833D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1833DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833D8u;
        // 0x1833dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1833D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1833E0u;
}
