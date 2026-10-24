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

// Function: func_0019BEB0
// Address: 0x19beb0 - 0x19bf10
void func_0019BEB0_0x19beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019BEB0_0x19beb0");
#endif

    switch (ctx->pc) {
        case 0x19beecu: goto label_19beec;
        case 0x19befcu: goto label_19befc;
        default: break;
    }

    ctx->pc = 0x19beb0u;

    // 0x19beb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19beb4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19beb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19bebc: 0x244259d8  addiu       $v0, $v0, 0x59D8
    ctx->pc = 0x19bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23000));
    // 0x19bec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19becc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19beccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19bed0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19bed4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BED4u;
    {
        const bool branch_taken_0x19bed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BED4u;
        // 0x19bed8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bed4) {
            ctx->pc = 0x19BEF0u;
            goto label_19bef0;
        }
    }
    ctx->pc = 0x19BEDCu;
    // 0x19bedc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19bee0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19bee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bee4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19BEE4u;
    SET_GPR_U32(ctx, 31, 0x19BEECu);
    ctx->pc = 0x19BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEE4u;
    // 0x19bee8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19BEE4u, 0x19BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEECu;
label_19beec:
    // 0x19beec: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19beecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19bef0:
    // 0x19bef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bef4: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19BEF4u;
    SET_GPR_U32(ctx, 31, 0x19BEFCu);
    ctx->pc = 0x19BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BEF4u;
    // 0x19bef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19BEF4u, 0x19BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEFCu;
label_19befc:
    // 0x19befc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19befcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bf08: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF08u;
        // 0x19bf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BF10u;
}
