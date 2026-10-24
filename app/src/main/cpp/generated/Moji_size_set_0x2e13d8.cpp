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

// Function: Moji_size_set
// Address: 0x2e13d8 - 0x2e1468
void Moji_size_set_0x2e13d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Moji_size_set_0x2e13d8");
#endif

    ctx->pc = 0x2e13d8u;

    // 0x2e13d8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2e13d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e13dc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E13DCu;
    {
        const bool branch_taken_0x2e13dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13DCu;
        // 0x2e13e0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13dc) {
            ctx->pc = 0x2E13FCu;
            goto label_2e13fc;
        }
    }
    ctx->pc = 0x2E13E4u;
    // 0x2e13e4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E13E4u;
    {
        const bool branch_taken_0x2e13e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13E4u;
        // 0x2e13e8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13e4) {
            ctx->pc = 0x2E1400u;
            goto label_2e1400;
        }
    }
    ctx->pc = 0x2E13ECu;
    // 0x2e13ec: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x2e13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x2e13f0: 0xa0450009  sb          $a1, 0x9($v0)
    ctx->pc = 0x2e13f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e13f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E13F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13F4u;
        // 0x2e13f8: 0xa0440008  sb          $a0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E13F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E13FCu;
label_2e13fc:
    // 0x2e13fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2e1400:
    // 0x2e1400: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2e1400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e1404: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x2e1404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
    // 0x2e1408: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x2e1408u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e140c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E140Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E140Cu;
        // 0x2e1410: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E140Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1414u;
    // 0x2e1414: 0x0  nop
    ctx->pc = 0x2e1414u;
    // NOP
    // 0x2e1418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e141c: 0x0  nop
    ctx->pc = 0x2e141cu;
    // NOP
    // 0x2e1420: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2e1420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e1424: 0x0  nop
    ctx->pc = 0x2e1424u;
    // NOP
    // 0x2e1428: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2e1428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e142c: 0x0  nop
    ctx->pc = 0x2e142cu;
    // NOP
    // 0x2e1430: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2e1430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e1434: 0x0  nop
    ctx->pc = 0x2e1434u;
    // NOP
    // 0x2e1438: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x2e1438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2e143c: 0x0  nop
    ctx->pc = 0x2e143cu;
    // NOP
    // 0x2e1440: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1444: 0x0  nop
    ctx->pc = 0x2e1444u;
    // NOP
    // 0x2e1448: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2e1448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2e144c: 0x0  nop
    ctx->pc = 0x2e144cu;
    // NOP
    // 0x2e1450: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e1454: 0x0  nop
    ctx->pc = 0x2e1454u;
    // NOP
    // 0x2e1458: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e1458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e145c: 0x0  nop
    ctx->pc = 0x2e145cu;
    // NOP
    // 0x2e1460: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e1464: 0x0  nop
    ctx->pc = 0x2e1464u;
    // NOP
    ctx->pc = 0x2e1468u;
}
