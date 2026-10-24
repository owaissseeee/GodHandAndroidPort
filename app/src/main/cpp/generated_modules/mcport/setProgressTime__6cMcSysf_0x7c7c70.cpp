#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: setProgressTime__6cMcSysf
// Address: 0x7c7c70 - 0x7c7cb0
void setProgressTime__6cMcSysf_0x7c7c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setProgressTime__6cMcSysf_0x7c7c70");
#endif

    switch (ctx->pc) {
        case 0x7c7ca4u: goto label_7c7ca4;
        default: break;
    }

    ctx->pc = 0x7c7c70u;

    // 0x7c7c70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7c7c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7c7c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7c7c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7c7c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c7c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c7c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7c80: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x7c7c80u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[12]);
    // 0x7c7c84: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x7c7c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c7c88: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x7c7c88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x7c7c8c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x7c7c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7c7c90: 0x0  nop
    ctx->pc = 0x7c7c90u;
    // NOP
    // 0x7c7c94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7C7C94u;
    {
        const bool branch_taken_0x7c7c94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7c7c94) {
            ctx->pc = 0x7C7C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7C94u;
            // 0x7c7c98: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7C9Cu;
            goto label_7c7c9c;
        }
    }
    ctx->pc = 0x7C7C9Cu;
label_7c7c9c:
    // 0x7c7c9c: 0xc1f1fa0  jal         func_7C7E80
    ctx->pc = 0x7C7C9Cu;
    SET_GPR_U32(ctx, 31, 0x7C7CA4u);
    ctx->pc = 0x7C7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7E80u, 0x7C7C9Cu, 0x7C7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7CA4u;
label_7c7ca4:
    // 0x7c7ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7CA8u;
        // 0x7c7cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7CB0u;
}
} // namespace gh_mcport
