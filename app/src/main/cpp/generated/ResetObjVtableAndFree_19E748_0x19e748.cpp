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

// Function: ResetObjVtableAndFree_19E748
// Address: 0x19e748 - 0x19e7a8
void ResetObjVtableAndFree_19E748_0x19e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjVtableAndFree_19E748_0x19e748");
#endif

    switch (ctx->pc) {
        case 0x19e784u: goto label_19e784;
        case 0x19e794u: goto label_19e794;
        default: break;
    }

    ctx->pc = 0x19e748u;

    // 0x19e748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e74c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19e750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e754: 0x24426438  addiu       $v0, $v0, 0x6438
    ctx->pc = 0x19e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25656));
    // 0x19e758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e764: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19e764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19e768: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19e76c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E76Cu;
    {
        const bool branch_taken_0x19e76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E76Cu;
        // 0x19e770: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e76c) {
            ctx->pc = 0x19E788u;
            goto label_19e788;
        }
    }
    ctx->pc = 0x19E774u;
    // 0x19e774: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19e774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19e778: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19e778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e77c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19E77Cu;
    SET_GPR_U32(ctx, 31, 0x19E784u);
    ctx->pc = 0x19E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E77Cu;
    // 0x19e780: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19E77Cu, 0x19E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E784u;
label_19e784:
    // 0x19e784: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19e784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19e788:
    // 0x19e788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e78c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19E78Cu;
    SET_GPR_U32(ctx, 31, 0x19E794u);
    ctx->pc = 0x19E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E78Cu;
    // 0x19e790: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19E78Cu, 0x19E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E794u;
label_19e794:
    // 0x19e794: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7A0u;
        // 0x19e7a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E7A8u;
}
