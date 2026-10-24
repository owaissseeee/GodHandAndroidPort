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

// Function: func_001C2408
// Address: 0x1c2408 - 0x1c2490
void func_001C2408_0x1c2408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2408_0x1c2408");
#endif

    switch (ctx->pc) {
        case 0x1c2438u: goto label_1c2438;
        case 0x1c2450u: goto label_1c2450;
        case 0x1c2478u: goto label_1c2478;
        default: break;
    }

    ctx->pc = 0x1c2408u;

    // 0x1c2408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c240c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c2410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2414: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c2414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2418: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c2418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c241c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c241cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2420: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C2420u;
    {
        const bool branch_taken_0x1c2420 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x1C2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2420u;
        // 0x1c2424: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2420) {
            ctx->pc = 0x1C2478u;
            goto label_1c2478;
        }
    }
    ctx->pc = 0x1C2428u;
    // 0x1c2428: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1c2428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1c242c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1c242cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1c2430: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x1C2430u;
    SET_GPR_U32(ctx, 31, 0x1C2438u);
    ctx->pc = 0x1C2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2430u;
    // 0x1c2434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1C2430u, 0x1C2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2438u;
label_1c2438:
    // 0x1c2438: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c2438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c243c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c243cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2440: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1c2440u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1c2444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2448: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1C2448u;
    SET_GPR_U32(ctx, 31, 0x1C2450u);
    ctx->pc = 0x1C244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2448u;
    // 0x1c244c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1C2448u, 0x1C2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2450u;
label_1c2450:
    // 0x1c2450: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1c2454: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c2454u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2458: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c2458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c245c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1c245cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1c2460: 0x864702ac  lh          $a3, 0x2AC($s2)
    ctx->pc = 0x1c2460u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
    // 0x1c2464: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x1c2464u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1c2468: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x1c2468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1c246c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c246cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2470: 0xc04f8be  jal         func_13E2F8
    ctx->pc = 0x1C2470u;
    SET_GPR_U32(ctx, 31, 0x1C2478u);
    ctx->pc = 0x1C2474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2470u;
    // 0x1c2474: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E2F8u, 0x1C2470u, 0x1C2478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2478u;
label_1c2478:
    // 0x1c2478: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c2478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c247c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c247cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2488: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2488u;
        // 0x1c248c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2490u;
}
