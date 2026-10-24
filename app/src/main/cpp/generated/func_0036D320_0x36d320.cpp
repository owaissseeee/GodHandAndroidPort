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

// Function: func_0036D320
// Address: 0x36d320 - 0x36d3d0
void func_0036D320_0x36d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D320_0x36d320");
#endif

    ctx->pc = 0x36d320u;

    // 0x36d320: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36d324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d328: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d32c: 0xa0850059  sb          $a1, 0x59($a0)
    ctx->pc = 0x36d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 5));
    // 0x36d330: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x36d330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x36d334: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36d334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36d338: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36d338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36d33c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x36d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x36d340: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x36d340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x36d344: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x36d344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x36d348: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x36d348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x36d34c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x36d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x36d350: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x36d350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x36d354: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x36d354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x36d358: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x36d358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x36d35c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x36d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x36d360: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x36d360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x36d364: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x36d364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x36d368: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x36d368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x36d36c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x36d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x36d370: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x36d370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x36d374: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x36d374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x36d378: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x36d378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x36d37c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x36d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x36d380: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x36d380u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x36d384: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x36d384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x36d388: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x36d388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d38c: 0xa0850055  sb          $a1, 0x55($a0)
    ctx->pc = 0x36d38cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 5));
    // 0x36d390: 0xa0800056  sb          $zero, 0x56($a0)
    ctx->pc = 0x36d390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d394: 0xa0800057  sb          $zero, 0x57($a0)
    ctx->pc = 0x36d394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d398: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x36d398u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d39c: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x36d39cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d3a0: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x36d3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d3a4: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x36d3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d3a8: 0xa083005d  sb          $v1, 0x5D($a0)
    ctx->pc = 0x36d3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x36d3ac: 0xa080005e  sb          $zero, 0x5E($a0)
    ctx->pc = 0x36d3acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d3b0: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x36d3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x36d3b4: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x36d3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x36d3b8: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x36d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x36d3bc: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x36d3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x36d3c0: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x36d3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d3c4: 0xa0830062  sb          $v1, 0x62($a0)
    ctx->pc = 0x36d3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x36d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D3C8u;
        // 0x36d3cc: 0xa0830063  sb          $v1, 0x63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D3D0u;
}
