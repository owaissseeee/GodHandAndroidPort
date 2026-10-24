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

// Function: CustomIDWork_Initialize
// Address: 0x2d5da8 - 0x2d5de0
void CustomIDWork_Initialize_0x2d5da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_Initialize_0x2d5da8");
#endif

    ctx->pc = 0x2d5da8u;

    // 0x2d5da8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5DA8u;
    {
        const bool branch_taken_0x2d5da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5da8) {
            ctx->pc = 0x2D5DD4u;
            goto label_2d5dd4;
        }
    }
    ctx->pc = 0x2D5DB0u;
    // 0x2d5db0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2d5db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2d5db4: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2d5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5db8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2d5db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2d5dbc: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x2d5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5dc0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2d5dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2d5dc4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2d5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2d5dc8: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x2d5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x2d5dcc: 0x90a3002b  lbu         $v1, 0x2B($a1)
    ctx->pc = 0x2d5dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 43)));
    // 0x2d5dd0: 0xa0830078  sb          $v1, 0x78($a0)
    ctx->pc = 0x2d5dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 3));
label_2d5dd4:
    // 0x2d5dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5DDCu;
    // 0x2d5ddc: 0x0  nop
    ctx->pc = 0x2d5ddcu;
    // NOP
    ctx->pc = 0x2d5de0u;
}
