#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: readFile__7cMcLoad
// Address: 0x7c2780 - 0x7c29e8
void readFile__7cMcLoad_0x7c2780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readFile__7cMcLoad_0x7c2780");
#endif

    switch (ctx->pc) {
        case 0x7c27f0u: goto label_7c27f0;
        case 0x7c2808u: goto label_7c2808;
        case 0x7c2818u: goto label_7c2818;
        case 0x7c2844u: goto label_7c2844;
        case 0x7c2860u: goto label_7c2860;
        case 0x7c2888u: goto label_7c2888;
        case 0x7c2898u: goto label_7c2898;
        case 0x7c28ccu: goto label_7c28cc;
        case 0x7c28e0u: goto label_7c28e0;
        case 0x7c28f8u: goto label_7c28f8;
        case 0x7c2908u: goto label_7c2908;
        case 0x7c2944u: goto label_7c2944;
        case 0x7c295cu: goto label_7c295c;
        case 0x7c2978u: goto label_7c2978;
        default: break;
    }

    ctx->pc = 0x7c2780u;

    // 0x7c2780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7c2780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7c2784: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7c2784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7c2788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7c2788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7c278c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c278cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2790: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7c2790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7c2794: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c2794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c279c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x7c279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x7c27a0: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c27a4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x7c27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c27a8: 0x10720021  beq         $v1, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x7C27A8u;
    {
        const bool branch_taken_0x7c27a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C27A8u;
        // 0x7c27ac: 0xae2400e8  sw          $a0, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c27a8) {
            ctx->pc = 0x7C2830u;
            goto label_7c2830;
        }
    }
    ctx->pc = 0x7C27B0u;
    // 0x7c27b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x7c27b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7c27b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C27B4u;
    {
        const bool branch_taken_0x7c27b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c27b4) {
            ctx->pc = 0x7C27B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C27B4u;
            // 0x7c27b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C27CCu;
            goto label_7c27cc;
        }
    }
    ctx->pc = 0x7C27BCu;
    // 0x7c27bc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C27BCu;
    {
        const bool branch_taken_0x7c27bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C27BCu;
        // 0x7c27c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c27bc) {
            ctx->pc = 0x7C27E4u;
            goto label_7c27e4;
        }
    }
    ctx->pc = 0x7C27C4u;
    // 0x7c27c4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x7C27C4u;
    {
        const bool branch_taken_0x7c27c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C27C4u;
        // 0x7c27c8: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c27c4) {
            ctx->pc = 0x7C29D4u;
            goto label_7c29d4;
        }
    }
    ctx->pc = 0x7C27CCu;
label_7c27cc:
    // 0x7c27cc: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x7C27CCu;
    {
        const bool branch_taken_0x7c27cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C27CCu;
        // 0x7c27d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c27cc) {
            ctx->pc = 0x7C28B8u;
            goto label_7c28b8;
        }
    }
    ctx->pc = 0x7C27D4u;
    // 0x7c27d4: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x7C27D4u;
    {
        const bool branch_taken_0x7c27d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C27D4u;
        // 0x7c27d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c27d4) {
            ctx->pc = 0x7C2928u;
            goto label_7c2928;
        }
    }
    ctx->pc = 0x7C27DCu;
    // 0x7c27dc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x7C27DCu;
    {
        const bool branch_taken_0x7c27dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C27DCu;
        // 0x7c27e0: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c27dc) {
            ctx->pc = 0x7C29D4u;
            goto label_7c29d4;
        }
    }
    ctx->pc = 0x7C27E4u;
label_7c27e4:
    // 0x7c27e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c27e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c27e8: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C27E8u;
    SET_GPR_U32(ctx, 31, 0x7C27F0u);
    ctx->pc = 0x7C27ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C27E8u;
    // 0x7c27ec: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C27E8u, 0x7C27F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C27F0u;
label_7c27f0:
    // 0x7c27f0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c27f4: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c27f8: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x7c27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x7c27fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c27fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2800: 0xc1f0cf4  jal         func_7C33D0
    ctx->pc = 0x7C2800u;
    SET_GPR_U32(ctx, 31, 0x7C2808u);
    ctx->pc = 0x7C2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2800u;
    // 0x7c2804: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33D0u, 0x7C2800u, 0x7C2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2808u;
label_7c2808:
    // 0x7c2808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c2808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c280c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c2810: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C2810u;
    SET_GPR_U32(ctx, 31, 0x7C2818u);
    ctx->pc = 0x7C2814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2810u;
    // 0x7c2814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C2810u, 0x7C2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2818u;
label_7c2818:
    // 0x7c2818: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2818u;
    {
        const bool branch_taken_0x7c2818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c2818) {
            ctx->pc = 0x7C281Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C2818u;
            // 0x7c281c: 0xae3200f4  sw          $s2, 0xF4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C2830u;
            goto label_7c2830;
        }
    }
    ctx->pc = 0x7C2820u;
    // 0x7c2820: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c2820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c2824: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c2824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c2828: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x7C2828u;
    {
        const bool branch_taken_0x7c2828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2828u;
        // 0x7c282c: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2828) {
            ctx->pc = 0x7C29C8u;
            goto label_7c29c8;
        }
    }
    ctx->pc = 0x7C2830u;
label_7c2830:
    // 0x7c2830: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c2830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c2834: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c2834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2838: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c2838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c283c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C283Cu;
    SET_GPR_U32(ctx, 31, 0x7C2844u);
    ctx->pc = 0x7C2840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C283Cu;
    // 0x7c2840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C283Cu, 0x7C2844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2844u;
label_7c2844:
    // 0x7c2844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c2844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c284c: 0x56020060  bnel        $s0, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x7C284Cu;
    {
        const bool branch_taken_0x7c284c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c284c) {
            ctx->pc = 0x7C2850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C284Cu;
            // 0x7c2850: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C29D0u;
            goto label_7c29d0;
        }
    }
    ctx->pc = 0x7C2854u;
    // 0x7c2854: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c2854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c2858: 0xc1f0bc0  jal         func_7C2F00
    ctx->pc = 0x7C2858u;
    SET_GPR_U32(ctx, 31, 0x7C2860u);
    ctx->pc = 0x7C285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2858u;
    // 0x7c285c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2F00u, 0x7C2858u, 0x7C2860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2860u;
label_7c2860:
    // 0x7c2860: 0x14500055  bne         $v0, $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x7C2860u;
    {
        const bool branch_taken_0x7c2860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2860u;
        // 0x7c2864: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2860) {
            ctx->pc = 0x7C29B8u;
            goto label_7c29b8;
        }
    }
    ctx->pc = 0x7C2868u;
    // 0x7c2868: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c286c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c286cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2870: 0x8e2600f8  lw          $a2, 0xF8($s1)
    ctx->pc = 0x7c2870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c2874: 0x3407b400  ori         $a3, $zero, 0xB400
    ctx->pc = 0x7c2874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x7c2878: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c2878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c287c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x7c287cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x7c2880: 0xc1f0d98  jal         func_7C3660
    ctx->pc = 0x7C2880u;
    SET_GPR_U32(ctx, 31, 0x7C2888u);
    ctx->pc = 0x7C2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2880u;
    // 0x7c2884: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3660u, 0x7C2880u, 0x7C2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2888u;
label_7c2888:
    // 0x7c2888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c288c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c288cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2890: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C2890u;
    SET_GPR_U32(ctx, 31, 0x7C2898u);
    ctx->pc = 0x7C2894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2890u;
    // 0x7c2894: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C2890u, 0x7C2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2898u;
label_7c2898:
    // 0x7c2898: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2898u;
    {
        const bool branch_taken_0x7c2898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2898u;
        // 0x7c289c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2898) {
            ctx->pc = 0x7C28B0u;
            goto label_7c28b0;
        }
    }
    ctx->pc = 0x7C28A0u;
    // 0x7c28a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c28a4: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c28a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c28a8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x7C28A8u;
    {
        const bool branch_taken_0x7c28a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C28A8u;
        // 0x7c28ac: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c28a8) {
            ctx->pc = 0x7C29C8u;
            goto label_7c29c8;
        }
    }
    ctx->pc = 0x7C28B0u;
label_7c28b0:
    // 0x7c28b0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x7C28B0u;
    {
        const bool branch_taken_0x7c28b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C28B0u;
        // 0x7c28b4: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c28b0) {
            ctx->pc = 0x7C29CCu;
            goto label_7c29cc;
        }
    }
    ctx->pc = 0x7C28B8u;
label_7c28b8:
    // 0x7c28b8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c28bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c28bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c28c0: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c28c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c28c4: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C28C4u;
    SET_GPR_U32(ctx, 31, 0x7C28CCu);
    ctx->pc = 0x7C28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C28C4u;
    // 0x7c28c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C28C4u, 0x7C28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C28CCu;
label_7c28cc:
    // 0x7c28cc: 0x54520040  bnel        $v0, $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x7C28CCu;
    {
        const bool branch_taken_0x7c28cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c28cc) {
            ctx->pc = 0x7C28D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C28CCu;
            // 0x7c28d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C29D0u;
            goto label_7c29d0;
        }
    }
    ctx->pc = 0x7C28D4u;
    // 0x7c28d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c28d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c28d8: 0xc1f0bf4  jal         func_7C2FD0
    ctx->pc = 0x7C28D8u;
    SET_GPR_U32(ctx, 31, 0x7C28E0u);
    ctx->pc = 0x7C28DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C28D8u;
    // 0x7c28dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2FD0u, 0x7C28D8u, 0x7C28E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C28E0u;
label_7c28e0:
    // 0x7c28e0: 0x14520035  bne         $v0, $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x7C28E0u;
    {
        const bool branch_taken_0x7c28e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C28E0u;
        // 0x7c28e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c28e0) {
            ctx->pc = 0x7C29B8u;
            goto label_7c29b8;
        }
    }
    ctx->pc = 0x7C28E8u;
    // 0x7c28e8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c28e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c28ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c28f0: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C28F0u;
    SET_GPR_U32(ctx, 31, 0x7C28F8u);
    ctx->pc = 0x7C28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C28F0u;
    // 0x7c28f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C28F0u, 0x7C28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C28F8u;
label_7c28f8:
    // 0x7c28f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c28f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c28fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c28fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2900: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C2900u;
    SET_GPR_U32(ctx, 31, 0x7C2908u);
    ctx->pc = 0x7C2904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2900u;
    // 0x7c2904: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C2900u, 0x7C2908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2908u;
label_7c2908:
    // 0x7c2908: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2908u;
    {
        const bool branch_taken_0x7c2908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2908u;
        // 0x7c290c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2908) {
            ctx->pc = 0x7C2920u;
            goto label_7c2920;
        }
    }
    ctx->pc = 0x7C2910u;
    // 0x7c2910: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c2910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c2914: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c2914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c2918: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x7C2918u;
    {
        const bool branch_taken_0x7c2918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2918u;
        // 0x7c291c: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2918) {
            ctx->pc = 0x7C29C8u;
            goto label_7c29c8;
        }
    }
    ctx->pc = 0x7C2920u;
label_7c2920:
    // 0x7c2920: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7C2920u;
    {
        const bool branch_taken_0x7c2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2920u;
        // 0x7c2924: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2920) {
            ctx->pc = 0x7C29CCu;
            goto label_7c29cc;
        }
    }
    ctx->pc = 0x7C2928u;
label_7c2928:
    // 0x7c2928: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x7c2928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c292c: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x7C292Cu;
    {
        const bool branch_taken_0x7c292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c292c) {
            ctx->pc = 0x7C2930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C292Cu;
            // 0x7c2930: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C29D4u;
            goto label_7c29d4;
        }
    }
    ctx->pc = 0x7C2934u;
    // 0x7c2934: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c2934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c2938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c2938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c293c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C293Cu;
    SET_GPR_U32(ctx, 31, 0x7C2944u);
    ctx->pc = 0x7C2940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C293Cu;
    // 0x7c2940: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C293Cu, 0x7C2944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2944u;
label_7c2944:
    // 0x7c2944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c2944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2948: 0x56120021  bnel        $s0, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x7C2948u;
    {
        const bool branch_taken_0x7c2948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c2948) {
            ctx->pc = 0x7C294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C2948u;
            // 0x7c294c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C29D0u;
            goto label_7c29d0;
        }
    }
    ctx->pc = 0x7C2950u;
    // 0x7c2950: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c2950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c2954: 0xc1f0bde  jal         func_7C2F78
    ctx->pc = 0x7C2954u;
    SET_GPR_U32(ctx, 31, 0x7C295Cu);
    ctx->pc = 0x7C2958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2954u;
    // 0x7c2958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2F78u, 0x7C2954u, 0x7C295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C295Cu;
label_7c295c:
    // 0x7c295c: 0x14500016  bne         $v0, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7C295Cu;
    {
        const bool branch_taken_0x7c295c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C295Cu;
        // 0x7c2960: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c295c) {
            ctx->pc = 0x7C29B8u;
            goto label_7c29b8;
        }
    }
    ctx->pc = 0x7C2964u;
    // 0x7c2964: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x7c2964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c2968: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x7c2968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x7c296c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2970: 0xc1f2322  jal         func_7C8C88
    ctx->pc = 0x7C2970u;
    SET_GPR_U32(ctx, 31, 0x7C2978u);
    ctx->pc = 0x7C2974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2970u;
    // 0x7c2974: 0xb08021  addu        $s0, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8C88u, 0x7C2970u, 0x7C2978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2978u;
label_7c2978:
    // 0x7c2978: 0xde033110  ld          $v1, 0x3110($s0)
    ctx->pc = 0x7c2978u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 12560)));
    // 0x7c297c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C297Cu;
    {
        const bool branch_taken_0x7c297c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C297Cu;
        // 0x7c2980: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c297c) {
            ctx->pc = 0x7C29B8u;
            goto label_7c29b8;
        }
    }
    ctx->pc = 0x7C2984u;
    // 0x7c2984: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c2984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c2988: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x7c2988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x7c298c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7c298cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7c2990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7c2990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7c2994: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7c2994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c2998: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7c2998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7c299c: 0x0  nop
    ctx->pc = 0x7c299cu;
    // NOP
    // 0x7c29a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x7C29A0u;
    {
        const bool branch_taken_0x7c29a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7C29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C29A0u;
        // 0x7c29a4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c29a0) {
            ctx->pc = 0x7C29B4u;
            goto label_7c29b4;
        }
    }
    ctx->pc = 0x7C29A8u;
    // 0x7c29a8: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c29ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7C29ACu;
    {
        const bool branch_taken_0x7c29ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C29ACu;
        // 0x7c29b0: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c29ac) {
            ctx->pc = 0x7C29C8u;
            goto label_7c29c8;
        }
    }
    ctx->pc = 0x7C29B4u;
label_7c29b4:
    // 0x7c29b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x7c29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_7c29b8:
    // 0x7c29b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x7c29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c29bc: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x7c29bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x7c29c0: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x7c29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x7c29c4: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c29c8:
    // 0x7c29c8: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c29c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c29cc:
    // 0x7c29cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7c29ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7c29d0:
    // 0x7c29d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7c29d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c29d4:
    // 0x7c29d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7c29d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c29d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c29d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c29dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C29DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C29DCu;
        // 0x7c29e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C29DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C29E4u;
    // 0x7c29e4: 0x0  nop
    ctx->pc = 0x7c29e4u;
    // NOP
    ctx->pc = 0x7c29e8u;
}
} // namespace gh_mcport
