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

// Function: func_0018EA98
// Address: 0x18ea98 - 0x18eaf8
void func_0018EA98_0x18ea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018EA98_0x18ea98");
#endif

    switch (ctx->pc) {
        case 0x18ead4u: goto label_18ead4;
        case 0x18eae4u: goto label_18eae4;
        default: break;
    }

    ctx->pc = 0x18ea98u;

    // 0x18ea98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18ea98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18ea9c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18eaa0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18eaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18eaa4: 0x24423b88  addiu       $v0, $v0, 0x3B88
    ctx->pc = 0x18eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15240));
    // 0x18eaa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18eaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18eaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18eaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18eab4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18eab8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x18eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x18eabc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EABCu;
    {
        const bool branch_taken_0x18eabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EABCu;
        // 0x18eac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eabc) {
            ctx->pc = 0x18EAD8u;
            goto label_18ead8;
        }
    }
    ctx->pc = 0x18EAC4u;
    // 0x18eac4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18eac8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18eac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eacc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x18EACCu;
    SET_GPR_U32(ctx, 31, 0x18EAD4u);
    ctx->pc = 0x18EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EACCu;
    // 0x18ead0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x18EACCu, 0x18EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAD4u;
label_18ead4:
    // 0x18ead4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x18ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_18ead8:
    // 0x18ead8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eadc: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x18EADCu;
    SET_GPR_U32(ctx, 31, 0x18EAE4u);
    ctx->pc = 0x18EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EADCu;
    // 0x18eae0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x18EADCu, 0x18EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAE4u;
label_18eae4:
    // 0x18eae4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18eae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18eae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18eae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18eaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18eaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x18EAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAF0u;
        // 0x18eaf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EAF8u;
}
