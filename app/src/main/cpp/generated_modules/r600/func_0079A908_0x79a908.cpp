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
// Function: func_0079A908
// Address: 0x79a908 - 0x79aad0
void func_0079A908_0x79a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A908_0x79a908");
#endif

    switch (ctx->pc) {
        case 0x79a958u: goto label_79a958;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa64u: goto label_79aa64;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa7cu: goto label_79aa7c;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aaa8u: goto label_79aaa8;
        case 0x79aab4u: goto label_79aab4;
        default: break;
    }

    ctx->pc = 0x79a908u;

    // 0x79a908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a90c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a910: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a914: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a91c: 0x2448b7f0  addiu       $t0, $v0, -0x4810
    ctx->pc = 0x79a91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948848));
    // 0x79a920: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a924: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a928: 0x8045b7f0  lb          $a1, -0x4810($v0)
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79B7F0u));
    // 0x79a92c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x79a92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a930: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79a934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a93c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a93cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a944: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A944u;
    {
        const bool branch_taken_0x79a944 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A944u;
        // 0x79a948: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a944) {
            ctx->pc = 0x79A980u;
            goto label_79a980;
        }
    }
    ctx->pc = 0x79A94Cu;
    // 0x79a94c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79a94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a950: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a954: 0x0  nop
    ctx->pc = 0x79a954u;
    // NOP
label_79a958:
    // 0x79a958: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79a95c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a960: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a964: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a968: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79a968u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a96c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A96Cu;
    {
        const bool branch_taken_0x79a96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A96Cu;
        // 0x79a970: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a96c) {
            ctx->pc = 0x79A980u;
            goto label_79a980;
        }
    }
    ctx->pc = 0x79A974u;
    // 0x79a974: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a978: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A978u;
    {
        const bool branch_taken_0x79a978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a978) {
            ctx->pc = 0x79A97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A978u;
            // 0x79a97c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a958;
        }
    }
    ctx->pc = 0x79A980u;
label_79a980:
    // 0x79a980: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x79a980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a984: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A984u;
    SET_GPR_U32(ctx, 31, 0x79A98Cu);
    ctx->pc = 0x79A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A984u;
    // 0x79a988: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A984u, 0x79A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A98Cu;
label_79a98c:
    // 0x79a98c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a990: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x79a990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x79a994: 0x8202b7f8  lb          $v0, -0x4808($s0)
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294948856)));
    // 0x79a998: 0x2603b7f8  addiu       $v1, $s0, -0x4808
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948856));
    // 0x79a99c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A9A0u;
    {
        const bool branch_taken_0x79a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A0u;
        // 0x79a9a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9a0) {
            ctx->pc = 0x79A9D8u;
            goto label_79a9d8;
        }
    }
    ctx->pc = 0x79A9A8u;
    // 0x79a9a8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a9acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a9b0:
    // 0x79a9b0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a9b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a9b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a9bc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a9c0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a9c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a9c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A9C4u;
    {
        const bool branch_taken_0x79a9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C4u;
        // 0x79a9c8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c4) {
            ctx->pc = 0x79A9D8u;
            goto label_79a9d8;
        }
    }
    ctx->pc = 0x79A9CCu;
    // 0x79a9cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a9d0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A9D0u;
    {
        const bool branch_taken_0x79a9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a9d0) {
            ctx->pc = 0x79A9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9D0u;
            // 0x79a9d4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9b0;
        }
    }
    ctx->pc = 0x79A9D8u;
label_79a9d8:
    // 0x79a9d8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A9D8u;
    SET_GPR_U32(ctx, 31, 0x79A9E0u);
    ctx->pc = 0x79A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D8u;
    // 0x79a9dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A9D8u, 0x79A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9E0u;
label_79a9e0:
    // 0x79a9e0: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x79A9E0u;
    {
        const bool branch_taken_0x79a9e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E0u;
        // 0x79a9e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9e0) {
            ctx->pc = 0x79AAB4u;
            goto label_79aab4;
        }
    }
    ctx->pc = 0x79A9E8u;
    // 0x79a9e8: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x79A9E8u;
    {
        const bool branch_taken_0x79a9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E8u;
        // 0x79a9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9e8) {
            ctx->pc = 0x79AAB4u;
            goto label_79aab4;
        }
    }
    ctx->pc = 0x79A9F0u;
    // 0x79a9f0: 0x12420024  beq         $s2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x79A9F0u;
    {
        const bool branch_taken_0x79a9f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F0u;
        // 0x79a9f4: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f0) {
            ctx->pc = 0x79AA84u;
            goto label_79aa84;
        }
    }
    ctx->pc = 0x79A9F8u;
    // 0x79a9f8: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x79A9F8u;
    {
        const bool branch_taken_0x79a9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a9f8) {
            ctx->pc = 0x79A9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9F8u;
            // 0x79a9fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AAB8u;
            goto label_79aab8;
        }
    }
    ctx->pc = 0x79AA00u;
    // 0x79aa00: 0x5640002d  bnel        $s2, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x79AA00u;
    {
        const bool branch_taken_0x79aa00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aa00) {
            ctx->pc = 0x79AA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA00u;
            // 0x79aa04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AAB8u;
            goto label_79aab8;
        }
    }
    ctx->pc = 0x79AA08u;
    // 0x79aa08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79aa0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aa10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79aa10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aa14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79aa14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79aa18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa1c: 0x240600b9  addiu       $a2, $zero, 0xB9
    ctx->pc = 0x79aa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x79aa20: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79aa24: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AA24u;
    SET_GPR_U32(ctx, 31, 0x79AA2Cu);
    ctx->pc = 0x79AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA24u;
    // 0x79aa28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AA24u, 0x79AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA2Cu;
label_79aa2c:
    // 0x79aa2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa30: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AA30u;
    SET_GPR_U32(ctx, 31, 0x79AA38u);
    ctx->pc = 0x79AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA30u;
    // 0x79aa34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AA30u, 0x79AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA38u;
label_79aa38:
    // 0x79aa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa3c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AA3Cu;
    SET_GPR_U32(ctx, 31, 0x79AA44u);
    ctx->pc = 0x79AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA3Cu;
    // 0x79aa40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AA3Cu, 0x79AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA44u;
label_79aa44:
    // 0x79aa44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa4c: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79AA4Cu;
    SET_GPR_U32(ctx, 31, 0x79AA54u);
    ctx->pc = 0x79AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA4Cu;
    // 0x79aa50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79AA4Cu, 0x79AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA54u;
label_79aa54:
    // 0x79aa54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa5c: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79AA5Cu;
    SET_GPR_U32(ctx, 31, 0x79AA64u);
    ctx->pc = 0x79AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA5Cu;
    // 0x79aa60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79AA5Cu, 0x79AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA64u;
label_79aa64:
    // 0x79aa64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa68: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AA68u;
    SET_GPR_U32(ctx, 31, 0x79AA70u);
    ctx->pc = 0x79AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA68u;
    // 0x79aa6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AA68u, 0x79AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa74: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AA74u;
    SET_GPR_U32(ctx, 31, 0x79AA7Cu);
    ctx->pc = 0x79AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA74u;
    // 0x79aa78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AA74u, 0x79AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA7Cu;
label_79aa7c:
    // 0x79aa7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79AA7Cu;
    {
        const bool branch_taken_0x79aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA7Cu;
        // 0x79aa80: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa7c) {
            ctx->pc = 0x79AAB8u;
            goto label_79aab8;
        }
    }
    ctx->pc = 0x79AA84u;
label_79aa84:
    // 0x79aa84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa88: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79AA88u;
    SET_GPR_U32(ctx, 31, 0x79AA90u);
    ctx->pc = 0x79AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA88u;
    // 0x79aa8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79AA88u, 0x79AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA90u;
label_79aa90:
    // 0x79aa90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa94: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x79AA94u;
    SET_GPR_U32(ctx, 31, 0x79AA9Cu);
    ctx->pc = 0x79AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA94u;
    // 0x79aa98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x79AA94u, 0x79AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA9Cu;
label_79aa9c:
    // 0x79aa9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79aa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaa0: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AAA0u;
    SET_GPR_U32(ctx, 31, 0x79AAA8u);
    ctx->pc = 0x79AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAA0u;
    // 0x79aaa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AAA0u, 0x79AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAA8u;
label_79aaa8:
    // 0x79aaa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaac: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AAACu;
    SET_GPR_U32(ctx, 31, 0x79AAB4u);
    ctx->pc = 0x79AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAACu;
    // 0x79aab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AAACu, 0x79AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAB4u;
label_79aab4:
    // 0x79aab4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79aab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79aab8:
    // 0x79aab8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79aab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79aabc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79aabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79aac0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79aac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x79AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC8u;
        // 0x79aacc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AAD0u;
}
} // namespace gh_r600
