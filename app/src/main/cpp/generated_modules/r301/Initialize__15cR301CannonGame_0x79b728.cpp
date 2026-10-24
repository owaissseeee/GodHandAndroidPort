#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Initialize__15cR301CannonGame
// Address: 0x79b728 - 0x79baf0
void Initialize__15cR301CannonGame_0x79b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15cR301CannonGame_0x79b728");
#endif

    switch (ctx->pc) {
        case 0x79b7a8u: goto label_79b7a8;
        case 0x79b7dcu: goto label_79b7dc;
        case 0x79b810u: goto label_79b810;
        case 0x79b840u: goto label_79b840;
        case 0x79b868u: goto label_79b868;
        case 0x79b898u: goto label_79b898;
        case 0x79b8c0u: goto label_79b8c0;
        case 0x79b8f0u: goto label_79b8f0;
        case 0x79b920u: goto label_79b920;
        case 0x79b954u: goto label_79b954;
        case 0x79b974u: goto label_79b974;
        case 0x79b980u: goto label_79b980;
        case 0x79b990u: goto label_79b990;
        case 0x79b9a0u: goto label_79b9a0;
        default: break;
    }

    ctx->pc = 0x79b728u;

    // 0x79b728: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x79b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x79b72c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b730: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x79b734: 0x2448de70  addiu       $t0, $v0, -0x2190
    ctx->pc = 0x79b734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958704));
    // 0x79b738: 0x8045de70  lb          $a1, -0x2190($v0)
    ctx->pc = 0x79b738u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79DE70u));
    // 0x79b73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79b73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b740: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79b740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79b744: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79b744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79b748: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x79b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x79b74c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x79b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b750: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x79b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x79b754: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b758: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x79b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x79b75c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x79b75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b760: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x79b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x79b764: 0x24694c38  addiu       $t1, $v1, 0x4C38
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x79b768: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x79b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x79b76c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b770: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x79b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x79b774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b778: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x79b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x79b77c: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79b77cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
    // 0x79b780: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79b784: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79b784u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x79b788: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79b788u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x79b78c: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x79b78cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b790: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x79b790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x79b794: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x79B794u;
    {
        const bool branch_taken_0x79b794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B794u;
        // 0x79b798: 0xafa40044  sw          $a0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b794) {
            ctx->pc = 0x79B7D0u;
            goto label_79b7d0;
        }
    }
    ctx->pc = 0x79B79Cu;
    // 0x79b79c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79b79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7a0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79b7a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79b7a4: 0x0  nop
    ctx->pc = 0x79b7a4u;
    // NOP
label_79b7a8:
    // 0x79b7a8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79b7ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b7b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79b7b4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b7b8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79b7b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b7bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B7BCu;
    {
        const bool branch_taken_0x79b7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7BCu;
        // 0x79b7c0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7bc) {
            ctx->pc = 0x79B7D0u;
            goto label_79b7d0;
        }
    }
    ctx->pc = 0x79B7C4u;
    // 0x79b7c4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79b7c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79b7c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B7C8u;
    {
        const bool branch_taken_0x79b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b7c8) {
            ctx->pc = 0x79B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B7C8u;
            // 0x79b7cc: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b7a8;
        }
    }
    ctx->pc = 0x79B7D0u;
label_79b7d0:
    // 0x79b7d0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x79b7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7d4: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79B7D4u;
    SET_GPR_U32(ctx, 31, 0x79B7DCu);
    ctx->pc = 0x79B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7D4u;
    // 0x79b7d8: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79B7D4u, 0x79B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7DCu;
label_79b7dc:
    // 0x79b7dc: 0x263200b0  addiu       $s2, $s1, 0xB0
    ctx->pc = 0x79b7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x79b7e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x79b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x79b7e4: 0x2683de78  addiu       $v1, $s4, -0x2188
    ctx->pc = 0x79b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958712));
    // 0x79b7e8: 0x26084c38  addiu       $t0, $s0, 0x4C38
    ctx->pc = 0x79b7e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 19512));
    // 0x79b7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7f0: 0x8282de78  lb          $v0, -0x2188($s4)
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294958712)));
    // 0x79b7f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7f8: 0x263300c0  addiu       $s3, $s1, 0xC0
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x79b7fc: 0x263400d0  addiu       $s4, $s1, 0xD0
    ctx->pc = 0x79b7fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x79b800: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79B800u;
    {
        const bool branch_taken_0x79b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B800u;
        // 0x79b804: 0x263500e0  addiu       $s5, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b800) {
            ctx->pc = 0x79B838u;
            goto label_79b838;
        }
    }
    ctx->pc = 0x79B808u;
    // 0x79b808: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b80c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b80cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b810:
    // 0x79b810: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b814: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b818: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b81c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b820: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b824: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B824u;
    {
        const bool branch_taken_0x79b824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B824u;
        // 0x79b828: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b824) {
            ctx->pc = 0x79B838u;
            goto label_79b838;
        }
    }
    ctx->pc = 0x79B82Cu;
    // 0x79b82c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b82cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b830: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B830u;
    {
        const bool branch_taken_0x79b830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b830) {
            ctx->pc = 0x79B834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B830u;
            // 0x79b834: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b810;
        }
    }
    ctx->pc = 0x79B838u;
label_79b838:
    // 0x79b838: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79B838u;
    SET_GPR_U32(ctx, 31, 0x79B840u);
    ctx->pc = 0x79B83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B838u;
    // 0x79b83c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79B838u, 0x79B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B840u;
label_79b840:
    // 0x79b840: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x79b840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x79b844: 0x26084c38  addiu       $t0, $s0, 0x4C38
    ctx->pc = 0x79b844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 19512));
    // 0x79b848: 0x26c3de80  addiu       $v1, $s6, -0x2180
    ctx->pc = 0x79b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958720));
    // 0x79b84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b850: 0x82c2de80  lb          $v0, -0x2180($s6)
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294958720)));
    // 0x79b854: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B854u;
    {
        const bool branch_taken_0x79b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B854u;
        // 0x79b858: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b854) {
            ctx->pc = 0x79B890u;
            goto label_79b890;
        }
    }
    ctx->pc = 0x79B85Cu;
    // 0x79b85c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b860: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b864: 0x0  nop
    ctx->pc = 0x79b864u;
    // NOP
label_79b868:
    // 0x79b868: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b86c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b870: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b874: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b878: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b87c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B87Cu;
    {
        const bool branch_taken_0x79b87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B87Cu;
        // 0x79b880: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b87c) {
            ctx->pc = 0x79B890u;
            goto label_79b890;
        }
    }
    ctx->pc = 0x79B884u;
    // 0x79b884: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b888: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B888u;
    {
        const bool branch_taken_0x79b888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b888) {
            ctx->pc = 0x79B88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B888u;
            // 0x79b88c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b868;
        }
    }
    ctx->pc = 0x79B890u;
label_79b890:
    // 0x79b890: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79B890u;
    SET_GPR_U32(ctx, 31, 0x79B898u);
    ctx->pc = 0x79B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B890u;
    // 0x79b894: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79B890u, 0x79B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B898u;
label_79b898:
    // 0x79b898: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x79b898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x79b89c: 0x26084c38  addiu       $t0, $s0, 0x4C38
    ctx->pc = 0x79b89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 19512));
    // 0x79b8a0: 0x26e3de90  addiu       $v1, $s7, -0x2170
    ctx->pc = 0x79b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958736));
    // 0x79b8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8a8: 0x82e2de90  lb          $v0, -0x2170($s7)
    ctx->pc = 0x79b8a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294958736)));
    // 0x79b8ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B8ACu;
    {
        const bool branch_taken_0x79b8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8ACu;
        // 0x79b8b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8ac) {
            ctx->pc = 0x79B8E8u;
            goto label_79b8e8;
        }
    }
    ctx->pc = 0x79B8B4u;
    // 0x79b8b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b8b8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b8b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b8bc: 0x0  nop
    ctx->pc = 0x79b8bcu;
    // NOP
label_79b8c0:
    // 0x79b8c0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b8c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b8c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b8cc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b8d0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b8d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B8D4u;
    {
        const bool branch_taken_0x79b8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8D4u;
        // 0x79b8d8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8d4) {
            ctx->pc = 0x79B8E8u;
            goto label_79b8e8;
        }
    }
    ctx->pc = 0x79B8DCu;
    // 0x79b8dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b8dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b8e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B8E0u;
    {
        const bool branch_taken_0x79b8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b8e0) {
            ctx->pc = 0x79B8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B8E0u;
            // 0x79b8e4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b8c0;
        }
    }
    ctx->pc = 0x79B8E8u;
label_79b8e8:
    // 0x79b8e8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79B8E8u;
    SET_GPR_U32(ctx, 31, 0x79B8F0u);
    ctx->pc = 0x79B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8E8u;
    // 0x79b8ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79B8E8u, 0x79B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8F0u;
label_79b8f0:
    // 0x79b8f0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x79b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x79b8f4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79b8f8: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79b8fc: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79b8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79b900: 0x8082de98  lb          $v0, -0x2168($a0)
    ctx->pc = 0x79b900u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79DE98u));
    // 0x79b904: 0x2483de98  addiu       $v1, $a0, -0x2168
    ctx->pc = 0x79b904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958744));
    // 0x79b908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b90c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B90Cu;
    {
        const bool branch_taken_0x79b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B90Cu;
        // 0x79b910: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b90c) {
            ctx->pc = 0x79B948u;
            goto label_79b948;
        }
    }
    ctx->pc = 0x79B914u;
    // 0x79b914: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b918: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b91c: 0x0  nop
    ctx->pc = 0x79b91cu;
    // NOP
label_79b920:
    // 0x79b920: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b924: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b928: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b92c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b930: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b934: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B934u;
    {
        const bool branch_taken_0x79b934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B934u;
        // 0x79b938: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b934) {
            ctx->pc = 0x79B948u;
            goto label_79b948;
        }
    }
    ctx->pc = 0x79B93Cu;
    // 0x79b93c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b93cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b940: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B940u;
    {
        const bool branch_taken_0x79b940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b940) {
            ctx->pc = 0x79B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B940u;
            // 0x79b944: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b920;
        }
    }
    ctx->pc = 0x79B948u;
label_79b948:
    // 0x79b948: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x79b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b94c: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B94Cu;
    SET_GPR_U32(ctx, 31, 0x79B954u);
    ctx->pc = 0x79B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B94Cu;
    // 0x79b950: 0x3c10005d  lui         $s0, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B94Cu, 0x79B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B954u;
label_79b954:
    // 0x79b954: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x79b954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x79b958: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x79b958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x79b95c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b960: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x79b960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x79b964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b968: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x79b968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x79b96c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79B96Cu;
    SET_GPR_U32(ctx, 31, 0x79B974u);
    ctx->pc = 0x79B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B96Cu;
    // 0x79b970: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79B96Cu, 0x79B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B974u;
label_79b974:
    // 0x79b974: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79b974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b978: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79B978u;
    SET_GPR_U32(ctx, 31, 0x79B980u);
    ctx->pc = 0x79B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B978u;
    // 0x79b97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79B978u, 0x79B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B980u;
label_79b980:
    // 0x79b980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b988: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79B988u;
    SET_GPR_U32(ctx, 31, 0x79B990u);
    ctx->pc = 0x79B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B988u;
    // 0x79b98c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79B988u, 0x79B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B990u;
label_79b990:
    // 0x79b990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b994: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b998: 0xc04cccc  jal         func_133330
    ctx->pc = 0x79B998u;
    SET_GPR_U32(ctx, 31, 0x79B9A0u);
    ctx->pc = 0x79B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B998u;
    // 0x79b99c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x79B998u, 0x79B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9A0u;
label_79b9a0:
    // 0x79b9a0: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x79b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x79b9a4: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x79b9a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b9ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b9b0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x79b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b9b4: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x79b9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x79b9b8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79b9b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x79b9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b9c0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x79b9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b9c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79b9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b9c8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x79b9c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79b9cc: 0x3c013e8d  lui         $at, 0x3E8D
    ctx->pc = 0x79b9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16013 << 16));
    // 0x79b9d0: 0x3421a741  ori         $at, $at, 0xA741
    ctx->pc = 0x79b9d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42817);
    // 0x79b9d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b9d8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x79b9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x79b9dc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x79b9dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x79b9e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b9e4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x79b9e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x79b9e8: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x79b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x79b9ec: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x79b9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x79b9f0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79b9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79b9f4: 0x3c013e88  lui         $at, 0x3E88
    ctx->pc = 0x79b9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16008 << 16));
    // 0x79b9f8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x79b9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x79b9fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79b9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79ba00: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x79ba00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ba04: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79ba04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79ba08: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x79ba0c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x79ba0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79ba10: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x79ba10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79ba14: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x79ba14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79ba18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x79ba1c: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x79ba1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79ba20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x79ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x79ba24: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x79ba24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x79ba28: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x79ba28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x79ba2c: 0x125d0005  beq         $s2, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA2Cu;
    {
        const bool branch_taken_0x79ba2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 29));
        ctx->pc = 0x79BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA2Cu;
        // 0x79ba30: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba2c) {
            ctx->pc = 0x79BA44u;
            goto label_79ba44;
        }
    }
    ctx->pc = 0x79BA34u;
    // 0x79ba34: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x79ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ba38: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x79ba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x79ba3c: 0xe6440008  swc1        $f4, 0x8($s2)
    ctx->pc = 0x79ba3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x79ba40: 0xe6450004  swc1        $f5, 0x4($s2)
    ctx->pc = 0x79ba40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_79ba44:
    // 0x79ba44: 0x127e0006  beq         $s3, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BA44u;
    {
        const bool branch_taken_0x79ba44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        ctx->pc = 0x79BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA44u;
        // 0x79ba48: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba44) {
            ctx->pc = 0x79BA60u;
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79BA4Cu;
    // 0x79ba4c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x79ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79ba50: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x79ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ba54: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x79ba54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x79ba58: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x79ba58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x79ba5c: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x79ba5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_79ba60:
    // 0x79ba60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x79ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ba64: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BA64u;
    {
        const bool branch_taken_0x79ba64 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x79BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA64u;
        // 0x79ba68: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba64) {
            ctx->pc = 0x79BA80u;
            goto label_79ba80;
        }
    }
    ctx->pc = 0x79BA6Cu;
    // 0x79ba6c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x79ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79ba70: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x79ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ba74: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x79ba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x79ba78: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x79ba78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x79ba7c: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x79ba7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_79ba80:
    // 0x79ba80: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x79ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x79ba84: 0x12a40006  beq         $s5, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BA84u;
    {
        const bool branch_taken_0x79ba84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x79BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA84u;
        // 0x79ba88: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba84) {
            ctx->pc = 0x79BAA0u;
            goto label_79baa0;
        }
    }
    ctx->pc = 0x79BA8Cu;
    // 0x79ba8c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x79ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79ba90: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x79ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ba94: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x79ba94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x79ba98: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x79ba98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x79ba9c: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x79ba9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_79baa0:
    // 0x79baa0: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x79baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x79baa4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x79baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x79baa8: 0x3c01bb6b  lui         $at, 0xBB6B
    ctx->pc = 0x79baa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47979 << 16));
    // 0x79baac: 0x3421edfb  ori         $at, $at, 0xEDFB
    ctx->pc = 0x79baacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60923);
    // 0x79bab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bab4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79bab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79bab8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x79bab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79babc: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x79babcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x79bac0: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x79bac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x79bac4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79bac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79bac8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x79bac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79bacc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79baccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79bad0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x79bad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79bad4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x79bad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79bad8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x79bad8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79badc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x79badcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79bae0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x79bae0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79bae4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79bae8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAE8u;
        // 0x79baec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAF0u;
}
} // namespace gh_r301
