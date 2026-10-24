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

// Function: ForwardVec3At30_147C60
// Address: 0x147c60 - 0x147c88
void ForwardVec3At30_147C60_0x147c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardVec3At30_147C60_0x147c60");
#endif

    switch (ctx->pc) {
        case 0x147c78u: goto label_147c78;
        default: break;
    }

    ctx->pc = 0x147c60u;

    // 0x147c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147c68: 0xc4ae0038  lwc1        $f14, 0x38($a1)
    ctx->pc = 0x147c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x147c6c: 0xc4ac0030  lwc1        $f12, 0x30($a1)
    ctx->pc = 0x147c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x147c70: 0xc0541c4  jal         func_150710
    ctx->pc = 0x147C70u;
    SET_GPR_U32(ctx, 31, 0x147C78u);
    ctx->pc = 0x147C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C70u;
    // 0x147c74: 0xc4ad0034  lwc1        $f13, 0x34($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150710u, 0x147C70u, 0x147C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C78u;
label_147c78:
    // 0x147c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x147C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C7Cu;
        // 0x147c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147C84u;
    // 0x147c84: 0x0  nop
    ctx->pc = 0x147c84u;
    // NOP
    ctx->pc = 0x147c88u;
}
