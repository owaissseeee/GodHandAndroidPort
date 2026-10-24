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

// Function: func_001B3800
// Address: 0x1b3800 - 0x1b38c8
void func_001B3800_0x1b3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B3800_0x1b3800");
#endif

    switch (ctx->pc) {
        case 0x1b3800u: goto label_1b3800;
        case 0x1b3804u: goto label_1b3804;
        case 0x1b3808u: goto label_1b3808;
        case 0x1b380cu: goto label_1b380c;
        case 0x1b3810u: goto label_1b3810;
        case 0x1b3814u: goto label_1b3814;
        case 0x1b3818u: goto label_1b3818;
        case 0x1b381cu: goto label_1b381c;
        case 0x1b3820u: goto label_1b3820;
        case 0x1b3824u: goto label_1b3824;
        case 0x1b3828u: goto label_1b3828;
        case 0x1b382cu: goto label_1b382c;
        case 0x1b3830u: goto label_1b3830;
        case 0x1b3834u: goto label_1b3834;
        case 0x1b3838u: goto label_1b3838;
        case 0x1b383cu: goto label_1b383c;
        case 0x1b3840u: goto label_1b3840;
        case 0x1b3844u: goto label_1b3844;
        case 0x1b3848u: goto label_1b3848;
        case 0x1b384cu: goto label_1b384c;
        case 0x1b3850u: goto label_1b3850;
        case 0x1b3854u: goto label_1b3854;
        case 0x1b3858u: goto label_1b3858;
        case 0x1b385cu: goto label_1b385c;
        case 0x1b3860u: goto label_1b3860;
        case 0x1b3864u: goto label_1b3864;
        case 0x1b3868u: goto label_1b3868;
        case 0x1b386cu: goto label_1b386c;
        case 0x1b3870u: goto label_1b3870;
        case 0x1b3874u: goto label_1b3874;
        case 0x1b3878u: goto label_1b3878;
        case 0x1b387cu: goto label_1b387c;
        case 0x1b3880u: goto label_1b3880;
        case 0x1b3884u: goto label_1b3884;
        case 0x1b3888u: goto label_1b3888;
        case 0x1b388cu: goto label_1b388c;
        case 0x1b3890u: goto label_1b3890;
        case 0x1b3894u: goto label_1b3894;
        case 0x1b3898u: goto label_1b3898;
        case 0x1b389cu: goto label_1b389c;
        case 0x1b38a0u: goto label_1b38a0;
        case 0x1b38a4u: goto label_1b38a4;
        case 0x1b38a8u: goto label_1b38a8;
        case 0x1b38acu: goto label_1b38ac;
        case 0x1b38b0u: goto label_1b38b0;
        case 0x1b38b4u: goto label_1b38b4;
        case 0x1b38b8u: goto label_1b38b8;
        case 0x1b38bcu: goto label_1b38bc;
        case 0x1b38c0u: goto label_1b38c0;
        case 0x1b38c4u: goto label_1b38c4;
        default: break;
    }

    ctx->pc = 0x1b3800u;

label_1b3800:
    // 0x1b3800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b3804:
    // 0x1b3804: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b3804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b3808:
    // 0x1b3808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b380c:
    // 0x1b380c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b3810:
    // 0x1b3810: 0xc06ddac  jal         func_1B76B0
label_1b3814:
    if (ctx->pc == 0x1B3814u) {
        ctx->pc = 0x1B3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3810u;
        // 0x1b3814: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3818u;
        goto label_1b3818;
    }
    ctx->pc = 0x1B3810u;
    SET_GPR_U32(ctx, 31, 0x1B3818u);
    ctx->pc = 0x1B3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3810u;
    // 0x1b3814: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B3810u, 0x1B3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3818u;
label_1b3818:
    // 0x1b3818: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1b381c:
    if (ctx->pc == 0x1B381Cu) {
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3818u;
        // 0x1b381c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3820u;
        goto label_1b3820;
    }
    ctx->pc = 0x1B3818u;
    {
        const bool branch_taken_0x1b3818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3818u;
        // 0x1b381c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3818) {
            ctx->pc = 0x1B38B4u;
            goto label_1b38b4;
        }
    }
    ctx->pc = 0x1B3820u;
label_1b3820:
    // 0x1b3820: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b3820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b3824:
    // 0x1b3824: 0x2446dd20  addiu       $a2, $v0, -0x22E0
    ctx->pc = 0x1b3824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
label_1b3828:
    // 0x1b3828: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b3828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b382c:
    // 0x1b382c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b382cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b3830:
    // 0x1b3830: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b3830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b3834:
    // 0x1b3834: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b3834u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b3838:
    // 0x1b3838: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b383c:
    if (ctx->pc == 0x1B383Cu) {
        ctx->pc = 0x1B383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3838u;
        // 0x1b383c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3840u;
        goto label_1b3840;
    }
    ctx->pc = 0x1B3838u;
    {
        const bool branch_taken_0x1b3838 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3838u;
        // 0x1b383c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3838) {
            ctx->pc = 0x1B3864u;
            goto label_1b3864;
        }
    }
    ctx->pc = 0x1B3840u;
label_1b3840:
    // 0x1b3840: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b3840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b3844:
    // 0x1b3844: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b3844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b3848:
    // 0x1b3848: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b3848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b384c:
    // 0x1b384c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b384cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b3850:
    // 0x1b3850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b3854:
    // 0x1b3854: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b3854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b3858:
    // 0x1b3858: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b3858u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b385c:
    // 0x1b385c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b3860:
    if (ctx->pc == 0x1B3860u) {
        ctx->pc = 0x1B3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B385Cu;
        // 0x1b3860: 0x2503dd20  addiu       $v1, $t0, -0x22E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3864u;
        goto label_1b3864;
    }
    ctx->pc = 0x1B385Cu;
    {
        const bool branch_taken_0x1b385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B385Cu;
        // 0x1b3860: 0x2503dd20  addiu       $v1, $t0, -0x22E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b385c) {
            ctx->pc = 0x1B3870u;
            goto label_1b3870;
        }
    }
    ctx->pc = 0x1B3864u;
label_1b3864:
    // 0x1b3864: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b3868:
    // 0x1b3868: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b3868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b386c:
    // 0x1b386c: 0x2503dd20  addiu       $v1, $t0, -0x22E0
    ctx->pc = 0x1b386cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958368));
label_1b3870:
    // 0x1b3870: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b3874:
    // 0x1b3874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b3878:
    // 0x1b3878: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b387c:
    if (ctx->pc == 0x1B387Cu) {
        ctx->pc = 0x1B387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3878u;
        // 0x1b387c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3880u;
        goto label_1b3880;
    }
    ctx->pc = 0x1B3878u;
    {
        const bool branch_taken_0x1b3878 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3878u;
        // 0x1b387c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3878) {
            ctx->pc = 0x1B3894u;
            goto label_1b3894;
        }
    }
    ctx->pc = 0x1B3880u;
label_1b3880:
    // 0x1b3880: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b3884:
    // 0x1b3884: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b3884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b3888:
    // 0x1b3888: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b3888u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b388c:
    // 0x1b388c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b3890:
    if (ctx->pc == 0x1B3890u) {
        ctx->pc = 0x1B3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B388Cu;
        // 0x1b3890: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3894u;
        goto label_1b3894;
    }
    ctx->pc = 0x1B388Cu;
    {
        const bool branch_taken_0x1b388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B388Cu;
        // 0x1b3890: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b388c) {
            ctx->pc = 0x1B3898u;
            goto label_1b3898;
        }
    }
    ctx->pc = 0x1B3894u;
label_1b3894:
    // 0x1b3894: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b3894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b3898:
    // 0x1b3898: 0xc0f809  jalr        $a2
label_1b389c:
    if (ctx->pc == 0x1B389Cu) {
        ctx->pc = 0x1B389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3898u;
        // 0x1b389c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B38A0u;
        goto label_1b38a0;
    }
    ctx->pc = 0x1B3898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B38A0u);
        ctx->pc = 0x1B389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3898u;
        // 0x1b389c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3898u, 0x1B38A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B38A0u;
label_1b38a0:
    // 0x1b38a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b38a4:
    // 0x1b38a4: 0xc0aa1fa  jal         func_2A87E8
label_1b38a8:
    if (ctx->pc == 0x1B38A8u) {
        ctx->pc = 0x1B38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38A4u;
        // 0x1b38a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B38ACu;
        goto label_1b38ac;
    }
    ctx->pc = 0x1B38A4u;
    SET_GPR_U32(ctx, 31, 0x1B38ACu);
    ctx->pc = 0x1B38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38A4u;
    // 0x1b38a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1B38A4u, 0x1B38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38ACu;
label_1b38ac:
    // 0x1b38ac: 0xc06ddb6  jal         func_1B76D8
label_1b38b0:
    if (ctx->pc == 0x1B38B0u) {
        ctx->pc = 0x1B38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38ACu;
        // 0x1b38b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B38B4u;
        goto label_1b38b4;
    }
    ctx->pc = 0x1B38ACu;
    SET_GPR_U32(ctx, 31, 0x1B38B4u);
    ctx->pc = 0x1B38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B38ACu;
    // 0x1b38b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B38ACu, 0x1B38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B38B4u;
label_1b38b4:
    // 0x1b38b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b38b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b38b8:
    // 0x1b38b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b38b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b38bc:
    // 0x1b38bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b38bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b38c0:
    // 0x1b38c0: 0x3e00008  jr          $ra
label_1b38c4:
    if (ctx->pc == 0x1B38C4u) {
        ctx->pc = 0x1B38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38C0u;
        // 0x1b38c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B38C8u;
        goto label_fallthrough_0x1b38c0;
    }
    ctx->pc = 0x1B38C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B38C0u;
        // 0x1b38c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b38c0:
    ctx->pc = 0x1B38C8u;
}
