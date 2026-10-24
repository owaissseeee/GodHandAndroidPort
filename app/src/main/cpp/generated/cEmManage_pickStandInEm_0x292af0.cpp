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

// Function: cEmManage_pickStandInEm
// Address: 0x292af0 - 0x292c28
void cEmManage_pickStandInEm_0x292af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_pickStandInEm_0x292af0");
#endif

    switch (ctx->pc) {
        case 0x292b18u: goto label_292b18;
        case 0x292b20u: goto label_292b20;
        case 0x292bf8u: goto label_292bf8;
        default: break;
    }

    ctx->pc = 0x292af0u;

    // 0x292af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292af4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x292af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x292af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x292afc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x292b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x292b04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b08: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x292b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x292b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292b10: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x292B10u;
    {
        const bool branch_taken_0x292b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B10u;
        // 0x292b14: 0x3c130058  lui         $s3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b10) {
            ctx->pc = 0x292BECu;
            goto label_292bec;
        }
    }
    ctx->pc = 0x292B18u;
label_292b18:
    // 0x292b18: 0xc0a3fb6  jal         func_28FED8
    ctx->pc = 0x292B18u;
    SET_GPR_U32(ctx, 31, 0x292B20u);
    ctx->pc = 0x292B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B18u;
    // 0x292b1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FED8u, 0x292B18u, 0x292B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B20u;
label_292b20:
    // 0x292b20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x292b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b24: 0x2402020d  addiu       $v0, $zero, 0x20D
    ctx->pc = 0x292b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
    // 0x292b28: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x292B28u;
    {
        const bool branch_taken_0x292b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B28u;
        // 0x292b2c: 0x2862020e  slti        $v0, $v1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)526) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b28) {
            ctx->pc = 0x292BBCu;
            goto label_292bbc;
        }
    }
    ctx->pc = 0x292B30u;
    // 0x292b30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x292B30u;
    {
        const bool branch_taken_0x292b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B30u;
        // 0x292b34: 0x24020207  addiu       $v0, $zero, 0x207 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b30) {
            ctx->pc = 0x292B6Cu;
            goto label_292b6c;
        }
    }
    ctx->pc = 0x292B38u;
    // 0x292b38: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x292B38u;
    {
        const bool branch_taken_0x292b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B38u;
        // 0x292b3c: 0x28620208  slti        $v0, $v1, 0x208 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)520) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b38) {
            ctx->pc = 0x292BBCu;
            goto label_292bbc;
        }
    }
    ctx->pc = 0x292B40u;
    // 0x292b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292B40u;
    {
        const bool branch_taken_0x292b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B40u;
        // 0x292b44: 0x24020202  addiu       $v0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b40) {
            ctx->pc = 0x292B58u;
            goto label_292b58;
        }
    }
    ctx->pc = 0x292B48u;
    // 0x292b48: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x292B48u;
    {
        const bool branch_taken_0x292b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B48u;
        // 0x292b4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b48) {
            ctx->pc = 0x292BA4u;
            goto label_292ba4;
        }
    }
    ctx->pc = 0x292B50u;
    // 0x292b50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x292B50u;
    {
        const bool branch_taken_0x292b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B50u;
        // 0x292b54: 0x267164e0  addiu       $s1, $s3, 0x64E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 25824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b50) {
            ctx->pc = 0x292BF0u;
            goto label_292bf0;
        }
    }
    ctx->pc = 0x292B58u;
label_292b58:
    // 0x292b58: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x292b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x292b5c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x292B5Cu;
    {
        const bool branch_taken_0x292b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B5Cu;
        // 0x292b60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b5c) {
            ctx->pc = 0x292BA4u;
            goto label_292ba4;
        }
    }
    ctx->pc = 0x292B64u;
    // 0x292b64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x292B64u;
    {
        const bool branch_taken_0x292b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B64u;
        // 0x292b68: 0x267164e0  addiu       $s1, $s3, 0x64E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 25824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b64) {
            ctx->pc = 0x292BF0u;
            goto label_292bf0;
        }
    }
    ctx->pc = 0x292B6Cu;
label_292b6c:
    // 0x292b6c: 0x24020270  addiu       $v0, $zero, 0x270
    ctx->pc = 0x292b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x292b70: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x292B70u;
    {
        const bool branch_taken_0x292b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B70u;
        // 0x292b74: 0x28620271  slti        $v0, $v1, 0x271 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)625) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b70) {
            ctx->pc = 0x292BBCu;
            goto label_292bbc;
        }
    }
    ctx->pc = 0x292B78u;
    // 0x292b78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292B78u;
    {
        const bool branch_taken_0x292b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B78u;
        // 0x292b7c: 0x2402021d  addiu       $v0, $zero, 0x21D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b78) {
            ctx->pc = 0x292B90u;
            goto label_292b90;
        }
    }
    ctx->pc = 0x292B80u;
    // 0x292b80: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x292B80u;
    {
        const bool branch_taken_0x292b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B80u;
        // 0x292b84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b80) {
            ctx->pc = 0x292BD4u;
            goto label_292bd4;
        }
    }
    ctx->pc = 0x292B88u;
    // 0x292b88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x292B88u;
    {
        const bool branch_taken_0x292b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B88u;
        // 0x292b8c: 0x267164e0  addiu       $s1, $s3, 0x64E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 25824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b88) {
            ctx->pc = 0x292BF0u;
            goto label_292bf0;
        }
    }
    ctx->pc = 0x292B90u;
label_292b90:
    // 0x292b90: 0x24020276  addiu       $v0, $zero, 0x276
    ctx->pc = 0x292b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x292b94: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x292B94u;
    {
        const bool branch_taken_0x292b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B94u;
        // 0x292b98: 0x24020278  addiu       $v0, $zero, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b94) {
            ctx->pc = 0x292BD4u;
            goto label_292bd4;
        }
    }
    ctx->pc = 0x292B9Cu;
    // 0x292b9c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x292B9Cu;
    {
        const bool branch_taken_0x292b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B9Cu;
        // 0x292ba0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b9c) {
            ctx->pc = 0x292BECu;
            goto label_292bec;
        }
    }
    ctx->pc = 0x292BA4u;
label_292ba4:
    // 0x292ba4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292BA4u;
    {
        const bool branch_taken_0x292ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BA4u;
        // 0x292ba8: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ba4) {
            ctx->pc = 0x292BB4u;
            goto label_292bb4;
        }
    }
    ctx->pc = 0x292BACu;
    // 0x292bac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x292bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x292bb0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x292bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_292bb4:
    // 0x292bb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x292BB4u;
    {
        const bool branch_taken_0x292bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BB4u;
        // 0x292bb8: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bb4) {
            ctx->pc = 0x292C08u;
            goto label_292c08;
        }
    }
    ctx->pc = 0x292BBCu;
label_292bbc:
    // 0x292bbc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292BBCu;
    {
        const bool branch_taken_0x292bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BBCu;
        // 0x292bc0: 0x24020210  addiu       $v0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bbc) {
            ctx->pc = 0x292BCCu;
            goto label_292bcc;
        }
    }
    ctx->pc = 0x292BC4u;
    // 0x292bc4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x292bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x292bc8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x292bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_292bcc:
    // 0x292bcc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x292BCCu;
    {
        const bool branch_taken_0x292bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BCCu;
        // 0x292bd0: 0x24020210  addiu       $v0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bcc) {
            ctx->pc = 0x292C08u;
            goto label_292c08;
        }
    }
    ctx->pc = 0x292BD4u;
label_292bd4:
    // 0x292bd4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292BD4u;
    {
        const bool branch_taken_0x292bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BD4u;
        // 0x292bd8: 0x24020226  addiu       $v0, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292bd4) {
            ctx->pc = 0x292BE4u;
            goto label_292be4;
        }
    }
    ctx->pc = 0x292BDCu;
    // 0x292bdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x292bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x292be0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x292be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_292be4:
    // 0x292be4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x292BE4u;
    {
        const bool branch_taken_0x292be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BE4u;
        // 0x292be8: 0x24020226  addiu       $v0, $zero, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292be4) {
            ctx->pc = 0x292C08u;
            goto label_292c08;
        }
    }
    ctx->pc = 0x292BECu;
label_292bec:
    // 0x292bec: 0x267164e0  addiu       $s1, $s3, 0x64E0
    ctx->pc = 0x292becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 25824));
label_292bf0:
    // 0x292bf0: 0xc0a3f96  jal         func_28FE58
    ctx->pc = 0x292BF0u;
    SET_GPR_U32(ctx, 31, 0x292BF8u);
    ctx->pc = 0x292BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BF0u;
    // 0x292bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE58u, 0x292BF0u, 0x292BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BF8u;
label_292bf8:
    // 0x292bf8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x292bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x292bfc: 0x5440ffc6  bnel        $v0, $zero, . + 4 + (-0x3A << 2)
    ctx->pc = 0x292BFCu;
    {
        const bool branch_taken_0x292bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292bfc) {
            ctx->pc = 0x292C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292BFCu;
            // 0x292c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292b18;
        }
    }
    ctx->pc = 0x292C04u;
    // 0x292c04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x292c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_292c08:
    // 0x292c08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x292c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292c0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x292c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292c10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292c14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x292c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x292C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C1Cu;
        // 0x292c20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292C24u;
    // 0x292c24: 0x0  nop
    ctx->pc = 0x292c24u;
    // NOP
    ctx->pc = 0x292c28u;
}
