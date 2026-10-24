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

// Function: func_002DCCD0
// Address: 0x2dccd0 - 0x2dcd50
void func_002DCCD0_0x2dccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DCCD0_0x2dccd0");
#endif

    switch (ctx->pc) {
        case 0x2dcce4u: goto label_2dcce4;
        case 0x2dccfcu: goto label_2dccfc;
        case 0x2dcd20u: goto label_2dcd20;
        default: break;
    }

    ctx->pc = 0x2dccd0u;

    // 0x2dccd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dccd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dccd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dccdc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DCCDCu;
    SET_GPR_U32(ctx, 31, 0x2DCCE4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DCCDCu, 0x2DCCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCE4u;
label_2dcce4:
    // 0x2dcce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcce8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dccec: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DCCECu;
    {
        const bool branch_taken_0x2dccec = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dccec) {
            ctx->pc = 0x2DCCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCCECu;
            // 0x2dccf0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD40u;
            goto label_2dcd40;
        }
    }
    ctx->pc = 0x2DCCF4u;
    // 0x2dccf4: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DCCF4u;
    SET_GPR_U32(ctx, 31, 0x2DCCFCu);
    ctx->pc = 0x2DCCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCF4u;
    // 0x2dccf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DCCF4u, 0x2DCCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCFCu;
label_2dccfc:
    // 0x2dccfc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DCCFCu;
    {
        const bool branch_taken_0x2dccfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dccfc) {
            ctx->pc = 0x2DCD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCCFCu;
            // 0x2dcd00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD40u;
            goto label_2dcd40;
        }
    }
    ctx->pc = 0x2DCD04u;
    // 0x2dcd04: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dcd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dcd08: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dcd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dcd0c: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dcd10: 0x5c60000b  bgtzl       $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DCD10u;
    {
        const bool branch_taken_0x2dcd10 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dcd10) {
            ctx->pc = 0x2DCD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD10u;
            // 0x2dcd14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD40u;
            goto label_2dcd40;
        }
    }
    ctx->pc = 0x2DCD18u;
    // 0x2dcd18: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DCD18u;
    SET_GPR_U32(ctx, 31, 0x2DCD20u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DCD18u, 0x2DCD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD20u;
label_2dcd20:
    // 0x2dcd20: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCD20u;
    {
        const bool branch_taken_0x2dcd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd20) {
            ctx->pc = 0x2DCD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCD20u;
            // 0x2dcd24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCD40u;
            goto label_2dcd40;
        }
    }
    ctx->pc = 0x2DCD28u;
    // 0x2dcd28: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2dcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2dcd2c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dcd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dcd30: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dcd30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dcd34: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dcd34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dcd38: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dcd38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dcd3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dcd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcd40:
    // 0x2dcd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcd44: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD44u;
        // 0x2dcd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCD4Cu;
    // 0x2dcd4c: 0x0  nop
    ctx->pc = 0x2dcd4cu;
    // NOP
    ctx->pc = 0x2dcd50u;
}
