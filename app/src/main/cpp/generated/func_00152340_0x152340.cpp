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

// Function: func_00152340
// Address: 0x152340 - 0x1523f8
void func_00152340_0x152340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00152340_0x152340");
#endif

    switch (ctx->pc) {
        case 0x1523a0u: goto label_1523a0;
        case 0x1523c0u: goto label_1523c0;
        default: break;
    }

    ctx->pc = 0x152340u;

    // 0x152340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152344: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x152344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152348: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x152348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15234c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152350: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x152354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152358: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x152358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15235c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152364: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x152364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152368: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x152368u;
    {
        const bool branch_taken_0x152368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152368) {
            ctx->pc = 0x15236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152368u;
            // 0x15236c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x152370u;
label_152370:
    // 0x152370: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x152370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x152374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15237c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x152380: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x152380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x152384: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x152384u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x152388: 0x1010  mfhi        $v0
    ctx->pc = 0x152388u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15238c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x15238cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x152390: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x152390u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152394: 0x2810  mfhi        $a1
    ctx->pc = 0x152394u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x152398: 0xc05458c  jal         func_151630
    ctx->pc = 0x152398u;
    SET_GPR_U32(ctx, 31, 0x1523A0u);
    ctx->pc = 0x15239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152398u;
    // 0x15239c: 0x658821  addu        $s1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151630u, 0x152398u, 0x1523A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523A0u;
label_1523a0:
    // 0x1523a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1523a4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1523A4u;
    {
        const bool branch_taken_0x1523a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1523A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523A4u;
        // 0x1523a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523a4) {
            ctx->pc = 0x1523E0u;
            goto label_1523e0;
        }
    }
    ctx->pc = 0x1523ACu;
    // 0x1523ac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1523acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1523b0: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1523B0u;
    {
        const bool branch_taken_0x1523b0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1523B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523B0u;
        // 0x1523b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523b0) {
            ctx->pc = 0x1523E0u;
            goto label_1523e0;
        }
    }
    ctx->pc = 0x1523B8u;
    // 0x1523b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1523b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523bc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1523bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1523c0:
    // 0x1523c0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1523c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1523c4: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1523C4u;
    {
        const bool branch_taken_0x1523c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1523C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523C4u;
        // 0x1523c8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523c4) {
            ctx->pc = 0x1523E0u;
            goto label_1523e0;
        }
    }
    ctx->pc = 0x1523CCu;
    // 0x1523cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1523ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1523d0: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1523d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1523d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1523D4u;
    {
        const bool branch_taken_0x1523d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1523D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523D4u;
        // 0x1523d8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523d4) {
            ctx->pc = 0x1523C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1523c0;
        }
    }
    ctx->pc = 0x1523DCu;
    // 0x1523dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1523dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1523e0:
    // 0x1523e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1523e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1523e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1523e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1523e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1523e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1523ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1523ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1523f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1523F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1523F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523F0u;
        // 0x1523f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1523F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1523F8u;
}
