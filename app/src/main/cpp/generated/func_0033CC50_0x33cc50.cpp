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

// Function: func_0033CC50
// Address: 0x33cc50 - 0x33ccf0
void func_0033CC50_0x33cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033CC50_0x33cc50");
#endif

    ctx->pc = 0x33cc50u;

    // 0x33cc50: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x33cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x33cc54: 0x948c009a  lhu         $t4, 0x9A($a0)
    ctx->pc = 0x33cc54u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x33cc58: 0x8c8f003c  lw          $t7, 0x3C($a0)
    ctx->pc = 0x33cc58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x33cc5c: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x33cc5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x33cc60: 0x8c8e0040  lw          $t6, 0x40($a0)
    ctx->pc = 0x33cc60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x33cc64: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x33cc64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cc68: 0x8c8d0044  lw          $t5, 0x44($a0)
    ctx->pc = 0x33cc68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x33cc6c: 0x3407bb80  ori         $a3, $zero, 0xBB80
    ctx->pc = 0x33cc6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x33cc70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cc74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33cc78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33cc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33cc7c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x33cc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x33cc80: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x33cc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cc84: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x33cc84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x33cc88: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x33cc88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x33cc8c: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x33cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x33cc90: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x33cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x33cc94: 0xa085000d  sb          $a1, 0xD($a0)
    ctx->pc = 0x33cc94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x33cc98: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x33cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x33cc9c: 0xa086000f  sb          $a2, 0xF($a0)
    ctx->pc = 0x33cc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 6));
    // 0x33cca0: 0xa48c0098  sh          $t4, 0x98($a0)
    ctx->pc = 0x33cca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 12));
    // 0x33cca4: 0xac880050  sw          $t0, 0x50($a0)
    ctx->pc = 0x33cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
    // 0x33cca8: 0xac890054  sw          $t1, 0x54($a0)
    ctx->pc = 0x33cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 9));
    // 0x33ccac: 0xac8b0058  sw          $t3, 0x58($a0)
    ctx->pc = 0x33ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 11));
    // 0x33ccb0: 0xac8f005c  sw          $t7, 0x5C($a0)
    ctx->pc = 0x33ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 15));
    // 0x33ccb4: 0xac8e0060  sw          $t6, 0x60($a0)
    ctx->pc = 0x33ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 14));
    // 0x33ccb8: 0xac8d0064  sw          $t5, 0x64($a0)
    ctx->pc = 0x33ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 13));
    // 0x33ccbc: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x33ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x33ccc0: 0xac8b0010  sw          $t3, 0x10($a0)
    ctx->pc = 0x33ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
    // 0x33ccc4: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x33ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x33ccc8: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x33ccc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x33cccc: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x33ccccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x33ccd0: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x33ccd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x33ccd4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x33ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x33ccd8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x33ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x33ccdc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x33ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x33cce0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x33cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x33cce4: 0x3e00008  jr          $ra
    ctx->pc = 0x33CCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCE4u;
        // 0x33cce8: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CCECu;
    // 0x33ccec: 0x0  nop
    ctx->pc = 0x33ccecu;
    // NOP
    ctx->pc = 0x33ccf0u;
}
