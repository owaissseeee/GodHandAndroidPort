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
// Function: func_0079A8A0
// Address: 0x79a8a0 - 0x79aa88
void func_0079A8A0_0x79a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A8A0_0x79a8a0");
#endif

    switch (ctx->pc) {
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a928u: goto label_79a928;
        case 0x79a950u: goto label_79a950;
        case 0x79a980u: goto label_79a980;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa68u: goto label_79aa68;
        default: break;
    }

    ctx->pc = 0x79a8a0u;

    // 0x79a8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a8a4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a8a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a8ac: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a8b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a8b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x79a8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79a8bc: 0x2448de18  addiu       $t0, $v0, -0x21E8
    ctx->pc = 0x79a8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958616));
    // 0x79a8c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79a8c4: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a8c8: 0x8046de18  lb          $a2, -0x21E8($v0)
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x79DE18u));
    // 0x79a8cc: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x79a8ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a8d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79a8d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a8dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x79A8E4u;
    {
        const bool branch_taken_0x79a8e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E4u;
        // 0x79a8e8: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8e4) {
            ctx->pc = 0x79A920u;
            goto label_79a920;
        }
    }
    ctx->pc = 0x79A8ECu;
    // 0x79a8ec: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x79a8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8f0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a8f4: 0x0  nop
    ctx->pc = 0x79a8f4u;
    // NOP
label_79a8f8:
    // 0x79a8f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a8fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a900: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a904: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a908: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a90c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A90Cu;
    {
        const bool branch_taken_0x79a90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A90Cu;
        // 0x79a910: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a90c) {
            ctx->pc = 0x79A920u;
            goto label_79a920;
        }
    }
    ctx->pc = 0x79A914u;
    // 0x79a914: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a918: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A918u;
    {
        const bool branch_taken_0x79a918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a918) {
            ctx->pc = 0x79A91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A918u;
            // 0x79a91c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8f8;
        }
    }
    ctx->pc = 0x79A920u;
label_79a920:
    // 0x79a920: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A920u;
    SET_GPR_U32(ctx, 31, 0x79A928u);
    ctx->pc = 0x79A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A920u;
    // 0x79a924: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A920u, 0x79A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A928u;
label_79a928:
    // 0x79a928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a92c: 0x26884c58  addiu       $t0, $s4, 0x4C58
    ctx->pc = 0x79a92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19544));
    // 0x79a930: 0x8202de20  lb          $v0, -0x21E0($s0)
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294958624)));
    // 0x79a934: 0x2603de20  addiu       $v1, $s0, -0x21E0
    ctx->pc = 0x79a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958624));
    // 0x79a938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a93c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A93Cu;
    {
        const bool branch_taken_0x79a93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A93Cu;
        // 0x79a940: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a93c) {
            ctx->pc = 0x79A978u;
            goto label_79a978;
        }
    }
    ctx->pc = 0x79A944u;
    // 0x79a944: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a948: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a94c: 0x0  nop
    ctx->pc = 0x79a94cu;
    // NOP
label_79a950:
    // 0x79a950: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a954: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a958: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a95c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a960: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a964: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A964u;
    {
        const bool branch_taken_0x79a964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a964) {
            ctx->pc = 0x79A978u;
            goto label_79a978;
        }
    }
    ctx->pc = 0x79A96Cu;
    // 0x79a96c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a970: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A970u;
    {
        const bool branch_taken_0x79a970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a970) {
            ctx->pc = 0x79A974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A970u;
            // 0x79a974: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a950;
        }
    }
    ctx->pc = 0x79A978u;
label_79a978:
    // 0x79a978: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A978u;
    SET_GPR_U32(ctx, 31, 0x79A980u);
    ctx->pc = 0x79A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A978u;
    // 0x79a97c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A978u, 0x79A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A980u;
label_79a980:
    // 0x79a980: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x79A980u;
    {
        const bool branch_taken_0x79a980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A980u;
        // 0x79a984: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a980) {
            ctx->pc = 0x79AA68u;
            goto label_79aa68;
        }
    }
    ctx->pc = 0x79A988u;
    // 0x79a988: 0x52000038  beql        $s0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x79A988u;
    {
        const bool branch_taken_0x79a988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a988) {
            ctx->pc = 0x79A98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A988u;
            // 0x79a98c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA6Cu;
            goto label_79aa6c;
        }
    }
    ctx->pc = 0x79A990u;
    // 0x79a990: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A990u;
    {
        const bool branch_taken_0x79a990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a990) {
            ctx->pc = 0x79A9F8u;
            goto label_79a9f8;
        }
    }
    ctx->pc = 0x79A998u;
    // 0x79a998: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A998u;
    {
        const bool branch_taken_0x79a998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a998) {
            ctx->pc = 0x79A9E0u;
            goto label_79a9e0;
        }
    }
    ctx->pc = 0x79A9A0u;
    // 0x79a9a0: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x79A9A0u;
    SET_GPR_U32(ctx, 31, 0x79A9A8u);
    ctx->pc = 0x79A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9A0u;
    // 0x79a9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x79A9A0u, 0x79A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A8u;
label_79a9a8:
    // 0x79a9a8: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x79A9A8u;
    SET_GPR_U32(ctx, 31, 0x79A9B0u);
    ctx->pc = 0x79A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9A8u;
    // 0x79a9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x79A9A8u, 0x79A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B0u;
label_79a9b0:
    // 0x79a9b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a9b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79a9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a9bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a9c0: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x79a9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x79a9c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a9c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a9ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9d0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79A9D0u;
    SET_GPR_U32(ctx, 31, 0x79A9D8u);
    ctx->pc = 0x79A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D0u;
    // 0x79a9d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79A9D0u, 0x79A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D8u;
label_79a9d8:
    // 0x79a9d8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x79A9D8u;
    {
        const bool branch_taken_0x79a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D8u;
        // 0x79a9dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9d8) {
            ctx->pc = 0x79AA6Cu;
            goto label_79aa6c;
        }
    }
    ctx->pc = 0x79A9E0u;
label_79a9e0:
    // 0x79a9e0: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x79A9E0u;
    SET_GPR_U32(ctx, 31, 0x79A9E8u);
    ctx->pc = 0x79A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9E0u;
    // 0x79a9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x79A9E0u, 0x79A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9E8u;
label_79a9e8:
    // 0x79a9e8: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x79A9E8u;
    SET_GPR_U32(ctx, 31, 0x79A9F0u);
    ctx->pc = 0x79A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9E8u;
    // 0x79a9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x79A9E8u, 0x79A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9F0u;
label_79a9f0:
    // 0x79a9f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x79A9F0u;
    {
        const bool branch_taken_0x79a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F0u;
        // 0x79a9f4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f0) {
            ctx->pc = 0x79AA6Cu;
            goto label_79aa6c;
        }
    }
    ctx->pc = 0x79A9F8u;
label_79a9f8:
    // 0x79a9f8: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A9F8u;
    {
        const bool branch_taken_0x79a9f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a9f8) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79AA00u;
    // 0x79aa00: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x79AA00u;
    SET_GPR_U32(ctx, 31, 0x79AA08u);
    ctx->pc = 0x79AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA00u;
    // 0x79aa04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x79AA00u, 0x79AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA08u;
label_79aa08:
    // 0x79aa08: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x79AA08u;
    SET_GPR_U32(ctx, 31, 0x79AA10u);
    ctx->pc = 0x79AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA08u;
    // 0x79aa0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x79AA08u, 0x79AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA10u;
label_79aa10:
    // 0x79aa10: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79aa14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aa18: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79aa1c: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x79aa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x79aa20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79aa20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79aa24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79aa28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79aa2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa30: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79AA30u;
    SET_GPR_U32(ctx, 31, 0x79AA38u);
    ctx->pc = 0x79AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA30u;
    // 0x79aa34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79AA30u, 0x79AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA38u;
label_79aa38:
    // 0x79aa38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79aa3c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa40: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa44: 0x24a5aa88  addiu       $a1, $a1, -0x5578
    ctx->pc = 0x79aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945416));
    // 0x79aa48: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79AA48u;
    SET_GPR_U32(ctx, 31, 0x79AA50u);
    ctx->pc = 0x79AA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA48u;
    // 0x79aa4c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AA48u, 0x79AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA50u;
label_79aa50:
    // 0x79aa50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79AA50u;
    {
        const bool branch_taken_0x79aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA50u;
        // 0x79aa54: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa50) {
            ctx->pc = 0x79AA6Cu;
            goto label_79aa6c;
        }
    }
    ctx->pc = 0x79AA58u;
label_79aa58:
    // 0x79aa58: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x79AA58u;
    SET_GPR_U32(ctx, 31, 0x79AA60u);
    ctx->pc = 0x79AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA58u;
    // 0x79aa5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x79AA58u, 0x79AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA60u;
label_79aa60:
    // 0x79aa60: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x79AA60u;
    SET_GPR_U32(ctx, 31, 0x79AA68u);
    ctx->pc = 0x79AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA60u;
    // 0x79aa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x79AA60u, 0x79AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA68u;
label_79aa68:
    // 0x79aa68: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79aa68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79aa6c:
    // 0x79aa6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79aa6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79aa70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79aa70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79aa74: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79aa74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79aa78: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79aa78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aa7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aa80: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA80u;
        // 0x79aa84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA88u;
}
} // namespace gh_r301
