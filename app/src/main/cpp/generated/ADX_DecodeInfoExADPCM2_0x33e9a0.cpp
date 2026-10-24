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

// Function: ADX_DecodeInfoExADPCM2
// Address: 0x33e9a0 - 0x33ea20
void ADX_DecodeInfoExADPCM2_0x33e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADX_DecodeInfoExADPCM2_0x33e9a0");
#endif

    ctx->pc = 0x33e9a0u;

    // 0x33e9a0: 0x28a50012  slti        $a1, $a1, 0x12
    ctx->pc = 0x33e9a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x33e9a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33e9a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e9a8: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33E9A8u;
    {
        const bool branch_taken_0x33e9a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9A8u;
        // 0x33e9ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9a8) {
            ctx->pc = 0x33EA18u;
            goto label_33ea18;
        }
    }
    ctx->pc = 0x33E9B0u;
    // 0x33e9b0: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x33e9b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33e9b4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x33e9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33e9b8: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x33e9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x33e9bc: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x33e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33e9c0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x33e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x33e9c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33e9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33e9c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33e9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33e9cc: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33E9CCu;
    {
        const bool branch_taken_0x33e9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x33E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9CCu;
        // 0x33e9d0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9cc) {
            ctx->pc = 0x33EA18u;
            goto label_33ea18;
        }
    }
    ctx->pc = 0x33E9D4u;
    // 0x33e9d4: 0x94e40002  lhu         $a0, 0x2($a3)
    ctx->pc = 0x33e9d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x33e9d8: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x33e9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x33e9dc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x33e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33e9e0: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x33e9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x33e9e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33e9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33e9e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x33e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x33e9ec: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x33e9ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x33e9f0: 0x2863000e  slti        $v1, $v1, 0xE
    ctx->pc = 0x33e9f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x33e9f4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33E9F4u;
    {
        const bool branch_taken_0x33e9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9F4u;
        // 0x33e9f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9f4) {
            ctx->pc = 0x33EA18u;
            goto label_33ea18;
        }
    }
    ctx->pc = 0x33E9FCu;
    // 0x33e9fc: 0x94e40010  lhu         $a0, 0x10($a3)
    ctx->pc = 0x33e9fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x33ea00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ea00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ea04: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33ea08: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x33ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x33ea0c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x33ea0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x33ea10: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33ea10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33ea14: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x33ea14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_33ea18:
    // 0x33ea18: 0x3e00008  jr          $ra
    ctx->pc = 0x33EA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EA20u;
}
