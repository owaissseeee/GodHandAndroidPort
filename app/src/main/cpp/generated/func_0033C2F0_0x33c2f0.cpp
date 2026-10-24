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

// Function: func_0033C2F0
// Address: 0x33c2f0 - 0x33c3a0
void func_0033C2F0_0x33c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C2F0_0x33c2f0");
#endif

    ctx->pc = 0x33c2f0u;

    // 0x33c2f0: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x33c2f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c2f4: 0x8dc300c0  lw          $v1, 0xC0($t6)
    ctx->pc = 0x33c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
    // 0x33c2f8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x33C2F8u;
    {
        const bool branch_taken_0x33c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2F8u;
        // 0x33c2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2f8) {
            ctx->pc = 0x33C398u;
            goto label_33c398;
        }
    }
    ctx->pc = 0x33C300u;
    // 0x33c300: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x33c300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x33c304: 0x8dcc003c  lw          $t4, 0x3C($t6)
    ctx->pc = 0x33c304u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 60)));
    // 0x33c308: 0x8dcd0040  lw          $t5, 0x40($t6)
    ctx->pc = 0x33c308u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x33c30c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x33c30cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c310: 0x8dcb0044  lw          $t3, 0x44($t6)
    ctx->pc = 0x33c310u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x33c314: 0x24090600  addiu       $t1, $zero, 0x600
    ctx->pc = 0x33c314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x33c318: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x33c318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33c31c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x33c31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x33c320: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x33c320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x33c324: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x33c324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x33c328: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33c328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c32c: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x33c32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x33c330: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x33c330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x33c334: 0xa1ca000e  sb          $t2, 0xE($t6)
    ctx->pc = 0x33c334u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 14), (uint8_t)GPR_U32(ctx, 10));
    // 0x33c338: 0xa1c4000d  sb          $a0, 0xD($t6)
    ctx->pc = 0x33c338u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x33c33c: 0xadc30018  sw          $v1, 0x18($t6)
    ctx->pc = 0x33c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
    // 0x33c340: 0xa1c5000f  sb          $a1, 0xF($t6)
    ctx->pc = 0x33c340u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x33c344: 0xa5c60098  sh          $a2, 0x98($t6)
    ctx->pc = 0x33c344u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 152), (uint16_t)GPR_U32(ctx, 6));
    // 0x33c348: 0xadc70050  sw          $a3, 0x50($t6)
    ctx->pc = 0x33c348u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 80), GPR_U32(ctx, 7));
    // 0x33c34c: 0xadc80054  sw          $t0, 0x54($t6)
    ctx->pc = 0x33c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 84), GPR_U32(ctx, 8));
    // 0x33c350: 0xadc90058  sw          $t1, 0x58($t6)
    ctx->pc = 0x33c350u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 88), GPR_U32(ctx, 9));
    // 0x33c354: 0xadcc005c  sw          $t4, 0x5C($t6)
    ctx->pc = 0x33c354u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 92), GPR_U32(ctx, 12));
    // 0x33c358: 0xadcd0060  sw          $t5, 0x60($t6)
    ctx->pc = 0x33c358u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 96), GPR_U32(ctx, 13));
    // 0x33c35c: 0xadcb0064  sw          $t3, 0x64($t6)
    ctx->pc = 0x33c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 100), GPR_U32(ctx, 11));
    // 0x33c360: 0xadc00088  sw          $zero, 0x88($t6)
    ctx->pc = 0x33c360u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 136), GPR_U32(ctx, 0));
    // 0x33c364: 0xa5ca0002  sh          $t2, 0x2($t6)
    ctx->pc = 0x33c364u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x33c368: 0xadc90010  sw          $t1, 0x10($t6)
    ctx->pc = 0x33c368u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 9));
    // 0x33c36c: 0xadc0008c  sw          $zero, 0x8C($t6)
    ctx->pc = 0x33c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 140), GPR_U32(ctx, 0));
    // 0x33c370: 0xa5c0001c  sh          $zero, 0x1C($t6)
    ctx->pc = 0x33c370u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c374: 0xa5c00024  sh          $zero, 0x24($t6)
    ctx->pc = 0x33c374u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c378: 0xa5c00026  sh          $zero, 0x26($t6)
    ctx->pc = 0x33c378u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c37c: 0xadc00020  sw          $zero, 0x20($t6)
    ctx->pc = 0x33c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 0));
    // 0x33c380: 0xadc00028  sw          $zero, 0x28($t6)
    ctx->pc = 0x33c380u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 0));
    // 0x33c384: 0xadc0002c  sw          $zero, 0x2C($t6)
    ctx->pc = 0x33c384u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 0));
    // 0x33c388: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x33c388u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
    // 0x33c38c: 0xadc00034  sw          $zero, 0x34($t6)
    ctx->pc = 0x33c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 52), GPR_U32(ctx, 0));
    // 0x33c390: 0xadc20014  sw          $v0, 0x14($t6)
    ctx->pc = 0x33c390u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 2));
    // 0x33c394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c398:
    // 0x33c398: 0x3e00008  jr          $ra
    ctx->pc = 0x33C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C3A0u;
}
