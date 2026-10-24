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

// Function: LoadResourceEntry_297378
// Address: 0x297378 - 0x297428
void LoadResourceEntry_297378_0x297378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadResourceEntry_297378_0x297378");
#endif

    switch (ctx->pc) {
        case 0x2973c0u: goto label_2973c0;
        case 0x2973e0u: goto label_2973e0;
        case 0x297410u: goto label_297410;
        default: break;
    }

    ctx->pc = 0x297378u;

    // 0x297378: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x297378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29737c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x29737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x297380: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x297380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x297384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297388: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x297388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29738c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x29738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x297390: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x297390u;
    {
        const bool branch_taken_0x297390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297390) {
            ctx->pc = 0x297394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297390u;
            // 0x297394: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297418u;
            goto label_297418;
        }
    }
    ctx->pc = 0x297398u;
    // 0x297398: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x297398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x29739c: 0x8c627a30  lw          $v0, 0x7A30($v1)
    ctx->pc = 0x29739cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A30u));
    // 0x2973a0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2973a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2973a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2973A4u;
    {
        const bool branch_taken_0x2973a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973A4u;
        // 0x2973a8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973a4) {
            ctx->pc = 0x2973C8u;
            goto label_2973c8;
        }
    }
    ctx->pc = 0x2973ACu;
    // 0x2973ac: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x2973acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x2973b0: 0x24a5a920  addiu       $a1, $a1, -0x56E0
    ctx->pc = 0x2973b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945056));
    // 0x2973b4: 0x24c6a940  addiu       $a2, $a2, -0x56C0
    ctx->pc = 0x2973b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945088));
    // 0x2973b8: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2973B8u;
    SET_GPR_U32(ctx, 31, 0x2973C0u);
    ctx->pc = 0x2973BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2973B8u;
    // 0x2973bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2973B8u, 0x2973C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973C0u;
label_2973c0:
    // 0x2973c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2973C0u;
    {
        const bool branch_taken_0x2973c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2973C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2973C0u;
        // 0x2973c4: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2973c0) {
            ctx->pc = 0x2973E4u;
            goto label_2973e4;
        }
    }
    ctx->pc = 0x2973C8u;
label_2973c8:
    // 0x2973c8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2973c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2973cc: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x2973ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x2973d0: 0x24a5a958  addiu       $a1, $a1, -0x56A8
    ctx->pc = 0x2973d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945112));
    // 0x2973d4: 0x24c6a940  addiu       $a2, $a2, -0x56C0
    ctx->pc = 0x2973d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945088));
    // 0x2973d8: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2973D8u;
    SET_GPR_U32(ctx, 31, 0x2973E0u);
    ctx->pc = 0x2973DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2973D8u;
    // 0x2973dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2973D8u, 0x2973E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973E0u;
label_2973e0:
    // 0x2973e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2973e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2973e4:
    // 0x2973e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2973e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2973e8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2973e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2973ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2973ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973f0: 0x8c473cf0  lw          $a3, 0x3CF0($v0)
    ctx->pc = 0x2973f0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x2973f4: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x2973f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x2973f8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2973f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2973fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2973fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297400: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x297400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297404: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x297404u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297408: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x297408u;
    SET_GPR_U32(ctx, 31, 0x297410u);
    ctx->pc = 0x29740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297408u;
    // 0x29740c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x297408u, 0x297410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297410u;
label_297410:
    // 0x297410: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x297410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x297414: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x297414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_297418:
    // 0x297418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x297418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29741c: 0x3e00008  jr          $ra
    ctx->pc = 0x29741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29741Cu;
        // 0x297420: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297424u;
    // 0x297424: 0x0  nop
    ctx->pc = 0x297424u;
    // NOP
    ctx->pc = 0x297428u;
}
