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
// Function: func_0079A6C8
// Address: 0x79a6c8 - 0x79a7e8
void func_0079A6C8_0x79a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A6C8_0x79a6c8");
#endif

    switch (ctx->pc) {
        case 0x79a71cu: goto label_79a71c;
        case 0x79a72cu: goto label_79a72c;
        case 0x79a73cu: goto label_79a73c;
        case 0x79a748u: goto label_79a748;
        case 0x79a750u: goto label_79a750;
        case 0x79a758u: goto label_79a758;
        case 0x79a780u: goto label_79a780;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7d4u: goto label_79a7d4;
        default: break;
    }

    ctx->pc = 0x79a6c8u;

    // 0x79a6c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a6cc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a6d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a6d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x79a6d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a6e0: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a6e4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x79a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a6e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x79a6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a6ec: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x79A6ECu;
    {
        const bool branch_taken_0x79a6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6ECu;
        // 0x79a6f0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6ec) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A6F4u;
    // 0x79a6f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x79a6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x79a6f8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x79A6F8u;
    {
        const bool branch_taken_0x79a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F8u;
        // 0x79a6fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6f8) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A700u;
    // 0x79a700: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x79a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x79a704: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x79A704u;
    {
        const bool branch_taken_0x79a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A704u;
        // 0x79a708: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a704) {
            ctx->pc = 0x79A7D4u;
            goto label_79a7d4;
        }
    }
    ctx->pc = 0x79A70Cu;
    // 0x79a70c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a710: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a714: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A714u;
    SET_GPR_U32(ctx, 31, 0x79A71Cu);
    ctx->pc = 0x79A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A714u;
    // 0x79a718: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A714u, 0x79A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A71Cu;
label_79a71c:
    // 0x79a71c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a720: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a724: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A724u;
    SET_GPR_U32(ctx, 31, 0x79A72Cu);
    ctx->pc = 0x79A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A724u;
    // 0x79a728: 0x24a5ac08  addiu       $a1, $a1, -0x53F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A724u, 0x79A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A72Cu;
label_79a72c:
    // 0x79a72c: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a730: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a734: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A734u;
    SET_GPR_U32(ctx, 31, 0x79A73Cu);
    ctx->pc = 0x79A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A734u;
    // 0x79a738: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A734u, 0x79A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A73Cu;
label_79a73c:
    // 0x79a73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a740: 0xc1e69fa  jal         func_79A7E8
    ctx->pc = 0x79A740u;
    SET_GPR_U32(ctx, 31, 0x79A748u);
    ctx->pc = 0x79A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A740u;
    // 0x79a744: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A7E8u, 0x79A740u, 0x79A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A748u;
label_79a748:
    // 0x79a748: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A748u;
    SET_GPR_U32(ctx, 31, 0x79A750u);
    ctx->pc = 0x79A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A748u;
    // 0x79a74c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A748u, 0x79A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A750u;
label_79a750:
    // 0x79a750: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A750u;
    SET_GPR_U32(ctx, 31, 0x79A758u);
    ctx->pc = 0x79A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A750u;
    // 0x79a754: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A750u, 0x79A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A758u;
label_79a758:
    // 0x79a758: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a75c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a760: 0x8064abb8  lb          $a0, -0x5448($v1)
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79ABB8u));
    // 0x79a764: 0x2466abb8  addiu       $a2, $v1, -0x5448
    ctx->pc = 0x79a764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945720));
    // 0x79a768: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79a768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a76c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a770: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A770u;
    {
        const bool branch_taken_0x79a770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A770u;
        // 0x79a774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a770) {
            ctx->pc = 0x79A7A8u;
            goto label_79a7a8;
        }
    }
    ctx->pc = 0x79A778u;
    // 0x79a778: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a77c: 0x0  nop
    ctx->pc = 0x79a77cu;
    // NOP
label_79a780:
    // 0x79a780: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a784: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a788: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a78c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a790: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a794: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A794u;
    {
        const bool branch_taken_0x79a794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A794u;
        // 0x79a798: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a794) {
            ctx->pc = 0x79A7A8u;
            goto label_79a7a8;
        }
    }
    ctx->pc = 0x79A79Cu;
    // 0x79a79c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a7a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A7A0u;
    {
        const bool branch_taken_0x79a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a7a0) {
            ctx->pc = 0x79A7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7A0u;
            // 0x79a7a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a780;
        }
    }
    ctx->pc = 0x79A7A8u;
label_79a7a8:
    // 0x79a7a8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A7A8u;
    SET_GPR_U32(ctx, 31, 0x79A7B0u);
    ctx->pc = 0x79A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7A8u;
    // 0x79a7ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A7A8u, 0x79A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7B0u;
label_79a7b0:
    // 0x79a7b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x79a7b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A7B4u;
    {
        const bool branch_taken_0x79a7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B4u;
        // 0x79a7b8: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b4) {
            ctx->pc = 0x79A7CCu;
            goto label_79a7cc;
        }
    }
    ctx->pc = 0x79A7BCu;
    // 0x79a7bc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x79a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x79a7c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x79a7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x79a7c4: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x79a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x79a7c8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79a7cc:
    // 0x79a7cc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A7CCu;
    SET_GPR_U32(ctx, 31, 0x79A7D4u);
    ctx->pc = 0x79A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7CCu;
    // 0x79a7d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A7CCu, 0x79A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7D4u;
label_79a7d4:
    // 0x79a7d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a7d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E0u;
        // 0x79a7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7E8u;
}
} // namespace gh_r404
