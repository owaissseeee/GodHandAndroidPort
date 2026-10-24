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

// Function: func_001B7EA8
// Address: 0x1b7ea8 - 0x1b7ee0
void func_001B7EA8_0x1b7ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B7EA8_0x1b7ea8");
#endif

    ctx->pc = 0x1b7ea8u;

    // 0x1b7ea8: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x1b7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1b7eac: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7EACu;
    {
        const bool branch_taken_0x1b7eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b7eac) {
            ctx->pc = 0x1B7EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7EACu;
            // 0x1b7eb0: 0x8c8205b8  lw          $v0, 0x5B8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7ED0u;
            goto label_1b7ed0;
        }
    }
    ctx->pc = 0x1B7EB4u;
    // 0x1b7eb4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b7eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7eb8: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x1b7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x1b7ebc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1b7ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7ec0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7ec4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7ec8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b7ecc: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x1b7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_1b7ed0:
    // 0x1b7ed0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b7ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1b7ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7ED4u;
        // 0x1b7ed8: 0xac8205b8  sw          $v0, 0x5B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7EDCu;
    // 0x1b7edc: 0x0  nop
    ctx->pc = 0x1b7edcu;
    // NOP
    ctx->pc = 0x1b7ee0u;
}
