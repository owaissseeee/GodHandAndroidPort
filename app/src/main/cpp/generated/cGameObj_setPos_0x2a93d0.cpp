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

// Function: cGameObj_setPos
// Address: 0x2a93d0 - 0x2a9420
void cGameObj_setPos_0x2a93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_setPos_0x2a93d0");
#endif

    ctx->pc = 0x2a93d0u;

    // 0x2a93d0: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x2a93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x2a93d4: 0x50650008  beql        $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A93D4u;
    {
        const bool branch_taken_0x2a93d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a93d4) {
            ctx->pc = 0x2A93D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A93D4u;
            // 0x2a93d8: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A93F8u;
            goto label_2a93f8;
        }
    }
    ctx->pc = 0x2A93DCu;
    // 0x2a93dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a93e0: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x2a93e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x2a93e4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a93e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a93e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a93e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a93ec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a93ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a93f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a93f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a93f4: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x2a93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_2a93f8:
    // 0x2a93f8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A93F8u;
    {
        const bool branch_taken_0x2a93f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a93f8) {
            ctx->pc = 0x2A9418u;
            goto label_2a9418;
        }
    }
    ctx->pc = 0x2A9400u;
    // 0x2a9400: 0xc4800490  lwc1        $f0, 0x490($a0)
    ctx->pc = 0x2a9400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9404: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a9408: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a9408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a940c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a940cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a9410: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a9410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9414: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a9414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a9418:
    // 0x2a9418: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9420u;
}
