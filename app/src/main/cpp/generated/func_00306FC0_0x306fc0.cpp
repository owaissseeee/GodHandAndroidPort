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

// Function: func_00306FC0
// Address: 0x306fc0 - 0x306ff8
void func_00306FC0_0x306fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306FC0_0x306fc0");
#endif

    ctx->pc = 0x306fc0u;

    // 0x306fc0: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x306fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x306fc4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x306FC4u;
    {
        const bool branch_taken_0x306fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306fc4) {
            ctx->pc = 0x306FECu;
            goto label_306fec;
        }
    }
    ctx->pc = 0x306FCCu;
    // 0x306fcc: 0xa4a00012  sh          $zero, 0x12($a1)
    ctx->pc = 0x306fccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x306fd0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x306fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x306fd4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x306fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x306fd8: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x306fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x306fdc: 0xa0a00009  sb          $zero, 0x9($a1)
    ctx->pc = 0x306fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x306fe0: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x306fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x306fe4: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x306fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x306fe8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x306fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_306fec:
    // 0x306fec: 0x3e00008  jr          $ra
    ctx->pc = 0x306FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306FF4u;
    // 0x306ff4: 0x0  nop
    ctx->pc = 0x306ff4u;
    // NOP
    ctx->pc = 0x306ff8u;
}
