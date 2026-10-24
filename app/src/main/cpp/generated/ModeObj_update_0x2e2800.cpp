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

// Function: ModeObj_update
// Address: 0x2e2800 - 0x2e28d0
void ModeObj_update_0x2e2800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModeObj_update_0x2e2800");
#endif

    switch (ctx->pc) {
        case 0x2e2814u: goto label_2e2814;
        case 0x2e2854u: goto label_2e2854;
        case 0x2e2864u: goto label_2e2864;
        case 0x2e2874u: goto label_2e2874;
        case 0x2e2884u: goto label_2e2884;
        default: break;
    }

    ctx->pc = 0x2e2800u;

    // 0x2e2800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2804: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e280c: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2E280Cu;
    SET_GPR_U32(ctx, 31, 0x2E2814u);
    ctx->pc = 0x2E2810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E280Cu;
    // 0x2e2810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2E280Cu, 0x2E2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2814u;
label_2e2814:
    // 0x2e2814: 0x920202cc  lbu         $v0, 0x2CC($s0)
    ctx->pc = 0x2e2814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e2818: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e2818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e281c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e281cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e2820: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E2820u;
    {
        const bool branch_taken_0x2e2820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2820u;
        // 0x2e2824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2820) {
            ctx->pc = 0x2E288Cu;
            goto label_2e288c;
        }
    }
    ctx->pc = 0x2E2828u;
    // 0x2e2828: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2e2828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2e282c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E282Cu;
    {
        const bool branch_taken_0x2e282c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e282c) {
            ctx->pc = 0x2E285Cu;
            goto label_2e285c;
        }
    }
    ctx->pc = 0x2E2834u;
    // 0x2e2834: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2834u;
    {
        const bool branch_taken_0x2e2834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2834u;
        // 0x2e2838: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2834) {
            ctx->pc = 0x2E284Cu;
            goto label_2e284c;
        }
    }
    ctx->pc = 0x2E283Cu;
    // 0x2e283c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E283Cu;
    {
        const bool branch_taken_0x2e283c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e283c) {
            ctx->pc = 0x2E286Cu;
            goto label_2e286c;
        }
    }
    ctx->pc = 0x2E2844u;
    // 0x2e2844: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E2844u;
    {
        const bool branch_taken_0x2e2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2844) {
            ctx->pc = 0x2E287Cu;
            goto label_2e287c;
        }
    }
    ctx->pc = 0x2E284Cu;
label_2e284c:
    // 0x2e284c: 0xc0b8b14  jal         func_2E2C50
    ctx->pc = 0x2E284Cu;
    SET_GPR_U32(ctx, 31, 0x2E2854u);
    ctx->pc = 0x2E2850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E284Cu;
    // 0x2e2850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2C50u, 0x2E284Cu, 0x2E2854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2854u;
label_2e2854:
    // 0x2e2854: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E2854u;
    {
        const bool branch_taken_0x2e2854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2854u;
        // 0x2e2858: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2854) {
            ctx->pc = 0x2E28C4u;
            goto label_2e28c4;
        }
    }
    ctx->pc = 0x2E285Cu;
label_2e285c:
    // 0x2e285c: 0xc0b8b50  jal         func_2E2D40
    ctx->pc = 0x2E285Cu;
    SET_GPR_U32(ctx, 31, 0x2E2864u);
    ctx->pc = 0x2E2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E285Cu;
    // 0x2e2860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D40u, 0x2E285Cu, 0x2E2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2864u;
label_2e2864:
    // 0x2e2864: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E2864u;
    {
        const bool branch_taken_0x2e2864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2864u;
        // 0x2e2868: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2864) {
            ctx->pc = 0x2E28C4u;
            goto label_2e28c4;
        }
    }
    ctx->pc = 0x2E286Cu;
label_2e286c:
    // 0x2e286c: 0xc0b8b80  jal         func_2E2E00
    ctx->pc = 0x2E286Cu;
    SET_GPR_U32(ctx, 31, 0x2E2874u);
    ctx->pc = 0x2E2870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E286Cu;
    // 0x2e2870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2E00u, 0x2E286Cu, 0x2E2874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2874u;
label_2e2874:
    // 0x2e2874: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E2874u;
    {
        const bool branch_taken_0x2e2874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2874u;
        // 0x2e2878: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2874) {
            ctx->pc = 0x2E28C4u;
            goto label_2e28c4;
        }
    }
    ctx->pc = 0x2E287Cu;
label_2e287c:
    // 0x2e287c: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2E287Cu;
    SET_GPR_U32(ctx, 31, 0x2E2884u);
    ctx->pc = 0x2E2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E287Cu;
    // 0x2e2880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2E287Cu, 0x2E2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2884u;
label_2e2884:
    // 0x2e2884: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E2884u;
    {
        const bool branch_taken_0x2e2884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2884u;
        // 0x2e2888: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2884) {
            ctx->pc = 0x2E28C4u;
            goto label_2e28c4;
        }
    }
    ctx->pc = 0x2E288Cu;
label_2e288c:
    // 0x2e288c: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e2890: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e2890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2e2894: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2894u;
    {
        const bool branch_taken_0x2e2894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2894) {
            ctx->pc = 0x2E2898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2894u;
            // 0x2e2898: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E28C4u;
            goto label_2e28c4;
        }
    }
    ctx->pc = 0x2E289Cu;
    // 0x2e289c: 0x920202d5  lbu         $v0, 0x2D5($s0)
    ctx->pc = 0x2e289cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 725)));
    // 0x2e28a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E28A0u;
    {
        const bool branch_taken_0x2e28a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28a0) {
            ctx->pc = 0x2E28A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E28A0u;
            // 0x2e28a4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E28A8u;
            goto label_2e28a8;
        }
    }
    ctx->pc = 0x2E28A8u;
label_2e28a8:
    // 0x2e28a8: 0xa202024c  sb          $v0, 0x24C($s0)
    ctx->pc = 0x2e28a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 588), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e28ac: 0x8e0302cc  lw          $v1, 0x2CC($s0)
    ctx->pc = 0x2e28acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e28b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e28b4: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e28b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e28b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e28b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e28bc: 0xae0302cc  sw          $v1, 0x2CC($s0)
    ctx->pc = 0x2e28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 3));
    // 0x2e28c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e28c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e28c4:
    // 0x2e28c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e28c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e28c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E28C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E28C8u;
        // 0x2e28cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E28C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E28D0u;
}
