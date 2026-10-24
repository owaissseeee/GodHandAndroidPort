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

// Function: func_002DBE08
// Address: 0x2dbe08 - 0x2dbe98
void func_002DBE08_0x2dbe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DBE08_0x2dbe08");
#endif

    switch (ctx->pc) {
        case 0x2dbe1cu: goto label_2dbe1c;
        case 0x2dbe34u: goto label_2dbe34;
        case 0x2dbe58u: goto label_2dbe58;
        case 0x2dbe84u: goto label_2dbe84;
        default: break;
    }

    ctx->pc = 0x2dbe08u;

    // 0x2dbe08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbe0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbe10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbe14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBE14u;
    SET_GPR_U32(ctx, 31, 0x2DBE1Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBE14u, 0x2DBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE1Cu;
label_2dbe1c:
    // 0x2dbe1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dbe1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe20: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dbe20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dbe24: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DBE24u;
    {
        const bool branch_taken_0x2dbe24 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbe24) {
            ctx->pc = 0x2DBE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBE24u;
            // 0x2dbe28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBE88u;
            goto label_2dbe88;
        }
    }
    ctx->pc = 0x2DBE2Cu;
    // 0x2dbe2c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBE2Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE34u);
    ctx->pc = 0x2DBE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE2Cu;
    // 0x2dbe30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBE2Cu, 0x2DBE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE34u;
label_2dbe34:
    // 0x2dbe34: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DBE34u;
    {
        const bool branch_taken_0x2dbe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe34) {
            ctx->pc = 0x2DBE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBE34u;
            // 0x2dbe38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBE88u;
            goto label_2dbe88;
        }
    }
    ctx->pc = 0x2DBE3Cu;
    // 0x2dbe3c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbe40: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbe44: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbe44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbe48: 0x5c60000f  bgtzl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DBE48u;
    {
        const bool branch_taken_0x2dbe48 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbe48) {
            ctx->pc = 0x2DBE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBE48u;
            // 0x2dbe4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBE88u;
            goto label_2dbe88;
        }
    }
    ctx->pc = 0x2DBE50u;
    // 0x2dbe50: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBE50u;
    SET_GPR_U32(ctx, 31, 0x2DBE58u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBE50u, 0x2DBE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE58u;
label_2dbe58:
    // 0x2dbe58: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DBE58u;
    {
        const bool branch_taken_0x2dbe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe58) {
            ctx->pc = 0x2DBE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBE58u;
            // 0x2dbe5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBE88u;
            goto label_2dbe88;
        }
    }
    ctx->pc = 0x2DBE60u;
    // 0x2dbe60: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2dbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2dbe64: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dbe64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe68: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dbe68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe70: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dbe70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbe74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dbe74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe78: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dbe78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbe7c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x2DBE7Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE84u);
    ctx->pc = 0x2DBE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE7Cu;
    // 0x2dbe80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x2DBE7Cu, 0x2DBE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE84u;
label_2dbe84:
    // 0x2dbe84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbe84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbe88:
    // 0x2dbe88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE8Cu;
        // 0x2dbe90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE94u;
    // 0x2dbe94: 0x0  nop
    ctx->pc = 0x2dbe94u;
    // NOP
    ctx->pc = 0x2dbe98u;
}
