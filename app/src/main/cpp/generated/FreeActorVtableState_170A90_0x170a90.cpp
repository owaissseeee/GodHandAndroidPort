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

// Function: FreeActorVtableState_170A90
// Address: 0x170a90 - 0x170af0
void FreeActorVtableState_170A90_0x170a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeActorVtableState_170A90_0x170a90");
#endif

    switch (ctx->pc) {
        case 0x170accu: goto label_170acc;
        case 0x170adcu: goto label_170adc;
        default: break;
    }

    ctx->pc = 0x170a90u;

    // 0x170a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170a94: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x170a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x170a98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170a9c: 0x24420780  addiu       $v0, $v0, 0x780
    ctx->pc = 0x170a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x170aa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170aac: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x170aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x170ab0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x170ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x170ab4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170AB4u;
    {
        const bool branch_taken_0x170ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AB4u;
        // 0x170ab8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ab4) {
            ctx->pc = 0x170AD0u;
            goto label_170ad0;
        }
    }
    ctx->pc = 0x170ABCu;
    // 0x170abc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170ac0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x170ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ac4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x170AC4u;
    SET_GPR_U32(ctx, 31, 0x170ACCu);
    ctx->pc = 0x170AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AC4u;
    // 0x170ac8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x170AC4u, 0x170ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170ACCu;
label_170acc:
    // 0x170acc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x170accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_170ad0:
    // 0x170ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ad4: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x170AD4u;
    SET_GPR_U32(ctx, 31, 0x170ADCu);
    ctx->pc = 0x170AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170AD4u;
    // 0x170ad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x170AD4u, 0x170ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170ADCu;
label_170adc:
    // 0x170adc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x170AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AE8u;
        // 0x170aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170AF0u;
}
