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

// Function: func_0033F050
// Address: 0x33f050 - 0x33f0b8
void func_0033F050_0x33f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F050_0x33f050");
#endif

    ctx->pc = 0x33f050u;

    // 0x33f050: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x33f050u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x33f054: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33f054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f058: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33F058u;
    {
        const bool branch_taken_0x33f058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F058u;
        // 0x33f05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f058) {
            ctx->pc = 0x33F0A4u;
            goto label_33f0a4;
        }
    }
    ctx->pc = 0x33F060u;
    // 0x33f060: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x33f060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33f064: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x33f064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x33f068: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x33f068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33f06c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33f070: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33f070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33f074: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33f074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33f078: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x33F078u;
    {
        const bool branch_taken_0x33f078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x33F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F078u;
        // 0x33f07c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f078) {
            ctx->pc = 0x33F0A4u;
            goto label_33f0a4;
        }
    }
    ctx->pc = 0x33F080u;
    // 0x33f080: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x33f080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x33f084: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x33f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x33f088: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x33f088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x33f08c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33f08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f090: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33f090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33f094: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x33f094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x33f098: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33f098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33f09c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x33f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33f0a0: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x33f0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_33f0a4:
    // 0x33f0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x33F0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F0ACu;
    // 0x33f0ac: 0x0  nop
    ctx->pc = 0x33f0acu;
    // NOP
    // 0x33f0b0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x33f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33f0b4: 0x0  nop
    ctx->pc = 0x33f0b4u;
    // NOP
    ctx->pc = 0x33f0b8u;
}
