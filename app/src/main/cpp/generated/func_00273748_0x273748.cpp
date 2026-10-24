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

// Function: func_00273748
// Address: 0x273748 - 0x273960
void func_00273748_0x273748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273748_0x273748");
#endif

    switch (ctx->pc) {
        case 0x27378cu: goto label_27378c;
        case 0x2737c4u: goto label_2737c4;
        case 0x273808u: goto label_273808;
        case 0x273818u: goto label_273818;
        case 0x273850u: goto label_273850;
        case 0x27387cu: goto label_27387c;
        case 0x273898u: goto label_273898;
        case 0x2738b0u: goto label_2738b0;
        default: break;
    }

    ctx->pc = 0x273748u;

    // 0x273748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x273748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27374c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x273750: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x273750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x273754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27375c: 0x8e040700  lw          $a0, 0x700($s0)
    ctx->pc = 0x27375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x273760: 0x10800079  beqz        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x273760u;
    {
        const bool branch_taken_0x273760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273760u;
        // 0x273764: 0x24020208  addiu       $v0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273760) {
            ctx->pc = 0x273948u;
            goto label_273948;
        }
    }
    ctx->pc = 0x273768u;
    // 0x273768: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x273768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x27376c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27376Cu;
    {
        const bool branch_taken_0x27376c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27376Cu;
        // 0x273770: 0x2402022f  addiu       $v0, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27376c) {
            ctx->pc = 0x273784u;
            goto label_273784;
        }
    }
    ctx->pc = 0x273774u;
    // 0x273774: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x273774u;
    {
        const bool branch_taken_0x273774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273774) {
            ctx->pc = 0x273810u;
            goto label_273810;
        }
    }
    ctx->pc = 0x27377Cu;
    // 0x27377c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x27377Cu;
    {
        const bool branch_taken_0x27377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27377Cu;
        // 0x273780: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27377c) {
            ctx->pc = 0x27394Cu;
            goto label_27394c;
        }
    }
    ctx->pc = 0x273784u;
label_273784:
    // 0x273784: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x273784u;
    SET_GPR_U32(ctx, 31, 0x27378Cu);
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x273784u, 0x27378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27378Cu;
label_27378c:
    // 0x27378c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x27378Cu;
    {
        const bool branch_taken_0x27378c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27378c) {
            ctx->pc = 0x273790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27378Cu;
            // 0x273790: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2737ECu;
            goto label_2737ec;
        }
    }
    ctx->pc = 0x273794u;
    // 0x273794: 0xde0202f0  ld          $v0, 0x2F0($s0)
    ctx->pc = 0x273794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x273798: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x273798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27379c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x27379cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2737a0: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x2737a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x2737a4: 0x42738  dsll        $a0, $a0, 28
    ctx->pc = 0x2737a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 28);
    // 0x2737a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2737a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2737ac: 0x50440067  beql        $v0, $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2737ACu;
    {
        const bool branch_taken_0x2737ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2737ac) {
            ctx->pc = 0x2737B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2737ACu;
            // 0x2737b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27394Cu;
            goto label_27394c;
        }
    }
    ctx->pc = 0x2737B4u;
    // 0x2737b4: 0x8e020700  lw          $v0, 0x700($s0)
    ctx->pc = 0x2737b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x2737b8: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2737b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2737bc: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2737BCu;
    SET_GPR_U32(ctx, 31, 0x2737C4u);
    ctx->pc = 0x2737C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737BCu;
    // 0x2737c0: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2737BCu, 0x2737C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737C4u;
label_2737c4:
    // 0x2737c4: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x2737c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x2737c8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2737c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2737cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2737ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2737d0: 0x0  nop
    ctx->pc = 0x2737d0u;
    // NOP
    // 0x2737d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2737d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2737d8: 0x0  nop
    ctx->pc = 0x2737d8u;
    // NOP
    // 0x2737dc: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x2737DCu;
    {
        const bool branch_taken_0x2737dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2737E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737DCu;
        // 0x2737e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737dc) {
            ctx->pc = 0x273948u;
            goto label_273948;
        }
    }
    ctx->pc = 0x2737E4u;
    // 0x2737e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2737E4u;
    {
        const bool branch_taken_0x2737e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737E4u;
        // 0x2737e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737e4) {
            ctx->pc = 0x273800u;
            goto label_273800;
        }
    }
    ctx->pc = 0x2737ECu;
label_2737ec:
    // 0x2737ec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2737ECu;
    {
        const bool branch_taken_0x2737ec = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2737F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737ECu;
        // 0x2737f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737ec) {
            ctx->pc = 0x2737FCu;
            goto label_2737fc;
        }
    }
    ctx->pc = 0x2737F4u;
    // 0x2737f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2737F4u;
    {
        const bool branch_taken_0x2737f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737F4u;
        // 0x2737f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737f4) {
            ctx->pc = 0x273800u;
            goto label_273800;
        }
    }
    ctx->pc = 0x2737FCu;
label_2737fc:
    // 0x2737fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2737fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273800:
    // 0x273800: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x273800u;
    SET_GPR_U32(ctx, 31, 0x273808u);
    ctx->pc = 0x273804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273800u;
    // 0x273804: 0x8c850700  lw          $a1, 0x700($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x273800u, 0x273808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273808u;
label_273808:
    // 0x273808: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x273808u;
    {
        const bool branch_taken_0x273808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273808u;
        // 0x27380c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273808) {
            ctx->pc = 0x27394Cu;
            goto label_27394c;
        }
    }
    ctx->pc = 0x273810u;
label_273810:
    // 0x273810: 0xc0742c2  jal         func_1D0B08
    ctx->pc = 0x273810u;
    SET_GPR_U32(ctx, 31, 0x273818u);
    ctx->pc = 0x273814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273810u;
    // 0x273814: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B08u, 0x273810u, 0x273818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273818u;
label_273818:
    // 0x273818: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x273818u;
    {
        const bool branch_taken_0x273818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273818) {
            ctx->pc = 0x27381Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273818u;
            // 0x27381c: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273884u;
            goto label_273884;
        }
    }
    ctx->pc = 0x273820u;
    // 0x273820: 0xde0202f0  ld          $v0, 0x2F0($s0)
    ctx->pc = 0x273820u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x273824: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x273824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x273828: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x273828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x27382c: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x27382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x273830: 0x42738  dsll        $a0, $a0, 28
    ctx->pc = 0x273830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 28);
    // 0x273834: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x273838: 0x5044001e  beql        $v0, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x273838u;
    {
        const bool branch_taken_0x273838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x273838) {
            ctx->pc = 0x27383Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273838u;
            // 0x27383c: 0x8e040700  lw          $a0, 0x700($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273840u;
    // 0x273840: 0x8e020700  lw          $v0, 0x700($s0)
    ctx->pc = 0x273840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x273844: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x273844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x273848: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x273848u;
    SET_GPR_U32(ctx, 31, 0x273850u);
    ctx->pc = 0x27384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273848u;
    // 0x27384c: 0x8c4400f0  lw          $a0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x273848u, 0x273850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273850u;
label_273850:
    // 0x273850: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x273850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x273854: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x273854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x273858: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27385c: 0x0  nop
    ctx->pc = 0x27385cu;
    // NOP
    // 0x273860: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x273860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273864: 0x0  nop
    ctx->pc = 0x273864u;
    // NOP
    // 0x273868: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x273868u;
    {
        const bool branch_taken_0x273868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273868u;
        // 0x27386c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273868) {
            ctx->pc = 0x2738B0u;
            goto label_2738b0;
        }
    }
    ctx->pc = 0x273870u;
    // 0x273870: 0x8e050700  lw          $a1, 0x700($s0)
    ctx->pc = 0x273870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x273874: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x273874u;
    SET_GPR_U32(ctx, 31, 0x27387Cu);
    ctx->pc = 0x273878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273874u;
    // 0x273878: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x273874u, 0x27387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27387Cu;
label_27387c:
    // 0x27387c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27387Cu;
    {
        const bool branch_taken_0x27387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27387Cu;
        // 0x273880: 0x8e040700  lw          $a0, 0x700($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27387c) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x273884u;
label_273884:
    // 0x273884: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273884u;
    {
        const bool branch_taken_0x273884 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x273888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273884u;
        // 0x273888: 0x8e050700  lw          $a1, 0x700($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273884) {
            ctx->pc = 0x2738A0u;
            goto label_2738a0;
        }
    }
    ctx->pc = 0x27388Cu;
    // 0x27388c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273890: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x273890u;
    SET_GPR_U32(ctx, 31, 0x273898u);
    ctx->pc = 0x273894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273890u;
    // 0x273894: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x273890u, 0x273898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273898u;
label_273898:
    // 0x273898: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x273898u;
    {
        const bool branch_taken_0x273898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273898u;
        // 0x27389c: 0x8e040700  lw          $a0, 0x700($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273898) {
            ctx->pc = 0x2738B4u;
            goto label_2738b4;
        }
    }
    ctx->pc = 0x2738A0u;
label_2738a0:
    // 0x2738a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2738a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2738a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738a8: 0xc09abc8  jal         func_26AF20
    ctx->pc = 0x2738A8u;
    SET_GPR_U32(ctx, 31, 0x2738B0u);
    ctx->pc = 0x2738ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2738A8u;
    // 0x2738ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF20u, 0x2738A8u, 0x2738B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738B0u;
label_2738b0:
    // 0x2738b0: 0x8e040700  lw          $a0, 0x700($s0)
    ctx->pc = 0x2738b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
label_2738b4:
    // 0x2738b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2738b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2738b8: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2738b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2738bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2738bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2738c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2738C0u;
    {
        const bool branch_taken_0x2738c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738C0u;
        // 0x2738c4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738c0) {
            ctx->pc = 0x2738D4u;
            goto label_2738d4;
        }
    }
    ctx->pc = 0x2738C8u;
    // 0x2738c8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2738c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2738cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2738CCu;
    {
        const bool branch_taken_0x2738cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738CCu;
        // 0x2738d0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738cc) {
            ctx->pc = 0x2738D8u;
            goto label_2738d8;
        }
    }
    ctx->pc = 0x2738D4u;
label_2738d4:
    // 0x2738d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2738d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2738d8:
    // 0x2738d8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2738D8u;
    {
        const bool branch_taken_0x2738d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2738d8) {
            ctx->pc = 0x2738DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2738D8u;
            // 0x2738dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27394Cu;
            goto label_27394c;
        }
    }
    ctx->pc = 0x2738E0u;
    // 0x2738e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2738e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2738e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2738e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2738e8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2738E8u;
    {
        const bool branch_taken_0x2738e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738E8u;
        // 0x2738ec: 0xc60205a8  lwc1        $f2, 0x5A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738e8) {
            ctx->pc = 0x2738F8u;
            goto label_2738f8;
        }
    }
    ctx->pc = 0x2738F0u;
    // 0x2738f0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2738f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2738f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2738f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2738f8:
    // 0x2738f8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x2738f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x2738fc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2738fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x273900: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x273900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273904: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x273904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x273908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27390c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27390cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273910: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x273910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x273914: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x273914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273918: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x273918u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27391c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27391cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x273920: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x273920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x273924: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x273924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x273928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x273928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27392c: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x27392cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x273930: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x273930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x273934: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x273934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x273938: 0x8e030700  lw          $v1, 0x700($s0)
    ctx->pc = 0x273938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x27393c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x27393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x273940: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x273940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x273944: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x273944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_273948:
    // 0x273948: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x273948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27394c:
    // 0x27394c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27394cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273954: 0x3e00008  jr          $ra
    ctx->pc = 0x273954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273954u;
        // 0x273958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27395Cu;
    // 0x27395c: 0x0  nop
    ctx->pc = 0x27395cu;
    // NOP
    ctx->pc = 0x273960u;
}
