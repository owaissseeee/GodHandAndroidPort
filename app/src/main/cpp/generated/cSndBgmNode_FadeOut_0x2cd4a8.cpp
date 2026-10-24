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

// Function: cSndBgmNode_FadeOut
// Address: 0x2cd4a8 - 0x2cd4e0
void cSndBgmNode_FadeOut_0x2cd4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_FadeOut_0x2cd4a8");
#endif

    switch (ctx->pc) {
        case 0x2cd4d0u: goto label_2cd4d0;
        default: break;
    }

    ctx->pc = 0x2cd4a8u;

    // 0x2cd4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd4b0: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x2cd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x2cd4b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2cd4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2cd4b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD4B8u;
    {
        const bool branch_taken_0x2cd4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4B8u;
        // 0x2cd4bc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4b8) {
            ctx->pc = 0x2CD4C4u;
            goto label_2cd4c4;
        }
    }
    ctx->pc = 0x2CD4C0u;
    // 0x2cd4c0: 0xc48d00c4  lwc1        $f13, 0xC4($a0)
    ctx->pc = 0x2cd4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2cd4c4:
    // 0x2cd4c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2cd4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd4c8: 0xc0dcd78  jal         func_3735E0
    ctx->pc = 0x2CD4C8u;
    SET_GPR_U32(ctx, 31, 0x2CD4D0u);
    ctx->pc = 0x2CD4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4C8u;
    // 0x2cd4cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3735E0u, 0x2CD4C8u, 0x2CD4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4D0u;
label_2cd4d0:
    // 0x2cd4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4D4u;
        // 0x2cd4d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD4DCu;
    // 0x2cd4dc: 0x0  nop
    ctx->pc = 0x2cd4dcu;
    // NOP
    ctx->pc = 0x2cd4e0u;
}
