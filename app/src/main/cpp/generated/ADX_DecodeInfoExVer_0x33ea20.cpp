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

// Function: ADX_DecodeInfoExVer
// Address: 0x33ea20 - 0x33ea98
void ADX_DecodeInfoExVer_0x33ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADX_DecodeInfoExVer_0x33ea20");
#endif

    ctx->pc = 0x33ea20u;

    // 0x33ea20: 0x28a50014  slti        $a1, $a1, 0x14
    ctx->pc = 0x33ea20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x33ea24: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33ea24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea28: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x33EA28u;
    {
        const bool branch_taken_0x33ea28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA28u;
        // 0x33ea2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea28) {
            ctx->pc = 0x33EA90u;
            goto label_33ea90;
        }
    }
    ctx->pc = 0x33EA30u;
    // 0x33ea30: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x33ea30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33ea34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x33ea34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33ea38: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x33ea38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33ea3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33ea40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33ea40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33ea44: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33ea48: 0x14650011  bne         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33EA48u;
    {
        const bool branch_taken_0x33ea48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x33EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA48u;
        // 0x33ea4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea48) {
            ctx->pc = 0x33EA90u;
            goto label_33ea90;
        }
    }
    ctx->pc = 0x33EA50u;
    // 0x33ea50: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x33ea50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x33ea54: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x33ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x33ea58: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x33ea58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x33ea5c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33ea60: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x33ea60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x33ea64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33ea64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33ea68: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x33ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x33ea6c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x33ea6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x33ea70: 0x28840010  slti        $a0, $a0, 0x10
    ctx->pc = 0x33ea70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x33ea74: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33EA74u;
    {
        const bool branch_taken_0x33ea74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA74u;
        // 0x33ea78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea74) {
            ctx->pc = 0x33EA90u;
            goto label_33ea90;
        }
    }
    ctx->pc = 0x33EA7Cu;
    // 0x33ea7c: 0x91040012  lbu         $a0, 0x12($t0)
    ctx->pc = 0x33ea7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x33ea80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ea80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea84: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x33ea84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ea88: 0x91030013  lbu         $v1, 0x13($t0)
    ctx->pc = 0x33ea88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 19)));
    // 0x33ea8c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x33ea8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_33ea90:
    // 0x33ea90: 0x3e00008  jr          $ra
    ctx->pc = 0x33EA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EA98u;
}
