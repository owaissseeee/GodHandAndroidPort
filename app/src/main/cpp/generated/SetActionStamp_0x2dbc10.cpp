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

// Function: SetActionStamp
// Address: 0x2dbc10 - 0x2dbca0
void SetActionStamp_0x2dbc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActionStamp_0x2dbc10");
#endif

    switch (ctx->pc) {
        case 0x2dbc24u: goto label_2dbc24;
        case 0x2dbc3cu: goto label_2dbc3c;
        case 0x2dbc60u: goto label_2dbc60;
        case 0x2dbc90u: goto label_2dbc90;
        default: break;
    }

    ctx->pc = 0x2dbc10u;

    // 0x2dbc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbc14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dbc18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dbc1c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DBC1Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC24u);
    ctx->pc = 0x2DBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC1Cu;
    // 0x2dbc20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DBC1Cu, 0x2DBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC24u;
label_2dbc24:
    // 0x2dbc24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dbc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc28: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dbc28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dbc2c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DBC2Cu;
    {
        const bool branch_taken_0x2dbc2c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dbc2c) {
            ctx->pc = 0x2DBC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC2Cu;
            // 0x2dbc30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC94u;
            goto label_2dbc94;
        }
    }
    ctx->pc = 0x2DBC34u;
    // 0x2dbc34: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DBC34u;
    SET_GPR_U32(ctx, 31, 0x2DBC3Cu);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DBC34u, 0x2DBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC3Cu;
label_2dbc3c:
    // 0x2dbc3c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DBC3Cu;
    {
        const bool branch_taken_0x2dbc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc3c) {
            ctx->pc = 0x2DBC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC3Cu;
            // 0x2dbc40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC94u;
            goto label_2dbc94;
        }
    }
    ctx->pc = 0x2DBC44u;
    // 0x2dbc44: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dbc48: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dbc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dbc4c: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dbc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dbc50: 0x5c600010  bgtzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBC50u;
    {
        const bool branch_taken_0x2dbc50 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dbc50) {
            ctx->pc = 0x2DBC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC50u;
            // 0x2dbc54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC94u;
            goto label_2dbc94;
        }
    }
    ctx->pc = 0x2DBC58u;
    // 0x2dbc58: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DBC58u;
    SET_GPR_U32(ctx, 31, 0x2DBC60u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DBC58u, 0x2DBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC60u;
label_2dbc60:
    // 0x2dbc60: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DBC60u;
    {
        const bool branch_taken_0x2dbc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc60) {
            ctx->pc = 0x2DBC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC60u;
            // 0x2dbc64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBC94u;
            goto label_2dbc94;
        }
    }
    ctx->pc = 0x2DBC68u;
    // 0x2dbc68: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dbc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dbc6c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dbc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dbc70: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dbc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dbc74: 0x2508bca0  addiu       $t0, $t0, -0x4360
    ctx->pc = 0x2dbc74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950048));
    // 0x2dbc78: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2dbc78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc7c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dbc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dbc80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2dbc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dbc84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dbc84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc88: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DBC88u;
    SET_GPR_U32(ctx, 31, 0x2DBC90u);
    ctx->pc = 0x2DBC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC88u;
    // 0x2dbc8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DBC88u, 0x2DBC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC90u;
label_2dbc90:
    // 0x2dbc90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbc94:
    // 0x2dbc94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbc98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC98u;
        // 0x2dbc9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBCA0u;
}
