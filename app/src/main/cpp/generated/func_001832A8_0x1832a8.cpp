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

// Function: func_001832A8
// Address: 0x1832a8 - 0x1832f0
void func_001832A8_0x1832a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001832A8_0x1832a8");
#endif

    switch (ctx->pc) {
        case 0x1832d8u: goto label_1832d8;
        default: break;
    }

    ctx->pc = 0x1832a8u;

    // 0x1832a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1832ac: 0x24860100  addiu       $a2, $a0, 0x100
    ctx->pc = 0x1832acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1832b0: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1832B0u;
    {
        const bool branch_taken_0x1832b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1832B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832B0u;
        // 0x1832b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832b0) {
            ctx->pc = 0x1832D0u;
            goto label_1832d0;
        }
    }
    ctx->pc = 0x1832B8u;
    // 0x1832b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1832b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1832bc: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x1832bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x1832c0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1832c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1832c4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1832c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1832c8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1832c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1832cc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1832ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1832d0:
    // 0x1832d0: 0xc060bfe  jal         func_182FF8
    ctx->pc = 0x1832D0u;
    SET_GPR_U32(ctx, 31, 0x1832D8u);
    ctx->pc = 0x1832D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1832D0u;
    // 0x1832d4: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182FF8u, 0x1832D0u, 0x1832D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832D8u;
label_1832d8:
    // 0x1832d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1832d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1832dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1832DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1832E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832DCu;
        // 0x1832e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1832E4u;
    // 0x1832e4: 0x0  nop
    ctx->pc = 0x1832e4u;
    // NOP
    // 0x1832e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1832e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1832ec: 0x0  nop
    ctx->pc = 0x1832ecu;
    // NOP
    ctx->pc = 0x1832f0u;
}
