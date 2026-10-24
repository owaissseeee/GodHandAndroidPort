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

// Function: func_001F27B0
// Address: 0x1f27b0 - 0x1f28c0
void func_001F27B0_0x1f27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F27B0_0x1f27b0");
#endif

    switch (ctx->pc) {
        case 0x1f27ecu: goto label_1f27ec;
        case 0x1f27f4u: goto label_1f27f4;
        case 0x1f27f8u: goto label_1f27f8;
        case 0x1f2804u: goto label_1f2804;
        case 0x1f2814u: goto label_1f2814;
        case 0x1f2834u: goto label_1f2834;
        case 0x1f284cu: goto label_1f284c;
        case 0x1f285cu: goto label_1f285c;
        case 0x1f2860u: goto label_1f2860;
        case 0x1f286cu: goto label_1f286c;
        case 0x1f287cu: goto label_1f287c;
        case 0x1f2894u: goto label_1f2894;
        case 0x1f28a0u: goto label_1f28a0;
        default: break;
    }

    ctx->pc = 0x1f27b0u;

    // 0x1f27b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f27b4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f27b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f27b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f27bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f27bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f27c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f27c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f27c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f27c8: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1f27cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f27d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f27d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f27d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f27d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f27d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f27dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f27dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f27e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f27e4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1F27E4u;
    SET_GPR_U32(ctx, 31, 0x1F27ECu);
    ctx->pc = 0x1F27E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27E4u;
    // 0x1f27e8: 0x26710060  addiu       $s1, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1F27E4u, 0x1F27ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27ECu;
label_1f27ec:
    // 0x1f27ec: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1F27ECu;
    SET_GPR_U32(ctx, 31, 0x1F27F4u);
    ctx->pc = 0x1F27F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27ECu;
    // 0x1f27f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1F27ECu, 0x1F27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27F4u;
label_1f27f4:
    // 0x1f27f4: 0x0  nop
    ctx->pc = 0x1f27f4u;
    // NOP
label_1f27f8:
    // 0x1f27f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f27f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27fc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F27FCu;
    SET_GPR_U32(ctx, 31, 0x1F2804u);
    ctx->pc = 0x1F2800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27FCu;
    // 0x1f2800: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F27FCu, 0x1F2804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2804u;
label_1f2804:
    // 0x1f2804: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f2804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f2808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f280c: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1F280Cu;
    SET_GPR_U32(ctx, 31, 0x1F2814u);
    ctx->pc = 0x1F2810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F280Cu;
    // 0x1f2810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1F280Cu, 0x1F2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2814u;
label_1f2814:
    // 0x1f2814: 0x2a420012  slti        $v0, $s2, 0x12
    ctx->pc = 0x1f2814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1f2818: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F2818u;
    {
        const bool branch_taken_0x1f2818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2818u;
        // 0x1f281c: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2818) {
            ctx->pc = 0x1F27F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f27f8;
        }
    }
    ctx->pc = 0x1F2820u;
    // 0x1f2820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2824: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1f2824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f2828: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f282c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F282Cu;
    SET_GPR_U32(ctx, 31, 0x1F2834u);
    ctx->pc = 0x1F2830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F282Cu;
    // 0x1f2830: 0x26700930  addiu       $s0, $s3, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F282Cu, 0x1F2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2834u;
label_1f2834:
    // 0x1f2834: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f2834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f283c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f2840: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f2840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2844: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1F2844u;
    SET_GPR_U32(ctx, 31, 0x1F284Cu);
    ctx->pc = 0x1F2848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2844u;
    // 0x1f2848: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1F2844u, 0x1F284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F284Cu;
label_1f284c:
    // 0x1f284c: 0x26740a78  addiu       $s4, $s3, 0xA78
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2680));
    // 0x1f2850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2854: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1F2854u;
    SET_GPR_U32(ctx, 31, 0x1F285Cu);
    ctx->pc = 0x1F2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2854u;
    // 0x1f2858: 0x26700980  addiu       $s0, $s3, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1F2854u, 0x1F285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F285Cu;
label_1f285c:
    // 0x1f285c: 0x0  nop
    ctx->pc = 0x1f285cu;
    // NOP
label_1f2860:
    // 0x1f2860: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f2860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2864: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F2864u;
    SET_GPR_U32(ctx, 31, 0x1F286Cu);
    ctx->pc = 0x1F2868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2864u;
    // 0x1f2868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F2864u, 0x1F286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F286Cu;
label_1f286c:
    // 0x1f286c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f286cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f2870: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2874: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1F2874u;
    SET_GPR_U32(ctx, 31, 0x1F287Cu);
    ctx->pc = 0x1F2878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2874u;
    // 0x1f2878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1F2874u, 0x1F287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F287Cu;
label_1f287c:
    // 0x1f287c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1f287cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f2880: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F2880u;
    {
        const bool branch_taken_0x1f2880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2880u;
        // 0x1f2884: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2880) {
            ctx->pc = 0x1F2860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2860;
        }
    }
    ctx->pc = 0x1F2888u;
    // 0x1f2888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f2888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f288c: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1F288Cu;
    SET_GPR_U32(ctx, 31, 0x1F2894u);
    ctx->pc = 0x1F2890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F288Cu;
    // 0x1f2890: 0x2405300f  addiu       $a1, $zero, 0x300F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12303));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1F288Cu, 0x1F2894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2894u;
label_1f2894:
    // 0x1f2894: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2898: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1F2898u;
    SET_GPR_U32(ctx, 31, 0x1F28A0u);
    ctx->pc = 0x1F289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2898u;
    // 0x1f289c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3488u, 0x1F2898u, 0x1F28A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28A0u;
label_1f28a0:
    // 0x1f28a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f28a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f28a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f28a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f28a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f28a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f28ac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f28acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f28b0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f28b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f28b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f28b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f28b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F28B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28B8u;
        // 0x1f28bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F28B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F28C0u;
}
