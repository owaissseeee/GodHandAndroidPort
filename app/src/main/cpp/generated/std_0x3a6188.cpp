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

// Function: std
// Address: 0x3a6188 - 0x3a61f0
void std_0x3a6188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_0x3a6188");
#endif

    ctx->pc = 0x3a6188u;

    // 0x3a6188: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3a6188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3a618c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a618cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3a6190: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x3a6190u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x3a6194: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x3a6194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x3a6198: 0x24426d78  addiu       $v0, $v0, 0x6D78
    ctx->pc = 0x3a6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28024));
    // 0x3a619c: 0x24636de0  addiu       $v1, $v1, 0x6DE0
    ctx->pc = 0x3a619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28128));
    // 0x3a61a0: 0x25086e60  addiu       $t0, $t0, 0x6E60
    ctx->pc = 0x3a61a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28256));
    // 0x3a61a4: 0x25296ec8  addiu       $t1, $t1, 0x6EC8
    ctx->pc = 0x3a61a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28360));
    // 0x3a61a8: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x3a61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x3a61ac: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x3a61acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x3a61b0: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x3a61b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x3a61b4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x3a61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x3a61b8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3a61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3a61bc: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x3a61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x3a61c0: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x3a61c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x3a61c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3a61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3a61c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3a61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3a61cc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3a61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3a61d0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3a61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3a61d4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3a61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3a61d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A61D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A61D8u;
        // 0x3a61dc: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A61D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A61E0u;
    // 0x3a61e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3a61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a61e4: 0x0  nop
    ctx->pc = 0x3a61e4u;
    // NOP
    // 0x3a61e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3a61e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a61ec: 0x0  nop
    ctx->pc = 0x3a61ecu;
    // NOP
    ctx->pc = 0x3a61f0u;
}
