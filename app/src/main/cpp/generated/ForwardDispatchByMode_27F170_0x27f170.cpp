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

// Function: ForwardDispatchByMode_27F170
// Address: 0x27f170 - 0x27f1b0
void ForwardDispatchByMode_27F170_0x27f170(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardDispatchByMode_27F170_0x27f170");
#endif

    if (__builtin_expect(ctx->pc != 0x27f170u, 0)) {
        switch (ctx->pc) {
            case 0x27f190u: goto label_27f190;
            case 0x27f1a0u: goto label_27f1a0;
            default: break;
        }
    }


    // 0x27f170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f174: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f178: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f180: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x27f184: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f188: 0xc04d1fa  jal         func_1347E8
    SET_GPR_U32(ctx, 31, 0x27F190u);
    ctx->pc = 0x27F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F188u;
    // 0x27f18c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCollisionSolidManage_ReleaseUnit_0x1347e8, 0x1347e8u, 0x27f190u)) {
        return;
    }
label_27f190:
    // 0x27f190: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f194: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f198: 0xc0c1880  jal         func_306200
    SET_GPR_U32(ctx, 31, 0x27F1A0u);
    ctx->pc = 0x27F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F198u;
    // 0x27f19c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &KillEffect_0x306200, 0x306200u, 0x27f1a0u)) {
        return;
    }
label_27f1a0:
    // 0x27f1a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f1a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27F1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1A8u;
        // 0x27f1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F1B0u;
}