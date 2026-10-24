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

// Function: func_001E8E48
// Address: 0x1e8e48 - 0x1e8e88
void func_001E8E48_0x1e8e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E8E48_0x1e8e48");
#endif

    ctx->pc = 0x1e8e48u;

    // 0x1e8e48: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e8e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8e4c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8E4Cu;
    {
        const bool branch_taken_0x1e8e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8e4c) {
            ctx->pc = 0x1E8E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8E4Cu;
            // 0x1e8e50: 0x8c8400f0  lw          $a0, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8E5Cu;
            goto label_1e8e5c;
        }
    }
    ctx->pc = 0x1E8E54u;
    // 0x1e8e54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E54u;
        // 0x1e8e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8E5Cu;
label_1e8e5c:
    // 0x1e8e5c: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8E5Cu;
    {
        const bool branch_taken_0x1e8e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e8e5c) {
            ctx->pc = 0x1E8E7Cu;
            goto label_1e8e7c;
        }
    }
    ctx->pc = 0x1E8E64u;
    // 0x1e8e64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1e8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8e68: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1e8e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1e8e6c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1e8e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8e70: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1e8e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1e8e74: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e8e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8e78: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1e8e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1e8e7c:
    // 0x1e8e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E7Cu;
        // 0x1e8e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8E84u;
    // 0x1e8e84: 0x0  nop
    ctx->pc = 0x1e8e84u;
    // NOP
    ctx->pc = 0x1e8e88u;
}
