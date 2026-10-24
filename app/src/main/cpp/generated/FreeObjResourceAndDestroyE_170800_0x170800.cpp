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

// Function: FreeObjResourceAndDestroyE_170800
// Address: 0x170800 - 0x170860
void FreeObjResourceAndDestroyE_170800_0x170800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjResourceAndDestroyE_170800_0x170800");
#endif

    switch (ctx->pc) {
        case 0x17083cu: goto label_17083c;
        case 0x17084cu: goto label_17084c;
        default: break;
    }

    ctx->pc = 0x170800u;

    // 0x170800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170804: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x170808: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17080c: 0x244206b0  addiu       $v0, $v0, 0x6B0
    ctx->pc = 0x17080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1712));
    // 0x170810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17081c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17081cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x170820: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x170820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x170824: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170824u;
    {
        const bool branch_taken_0x170824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170824u;
        // 0x170828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170824) {
            ctx->pc = 0x170840u;
            goto label_170840;
        }
    }
    ctx->pc = 0x17082Cu;
    // 0x17082c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170830: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x170830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170834: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x170834u;
    SET_GPR_U32(ctx, 31, 0x17083Cu);
    ctx->pc = 0x170838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170834u;
    // 0x170838: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x170834u, 0x17083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17083Cu;
label_17083c:
    // 0x17083c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x17083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_170840:
    // 0x170840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170844: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x170844u;
    SET_GPR_U32(ctx, 31, 0x17084Cu);
    ctx->pc = 0x170848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170844u;
    // 0x170848: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x170844u, 0x17084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17084Cu;
label_17084c:
    // 0x17084c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17084cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170858: 0x3e00008  jr          $ra
    ctx->pc = 0x170858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170858u;
        // 0x17085c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170860u;
}
