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

// Function: func_002BA828
// Address: 0x2ba828 - 0x2ba878
void func_002BA828_0x2ba828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA828_0x2ba828");
#endif

    switch (ctx->pc) {
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba864u: goto label_2ba864;
        default: break;
    }

    ctx->pc = 0x2ba828u;

    // 0x2ba828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba82c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2ba82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2ba830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba834: 0x8c626338  lw          $v0, 0x6338($v1)
    ctx->pc = 0x2ba834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786338u));
    // 0x2ba838: 0x24706338  addiu       $s0, $v1, 0x6338
    ctx->pc = 0x2ba838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25400));
    // 0x2ba83c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA83Cu;
    {
        const bool branch_taken_0x2ba83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA83Cu;
        // 0x2ba840: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba83c) {
            ctx->pc = 0x2BA864u;
            goto label_2ba864;
        }
    }
    ctx->pc = 0x2BA844u;
    // 0x2ba844: 0xc0aebe8  jal         func_2BAFA0
    ctx->pc = 0x2BA844u;
    SET_GPR_U32(ctx, 31, 0x2BA84Cu);
    ctx->pc = 0x2BAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFA0u, 0x2BA844u, 0x2BA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA84Cu;
label_2ba84c:
    // 0x2ba84c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ba84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ba850: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2ba850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2ba854: 0x24a5be18  addiu       $a1, $a1, -0x41E8
    ctx->pc = 0x2ba854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950424));
    // 0x2ba858: 0x24c60d68  addiu       $a2, $a2, 0xD68
    ctx->pc = 0x2ba858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3432));
    // 0x2ba85c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BA85Cu;
    SET_GPR_U32(ctx, 31, 0x2BA864u);
    ctx->pc = 0x2BA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA85Cu;
    // 0x2ba860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BA85Cu, 0x2BA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA864u;
label_2ba864:
    // 0x2ba864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba86c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba870: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA870u;
        // 0x2ba874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA878u;
}
