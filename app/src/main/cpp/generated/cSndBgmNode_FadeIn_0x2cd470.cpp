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

// Function: cSndBgmNode_FadeIn
// Address: 0x2cd470 - 0x2cd4a8
void cSndBgmNode_FadeIn_0x2cd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_FadeIn_0x2cd470");
#endif

    switch (ctx->pc) {
        case 0x2cd498u: goto label_2cd498;
        default: break;
    }

    ctx->pc = 0x2cd470u;

    // 0x2cd470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd478: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x2cd478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x2cd47c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2cd47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2cd480: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD480u;
    {
        const bool branch_taken_0x2cd480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD480u;
        // 0x2cd484: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd480) {
            ctx->pc = 0x2CD498u;
            goto label_2cd498;
        }
    }
    ctx->pc = 0x2CD488u;
    // 0x2cd488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cd488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd48c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cd48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd490: 0xc0dcd78  jal         func_3735E0
    ctx->pc = 0x2CD490u;
    SET_GPR_U32(ctx, 31, 0x2CD498u);
    ctx->pc = 0x2CD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD490u;
    // 0x2cd494: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3735E0u, 0x2CD490u, 0x2CD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD498u;
label_2cd498:
    // 0x2cd498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd49c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD49Cu;
        // 0x2cd4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD4A4u;
    // 0x2cd4a4: 0x0  nop
    ctx->pc = 0x2cd4a4u;
    // NOP
    ctx->pc = 0x2cd4a8u;
}
