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

// Function: func_002B17F8
// Address: 0x2b17f8 - 0x2b1830
void func_002B17F8_0x2b17f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B17F8_0x2b17f8");
#endif

    switch (ctx->pc) {
        case 0x2b1818u: goto label_2b1818;
        default: break;
    }

    ctx->pc = 0x2b17f8u;

    // 0x2b17f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b17f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b17fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b17fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1804: 0x944500a6  lhu         $a1, 0xA6($v0)
    ctx->pc = 0x2b1804u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 166)));
    // 0x2b1808: 0x944300a8  lhu         $v1, 0xA8($v0)
    ctx->pc = 0x2b1808u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2b180c: 0xa44500ae  sh          $a1, 0xAE($v0)
    ctx->pc = 0x2b180cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 174), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b1810: 0xc0ac720  jal         func_2B1C80
    ctx->pc = 0x2B1810u;
    SET_GPR_U32(ctx, 31, 0x2B1818u);
    ctx->pc = 0x2B1814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1810u;
    // 0x2b1814: 0xa44300b0  sh          $v1, 0xB0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 176), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C80u, 0x2B1810u, 0x2B1818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1818u;
label_2b1818:
    // 0x2b1818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b181c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B181Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B181Cu;
        // 0x2b1820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B181Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1824u;
    // 0x2b1824: 0x0  nop
    ctx->pc = 0x2b1824u;
    // NOP
    // 0x2b1828: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b1828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b182c: 0x0  nop
    ctx->pc = 0x2b182cu;
    // NOP
    ctx->pc = 0x2b1830u;
}
