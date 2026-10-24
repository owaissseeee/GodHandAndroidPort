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

// Function: func_002A7CA0
// Address: 0x2a7ca0 - 0x2a7cd0
void func_002A7CA0_0x2a7ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A7CA0_0x2a7ca0");
#endif

    ctx->pc = 0x2a7ca0u;

    // 0x2a7ca0: 0x24820520  addiu       $v0, $a0, 0x520
    ctx->pc = 0x2a7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
    // 0x2a7ca4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7CA4u;
    {
        const bool branch_taken_0x2a7ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7ca4) {
            ctx->pc = 0x2A7CC4u;
            goto label_2a7cc4;
        }
    }
    ctx->pc = 0x2A7CACu;
    // 0x2a7cac: 0xc4800520  lwc1        $f0, 0x520($a0)
    ctx->pc = 0x2a7cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cb0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2a7cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a7cb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a7cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7cb8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2a7cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2a7cbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cc0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2a7cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2a7cc4:
    // 0x2a7cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7CC4u;
        // 0x2a7cc8: 0x90820530  lbu         $v0, 0x530($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1328)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7CCCu;
    // 0x2a7ccc: 0x0  nop
    ctx->pc = 0x2a7cccu;
    // NOP
    ctx->pc = 0x2a7cd0u;
}
