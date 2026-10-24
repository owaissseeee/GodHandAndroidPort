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

// Function: ADX_DecodeInfoAu
// Address: 0x3417f0 - 0x341900
void ADX_DecodeInfoAu_0x3417f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADX_DecodeInfoAu_0x3417f0");
#endif

    switch (ctx->pc) {
        case 0x341860u: goto label_341860;
        default: break;
    }

    ctx->pc = 0x3417f0u;

    // 0x3417f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3417f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3417f4: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x3417f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3417f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3417f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3417fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3417fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341800: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x341800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x341804: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x341804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341808: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x341808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34180c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x34180cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341810: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x341810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x341814: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x341814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341818: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x341818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34181c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x34181cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341820: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x341820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x341824: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x341824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341828: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x341828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x34182c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x34182cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341830: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x341830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x341834: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x341834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341838: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x341838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x34183c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x34183cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x341840: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x341840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x341844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341844u;
    {
        const bool branch_taken_0x341844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341844u;
        // 0x341848: 0x8faa0060  lw          $t2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341844) {
            ctx->pc = 0x341858u;
            goto label_341858;
        }
    }
    ctx->pc = 0x34184Cu;
    // 0x34184c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x34184cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x341850: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x341850u;
    {
        const bool branch_taken_0x341850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341850u;
        // 0x341854: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341850) {
            ctx->pc = 0x3418D8u;
            goto label_3418d8;
        }
    }
    ctx->pc = 0x341858u;
label_341858:
    // 0x341858: 0xc0d0520  jal         func_341480
    ctx->pc = 0x341858u;
    SET_GPR_U32(ctx, 31, 0x341860u);
    ctx->pc = 0x341480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341480u, 0x341858u, 0x341860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341860u;
label_341860:
    // 0x341860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x341860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x341864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x341868: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x341868u;
    {
        const bool branch_taken_0x341868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341868u;
        // 0x34186c: 0x702023  subu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341868) {
            ctx->pc = 0x3418D8u;
            goto label_3418d8;
        }
    }
    ctx->pc = 0x341870u;
    // 0x341870: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x341870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x341874: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x341874u;
    {
        const bool branch_taken_0x341874 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x341878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341874u;
        // 0x341878: 0xa6240000  sh          $a0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341874) {
            ctx->pc = 0x3418D8u;
            goto label_3418d8;
        }
    }
    ctx->pc = 0x34187Cu;
    // 0x34187c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x34187cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341880: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x341880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x341884: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x341884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x341888: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x341888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34188c: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x34188cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341894: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x341894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x341898: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x341898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34189c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x34189cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3418a0: 0xa2840000  sb          $a0, 0x0($s4)
    ctx->pc = 0x3418a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3418a4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3418a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3418a8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3418a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x3418ac: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x3418acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3418b0: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x3418b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3418b4: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3418b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3418b8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3418b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3418bc: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3418bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3418c0: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x3418c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3418c4: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x3418c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x3418c8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3418c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3418cc: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x3418ccu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3418d0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3418d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3418d4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x3418d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_3418d8:
    // 0x3418d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3418d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3418dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3418dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3418e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3418e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3418e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3418e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3418e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3418e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3418ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3418ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3418f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3418f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3418f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3418f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3418f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3418F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3418FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418F8u;
        // 0x3418fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3418F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341900u;
}
