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

// Function: FreeActorResourcesE_1A0690
// Address: 0x1a0690 - 0x1a06f0
void FreeActorResourcesE_1A0690_0x1a0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeActorResourcesE_1A0690_0x1a0690");
#endif

    switch (ctx->pc) {
        case 0x1a06ccu: goto label_1a06cc;
        case 0x1a06dcu: goto label_1a06dc;
        default: break;
    }

    ctx->pc = 0x1a0690u;

    // 0x1a0690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0694: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a0694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a0698: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a0698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a069c: 0x24426b80  addiu       $v0, $v0, 0x6B80
    ctx->pc = 0x1a069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27520));
    // 0x1a06a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a06a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a06a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a06a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a06ac: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a06acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a06b0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1a06b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1a06b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A06B4u;
    {
        const bool branch_taken_0x1a06b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B4u;
        // 0x1a06b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06b4) {
            ctx->pc = 0x1A06D0u;
            goto label_1a06d0;
        }
    }
    ctx->pc = 0x1A06BCu;
    // 0x1a06bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a06bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a06c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06c4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A06C4u;
    SET_GPR_U32(ctx, 31, 0x1A06CCu);
    ctx->pc = 0x1A06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06C4u;
    // 0x1a06c8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A06C4u, 0x1A06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06CCu;
label_1a06cc:
    // 0x1a06cc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1a06ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1a06d0:
    // 0x1a06d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a06d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06d4: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x1A06D4u;
    SET_GPR_U32(ctx, 31, 0x1A06DCu);
    ctx->pc = 0x1A06D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06D4u;
    // 0x1a06d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x1A06D4u, 0x1A06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06DCu;
label_1a06dc:
    // 0x1a06dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a06dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a06e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a06e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a06e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a06e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a06e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A06E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06E8u;
        // 0x1a06ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A06E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A06F0u;
}
