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

// Function: CornerPanel_setPointsState4
// Address: 0x2b1be8 - 0x2b1c30
void CornerPanel_setPointsState4_0x2b1be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CornerPanel_setPointsState4_0x2b1be8");
#endif

    switch (ctx->pc) {
        case 0x2b1c24u: goto label_2b1c24;
        default: break;
    }

    ctx->pc = 0x2b1be8u;

    // 0x2b1be8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b1be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1bec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b1becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b1bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1bf4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2b1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b1bf8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2b1bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b1bfc: 0x24060170  addiu       $a2, $zero, 0x170
    ctx->pc = 0x2b1bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x2b1c00: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x2b1c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2b1c04: 0xa44400ac  sh          $a0, 0xAC($v0)
    ctx->pc = 0x2b1c04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 172), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b1c08: 0xa44300aa  sh          $v1, 0xAA($v0)
    ctx->pc = 0x2b1c08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b1c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1c10: 0xa44500ae  sh          $a1, 0xAE($v0)
    ctx->pc = 0x2b1c10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 174), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b1c14: 0xa44600b0  sh          $a2, 0xB0($v0)
    ctx->pc = 0x2b1c14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 176), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b1c18: 0xa44500a6  sh          $a1, 0xA6($v0)
    ctx->pc = 0x2b1c18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 166), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b1c1c: 0xc0ac720  jal         func_2B1C80
    ctx->pc = 0x2B1C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B1C24u);
    ctx->pc = 0x2B1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1C1Cu;
    // 0x2b1c20: 0xa44600a8  sh          $a2, 0xA8($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1C80u, 0x2B1C1Cu, 0x2B1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1C24u;
label_2b1c24:
    // 0x2b1c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1c28: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1C28u;
        // 0x2b1c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1C30u;
}
