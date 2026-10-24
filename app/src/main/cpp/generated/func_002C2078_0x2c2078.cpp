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

// Function: func_002C2078
// Address: 0x2c2078 - 0x2c2138
void func_002C2078_0x2c2078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C2078_0x2c2078");
#endif

    switch (ctx->pc) {
        case 0x2c20ccu: goto label_2c20cc;
        case 0x2c2100u: goto label_2c2100;
        case 0x2c2118u: goto label_2c2118;
        default: break;
    }

    ctx->pc = 0x2c2078u;

    // 0x2c2078: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2c2078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2c207c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c207cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c2080: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x2c2080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x2c2084: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c2084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c2088: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2c2088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2c208c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c2090: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c2094: 0x2490005c  addiu       $s0, $a0, 0x5C
    ctx->pc = 0x2c2094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x2c2098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c209c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C209Cu;
    {
        const bool branch_taken_0x2c209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C209Cu;
        // 0x2c20a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c209c) {
            ctx->pc = 0x2C2118u;
            goto label_2c2118;
        }
    }
    ctx->pc = 0x2C20A4u;
    // 0x2c20a4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2c20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2c20a8: 0x9205001d  lbu         $a1, 0x1D($s0)
    ctx->pc = 0x2c20a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x2c20ac: 0x24513ec0  addiu       $s1, $v0, 0x3EC0
    ctx->pc = 0x2c20acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x2c20b0: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x2c20b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2c20b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c20b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c20b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c20bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c20c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c20c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20c4: 0xc080132  jal         func_2004C8
    ctx->pc = 0x2C20C4u;
    SET_GPR_U32(ctx, 31, 0x2C20CCu);
    ctx->pc = 0x2C20C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C20C4u;
    // 0x2c20c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x2C20C4u, 0x2C20CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20CCu;
label_2c20cc:
    // 0x2c20cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C20CCu;
    {
        const bool branch_taken_0x2c20cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20CCu;
        // 0x2c20d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20cc) {
            ctx->pc = 0x2C211Cu;
            goto label_2c211c;
        }
    }
    ctx->pc = 0x2C20D4u;
    // 0x2c20d4: 0x9203001e  lbu         $v1, 0x1E($s0)
    ctx->pc = 0x2c20d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2c20d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C20D8u;
    {
        const bool branch_taken_0x2c20d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20D8u;
        // 0x2c20dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20d8) {
            ctx->pc = 0x2C20E8u;
            goto label_2c20e8;
        }
    }
    ctx->pc = 0x2C20E0u;
    // 0x2c20e0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C20E0u;
    {
        const bool branch_taken_0x2c20e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E0u;
        // 0x2c20e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20e0) {
            ctx->pc = 0x2C211Cu;
            goto label_2c211c;
        }
    }
    ctx->pc = 0x2C20E8u;
label_2c20e8:
    // 0x2c20e8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2c20e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c20ec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C20ECu;
    {
        const bool branch_taken_0x2c20ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20ECu;
        // 0x2c20f0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20ec) {
            ctx->pc = 0x2C2110u;
            goto label_2c2110;
        }
    }
    ctx->pc = 0x2C20F4u;
    // 0x2c20f4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2c20f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c20f8: 0xc0b1374  jal         func_2C4DD0
    ctx->pc = 0x2C20F8u;
    SET_GPR_U32(ctx, 31, 0x2C2100u);
    ctx->pc = 0x2C20FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C20F8u;
    // 0x2c20fc: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DD0u, 0x2C20F8u, 0x2C2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2100u;
label_2c2100:
    // 0x2c2100: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x2c2100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c2104: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c2104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c2108: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C2108u;
    {
        const bool branch_taken_0x2c2108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2108) {
            ctx->pc = 0x2C210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2108u;
            // 0x2c210c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2110u;
            goto label_2c2110;
        }
    }
    ctx->pc = 0x2C2110u;
label_2c2110:
    // 0x2c2110: 0xc07ffe0  jal         func_1FFF80
    ctx->pc = 0x2C2110u;
    SET_GPR_U32(ctx, 31, 0x2C2118u);
    ctx->pc = 0x2C2114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2110u;
    // 0x2c2114: 0x26443ec0  addiu       $a0, $s2, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF80u, 0x2C2110u, 0x2C2118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2118u;
label_2c2118:
    // 0x2c2118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c211c:
    // 0x2c211c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c211cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2120: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c2120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2124: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c2124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c212c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C212Cu;
        // 0x2c2130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C212Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2134u;
    // 0x2c2134: 0x0  nop
    ctx->pc = 0x2c2134u;
    // NOP
    ctx->pc = 0x2c2138u;
}
