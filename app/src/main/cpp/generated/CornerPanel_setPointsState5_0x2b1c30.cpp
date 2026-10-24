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

// Function: CornerPanel_setPointsState5
// Address: 0x2b1c30 - 0x2b1c80
void CornerPanel_setPointsState5_0x2b1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CornerPanel_setPointsState5_0x2b1c30");
#endif

    switch (ctx->pc) {
        case 0x2b1c6cu: goto label_2b1c6c;
        default: break;
    }

    ctx->pc = 0x2b1c30u;

    // 0x2b1c30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b1c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1c3c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2b1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b1c40: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2b1c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b1c44: 0x24060144  addiu       $a2, $zero, 0x144
    ctx->pc = 0x2b1c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x2b1c48: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x2b1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2b1c4c: 0xa44400ac  sh          $a0, 0xAC($v0)
    ctx->pc = 0x2b1c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 172), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b1c50: 0xa44300aa  sh          $v1, 0xAA($v0)
    ctx->pc = 0x2b1c50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b1c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c58: 0xa44500ae  sh          $a1, 0xAE($v0)
    ctx->pc = 0x2b1c58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 174), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b1c5c: 0xa44600b0  sh          $a2, 0xB0($v0)
    ctx->pc = 0x2b1c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 176), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b1c60: 0xa44500a6  sh          $a1, 0xA6($v0)
    ctx->pc = 0x2b1c60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 166), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b1c64: 0xc0ac720  jal         func_2B1C80
    ctx->pc = 0x2B1C64u;
    SET_GPR_U32(ctx, 31, 0x2B1C6Cu);
    ctx->pc = 0x2B1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C64u;
    // 0x2b1c68: 0xa44600a8  sh          $a2, 0xA8($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C80u, 0x2B1C64u, 0x2B1C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C6Cu;
label_2b1c6c:
    // 0x2b1c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C70u;
        // 0x2b1c74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1C78u;
    // 0x2b1c78: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b1c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1c7c: 0x0  nop
    ctx->pc = 0x2b1c7cu;
    // NOP
    ctx->pc = 0x2b1c80u;
}
