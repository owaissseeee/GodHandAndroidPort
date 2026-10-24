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

// Function: capVu0Acos
// Address: 0x1f8140 - 0x1f8180
void capVu0Acos_0x1f8140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0Acos_0x1f8140");
#endif

    switch (ctx->pc) {
        case 0x1f8170u: goto label_1f8170;
        default: break;
    }

    ctx->pc = 0x1f8140u;

    // 0x1f8140: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f8140u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f8144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8148: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1f8148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1f814c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f814cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f8150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8158: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1f8158u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1f815c: 0x0  nop
    ctx->pc = 0x1f815cu;
    // NOP
    // 0x1f8160: 0x0  nop
    ctx->pc = 0x1f8160u;
    // NOP
    // 0x1f8164: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1f8164u;
    ctx->f[12] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x1f8168: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1F8168u;
    SET_GPR_U32(ctx, 31, 0x1F8170u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1F8168u, 0x1F8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8170u;
label_1f8170:
    // 0x1f8170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8174: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8174u;
        // 0x1f8178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F817Cu;
    // 0x1f817c: 0x0  nop
    ctx->pc = 0x1f817cu;
    // NOP
    ctx->pc = 0x1f8180u;
}
