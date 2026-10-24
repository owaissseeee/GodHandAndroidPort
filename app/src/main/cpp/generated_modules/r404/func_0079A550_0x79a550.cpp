#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: func_0079A550
// Address: 0x79a550 - 0x79a6c8
void func_0079A550_0x79a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A550_0x79a550");
#endif

    switch (ctx->pc) {
        case 0x79a580u: goto label_79a580;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a604u: goto label_79a604;
        case 0x79a614u: goto label_79a614;
        case 0x79a638u: goto label_79a638;
        case 0x79a668u: goto label_79a668;
        case 0x79a690u: goto label_79a690;
        case 0x79a698u: goto label_79a698;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6b4u: goto label_79a6b4;
        default: break;
    }

    ctx->pc = 0x79a550u;

    // 0x79a550: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a554: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a558: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a55c: 0x24053006  addiu       $a1, $zero, 0x3006
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12294));
    // 0x79a560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a578: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A578u;
    SET_GPR_U32(ctx, 31, 0x79A580u);
    ctx->pc = 0x79A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A578u;
    // 0x79a57c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A578u, 0x79A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A580u;
label_79a580:
    // 0x79a580: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a584: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x79a588: 0x84640bec  lh          $a0, 0xBEC($v1)
    ctx->pc = 0x79a588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x79a58c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A58Cu;
    {
        const bool branch_taken_0x79a58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A58Cu;
        // 0x79a590: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a58c) {
            ctx->pc = 0x79A59Cu;
            goto label_79a59c;
        }
    }
    ctx->pc = 0x79A594u;
    // 0x79a594: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A594u;
    SET_GPR_U32(ctx, 31, 0x79A59Cu);
    ctx->pc = 0x79A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A594u;
    // 0x79a598: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A594u, 0x79A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A59Cu;
label_79a59c:
    // 0x79a59c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a5a0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x79a5a4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a5a8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a5ac: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a5b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a5b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a5b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a5bc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A5BCu;
    SET_GPR_U32(ctx, 31, 0x79A5C4u);
    ctx->pc = 0x79A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5BCu;
    // 0x79a5c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A5BCu, 0x79A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5C4u;
label_79a5c4:
    // 0x79a5c4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a5c8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A5C8u;
    SET_GPR_U32(ctx, 31, 0x79A5D0u);
    ctx->pc = 0x79A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C8u;
    // 0x79a5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A5C8u, 0x79A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D0u;
label_79a5d0:
    // 0x79a5d0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a5d4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a5d8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A5D8u;
    SET_GPR_U32(ctx, 31, 0x79A5E0u);
    ctx->pc = 0x79A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5D8u;
    // 0x79a5dc: 0x24a5ac00  addiu       $a1, $a1, -0x5400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A5D8u, 0x79A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5E0u;
label_79a5e0:
    // 0x79a5e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a5e4: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x79a5e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a5ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a5f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a5f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5f4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a5f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a5fc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A5FCu;
    SET_GPR_U32(ctx, 31, 0x79A604u);
    ctx->pc = 0x79A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5FCu;
    // 0x79a600: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A5FCu, 0x79A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A604u;
label_79a604:
    // 0x79a604: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a608: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a60c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A60Cu;
    SET_GPR_U32(ctx, 31, 0x79A614u);
    ctx->pc = 0x79A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A60Cu;
    // 0x79a610: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A60Cu, 0x79A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A614u;
label_79a614:
    // 0x79a614: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a618: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a61c: 0x8064abb0  lb          $a0, -0x5450($v1)
    ctx->pc = 0x79a61cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79ABB0u));
    // 0x79a620: 0x2466abb0  addiu       $a2, $v1, -0x5450
    ctx->pc = 0x79a620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945712));
    // 0x79a624: 0x24484c38  addiu       $t0, $v0, 0x4C38
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x79a628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a62c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A62Cu;
    {
        const bool branch_taken_0x79a62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A62Cu;
        // 0x79a630: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a62c) {
            ctx->pc = 0x79A660u;
            goto label_79a660;
        }
    }
    ctx->pc = 0x79A634u;
    // 0x79a634: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a638:
    // 0x79a638: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a63c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a644: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a648: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a64c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A64Cu;
    {
        const bool branch_taken_0x79a64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A64Cu;
        // 0x79a650: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a64c) {
            ctx->pc = 0x79A660u;
            goto label_79a660;
        }
    }
    ctx->pc = 0x79A654u;
    // 0x79a654: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a658: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A658u;
    {
        const bool branch_taken_0x79a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a658) {
            ctx->pc = 0x79A65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A658u;
            // 0x79a65c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a638;
        }
    }
    ctx->pc = 0x79A660u;
label_79a660:
    // 0x79a660: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A660u;
    SET_GPR_U32(ctx, 31, 0x79A668u);
    ctx->pc = 0x79A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A660u;
    // 0x79a664: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A660u, 0x79A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A668u;
label_79a668:
    // 0x79a668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a66c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A66Cu;
    {
        const bool branch_taken_0x79a66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a66c) {
            ctx->pc = 0x79A688u;
            goto label_79a688;
        }
    }
    ctx->pc = 0x79A674u;
    // 0x79a674: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x79a678: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a67c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a680: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a684: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x79a684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_79a688:
    // 0x79a688: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A688u;
    SET_GPR_U32(ctx, 31, 0x79A690u);
    ctx->pc = 0x79A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A688u;
    // 0x79a68c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A688u, 0x79A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A690u;
label_79a690:
    // 0x79a690: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A690u;
    SET_GPR_U32(ctx, 31, 0x79A698u);
    ctx->pc = 0x79A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A690u;
    // 0x79a694: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A690u, 0x79A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A698u;
label_79a698:
    // 0x79a698: 0xc1e6808  jal         func_79A020
    ctx->pc = 0x79A698u;
    SET_GPR_U32(ctx, 31, 0x79A6A0u);
    ctx->pc = 0x79A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A020u, 0x79A698u, 0x79A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A0u;
label_79a6a0:
    // 0x79a6a0: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79A6A0u;
    SET_GPR_U32(ctx, 31, 0x79A6A8u);
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79A6A0u, 0x79A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A8u;
label_79a6a8:
    // 0x79a6a8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a6ac: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A6ACu;
    SET_GPR_U32(ctx, 31, 0x79A6B4u);
    ctx->pc = 0x79A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6ACu;
    // 0x79a6b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A6ACu, 0x79A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6B4u;
label_79a6b4:
    // 0x79a6b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6BCu;
        // 0x79a6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6C4u;
    // 0x79a6c4: 0x0  nop
    ctx->pc = 0x79a6c4u;
    // NOP
    ctx->pc = 0x79a6c8u;
}
} // namespace gh_r404
