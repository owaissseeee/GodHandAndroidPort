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

// Function: func_00171A70
// Address: 0x171a70 - 0x171ab8
void func_00171A70_0x171a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171A70_0x171a70");
#endif

    switch (ctx->pc) {
        case 0x171aa0u: goto label_171aa0;
        default: break;
    }

    ctx->pc = 0x171a70u;

    // 0x171a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171a74: 0x24860100  addiu       $a2, $a0, 0x100
    ctx->pc = 0x171a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x171a78: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x171A78u;
    {
        const bool branch_taken_0x171a78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x171A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A78u;
        // 0x171a7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a78) {
            ctx->pc = 0x171A98u;
            goto label_171a98;
        }
    }
    ctx->pc = 0x171A80u;
    // 0x171a80: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x171a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a84: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x171a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x171a88: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x171a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171a8c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x171a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x171a90: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x171a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a94: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x171a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_171a98:
    // 0x171a98: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x171A98u;
    SET_GPR_U32(ctx, 31, 0x171AA0u);
    ctx->pc = 0x171A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A98u;
    // 0x171a9c: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x171A98u, 0x171AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171AA0u;
label_171aa0:
    // 0x171aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x171AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AA4u;
        // 0x171aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171AACu;
    // 0x171aac: 0x0  nop
    ctx->pc = 0x171aacu;
    // NOP
    // 0x171ab0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x171ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171ab4: 0x0  nop
    ctx->pc = 0x171ab4u;
    // NOP
    ctx->pc = 0x171ab8u;
}
