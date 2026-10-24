#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: errorProc__7cMcLoad
// Address: 0x7c2ad8 - 0x7c2d08
void errorProc__7cMcLoad_0x7c2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("errorProc__7cMcLoad_0x7c2ad8");
#endif

    switch (ctx->pc) {
        case 0x7c2b30u: goto label_7c2b30;
        case 0x7c2b40u: goto label_7c2b40;
        case 0x7c2b9cu: goto label_7c2b9c;
        case 0x7c2bfcu: goto label_7c2bfc;
        case 0x7c2c3cu: goto label_7c2c3c;
        case 0x7c2c90u: goto label_7c2c90;
        case 0x7c2cb8u: goto label_7c2cb8;
        case 0x7c2cdcu: goto label_7c2cdc;
        default: break;
    }

    ctx->pc = 0x7c2ad8u;

    // 0x7c2ad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c2adc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c2adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c2ae0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c2ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c2ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c2ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c2aec: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c2af0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c2af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c2af4: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x7C2AF4u;
    {
        const bool branch_taken_0x7c2af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2AF4u;
        // 0x7c2af8: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2af4) {
            ctx->pc = 0x7C2CF4u;
            goto label_7c2cf4;
        }
    }
    ctx->pc = 0x7C2AFCu;
    // 0x7c2afc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c2b00: 0x24420a90  addiu       $v0, $v0, 0xA90
    ctx->pc = 0x7c2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2704));
    // 0x7c2b04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c2b08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c2b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c2b0c: 0x800008  jr          $a0
    ctx->pc = 0x7C2B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C2B14u: goto label_7c2b14;
            case 0x7C2BA8u: goto label_7c2ba8;
            case 0x7C2BD8u: goto label_7c2bd8;
            case 0x7C2CC4u: goto label_7c2cc4;
            case 0x7C2CCCu: goto label_7c2ccc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2B0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C2B14u;
label_7c2b14:
    // 0x7c2b14: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x7c2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c2b18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2b1c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C2B1Cu;
    {
        const bool branch_taken_0x7c2b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B1Cu;
        // 0x7c2b20: 0xa220000c  sb          $zero, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b1c) {
            ctx->pc = 0x7C2B4Cu;
            goto label_7c2b4c;
        }
    }
    ctx->pc = 0x7C2B24u;
    // 0x7c2b24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7c2b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2b28: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x7c2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x7c2b2c: 0x0  nop
    ctx->pc = 0x7c2b2cu;
    // NOP
label_7c2b30:
    // 0x7c2b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c2b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2b38: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C2B38u;
    SET_GPR_U32(ctx, 31, 0x7C2B40u);
    ctx->pc = 0x7C2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2B38u;
    // 0x7c2b3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C2B38u, 0x7C2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2B40u;
label_7c2b40:
    // 0x7c2b40: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x7c2b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c2b44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C2B44u;
    {
        const bool branch_taken_0x7c2b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B44u;
        // 0x7c2b48: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b44) {
            ctx->pc = 0x7C2B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c2b30;
        }
    }
    ctx->pc = 0x7C2B4Cu;
label_7c2b4c:
    // 0x7c2b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2b50: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x7c2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c2b54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x7c2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c2b58: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C2B58u;
    {
        const bool branch_taken_0x7c2b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B58u;
        // 0x7c2b5c: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b58) {
            ctx->pc = 0x7C2B80u;
            goto label_7c2b80;
        }
    }
    ctx->pc = 0x7C2B60u;
    // 0x7c2b60: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x7c2b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c2b64: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C2B64u;
    {
        const bool branch_taken_0x7c2b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B64u;
        // 0x7c2b68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b64) {
            ctx->pc = 0x7C2BA4u;
            goto label_7c2ba4;
        }
    }
    ctx->pc = 0x7C2B6Cu;
    // 0x7c2b6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x7c2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c2b70: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C2B70u;
    {
        const bool branch_taken_0x7c2b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B70u;
        // 0x7c2b74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b70) {
            ctx->pc = 0x7C2B8Cu;
            goto label_7c2b8c;
        }
    }
    ctx->pc = 0x7C2B78u;
    // 0x7c2b78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C2B78u;
    {
        const bool branch_taken_0x7c2b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B78u;
        // 0x7c2b7c: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b78) {
            ctx->pc = 0x7C2BA8u;
            goto label_7c2ba8;
        }
    }
    ctx->pc = 0x7C2B80u;
label_7c2b80:
    // 0x7c2b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2b84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2B84u;
    {
        const bool branch_taken_0x7c2b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B84u;
        // 0x7c2b88: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b84) {
            ctx->pc = 0x7C2B94u;
            goto label_7c2b94;
        }
    }
    ctx->pc = 0x7C2B8Cu;
label_7c2b8c:
    // 0x7c2b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c2b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2b90: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x7c2b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_7c2b94:
    // 0x7c2b94: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C2B94u;
    SET_GPR_U32(ctx, 31, 0x7C2B9Cu);
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C2B94u, 0x7C2B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2B9Cu;
label_7c2b9c:
    // 0x7c2b9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C2B9Cu;
    {
        const bool branch_taken_0x7c2b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2B9Cu;
        // 0x7c2ba0: 0xae300078  sw          $s0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2b9c) {
            ctx->pc = 0x7C2BA8u;
            goto label_7c2ba8;
        }
    }
    ctx->pc = 0x7C2BA4u;
label_7c2ba4:
    // 0x7c2ba4: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c2ba8:
    // 0x7c2ba8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c2bac: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x7c2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x7c2bb0: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x7c2bb0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x7c2bb4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c2bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c2bb8: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x7C2BB8u;
    {
        const bool branch_taken_0x7c2bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2BB8u;
        // 0x7c2bbc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2bb8) {
            ctx->pc = 0x7C2CF4u;
            goto label_7c2cf4;
        }
    }
    ctx->pc = 0x7C2BC0u;
    // 0x7c2bc0: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x7c2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c2bc4: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x7C2BC4u;
    {
        const bool branch_taken_0x7c2bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2BC4u;
        // 0x7c2bc8: 0xa220000c  sb          $zero, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2bc4) {
            ctx->pc = 0x7C2CE8u;
            goto label_7c2ce8;
        }
    }
    ctx->pc = 0x7C2BCCu;
    // 0x7c2bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c2bd0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x7C2BD0u;
    {
        const bool branch_taken_0x7c2bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2BD0u;
        // 0x7c2bd4: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2bd0) {
            ctx->pc = 0x7C2CF4u;
            goto label_7c2cf4;
        }
    }
    ctx->pc = 0x7C2BD8u;
label_7c2bd8:
    // 0x7c2bd8: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x7c2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x7c2bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2be0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2BE0u;
    {
        const bool branch_taken_0x7c2be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2BE0u;
        // 0x7c2be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2be0) {
            ctx->pc = 0x7C2BF0u;
            goto label_7c2bf0;
        }
    }
    ctx->pc = 0x7C2BE8u;
    // 0x7c2be8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C2BE8u;
    {
        const bool branch_taken_0x7c2be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2BE8u;
        // 0x7c2bec: 0x24100011  addiu       $s0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2be8) {
            ctx->pc = 0x7C2BF4u;
            goto label_7c2bf4;
        }
    }
    ctx->pc = 0x7C2BF0u;
label_7c2bf0:
    // 0x7c2bf0: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x7c2bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_7c2bf4:
    // 0x7c2bf4: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C2BF4u;
    SET_GPR_U32(ctx, 31, 0x7C2BFCu);
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C2BF4u, 0x7C2BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2BFCu;
label_7c2bfc:
    // 0x7c2bfc: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c2c00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c2c04: 0x3c040c00  lui         $a0, 0xC00
    ctx->pc = 0x7c2c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
    // 0x7c2c08: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7c2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c2c0c: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x7c2c0cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747650u));
    // 0x7c2c10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c2c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c2c14: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C2C14u;
    {
        const bool branch_taken_0x7c2c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2C14u;
        // 0x7c2c18: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2c14) {
            ctx->pc = 0x7C2C50u;
            goto label_7c2c50;
        }
    }
    ctx->pc = 0x7C2C1Cu;
    // 0x7c2c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2c20: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c2c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c2c24: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c2c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c2c28: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2c2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2c30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2c30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2c34: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C2C34u;
    SET_GPR_U32(ctx, 31, 0x7C2C3Cu);
    ctx->pc = 0x7C2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2C34u;
    // 0x7c2c38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C2C34u, 0x7C2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2C3Cu;
label_7c2c3c:
    // 0x7c2c3c: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c2c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c2c40: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x7c2c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7c2c44: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c2c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c2c48: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7C2C48u;
    {
        const bool branch_taken_0x7c2c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2C48u;
        // 0x7c2c4c: 0xa223000c  sb          $v1, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2c48) {
            ctx->pc = 0x7C2CF4u;
            goto label_7c2cf4;
        }
    }
    ctx->pc = 0x7C2C50u;
label_7c2c50:
    // 0x7c2c50: 0xdc4201a0  ld          $v0, 0x1A0($v0)
    ctx->pc = 0x7c2c50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x7c2c54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7c2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7c2c58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c2c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c2c5c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x7C2C5Cu;
    {
        const bool branch_taken_0x7c2c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2C5Cu;
        // 0x7c2c60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2c5c) {
            ctx->pc = 0x7C2CF4u;
            goto label_7c2cf4;
        }
    }
    ctx->pc = 0x7C2C64u;
    // 0x7c2c64: 0x9230000c  lbu         $s0, 0xC($s1)
    ctx->pc = 0x7c2c64u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c2c68: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C2C68u;
    {
        const bool branch_taken_0x7c2c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2C68u;
        // 0x7c2c6c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2c68) {
            ctx->pc = 0x7C2C98u;
            goto label_7c2c98;
        }
    }
    ctx->pc = 0x7C2C70u;
    // 0x7c2c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2c74: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c2c78: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c2c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c2c7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2c80: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2c84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2c84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2c88: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C2C88u;
    SET_GPR_U32(ctx, 31, 0x7C2C90u);
    ctx->pc = 0x7C2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2C88u;
    // 0x7c2c8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C2C88u, 0x7C2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2C90u;
label_7c2c90:
    // 0x7c2c90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7C2C90u;
    {
        const bool branch_taken_0x7c2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2C90u;
        // 0x7c2c94: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2c90) {
            ctx->pc = 0x7C2CF4u;
            goto label_7c2cf4;
        }
    }
    ctx->pc = 0x7C2C98u;
label_7c2c98:
    // 0x7c2c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c2c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2c9c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c2ca0: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c2ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c2ca4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c2ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2ca8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c2ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2cac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c2cacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2cb0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C2CB0u;
    SET_GPR_U32(ctx, 31, 0x7C2CB8u);
    ctx->pc = 0x7C2CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2CB0u;
    // 0x7c2cb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C2CB0u, 0x7C2CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2CB8u;
label_7c2cb8:
    // 0x7c2cb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7c2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c2cbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C2CBCu;
    {
        const bool branch_taken_0x7c2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2CBCu;
        // 0x7c2cc0: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2cbc) {
            ctx->pc = 0x7C2CF4u;
            goto label_7c2cf4;
        }
    }
    ctx->pc = 0x7C2CC4u;
label_7c2cc4:
    // 0x7c2cc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c2cc8: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c2ccc:
    // 0x7c2ccc: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c2cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c2cd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c2cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2cd4: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C2CD4u;
    SET_GPR_U32(ctx, 31, 0x7C2CDCu);
    ctx->pc = 0x7C2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2CD4u;
    // 0x7c2cd8: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C2CD4u, 0x7C2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2CDCu;
label_7c2cdc:
    // 0x7c2cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c2ce0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2CE0u;
    {
        const bool branch_taken_0x7c2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2CE0u;
        // 0x7c2ce4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2ce0) {
            ctx->pc = 0x7C2CF8u;
            goto label_7c2cf8;
        }
    }
    ctx->pc = 0x7C2CE8u;
label_7c2ce8:
    // 0x7c2ce8: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c2ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c2cec: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c2cf0: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c2cf4:
    // 0x7c2cf4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c2cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c2cf8:
    // 0x7c2cf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c2cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c2cfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c2cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c2d00: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2D00u;
        // 0x7c2d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2D08u;
}
} // namespace gh_mcport
