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

// Function: ClearObjResource_19D7E8
// Address: 0x19d7e8 - 0x19d848
void ClearObjResource_19D7E8_0x19d7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearObjResource_19D7E8_0x19d7e8");
#endif

    switch (ctx->pc) {
        case 0x19d824u: goto label_19d824;
        case 0x19d834u: goto label_19d834;
        default: break;
    }

    ctx->pc = 0x19d7e8u;

    // 0x19d7e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d7ec: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19d7f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19d7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19d7f4: 0x24425ee0  addiu       $v0, $v0, 0x5EE0
    ctx->pc = 0x19d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24288));
    // 0x19d7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d7fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d804: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19d804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19d808: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19d808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19d80c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D80Cu;
    {
        const bool branch_taken_0x19d80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D80Cu;
        // 0x19d810: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d80c) {
            ctx->pc = 0x19D828u;
            goto label_19d828;
        }
    }
    ctx->pc = 0x19D814u;
    // 0x19d814: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19d814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19d818: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19d818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d81c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19D81Cu;
    SET_GPR_U32(ctx, 31, 0x19D824u);
    ctx->pc = 0x19D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D81Cu;
    // 0x19d820: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19D81Cu, 0x19D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D824u;
label_19d824:
    // 0x19d824: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19d824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19d828:
    // 0x19d828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d82c: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x19D82Cu;
    SET_GPR_U32(ctx, 31, 0x19D834u);
    ctx->pc = 0x19D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D82Cu;
    // 0x19d830: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x19D82Cu, 0x19D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D834u;
label_19d834:
    // 0x19d834: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19d834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d840: 0x3e00008  jr          $ra
    ctx->pc = 0x19D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D840u;
        // 0x19d844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D848u;
}
