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

// Function: func_0019ACA0
// Address: 0x19aca0 - 0x19ad00
void func_0019ACA0_0x19aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019ACA0_0x19aca0");
#endif

    switch (ctx->pc) {
        case 0x19acdcu: goto label_19acdc;
        case 0x19acecu: goto label_19acec;
        default: break;
    }

    ctx->pc = 0x19aca0u;

    // 0x19aca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19aca4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19aca8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19acac: 0x24425718  addiu       $v0, $v0, 0x5718
    ctx->pc = 0x19acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22296));
    // 0x19acb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19acb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19acb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19acbc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19acc0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19acc4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19ACC4u;
    {
        const bool branch_taken_0x19acc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACC4u;
        // 0x19acc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acc4) {
            ctx->pc = 0x19ACE0u;
            goto label_19ace0;
        }
    }
    ctx->pc = 0x19ACCCu;
    // 0x19accc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19acccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19acd0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19acd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acd4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19ACD4u;
    SET_GPR_U32(ctx, 31, 0x19ACDCu);
    ctx->pc = 0x19ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACD4u;
    // 0x19acd8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19ACD4u, 0x19ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACDCu;
label_19acdc:
    // 0x19acdc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19ace0:
    // 0x19ace0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ace0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ace4: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19ACE4u;
    SET_GPR_U32(ctx, 31, 0x19ACECu);
    ctx->pc = 0x19ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACE4u;
    // 0x19ace8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19ACE4u, 0x19ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACECu;
label_19acec:
    // 0x19acec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19acecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19acf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19acf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19acf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19acf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19acf8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACF8u;
        // 0x19acfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ACF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AD00u;
}
