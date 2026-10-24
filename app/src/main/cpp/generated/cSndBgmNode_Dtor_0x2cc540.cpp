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

// Function: cSndBgmNode_Dtor
// Address: 0x2cc540 - 0x2cc568
void cSndBgmNode_Dtor_0x2cc540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Dtor_0x2cc540");
#endif

    switch (ctx->pc) {
        case 0x2cc55cu: goto label_2cc55c;
        default: break;
    }

    ctx->pc = 0x2cc540u;

    // 0x2cc540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc544: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2cc544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2cc548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc54c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2cc54cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc550: 0x2442cee8  addiu       $v0, $v0, -0x3118
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954728));
    // 0x2cc554: 0xc0dcb20  jal         func_372C80
    ctx->pc = 0x2CC554u;
    SET_GPR_U32(ctx, 31, 0x2CC55Cu);
    ctx->pc = 0x2CC558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC554u;
    // 0x2cc558: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C80u, 0x2CC554u, 0x2CC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC55Cu;
label_2cc55c:
    // 0x2cc55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc560: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC560u;
        // 0x2cc564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC568u;
}
