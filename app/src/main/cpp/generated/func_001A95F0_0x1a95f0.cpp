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

// Function: func_001A95F0
// Address: 0x1a95f0 - 0x1a9638
void func_001A95F0_0x1a95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A95F0_0x1a95f0");
#endif

    switch (ctx->pc) {
        case 0x1a9620u: goto label_1a9620;
        default: break;
    }

    ctx->pc = 0x1a95f0u;

    // 0x1a95f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a95f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a95f4: 0x24860100  addiu       $a2, $a0, 0x100
    ctx->pc = 0x1a95f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1a95f8: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A95F8u;
    {
        const bool branch_taken_0x1a95f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95F8u;
        // 0x1a95fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95f8) {
            ctx->pc = 0x1A9618u;
            goto label_1a9618;
        }
    }
    ctx->pc = 0x1A9600u;
    // 0x1a9600: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1a9600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9604: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x1a9604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x1a9608: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a9608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a960c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1a960cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a9610: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a9610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9614: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1a9614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1a9618:
    // 0x1a9618: 0xc06a484  jal         func_1A9210
    ctx->pc = 0x1A9618u;
    SET_GPR_U32(ctx, 31, 0x1A9620u);
    ctx->pc = 0x1A961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9618u;
    // 0x1a961c: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9210u, 0x1A9618u, 0x1A9620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9620u;
label_1a9620:
    // 0x1a9620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9624: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9624u;
        // 0x1a9628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A962Cu;
    // 0x1a962c: 0x0  nop
    ctx->pc = 0x1a962cu;
    // NOP
    // 0x1a9630: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a9630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9634: 0x0  nop
    ctx->pc = 0x1a9634u;
    // NOP
    ctx->pc = 0x1a9638u;
}
