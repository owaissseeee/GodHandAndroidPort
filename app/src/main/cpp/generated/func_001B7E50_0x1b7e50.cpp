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

// Function: func_001B7E50
// Address: 0x1b7e50 - 0x1b7ea8
void func_001B7E50_0x1b7e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B7E50_0x1b7e50");
#endif

    ctx->pc = 0x1b7e50u;

    // 0x1b7e50: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x1b7e54: 0x50650008  beql        $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7E54u;
    {
        const bool branch_taken_0x1b7e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b7e54) {
            ctx->pc = 0x1B7E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7E54u;
            // 0x1b7e58: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7E78u;
            goto label_1b7e78;
        }
    }
    ctx->pc = 0x1B7E5Cu;
    // 0x1b7e5c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b7e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e60: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x1b7e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x1b7e64: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1b7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e68: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b7e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b7e6c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e70: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b7e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b7e74: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1b7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1b7e78:
    // 0x1b7e78: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7E78u;
    {
        const bool branch_taken_0x1b7e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7e78) {
            ctx->pc = 0x1B7E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7E78u;
            // 0x1b7e7c: 0x8c8205b8  lw          $v0, 0x5B8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7E9Cu;
            goto label_1b7e9c;
        }
    }
    ctx->pc = 0x1B7E80u;
    // 0x1b7e80: 0xc4800490  lwc1        $f0, 0x490($a0)
    ctx->pc = 0x1b7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e84: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b7e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b7e88: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e8c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b7e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7e90: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e94: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b7e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b7e98: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x1b7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_1b7e9c:
    // 0x1b7e9c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b7e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1b7ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EA0u;
        // 0x1b7ea4: 0xac8205b8  sw          $v0, 0x5B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7EA8u;
}
