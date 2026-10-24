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

// Function: func_002C9818
// Address: 0x2c9818 - 0x2c9950
void func_002C9818_0x2c9818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9818_0x2c9818");
#endif

    switch (ctx->pc) {
        case 0x2c987cu: goto label_2c987c;
        case 0x2c9898u: goto label_2c9898;
        case 0x2c98acu: goto label_2c98ac;
        case 0x2c98e0u: goto label_2c98e0;
        default: break;
    }

    ctx->pc = 0x2c9818u;

    // 0x2c9818: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c9818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c981c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2c981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9820: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c9820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c9824: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c9824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9828: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c9828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c982c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c9830: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c9830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c9834: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c9834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c9838: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c9838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c983c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c9840: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c9840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9844: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2c9844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2c9848: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x2c9848u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2c984c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c9850: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2c9850u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9858: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c9858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c985c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9860: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c9860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c9864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9868u;
    {
        const bool branch_taken_0x2c9868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9868u;
        // 0x2c986c: 0x3c140057  lui         $s4, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9868) {
            ctx->pc = 0x2C9898u;
            goto label_2c9898;
        }
    }
    ctx->pc = 0x2C9870u;
    // 0x2c9870: 0x26939b70  addiu       $s3, $s4, -0x6490
    ctx->pc = 0x2c9870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    // 0x2c9874: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9874u;
    SET_GPR_U32(ctx, 31, 0x2C987Cu);
    ctx->pc = 0x2C9878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9874u;
    // 0x2c9878: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9874u, 0x2C987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C987Cu;
label_2c987c:
    // 0x2c987c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9880: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9880u;
    {
        const bool branch_taken_0x2c9880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9880u;
        // 0x2c9884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9880) {
            ctx->pc = 0x2C989Cu;
            goto label_2c989c;
        }
    }
    ctx->pc = 0x2C9888u;
    // 0x2c9888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c9888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c988c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c988cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9890: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C9890u;
    SET_GPR_U32(ctx, 31, 0x2C9898u);
    ctx->pc = 0x2C9894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9890u;
    // 0x2c9894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C9890u, 0x2C9898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9898u;
label_2c9898:
    // 0x2c9898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c989c:
    // 0x2c989c: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C989Cu;
    {
        const bool branch_taken_0x2c989c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C989Cu;
        // 0x2c98a0: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c989c) {
            ctx->pc = 0x2C98D8u;
            goto label_2c98d8;
        }
    }
    ctx->pc = 0x2C98A4u;
    // 0x2c98a4: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C98A4u;
    SET_GPR_U32(ctx, 31, 0x2C98ACu);
    ctx->pc = 0x2C98A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98A4u;
    // 0x2c98a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C98A4u, 0x2C98ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98ACu;
label_2c98ac:
    // 0x2c98ac: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C98ACu;
    {
        const bool branch_taken_0x2c98ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98ACu;
        // 0x2c98b0: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98ac) {
            ctx->pc = 0x2C991Cu;
            goto label_2c991c;
        }
    }
    ctx->pc = 0x2C98B4u;
    // 0x2c98b4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c98b8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c98b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c98bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c98c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c98c4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2c98c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2c98c8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C98C8u;
    {
        const bool branch_taken_0x2c98c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c98c8) {
            ctx->pc = 0x2C98CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C98C8u;
            // 0x2c98cc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9920u;
            goto label_2c9920;
        }
    }
    ctx->pc = 0x2C98D0u;
    // 0x2c98d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C98D0u;
    {
        const bool branch_taken_0x2c98d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98D0u;
        // 0x2c98d4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98d0) {
            ctx->pc = 0x2C9908u;
            goto label_2c9908;
        }
    }
    ctx->pc = 0x2C98D8u;
label_2c98d8:
    // 0x2c98d8: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C98D8u;
    SET_GPR_U32(ctx, 31, 0x2C98E0u);
    ctx->pc = 0x2C98DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C98D8u;
    // 0x2c98dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C98D8u, 0x2C98E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C98E0u;
label_2c98e0:
    // 0x2c98e0: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C98E0u;
    {
        const bool branch_taken_0x2c98e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98E0u;
        // 0x2c98e4: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98e0) {
            ctx->pc = 0x2C991Cu;
            goto label_2c991c;
        }
    }
    ctx->pc = 0x2C98E8u;
    // 0x2c98e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c98ec: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2c98ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c98f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c98f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c98f8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2c98f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2c98fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C98FCu;
    {
        const bool branch_taken_0x2c98fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c98fc) {
            ctx->pc = 0x2C9900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C98FCu;
            // 0x2c9900: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9920u;
            goto label_2c9920;
        }
    }
    ctx->pc = 0x2C9904u;
    // 0x2c9904: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c9908:
    // 0x2c9908: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2c9908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c990c: 0xa0500014  sb          $s0, 0x14($v0)
    ctx->pc = 0x2c990cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c9910: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c9910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c9914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c9918: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c9918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c991c:
    // 0x2c991c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c991cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c9920:
    // 0x2c9920: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c9920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c9924: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c9924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9928: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c9928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c992c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c992cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9930: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c9930u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9934: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2c9934u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c993c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C993Cu;
        // 0x2c9940: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9944u;
    // 0x2c9944: 0x0  nop
    ctx->pc = 0x2c9944u;
    // NOP
    // 0x2c9948: 0x0  nop
    ctx->pc = 0x2c9948u;
    // NOP
    // 0x2c994c: 0x0  nop
    ctx->pc = 0x2c994cu;
    // NOP
    ctx->pc = 0x2c9950u;
}
