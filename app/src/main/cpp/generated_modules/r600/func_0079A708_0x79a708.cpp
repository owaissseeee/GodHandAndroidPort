#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079A708
// Address: 0x79a708 - 0x79a908
void func_0079A708_0x79a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A708_0x79a708");
#endif

    switch (ctx->pc) {
        case 0x79a730u: goto label_79a730;
        case 0x79a73cu: goto label_79a73c;
        case 0x79a750u: goto label_79a750;
        case 0x79a760u: goto label_79a760;
        case 0x79a768u: goto label_79a768;
        case 0x79a7acu: goto label_79a7ac;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a7ecu: goto label_79a7ec;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a804u: goto label_79a804;
        case 0x79a80cu: goto label_79a80c;
        case 0x79a834u: goto label_79a834;
        case 0x79a83cu: goto label_79a83c;
        case 0x79a848u: goto label_79a848;
        case 0x79a854u: goto label_79a854;
        case 0x79a85cu: goto label_79a85c;
        case 0x79a874u: goto label_79a874;
        case 0x79a894u: goto label_79a894;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e8u: goto label_79a8e8;
        default: break;
    }

    ctx->pc = 0x79a708u;

    // 0x79a708: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a70c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a710: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a714: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a718: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a71c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79a720: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79a724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a728: 0xc1e6ad6  jal         func_79AB58
    ctx->pc = 0x79A728u;
    SET_GPR_U32(ctx, 31, 0x79A730u);
    ctx->pc = 0x79A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A728u;
    // 0x79a72c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB58u, 0x79A728u, 0x79A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A730u;
label_79a730:
    // 0x79a730: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a734: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A734u;
    SET_GPR_U32(ctx, 31, 0x79A73Cu);
    ctx->pc = 0x79A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A734u;
    // 0x79a738: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A734u, 0x79A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A73Cu;
label_79a73c:
    // 0x79a73c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79a73cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a740: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a744: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x79a744u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x79a748: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A748u;
    {
        const bool branch_taken_0x79a748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A748u;
        // 0x79a74c: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a748) {
            ctx->pc = 0x79A760u;
            goto label_79a760;
        }
    }
    ctx->pc = 0x79A750u;
label_79a750:
    // 0x79a750: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a758: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A758u;
    SET_GPR_U32(ctx, 31, 0x79A760u);
    ctx->pc = 0x79A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A758u;
    // 0x79a75c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A758u, 0x79A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A760u;
label_79a760:
    // 0x79a760: 0xc1e6ab4  jal         func_79AAD0
    ctx->pc = 0x79A760u;
    SET_GPR_U32(ctx, 31, 0x79A768u);
    ctx->pc = 0x79AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AAD0u, 0x79A760u, 0x79A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A768u;
label_79a768:
    // 0x79a768: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A768u;
    {
        const bool branch_taken_0x79a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0x8e437a8c  lw          $v1, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a768) {
            ctx->pc = 0x79A750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a750;
        }
    }
    ctx->pc = 0x79A770u;
    // 0x79a770: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x79a770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x79a774: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a778: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x79A778u;
    {
        const bool branch_taken_0x79a778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A778u;
        // 0x79a77c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a778) {
            ctx->pc = 0x79A81Cu;
            goto label_79a81c;
        }
    }
    ctx->pc = 0x79A780u;
    // 0x79a780: 0x3c114000  lui         $s1, 0x4000
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16384 << 16));
    // 0x79a784: 0x711024  and         $v0, $v1, $s1
    ctx->pc = 0x79a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x79a788: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A788u;
    {
        const bool branch_taken_0x79a788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a788) {
            ctx->pc = 0x79A7D0u;
            goto label_79a7d0;
        }
    }
    ctx->pc = 0x79A790u;
    // 0x79a790: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a794: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79a798: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7a4: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A7A4u;
    SET_GPR_U32(ctx, 31, 0x79A7ACu);
    ctx->pc = 0x79A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7A4u;
    // 0x79a7a8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A7A4u, 0x79A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7ACu;
label_79a7ac:
    // 0x79a7ac: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a7b0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a7b4: 0x24a5a448  addiu       $a1, $a1, -0x5BB8
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943816));
    // 0x79a7b8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A7B8u;
    SET_GPR_U32(ctx, 31, 0x79A7C0u);
    ctx->pc = 0x79A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7B8u;
    // 0x79a7bc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A7B8u, 0x79A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C0u;
label_79a7c0:
    // 0x79a7c0: 0x8e437a8c  lw          $v1, 0x7A8C($s2)
    ctx->pc = 0x79a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x79a7c4: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x79a7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x79a7c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A7C8u;
    {
        const bool branch_taken_0x79a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0xae437a8c  sw          $v1, 0x7A8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c8) {
            ctx->pc = 0x79A7E4u;
            goto label_79a7e4;
        }
    }
    ctx->pc = 0x79A7D0u;
label_79a7d0:
    // 0x79a7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a7d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7dc: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A7DCu;
    SET_GPR_U32(ctx, 31, 0x79A7E4u);
    ctx->pc = 0x79A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7DCu;
    // 0x79a7e0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A7DCu, 0x79A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E4u;
label_79a7e4:
    // 0x79a7e4: 0xc1e6ad6  jal         func_79AB58
    ctx->pc = 0x79A7E4u;
    SET_GPR_U32(ctx, 31, 0x79A7ECu);
    ctx->pc = 0x79A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E4u;
    // 0x79a7e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB58u, 0x79A7E4u, 0x79A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7ECu;
label_79a7ec:
    // 0x79a7ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A7ECu;
    {
        const bool branch_taken_0x79a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a7ec) {
            ctx->pc = 0x79A804u;
            goto label_79a804;
        }
    }
    ctx->pc = 0x79A7F4u;
    // 0x79a7f4: 0x0  nop
    ctx->pc = 0x79a7f4u;
    // NOP
label_79a7f8:
    // 0x79a7f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a7fc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A7FCu;
    SET_GPR_U32(ctx, 31, 0x79A804u);
    ctx->pc = 0x79A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7FCu;
    // 0x79a800: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A7FCu, 0x79A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A804u;
label_79a804:
    // 0x79a804: 0xc1e6ab4  jal         func_79AAD0
    ctx->pc = 0x79A804u;
    SET_GPR_U32(ctx, 31, 0x79A80Cu);
    ctx->pc = 0x79AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AAD0u, 0x79A804u, 0x79A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A80Cu;
label_79a80c:
    // 0x79a80c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A80Cu;
    {
        const bool branch_taken_0x79a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A80Cu;
        // 0x79a810: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a80c) {
            ctx->pc = 0x79A7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a7f8;
        }
    }
    ctx->pc = 0x79A814u;
    // 0x79a814: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79A814u;
    {
        const bool branch_taken_0x79a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A814u;
        // 0x79a818: 0x2671ea60  addiu       $s1, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a814) {
            ctx->pc = 0x79A868u;
            goto label_79a868;
        }
    }
    ctx->pc = 0x79A81Cu;
label_79a81c:
    // 0x79a81c: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x79a820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a82c: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A82Cu;
    SET_GPR_U32(ctx, 31, 0x79A834u);
    ctx->pc = 0x79A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A82Cu;
    // 0x79a830: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A82Cu, 0x79A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0xc1e6ad6  jal         func_79AB58
    ctx->pc = 0x79A834u;
    SET_GPR_U32(ctx, 31, 0x79A83Cu);
    ctx->pc = 0x79A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A834u;
    // 0x79a838: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB58u, 0x79A834u, 0x79A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A83Cu;
label_79a83c:
    // 0x79a83c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A83Cu;
    {
        const bool branch_taken_0x79a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a83c) {
            ctx->pc = 0x79A854u;
            goto label_79a854;
        }
    }
    ctx->pc = 0x79A844u;
    // 0x79a844: 0x0  nop
    ctx->pc = 0x79a844u;
    // NOP
label_79a848:
    // 0x79a848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a84c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A84Cu;
    SET_GPR_U32(ctx, 31, 0x79A854u);
    ctx->pc = 0x79A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A84Cu;
    // 0x79a850: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A84Cu, 0x79A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A854u;
label_79a854:
    // 0x79a854: 0xc1e6ab4  jal         func_79AAD0
    ctx->pc = 0x79A854u;
    SET_GPR_U32(ctx, 31, 0x79A85Cu);
    ctx->pc = 0x79AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AAD0u, 0x79A854u, 0x79A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A85Cu;
label_79a85c:
    // 0x79a85c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A85Cu;
    {
        const bool branch_taken_0x79a85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A85Cu;
        // 0x79a860: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a85c) {
            ctx->pc = 0x79A848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a848;
        }
    }
    ctx->pc = 0x79A864u;
    // 0x79a864: 0x2671ea60  addiu       $s1, $s3, -0x15A0
    ctx->pc = 0x79a864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
label_79a868:
    // 0x79a868: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x79a868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79a86c: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79A86Cu;
    SET_GPR_U32(ctx, 31, 0x79A874u);
    ctx->pc = 0x79A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A86Cu;
    // 0x79a870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79A86Cu, 0x79A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A874u;
label_79a874:
    // 0x79a874: 0x8e437a8c  lw          $v1, 0x7A8C($s2)
    ctx->pc = 0x79a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x79a878: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x79a87c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a880: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A880u;
    {
        const bool branch_taken_0x79a880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A880u;
        // 0x79a884: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a880) {
            ctx->pc = 0x79A898u;
            goto label_79a898;
        }
    }
    ctx->pc = 0x79A888u;
    // 0x79a888: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a88c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A88Cu;
    SET_GPR_U32(ctx, 31, 0x79A894u);
    ctx->pc = 0x79A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A88Cu;
    // 0x79a890: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A88Cu, 0x79A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A894u;
label_79a894:
    // 0x79a894: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a894u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a898:
    // 0x79a898: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x79a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x79a89c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a8a0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x79a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a8a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a8a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a8ac: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A8ACu;
    SET_GPR_U32(ctx, 31, 0x79A8B4u);
    ctx->pc = 0x79A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ACu;
    // 0x79a8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A8ACu, 0x79A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8B4u;
label_79a8b4:
    // 0x79a8b4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a8b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a8c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8c8: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A8C8u;
    SET_GPR_U32(ctx, 31, 0x79A8D0u);
    ctx->pc = 0x79A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8C8u;
    // 0x79a8cc: 0x24051003  addiu       $a1, $zero, 0x1003 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A8C8u, 0x79A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D0u;
label_79a8d0:
    // 0x79a8d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8d4: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x79A8D4u;
    SET_GPR_U32(ctx, 31, 0x79A8DCu);
    ctx->pc = 0x79A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8D4u;
    // 0x79a8d8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x79A8D4u, 0x79A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8DCu;
label_79a8dc:
    // 0x79a8dc: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a8e0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A8E0u;
    SET_GPR_U32(ctx, 31, 0x79A8E8u);
    ctx->pc = 0x79A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8E0u;
    // 0x79a8e4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A8E0u, 0x79A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8E8u;
label_79a8e8:
    // 0x79a8e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a8ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a8f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a8f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a8f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a8f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a900: 0x3e00008  jr          $ra
    ctx->pc = 0x79A900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A900u;
        // 0x79a904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A908u;
}
} // namespace gh_r600
