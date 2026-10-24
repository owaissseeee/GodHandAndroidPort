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

// Function: func_002DCA58
// Address: 0x2dca58 - 0x2dcad8
void func_002DCA58_0x2dca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DCA58_0x2dca58");
#endif

    switch (ctx->pc) {
        case 0x2dca6cu: goto label_2dca6c;
        case 0x2dca84u: goto label_2dca84;
        case 0x2dcaa8u: goto label_2dcaa8;
        default: break;
    }

    ctx->pc = 0x2dca58u;

    // 0x2dca58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dca5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dca60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dca64: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DCA64u;
    SET_GPR_U32(ctx, 31, 0x2DCA6Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DCA64u, 0x2DCA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA6Cu;
label_2dca6c:
    // 0x2dca6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dca6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dca70: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dca70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dca74: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DCA74u;
    {
        const bool branch_taken_0x2dca74 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dca74) {
            ctx->pc = 0x2DCA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA74u;
            // 0x2dca78: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAC8u;
            goto label_2dcac8;
        }
    }
    ctx->pc = 0x2DCA7Cu;
    // 0x2dca7c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DCA7Cu;
    SET_GPR_U32(ctx, 31, 0x2DCA84u);
    ctx->pc = 0x2DCA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCA7Cu;
    // 0x2dca80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DCA7Cu, 0x2DCA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCA84u;
label_2dca84:
    // 0x2dca84: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DCA84u;
    {
        const bool branch_taken_0x2dca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dca84) {
            ctx->pc = 0x2DCA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA84u;
            // 0x2dca88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAC8u;
            goto label_2dcac8;
        }
    }
    ctx->pc = 0x2DCA8Cu;
    // 0x2dca8c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dca90: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dca90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dca94: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dca94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dca98: 0x5c60000b  bgtzl       $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DCA98u;
    {
        const bool branch_taken_0x2dca98 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dca98) {
            ctx->pc = 0x2DCA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA98u;
            // 0x2dca9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAC8u;
            goto label_2dcac8;
        }
    }
    ctx->pc = 0x2DCAA0u;
    // 0x2dcaa0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DCAA0u;
    SET_GPR_U32(ctx, 31, 0x2DCAA8u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DCAA0u, 0x2DCAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCAA8u;
label_2dcaa8:
    // 0x2dcaa8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCAA8u;
    {
        const bool branch_taken_0x2dcaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcaa8) {
            ctx->pc = 0x2DCAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCAA8u;
            // 0x2dcaac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAC8u;
            goto label_2dcac8;
        }
    }
    ctx->pc = 0x2DCAB0u;
    // 0x2dcab0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2dcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2dcab4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dcab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dcab8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dcab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dcabc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dcabcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dcac0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dcac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dcac4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dcac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcac8:
    // 0x2dcac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcacc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCACCu;
        // 0x2dcad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCAD4u;
    // 0x2dcad4: 0x0  nop
    ctx->pc = 0x2dcad4u;
    // NOP
    ctx->pc = 0x2dcad8u;
}
