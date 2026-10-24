#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_0079A6E8
// Address: 0x79a6e8 - 0x79a948
void func_0079A6E8_0x79a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A6E8_0x79a6e8");
#endif

    switch (ctx->pc) {
        case 0x79a740u: goto label_79a740;
        case 0x79a770u: goto label_79a770;
        case 0x79a798u: goto label_79a798;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a804u: goto label_79a804;
        case 0x79a810u: goto label_79a810;
        case 0x79a820u: goto label_79a820;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a884u: goto label_79a884;
        case 0x79a894u: goto label_79a894;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8acu: goto label_79a8ac;
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a928u: goto label_79a928;
        default: break;
    }

    ctx->pc = 0x79a6e8u;

    // 0x79a6e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a6ec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a6f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a6f4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a6f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a6fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x79a6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a704: 0x2448add8  addiu       $t0, $v0, -0x5228
    ctx->pc = 0x79a704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946264));
    // 0x79a708: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a70c: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a70cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a710: 0x8046add8  lb          $a2, -0x5228($v0)
    ctx->pc = 0x79a710u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79ADD8u));
    // 0x79a714: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x79a714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a718: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a71c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79a71cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a72c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x79A72Cu;
    {
        const bool branch_taken_0x79a72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a72c) {
            ctx->pc = 0x79A768u;
            goto label_79a768;
        }
    }
    ctx->pc = 0x79A734u;
    // 0x79a734: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x79a734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a738: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a73c: 0x0  nop
    ctx->pc = 0x79a73cu;
    // NOP
label_79a740:
    // 0x79a740: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a744: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a74c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a750: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A754u;
    {
        const bool branch_taken_0x79a754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A754u;
        // 0x79a758: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a754) {
            ctx->pc = 0x79A768u;
            goto label_79a768;
        }
    }
    ctx->pc = 0x79A75Cu;
    // 0x79a75c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a760: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A760u;
    {
        const bool branch_taken_0x79a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a760) {
            ctx->pc = 0x79A764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A760u;
            // 0x79a764: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a740;
        }
    }
    ctx->pc = 0x79A768u;
label_79a768:
    // 0x79a768: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A768u;
    SET_GPR_U32(ctx, 31, 0x79A770u);
    ctx->pc = 0x79A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A768u;
    // 0x79a76c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A768u, 0x79A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a774: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x79a774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x79a778: 0x8202ade0  lb          $v0, -0x5220($s0)
    ctx->pc = 0x79a778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946272)));
    // 0x79a77c: 0x2603ade0  addiu       $v1, $s0, -0x5220
    ctx->pc = 0x79a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946272));
    // 0x79a780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a784: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A784u;
    {
        const bool branch_taken_0x79a784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A784u;
        // 0x79a788: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a784) {
            ctx->pc = 0x79A7C0u;
            goto label_79a7c0;
        }
    }
    ctx->pc = 0x79A78Cu;
    // 0x79a78c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a790: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a794: 0x0  nop
    ctx->pc = 0x79a794u;
    // NOP
label_79a798:
    // 0x79a798: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a79c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a7a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a7a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a7a8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a7ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A7ACu;
    {
        const bool branch_taken_0x79a7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7ACu;
        // 0x79a7b0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7ac) {
            ctx->pc = 0x79A7C0u;
            goto label_79a7c0;
        }
    }
    ctx->pc = 0x79A7B4u;
    // 0x79a7b4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a7b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A7B8u;
    {
        const bool branch_taken_0x79a7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a7b8) {
            ctx->pc = 0x79A7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7B8u;
            // 0x79a7bc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a798;
        }
    }
    ctx->pc = 0x79A7C0u;
label_79a7c0:
    // 0x79a7c0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A7C0u;
    SET_GPR_U32(ctx, 31, 0x79A7C8u);
    ctx->pc = 0x79A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7C0u;
    // 0x79a7c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A7C0u, 0x79A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
    ctx->pc = 0x79A7C8u;
    {
        const bool branch_taken_0x79a7c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c8) {
            ctx->pc = 0x79A928u;
            goto label_79a928;
        }
    }
    ctx->pc = 0x79A7D0u;
    // 0x79a7d0: 0x52000056  beql        $s0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x79A7D0u;
    {
        const bool branch_taken_0x79a7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a7d0) {
            ctx->pc = 0x79A7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7D0u;
            // 0x79a7d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A92Cu;
            goto label_79a92c;
        }
    }
    ctx->pc = 0x79A7D8u;
    // 0x79a7d8: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x79A7D8u;
    {
        const bool branch_taken_0x79a7d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7D8u;
        // 0x79a7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7d8) {
            ctx->pc = 0x79A88Cu;
            goto label_79a88c;
        }
    }
    ctx->pc = 0x79A7E0u;
    // 0x79a7e0: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A7E0u;
    SET_GPR_U32(ctx, 31, 0x79A7E8u);
    ctx->pc = 0x79A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E0u;
    // 0x79a7e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A7E0u, 0x79A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E8u;
label_79a7e8:
    // 0x79a7e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79a7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7f0: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A7F0u;
    SET_GPR_U32(ctx, 31, 0x79A7F8u);
    ctx->pc = 0x79A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7F0u;
    // 0x79a7f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A7F0u, 0x79A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F8u;
label_79a7f8:
    // 0x79a7f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a7fc: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A7FCu;
    SET_GPR_U32(ctx, 31, 0x79A804u);
    ctx->pc = 0x79A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7FCu;
    // 0x79a800: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A7FCu, 0x79A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A804u;
label_79a804:
    // 0x79a804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a808: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A808u;
    SET_GPR_U32(ctx, 31, 0x79A810u);
    ctx->pc = 0x79A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A808u;
    // 0x79a80c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A808u, 0x79A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A810u;
label_79a810:
    // 0x79a810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a818: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79A818u;
    SET_GPR_U32(ctx, 31, 0x79A820u);
    ctx->pc = 0x79A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A818u;
    // 0x79a81c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79A818u, 0x79A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A820u;
label_79a820:
    // 0x79a820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a824: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A824u;
    SET_GPR_U32(ctx, 31, 0x79A82Cu);
    ctx->pc = 0x79A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A824u;
    // 0x79a828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A824u, 0x79A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A82Cu;
label_79a82c:
    // 0x79a82c: 0x1640003f  bnez        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x79A82Cu;
    {
        const bool branch_taken_0x79a82c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A82Cu;
        // 0x79a830: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a82c) {
            ctx->pc = 0x79A92Cu;
            goto label_79a92c;
        }
    }
    ctx->pc = 0x79A834u;
    // 0x79a834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a838: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a83c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a840: 0x3c014214  lui         $at, 0x4214
    ctx->pc = 0x79a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16916 << 16));
    // 0x79a844: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a84c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a850: 0x3c0142c3  lui         $at, 0x42C3
    ctx->pc = 0x79a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17091 << 16));
    // 0x79a854: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a858: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a85c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a860: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79a860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79a864: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79a864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79a868: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79a868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a86c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x79a86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a870: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x79a870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a874: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a878: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79a878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a87c: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79A87Cu;
    SET_GPR_U32(ctx, 31, 0x79A884u);
    ctx->pc = 0x79A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A87Cu;
    // 0x79a880: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79A87Cu, 0x79A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A884u;
label_79a884:
    // 0x79a884: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x79A884u;
    {
        const bool branch_taken_0x79a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A884u;
        // 0x79a888: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a884) {
            ctx->pc = 0x79A92Cu;
            goto label_79a92c;
        }
    }
    ctx->pc = 0x79A88Cu;
label_79a88c:
    // 0x79a88c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A88Cu;
    SET_GPR_U32(ctx, 31, 0x79A894u);
    ctx->pc = 0x79A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A88Cu;
    // 0x79a890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A88Cu, 0x79A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A894u;
label_79a894:
    // 0x79a894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a898: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A898u;
    SET_GPR_U32(ctx, 31, 0x79A8A0u);
    ctx->pc = 0x79A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A898u;
    // 0x79a89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A898u, 0x79A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8A0u;
label_79a8a0:
    // 0x79a8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8a4: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A8A4u;
    SET_GPR_U32(ctx, 31, 0x79A8ACu);
    ctx->pc = 0x79A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8A4u;
    // 0x79a8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A8A4u, 0x79A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8ACu;
label_79a8ac:
    // 0x79a8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8b0: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A8B0u;
    SET_GPR_U32(ctx, 31, 0x79A8B8u);
    ctx->pc = 0x79A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8B0u;
    // 0x79a8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A8B0u, 0x79A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8B8u;
label_79a8b8:
    // 0x79a8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8bc: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79A8BCu;
    SET_GPR_U32(ctx, 31, 0x79A8C4u);
    ctx->pc = 0x79A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8BCu;
    // 0x79a8c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79A8BCu, 0x79A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8C4u;
label_79a8c4:
    // 0x79a8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8c8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79A8C8u;
    SET_GPR_U32(ctx, 31, 0x79A8D0u);
    ctx->pc = 0x79A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8C8u;
    // 0x79a8cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79A8C8u, 0x79A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D0u;
label_79a8d0:
    // 0x79a8d0: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x79A8D0u;
    {
        const bool branch_taken_0x79a8d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D0u;
        // 0x79a8d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8d0) {
            ctx->pc = 0x79A92Cu;
            goto label_79a92c;
        }
    }
    ctx->pc = 0x79A8D8u;
    // 0x79a8d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a8dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a8e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a8e4: 0x3c014214  lui         $at, 0x4214
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16916 << 16));
    // 0x79a8e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a8e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a8ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a8f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a8f4: 0x3c0142c3  lui         $at, 0x42C3
    ctx->pc = 0x79a8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17091 << 16));
    // 0x79a8f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a8f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a8fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a900: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a904: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79a908: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79a90c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79a90cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a910: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x79a910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a914: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x79a914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a91c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79a91cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a920: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79A920u;
    SET_GPR_U32(ctx, 31, 0x79A928u);
    ctx->pc = 0x79A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A920u;
    // 0x79a924: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79A920u, 0x79A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A928u;
label_79a928:
    // 0x79a928: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a92c:
    // 0x79a92c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a930: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a934: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a938: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79a938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a93c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a940: 0x3e00008  jr          $ra
    ctx->pc = 0x79A940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A940u;
        // 0x79a944: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A948u;
}
} // namespace gh_r300
