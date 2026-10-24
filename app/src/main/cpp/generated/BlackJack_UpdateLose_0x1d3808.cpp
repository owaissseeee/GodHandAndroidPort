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

// Function: BlackJack_UpdateLose
// Address: 0x1d3808 - 0x1d3a48
void BlackJack_UpdateLose_0x1d3808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateLose_0x1d3808");
#endif

    switch (ctx->pc) {
        case 0x1d3868u: goto label_1d3868;
        case 0x1d3874u: goto label_1d3874;
        case 0x1d38a8u: goto label_1d38a8;
        case 0x1d38b0u: goto label_1d38b0;
        case 0x1d38bcu: goto label_1d38bc;
        case 0x1d38c4u: goto label_1d38c4;
        case 0x1d38dcu: goto label_1d38dc;
        case 0x1d38e4u: goto label_1d38e4;
        case 0x1d38fcu: goto label_1d38fc;
        case 0x1d3908u: goto label_1d3908;
        case 0x1d3910u: goto label_1d3910;
        case 0x1d3920u: goto label_1d3920;
        case 0x1d3930u: goto label_1d3930;
        case 0x1d3940u: goto label_1d3940;
        case 0x1d3950u: goto label_1d3950;
        case 0x1d395cu: goto label_1d395c;
        case 0x1d39b8u: goto label_1d39b8;
        case 0x1d39c4u: goto label_1d39c4;
        case 0x1d39d0u: goto label_1d39d0;
        case 0x1d39f8u: goto label_1d39f8;
        default: break;
    }

    ctx->pc = 0x1d3808u;

    // 0x1d3808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d380c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3818: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d381c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1d381cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d3820: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1D3820u;
    {
        const bool branch_taken_0x1d3820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3820u;
        // 0x1d3824: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3820) {
            ctx->pc = 0x1D3A38u;
            goto label_1d3a38;
        }
    }
    ctx->pc = 0x1D3828u;
    // 0x1d3828: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d3828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d382c: 0x2442b070  addiu       $v0, $v0, -0x4F90
    ctx->pc = 0x1d382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946928));
    // 0x1d3830: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3834: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3838: 0x800008  jr          $a0
    ctx->pc = 0x1D3838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3840u: goto label_1d3840;
            case 0x1D3850u: goto label_1d3850;
            case 0x1D3884u: goto label_1d3884;
            case 0x1D396Cu: goto label_1d396c;
            case 0x1D3988u: goto label_1d3988;
            case 0x1D39E0u: goto label_1d39e0;
            case 0x1D3A08u: goto label_1d3a08;
            case 0x1D3A2Cu: goto label_1d3a2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3838u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D3840u;
label_1d3840:
    // 0x1d3840: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3844: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d3844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3848: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1D3848u;
    {
        const bool branch_taken_0x1d3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3848u;
        // 0x1d384c: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3848) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D3850u;
label_1d3850:
    // 0x1d3850: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3854: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D3854u;
    {
        const bool branch_taken_0x1d3854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3854u;
        // 0x1d3858: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3854) {
            ctx->pc = 0x1D3A24u;
            goto label_1d3a24;
        }
    }
    ctx->pc = 0x1D385Cu;
    // 0x1d385c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3860: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D3860u;
    SET_GPR_U32(ctx, 31, 0x1D3868u);
    ctx->pc = 0x1D3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3860u;
    // 0x1d3864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D3860u, 0x1D3868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3868u;
label_1d3868:
    // 0x1d3868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d386c: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D386Cu;
    SET_GPR_U32(ctx, 31, 0x1D3874u);
    ctx->pc = 0x1D3870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D386Cu;
    // 0x1d3870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D386Cu, 0x1D3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3874u;
label_1d3874:
    // 0x1d3874: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3878: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d387c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1D387Cu;
    {
        const bool branch_taken_0x1d387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D387Cu;
        // 0x1d3880: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d387c) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D3884u;
label_1d3884:
    // 0x1d3884: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3888: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1D3888u;
    {
        const bool branch_taken_0x1d3888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3888u;
        // 0x1d388c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3888) {
            ctx->pc = 0x1D3A24u;
            goto label_1d3a24;
        }
    }
    ctx->pc = 0x1D3890u;
    // 0x1d3890: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d3894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d389c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1d389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d38a0: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1D38A0u;
    SET_GPR_U32(ctx, 31, 0x1D38A8u);
    ctx->pc = 0x1D38A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38A0u;
    // 0x1d38a4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1D38A0u, 0x1D38A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38A8u;
label_1d38a8:
    // 0x1d38a8: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D38A8u;
    SET_GPR_U32(ctx, 31, 0x1D38B0u);
    ctx->pc = 0x1D38ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38A8u;
    // 0x1d38ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D38A8u, 0x1D38B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38B0u;
label_1d38b0:
    // 0x1d38b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d38b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38b4: 0xc075a94  jal         func_1D6A50
    ctx->pc = 0x1D38B4u;
    SET_GPR_U32(ctx, 31, 0x1D38BCu);
    ctx->pc = 0x1D38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38B4u;
    // 0x1d38b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A50u, 0x1D38B4u, 0x1D38BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38BCu;
label_1d38bc:
    // 0x1d38bc: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D38BCu;
    SET_GPR_U32(ctx, 31, 0x1D38C4u);
    ctx->pc = 0x1D38C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38BCu;
    // 0x1d38c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D38BCu, 0x1D38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38C4u;
label_1d38c4:
    // 0x1d38c4: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x1d38c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d38c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d38cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d38ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d38d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38d4: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D38D4u;
    SET_GPR_U32(ctx, 31, 0x1D38DCu);
    ctx->pc = 0x1D38D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38D4u;
    // 0x1d38d8: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D38D4u, 0x1D38DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38DCu;
label_1d38dc:
    // 0x1d38dc: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D38DCu;
    SET_GPR_U32(ctx, 31, 0x1D38E4u);
    ctx->pc = 0x1D38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38DCu;
    // 0x1d38e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D38DCu, 0x1D38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38E4u;
label_1d38e4:
    // 0x1d38e4: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x1d38e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d38e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d38e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d38ec: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D38ECu;
    {
        const bool branch_taken_0x1d38ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d38ec) {
            ctx->pc = 0x1D38F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D38ECu;
            // 0x1d38f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3954u;
            goto label_1d3954;
        }
    }
    ctx->pc = 0x1D38F4u;
    // 0x1d38f4: 0xc0751fa  jal         func_1D47E8
    ctx->pc = 0x1D38F4u;
    SET_GPR_U32(ctx, 31, 0x1D38FCu);
    ctx->pc = 0x1D38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38F4u;
    // 0x1d38f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D47E8u, 0x1D38F4u, 0x1D38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38FCu;
label_1d38fc:
    // 0x1d38fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3900: 0xc075a8c  jal         func_1D6A30
    ctx->pc = 0x1D3900u;
    SET_GPR_U32(ctx, 31, 0x1D3908u);
    ctx->pc = 0x1D3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3900u;
    // 0x1d3904: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A30u, 0x1D3900u, 0x1D3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3908u;
label_1d3908:
    // 0x1d3908: 0xc07526c  jal         func_1D49B0
    ctx->pc = 0x1D3908u;
    SET_GPR_U32(ctx, 31, 0x1D3910u);
    ctx->pc = 0x1D390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3908u;
    // 0x1d390c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49B0u, 0x1D3908u, 0x1D3910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3910u;
label_1d3910:
    // 0x1d3910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3910u;
    {
        const bool branch_taken_0x1d3910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3910u;
        // 0x1d3914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3910) {
            ctx->pc = 0x1D3928u;
            goto label_1d3928;
        }
    }
    ctx->pc = 0x1D3918u;
    // 0x1d3918: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D3918u;
    SET_GPR_U32(ctx, 31, 0x1D3920u);
    ctx->pc = 0x1D391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3918u;
    // 0x1d391c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D3918u, 0x1D3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3920u;
label_1d3920:
    // 0x1d3920: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3920u;
    {
        const bool branch_taken_0x1d3920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3920u;
        // 0x1d3924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3920) {
            ctx->pc = 0x1D3954u;
            goto label_1d3954;
        }
    }
    ctx->pc = 0x1D3928u;
label_1d3928:
    // 0x1d3928: 0xc075246  jal         func_1D4918
    ctx->pc = 0x1D3928u;
    SET_GPR_U32(ctx, 31, 0x1D3930u);
    ctx->pc = 0x1D392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3928u;
    // 0x1d392c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4918u, 0x1D3928u, 0x1D3930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3930u;
label_1d3930:
    // 0x1d3930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3930u;
    {
        const bool branch_taken_0x1d3930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3930u;
        // 0x1d3934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3930) {
            ctx->pc = 0x1D3948u;
            goto label_1d3948;
        }
    }
    ctx->pc = 0x1D3938u;
    // 0x1d3938: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D3938u;
    SET_GPR_U32(ctx, 31, 0x1D3940u);
    ctx->pc = 0x1D393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3938u;
    // 0x1d393c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D3938u, 0x1D3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3940u;
label_1d3940:
    // 0x1d3940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3940u;
    {
        const bool branch_taken_0x1d3940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3940u;
        // 0x1d3944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3940) {
            ctx->pc = 0x1D3954u;
            goto label_1d3954;
        }
    }
    ctx->pc = 0x1D3948u;
label_1d3948:
    // 0x1d3948: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D3948u;
    SET_GPR_U32(ctx, 31, 0x1D3950u);
    ctx->pc = 0x1D394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3948u;
    // 0x1d394c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D3948u, 0x1D3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3950u;
label_1d3950:
    // 0x1d3950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3954:
    // 0x1d3954: 0xc075918  jal         func_1D6460
    ctx->pc = 0x1D3954u;
    SET_GPR_U32(ctx, 31, 0x1D395Cu);
    ctx->pc = 0x1D3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3954u;
    // 0x1d3958: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6460u, 0x1D3954u, 0x1D395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D395Cu;
label_1d395c:
    // 0x1d395c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3960: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3964: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D3964u;
    {
        const bool branch_taken_0x1d3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3964u;
        // 0x1d3968: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3964) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D396Cu;
label_1d396c:
    // 0x1d396c: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3970: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D3970u;
    {
        const bool branch_taken_0x1d3970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3970u;
        // 0x1d3974: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3970) {
            ctx->pc = 0x1D3A24u;
            goto label_1d3a24;
        }
    }
    ctx->pc = 0x1D3978u;
    // 0x1d3978: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d397c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1d397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d3980: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D3980u;
    {
        const bool branch_taken_0x1d3980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3980u;
        // 0x1d3984: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3980) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D3988u;
label_1d3988:
    // 0x1d3988: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d398c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1d398cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1d3990: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1d3990u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1d3994: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d3994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d3998: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3998u;
    {
        const bool branch_taken_0x1d3998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3998u;
        // 0x1d399c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3998) {
            ctx->pc = 0x1D39B0u;
            goto label_1d39b0;
        }
    }
    ctx->pc = 0x1D39A0u;
    // 0x1d39a0: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d39a4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D39A4u;
    {
        const bool branch_taken_0x1d39a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39A4u;
        // 0x1d39a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39a4) {
            ctx->pc = 0x1D3A24u;
            goto label_1d3a24;
        }
    }
    ctx->pc = 0x1D39ACu;
    // 0x1d39ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d39b0:
    // 0x1d39b0: 0xc075278  jal         func_1D49E0
    ctx->pc = 0x1D39B0u;
    SET_GPR_U32(ctx, 31, 0x1D39B8u);
    ctx->pc = 0x1D39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39B0u;
    // 0x1d39b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49E0u, 0x1D39B0u, 0x1D39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39B8u;
label_1d39b8:
    // 0x1d39b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39bc: 0xc0752aa  jal         func_1D4AA8
    ctx->pc = 0x1D39BCu;
    SET_GPR_U32(ctx, 31, 0x1D39C4u);
    ctx->pc = 0x1D39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39BCu;
    // 0x1d39c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AA8u, 0x1D39BCu, 0x1D39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39C4u;
label_1d39c4:
    // 0x1d39c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39c8: 0xc075918  jal         func_1D6460
    ctx->pc = 0x1D39C8u;
    SET_GPR_U32(ctx, 31, 0x1D39D0u);
    ctx->pc = 0x1D39CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39C8u;
    // 0x1d39cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6460u, 0x1D39C8u, 0x1D39D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39D0u;
label_1d39d0:
    // 0x1d39d0: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d39d4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d39d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D39D8u;
    {
        const bool branch_taken_0x1d39d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39D8u;
        // 0x1d39dc: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39d8) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D39E0u;
label_1d39e0:
    // 0x1d39e0: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d39e4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D39E4u;
    {
        const bool branch_taken_0x1d39e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39E4u;
        // 0x1d39e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39e4) {
            ctx->pc = 0x1D3A24u;
            goto label_1d3a24;
        }
    }
    ctx->pc = 0x1D39ECu;
    // 0x1d39ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d39ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39f0: 0xc075a9c  jal         func_1D6A70
    ctx->pc = 0x1D39F0u;
    SET_GPR_U32(ctx, 31, 0x1D39F8u);
    ctx->pc = 0x1D39F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39F0u;
    // 0x1d39f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A70u, 0x1D39F0u, 0x1D39F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39F8u;
label_1d39f8:
    // 0x1d39f8: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d39fc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3a00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3A00u;
    {
        const bool branch_taken_0x1d3a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A00u;
        // 0x1d3a04: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a00) {
            ctx->pc = 0x1D3A18u;
            goto label_1d3a18;
        }
    }
    ctx->pc = 0x1D3A08u;
label_1d3a08:
    // 0x1d3a08: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d3a0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3A0Cu;
    {
        const bool branch_taken_0x1d3a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A0Cu;
        // 0x1d3a10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a0c) {
            ctx->pc = 0x1D3A24u;
            goto label_1d3a24;
        }
    }
    ctx->pc = 0x1D3A14u;
    // 0x1d3a14: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d3a18:
    // 0x1d3a18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3a1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3A1Cu;
    {
        const bool branch_taken_0x1d3a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A1Cu;
        // 0x1d3a20: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a1c) {
            ctx->pc = 0x1D3A38u;
            goto label_1d3a38;
        }
    }
    ctx->pc = 0x1D3A24u;
label_1d3a24:
    // 0x1d3a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3A24u;
    {
        const bool branch_taken_0x1d3a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A24u;
        // 0x1d3a28: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a24) {
            ctx->pc = 0x1D3A38u;
            goto label_1d3a38;
        }
    }
    ctx->pc = 0x1D3A2Cu;
label_1d3a2c:
    // 0x1d3a2c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1d3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d3a30: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d3a34: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d3a38:
    // 0x1d3a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3a40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A40u;
        // 0x1d3a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3A48u;
}
