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

// Function: func_0017C408
// Address: 0x17c408 - 0x17c450
void func_0017C408_0x17c408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C408_0x17c408");
#endif

    switch (ctx->pc) {
        case 0x17c438u: goto label_17c438;
        default: break;
    }

    ctx->pc = 0x17c408u;

    // 0x17c408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c40c: 0x24860100  addiu       $a2, $a0, 0x100
    ctx->pc = 0x17c40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x17c410: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C410u;
    {
        const bool branch_taken_0x17c410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x17C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C410u;
        // 0x17c414: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c410) {
            ctx->pc = 0x17C430u;
            goto label_17c430;
        }
    }
    ctx->pc = 0x17C418u;
    // 0x17c418: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x17c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c41c: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x17c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x17c420: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c424: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x17c424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x17c428: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c42c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x17c42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_17c430:
    // 0x17c430: 0xc05f00a  jal         func_17C028
    ctx->pc = 0x17C430u;
    SET_GPR_U32(ctx, 31, 0x17C438u);
    ctx->pc = 0x17C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C430u;
    // 0x17c434: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C028u, 0x17C430u, 0x17C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C438u;
label_17c438:
    // 0x17c438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C43Cu;
        // 0x17c440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C444u;
    // 0x17c444: 0x0  nop
    ctx->pc = 0x17c444u;
    // NOP
    // 0x17c448: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17c448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c44c: 0x0  nop
    ctx->pc = 0x17c44cu;
    // NOP
    ctx->pc = 0x17c450u;
}
