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

// Function: UpdateChannelOutputLevels_377700
// Address: 0x377700 - 0x3777c0
void UpdateChannelOutputLevels_377700_0x377700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateChannelOutputLevels_377700_0x377700");
#endif

    switch (ctx->pc) {
        case 0x377740u: goto label_377740;
        case 0x377750u: goto label_377750;
        case 0x377768u: goto label_377768;
        case 0x377780u: goto label_377780;
        case 0x377798u: goto label_377798;
        default: break;
    }

    ctx->pc = 0x377700u;

    // 0x377700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x377700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x377704: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x377704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x377708: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x377708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37770c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37770cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377710: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x377710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x377714: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x377714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x377718: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x377718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x37771c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377720: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x377720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x377724: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x377724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x377728: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x377728u;
    {
        const bool branch_taken_0x377728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377728u;
        // 0x37772c: 0x26330068  addiu       $s3, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377728) {
            ctx->pc = 0x377780u;
            goto label_377780;
        }
    }
    ctx->pc = 0x377730u;
    // 0x377730: 0x26320060  addiu       $s2, $s1, 0x60
    ctx->pc = 0x377730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x377734: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x377734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x377738: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x377738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37773c: 0x0  nop
    ctx->pc = 0x37773cu;
    // NOP
label_377740:
    // 0x377740: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x377740u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x377744: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x377744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x377748: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x377748u;
    SET_GPR_U32(ctx, 31, 0x377750u);
    ctx->pc = 0x37774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377748u;
    // 0x37774c: 0x8624005c  lh          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x377748u, 0x377750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377750u;
label_377750:
    // 0x377750: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x377750u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x377754: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x377754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x377758: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x377758u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37775c: 0x8624005e  lh          $a0, 0x5E($s1)
    ctx->pc = 0x37775cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x377760: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x377760u;
    SET_GPR_U32(ctx, 31, 0x377768u);
    ctx->pc = 0x377764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377760u;
    // 0x377764: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x377760u, 0x377768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377768u;
label_377768:
    // 0x377768: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x377768u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37776c: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x37776Cu;
    {
        const bool branch_taken_0x37776c = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x377770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37776Cu;
        // 0x377770: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37776c) {
            ctx->pc = 0x377740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377740;
        }
    }
    ctx->pc = 0x377774u;
    // 0x377774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377778: 0xc0ddeb0  jal         func_377AC0
    ctx->pc = 0x377778u;
    SET_GPR_U32(ctx, 31, 0x377780u);
    ctx->pc = 0x37777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377778u;
    // 0x37777c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377AC0u, 0x377778u, 0x377780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377780u;
label_377780:
    // 0x377780: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x377780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x377784: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x377784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x377788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x377788u;
    {
        const bool branch_taken_0x377788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377788u;
        // 0x37778c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377788) {
            ctx->pc = 0x377798u;
            goto label_377798;
        }
    }
    ctx->pc = 0x377790u;
    // 0x377790: 0xc0ddeb0  jal         func_377AC0
    ctx->pc = 0x377790u;
    SET_GPR_U32(ctx, 31, 0x377798u);
    ctx->pc = 0x377794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377790u;
    // 0x377794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377AC0u, 0x377790u, 0x377798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377798u;
label_377798:
    // 0x377798: 0xa6200010  sh          $zero, 0x10($s1)
    ctx->pc = 0x377798u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x37779c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37779cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3777a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3777a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3777a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3777a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3777a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3777a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3777ac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3777acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3777b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3777b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3777b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3777B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3777B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3777B4u;
        // 0x3777b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3777B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3777BCu;
    // 0x3777bc: 0x0  nop
    ctx->pc = 0x3777bcu;
    // NOP
    ctx->pc = 0x3777c0u;
}
