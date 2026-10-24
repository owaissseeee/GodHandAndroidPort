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

// Function: UpdatePendingFlags_376820
// Address: 0x376820 - 0x3768b0
void UpdatePendingFlags_376820_0x376820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePendingFlags_376820_0x376820");
#endif

    switch (ctx->pc) {
        case 0x37684cu: goto label_37684c;
        case 0x37685cu: goto label_37685c;
        case 0x37686cu: goto label_37686c;
        case 0x376884u: goto label_376884;
        case 0x37689cu: goto label_37689c;
        default: break;
    }

    ctx->pc = 0x376820u;

    // 0x376820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37682c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37682cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376830: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x376830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x376834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x376834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x376838: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x376838u;
    {
        const bool branch_taken_0x376838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376838) {
            ctx->pc = 0x37683Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376838u;
            // 0x37683c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376870u;
            goto label_376870;
        }
    }
    ctx->pc = 0x376840u;
    // 0x376840: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x376840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x376844: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x376844u;
    SET_GPR_U32(ctx, 31, 0x37684Cu);
    ctx->pc = 0x376848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376844u;
    // 0x376848: 0x86050018  lh          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x376844u, 0x37684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37684Cu;
label_37684c:
    // 0x37684c: 0x86040022  lh          $a0, 0x22($s0)
    ctx->pc = 0x37684cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x376850: 0x86050018  lh          $a1, 0x18($s0)
    ctx->pc = 0x376850u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x376854: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x376854u;
    SET_GPR_U32(ctx, 31, 0x37685Cu);
    ctx->pc = 0x376858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376854u;
    // 0x376858: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x376854u, 0x37685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37685Cu;
label_37685c:
    // 0x37685c: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x37685cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x376860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376864: 0xc0ddb4a  jal         func_376D28
    ctx->pc = 0x376864u;
    SET_GPR_U32(ctx, 31, 0x37686Cu);
    ctx->pc = 0x376868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376864u;
    // 0x376868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376D28u, 0x376864u, 0x37686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37686Cu;
label_37686c:
    // 0x37686c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x37686cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_376870:
    // 0x376870: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x376870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x376874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x376874u;
    {
        const bool branch_taken_0x376874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376874u;
        // 0x376878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376874) {
            ctx->pc = 0x376884u;
            goto label_376884;
        }
    }
    ctx->pc = 0x37687Cu;
    // 0x37687c: 0xc0ddb4a  jal         func_376D28
    ctx->pc = 0x37687Cu;
    SET_GPR_U32(ctx, 31, 0x376884u);
    ctx->pc = 0x376880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37687Cu;
    // 0x376880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376D28u, 0x37687Cu, 0x376884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376884u;
label_376884:
    // 0x376884: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x376884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x376888: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x376888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37688c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37688Cu;
    {
        const bool branch_taken_0x37688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37688Cu;
        // 0x376890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37688c) {
            ctx->pc = 0x37689Cu;
            goto label_37689c;
        }
    }
    ctx->pc = 0x376894u;
    // 0x376894: 0xc0ddb4a  jal         func_376D28
    ctx->pc = 0x376894u;
    SET_GPR_U32(ctx, 31, 0x37689Cu);
    ctx->pc = 0x376898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376894u;
    // 0x376898: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376D28u, 0x376894u, 0x37689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37689Cu;
label_37689c:
    // 0x37689c: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x37689cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3768a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3768a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3768a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3768a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3768a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3768A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768A8u;
        // 0x3768ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3768A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3768B0u;
}
