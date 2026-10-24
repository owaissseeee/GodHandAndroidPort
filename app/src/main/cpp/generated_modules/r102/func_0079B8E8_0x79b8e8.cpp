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
// Function: func_0079B8E8
// Address: 0x79b8e8 - 0x79ba20
void func_0079B8E8_0x79b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B8E8_0x79b8e8");
#endif

    switch (ctx->pc) {
        case 0x79b928u: goto label_79b928;
        case 0x79b944u: goto label_79b944;
        case 0x79b95cu: goto label_79b95c;
        case 0x79b988u: goto label_79b988;
        case 0x79b998u: goto label_79b998;
        case 0x79b9a8u: goto label_79b9a8;
        case 0x79b9e8u: goto label_79b9e8;
        case 0x79b9f8u: goto label_79b9f8;
        default: break;
    }

    ctx->pc = 0x79b8e8u;

    // 0x79b8e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79b8ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79b8f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79b8f4: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x79b8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x79b8f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79b8fc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b900: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79b904: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x79b904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b908: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79b90c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x79b90cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x79b910: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79b910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79b914: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x79b914u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x79b918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b91c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x79b91cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b920: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x79b920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79b924: 0x0  nop
    ctx->pc = 0x79b924u;
    // NOP
label_79b928:
    // 0x79b928: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b92c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x79b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x79b930: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B930u;
    {
        const bool branch_taken_0x79b930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B930u;
        // 0x79b934: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b930) {
            ctx->pc = 0x79B94Cu;
            goto label_79b94c;
        }
    }
    ctx->pc = 0x79B938u;
    // 0x79b938: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x79b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79b93c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B93Cu;
    SET_GPR_U32(ctx, 31, 0x79B944u);
    ctx->pc = 0x79B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B93Cu;
    // 0x79b940: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B93Cu, 0x79B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B944u;
label_79b944:
    // 0x79b944: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B944u;
    {
        const bool branch_taken_0x79b944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x79B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B944u;
        // 0x79b948: 0x8ea48658  lw          $a0, -0x79A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b944) {
            ctx->pc = 0x79B964u;
            goto label_79b964;
        }
    }
    ctx->pc = 0x79B94Cu;
label_79b94c:
    // 0x79b94c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b954: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B954u;
    SET_GPR_U32(ctx, 31, 0x79B95Cu);
    ctx->pc = 0x79B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B954u;
    // 0x79b958: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B954u, 0x79B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B95Cu;
label_79b95c:
    // 0x79b95c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x79B95Cu;
    {
        const bool branch_taken_0x79b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B95Cu;
        // 0x79b960: 0x8e038658  lw          $v1, -0x79A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b95c) {
            ctx->pc = 0x79B928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b928;
        }
    }
    ctx->pc = 0x79B964u;
label_79b964:
    // 0x79b964: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x79b964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x79b968: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b968u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b96c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x79b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x79b970: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79b974: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79b978: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79b978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79b97c: 0x8e03c000  lw          $v1, -0x4000($s0)
    ctx->pc = 0x79b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79C000u));
    // 0x79b980: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x79B980u;
    SET_GPR_U32(ctx, 31, 0x79B988u);
    ctx->pc = 0x79B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B980u;
    // 0x79b984: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x79B980u, 0x79B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B988u;
label_79b988:
    // 0x79b988: 0x8e03c000  lw          $v1, -0x4000($s0)
    ctx->pc = 0x79b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950912)));
    // 0x79b98c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x79b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x79b990: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x79B990u;
    SET_GPR_U32(ctx, 31, 0x79B998u);
    ctx->pc = 0x79B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B990u;
    // 0x79b994: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x79B990u, 0x79B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B998u;
label_79b998:
    // 0x79b998: 0x8e03c000  lw          $v1, -0x4000($s0)
    ctx->pc = 0x79b998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950912)));
    // 0x79b99c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x79b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x79b9a0: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x79B9A0u;
    SET_GPR_U32(ctx, 31, 0x79B9A8u);
    ctx->pc = 0x79B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9A0u;
    // 0x79b9a4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x79B9A0u, 0x79B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9A8u;
label_79b9a8:
    // 0x79b9a8: 0x8e04c000  lw          $a0, -0x4000($s0)
    ctx->pc = 0x79b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950912)));
    // 0x79b9ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b9b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b9b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b9b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x79b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x79b9bc: 0x8e03c000  lw          $v1, -0x4000($s0)
    ctx->pc = 0x79b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950912)));
    // 0x79b9c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b9c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b9c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79b9cc: 0x8e04c000  lw          $a0, -0x4000($s0)
    ctx->pc = 0x79b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950912)));
    // 0x79b9d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b9d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b9d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x79b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x79b9dc: 0x8e03c000  lw          $v1, -0x4000($s0)
    ctx->pc = 0x79b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950912)));
    // 0x79b9e0: 0xc069fc8  jal         func_1A7F20
    ctx->pc = 0x79B9E0u;
    SET_GPR_U32(ctx, 31, 0x79B9E8u);
    ctx->pc = 0x79B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9E0u;
    // 0x79b9e4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F20u, 0x79B9E0u, 0x79B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9E8u;
label_79b9e8:
    // 0x79b9e8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b9ec: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b9f0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B9F0u;
    SET_GPR_U32(ctx, 31, 0x79B9F8u);
    ctx->pc = 0x79B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9F0u;
    // 0x79b9f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B9F0u, 0x79B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9F8u;
label_79b9f8:
    // 0x79b9f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79b9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b9fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79b9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ba00: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79ba00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ba04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79ba04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ba08: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79ba08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ba0c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79ba0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ba10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ba14: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA14u;
        // 0x79ba18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA1Cu;
    // 0x79ba1c: 0x0  nop
    ctx->pc = 0x79ba1cu;
    // NOP
    ctx->pc = 0x79ba20u;
}
} // namespace gh_r102
