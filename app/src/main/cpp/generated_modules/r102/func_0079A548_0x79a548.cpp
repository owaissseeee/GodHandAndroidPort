#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079A548
// Address: 0x79a548 - 0x79a710
void func_0079A548_0x79a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A548_0x79a548");
#endif

    switch (ctx->pc) {
        case 0x79a57cu: goto label_79a57c;
        case 0x79a588u: goto label_79a588;
        case 0x79a594u: goto label_79a594;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a618u: goto label_79a618;
        case 0x79a628u: goto label_79a628;
        case 0x79a638u: goto label_79a638;
        case 0x79a640u: goto label_79a640;
        case 0x79a658u: goto label_79a658;
        case 0x79a668u: goto label_79a668;
        case 0x79a684u: goto label_79a684;
        case 0x79a690u: goto label_79a690;
        case 0x79a6a0u: goto label_79a6a0;
        case 0x79a6a8u: goto label_79a6a8;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6d8u: goto label_79a6d8;
        case 0x79a6e4u: goto label_79a6e4;
        case 0x79a6ecu: goto label_79a6ec;
        default: break;
    }

    ctx->pc = 0x79a548u;

    // 0x79a548: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79a54c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79a550: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79a554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a558: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79a55c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a560: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79a560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79a564: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a564u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79a568: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79a56c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79a56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79a570: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a574: 0xc0a57b8  jal         func_295EE0
    ctx->pc = 0x79A574u;
    SET_GPR_U32(ctx, 31, 0x79A57Cu);
    ctx->pc = 0x79A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A574u;
    // 0x79a578: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EE0u, 0x79A574u, 0x79A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A57Cu;
label_79a57c:
    // 0x79a57c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a580: 0xc0a588c  jal         func_296230
    ctx->pc = 0x79A580u;
    SET_GPR_U32(ctx, 31, 0x79A588u);
    ctx->pc = 0x79A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A580u;
    // 0x79a584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79A580u, 0x79A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A588u;
label_79a588:
    // 0x79a588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a58c: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x79A58Cu;
    SET_GPR_U32(ctx, 31, 0x79A594u);
    ctx->pc = 0x79A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A58Cu;
    // 0x79a590: 0x240503bc  addiu       $a1, $zero, 0x3BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A58Cu, 0x79A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A594u;
label_79a594:
    // 0x79a594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a598: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x79A598u;
    SET_GPR_U32(ctx, 31, 0x79A5A0u);
    ctx->pc = 0x79A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A598u;
    // 0x79a59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79A598u, 0x79A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A0u;
label_79a5a0:
    // 0x79a5a0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79a5a4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79a5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79a5a8: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x79a5ac: 0xc0a5526  jal         func_295498
    ctx->pc = 0x79A5ACu;
    SET_GPR_U32(ctx, 31, 0x79A5B4u);
    ctx->pc = 0x79A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5ACu;
    // 0x79a5b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295498u, 0x79A5ACu, 0x79A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5B4u;
label_79a5b4:
    // 0x79a5b4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a5b8: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a5bc: 0x24a5ae80  addiu       $a1, $a1, -0x5180
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946432));
    // 0x79a5c0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x79a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79a5c4: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79A5C4u;
    SET_GPR_U32(ctx, 31, 0x79A5CCu);
    ctx->pc = 0x79A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C4u;
    // 0x79a5c8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79A5C4u, 0x79A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5CCu;
label_79a5cc:
    // 0x79a5cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79a5ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5d0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a5d4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a5d8: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79a5dc: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x79a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79a5e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5e4: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79A5E4u;
    SET_GPR_U32(ctx, 31, 0x79A5ECu);
    ctx->pc = 0x79A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5E4u;
    // 0x79a5e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A5E4u, 0x79A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5ECu;
label_79a5ec:
    // 0x79a5ec: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a5f0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a5f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a5f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a604: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A604u;
    SET_GPR_U32(ctx, 31, 0x79A60Cu);
    ctx->pc = 0x79A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A604u;
    // 0x79a608: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A604u, 0x79A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A60Cu;
label_79a60c:
    // 0x79a60c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a610: 0xc0a579e  jal         func_295E78
    ctx->pc = 0x79A610u;
    SET_GPR_U32(ctx, 31, 0x79A618u);
    ctx->pc = 0x79A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A610u;
    // 0x79a614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E78u, 0x79A610u, 0x79A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A618u;
label_79a618:
    // 0x79a618: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x79a618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a61c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A61Cu;
    {
        const bool branch_taken_0x79a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a61c) {
            ctx->pc = 0x79A638u;
            goto label_79a638;
        }
    }
    ctx->pc = 0x79A624u;
    // 0x79a624: 0x0  nop
    ctx->pc = 0x79a624u;
    // NOP
label_79a628:
    // 0x79a628: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a62c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a630: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A630u;
    SET_GPR_U32(ctx, 31, 0x79A638u);
    ctx->pc = 0x79A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A630u;
    // 0x79a634: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A630u, 0x79A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A638u;
label_79a638:
    // 0x79a638: 0xc0a5806  jal         func_296018
    ctx->pc = 0x79A638u;
    SET_GPR_U32(ctx, 31, 0x79A640u);
    ctx->pc = 0x79A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A638u;
    // 0x79a63c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79A638u, 0x79A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A640u;
label_79a640:
    // 0x79a640: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A640u;
    {
        const bool branch_taken_0x79a640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A640u;
        // 0x79a644: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a640) {
            ctx->pc = 0x79A628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a628;
        }
    }
    ctx->pc = 0x79A648u;
    // 0x79a648: 0x2625a2a0  addiu       $a1, $s1, -0x5D60
    ctx->pc = 0x79a648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943392));
    // 0x79a64c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a650: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79A650u;
    SET_GPR_U32(ctx, 31, 0x79A658u);
    ctx->pc = 0x79A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A650u;
    // 0x79a654: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79A650u, 0x79A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A658u;
label_79a658:
    // 0x79a658: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x79a658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x79a65c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a660: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79A660u;
    SET_GPR_U32(ctx, 31, 0x79A668u);
    ctx->pc = 0x79A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A660u;
    // 0x79a664: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A660u, 0x79A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A668u;
label_79a668:
    // 0x79a668: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79a66c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a674: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a678: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79a67c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A67Cu;
    SET_GPR_U32(ctx, 31, 0x79A684u);
    ctx->pc = 0x79A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A67Cu;
    // 0x79a680: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A67Cu, 0x79A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A684u;
label_79a684:
    // 0x79a684: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A684u;
    {
        const bool branch_taken_0x79a684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a684) {
            ctx->pc = 0x79A6A0u;
            goto label_79a6a0;
        }
    }
    ctx->pc = 0x79A68Cu;
    // 0x79a68c: 0x0  nop
    ctx->pc = 0x79a68cu;
    // NOP
label_79a690:
    // 0x79a690: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a698: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A698u;
    SET_GPR_U32(ctx, 31, 0x79A6A0u);
    ctx->pc = 0x79A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A698u;
    // 0x79a69c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A698u, 0x79A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A0u;
label_79a6a0:
    // 0x79a6a0: 0xc0a5806  jal         func_296018
    ctx->pc = 0x79A6A0u;
    SET_GPR_U32(ctx, 31, 0x79A6A8u);
    ctx->pc = 0x79A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6A0u;
    // 0x79a6a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79A6A0u, 0x79A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6A8u;
label_79a6a8:
    // 0x79a6a8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A6A8u;
    {
        const bool branch_taken_0x79a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A8u;
        // 0x79a6ac: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a8) {
            ctx->pc = 0x79A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a690;
        }
    }
    ctx->pc = 0x79A6B0u;
    // 0x79a6b0: 0x2625a2a0  addiu       $a1, $s1, -0x5D60
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943392));
    // 0x79a6b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6b8: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x79A6B8u;
    SET_GPR_U32(ctx, 31, 0x79A6C0u);
    ctx->pc = 0x79A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B8u;
    // 0x79a6bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x79A6B8u, 0x79A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C0u;
label_79a6c0:
    // 0x79a6c0: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x79a6c4: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a6c8: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x79a6c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79a6cc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a6d0: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x79A6D0u;
    SET_GPR_U32(ctx, 31, 0x79A6D8u);
    ctx->pc = 0x79A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6D0u;
    // 0x79a6d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x79A6D0u, 0x79A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D8u;
label_79a6d8:
    // 0x79a6d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6dc: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x79A6DCu;
    SET_GPR_U32(ctx, 31, 0x79A6E4u);
    ctx->pc = 0x79A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6DCu;
    // 0x79a6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79A6DCu, 0x79A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6E4u;
label_79a6e4:
    // 0x79a6e4: 0xc1e69e4  jal         func_79A790
    ctx->pc = 0x79A6E4u;
    SET_GPR_U32(ctx, 31, 0x79A6ECu);
    ctx->pc = 0x79A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A790u, 0x79A6E4u, 0x79A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6ECu;
label_79a6ec:
    // 0x79a6ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79a6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a6f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79a6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a6f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79a6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a6f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79a6f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a6fc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79a6fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a700: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a704: 0x3e00008  jr          $ra
    ctx->pc = 0x79A704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A70Cu;
    // 0x79a70c: 0x0  nop
    ctx->pc = 0x79a70cu;
    // NOP
    ctx->pc = 0x79a710u;
}
} // namespace gh_r102
