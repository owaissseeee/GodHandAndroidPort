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

// Function: func_00291FE8
// Address: 0x291fe8 - 0x292018
void func_00291FE8_0x291fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00291FE8_0x291fe8");
#endif

    ctx->pc = 0x291fe8u;

    // 0x291fe8: 0x24820520  addiu       $v0, $a0, 0x520
    ctx->pc = 0x291fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
    // 0x291fec: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x291FECu;
    {
        const bool branch_taken_0x291fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x291fec) {
            ctx->pc = 0x29200Cu;
            goto label_29200c;
        }
    }
    ctx->pc = 0x291FF4u;
    // 0x291ff4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x291ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291ff8: 0xe4800520  swc1        $f0, 0x520($a0)
    ctx->pc = 0x291ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1312), bits); }
    // 0x291ffc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x291ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292000: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x292000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x292004: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x292004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292008: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x292008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_29200c:
    // 0x29200c: 0x3e00008  jr          $ra
    ctx->pc = 0x29200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29200Cu;
        // 0x292010: 0xac860530  sw          $a2, 0x530($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29200Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292014u;
    // 0x292014: 0x0  nop
    ctx->pc = 0x292014u;
    // NOP
    ctx->pc = 0x292018u;
}
