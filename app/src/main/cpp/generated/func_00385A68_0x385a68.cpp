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

// Function: func_00385A68
// Address: 0x385a68 - 0x385e98
void func_00385A68_0x385a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00385A68_0x385a68");
#endif

    switch (ctx->pc) {
        case 0x385ac0u: goto label_385ac0;
        case 0x385af8u: goto label_385af8;
        case 0x385b50u: goto label_385b50;
        case 0x385b70u: goto label_385b70;
        case 0x385b8cu: goto label_385b8c;
        case 0x385bccu: goto label_385bcc;
        case 0x385c14u: goto label_385c14;
        case 0x385c5cu: goto label_385c5c;
        case 0x385cc4u: goto label_385cc4;
        case 0x385d0cu: goto label_385d0c;
        case 0x385d40u: goto label_385d40;
        case 0x385d58u: goto label_385d58;
        case 0x385d7cu: goto label_385d7c;
        case 0x385d98u: goto label_385d98;
        case 0x385dc8u: goto label_385dc8;
        case 0x385df8u: goto label_385df8;
        case 0x385e2cu: goto label_385e2c;
        default: break;
    }

    ctx->pc = 0x385a68u;

    // 0x385a68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x385a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x385a6c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x385a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x385a70: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x385a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x385a74: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x385a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x385a78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x385a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a7c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x385a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x385a80: 0x2444b168  addiu       $a0, $v0, -0x4E98
    ctx->pc = 0x385a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x385a84: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x385a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x385a88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x385a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a8c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x385a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x385a90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x385a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a94: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x385a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x385a98: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x385a98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385a9c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x385a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x385aa0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x385aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x385aa4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x385aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x385aa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x385aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x385aac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x385aacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BB174u));
    // 0x385ab0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x385AB0u;
    {
        const bool branch_taken_0x385ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AB0u;
        // 0x385ab4: 0x30d600ff  andi        $s6, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ab0) {
            ctx->pc = 0x385AC8u;
            goto label_385ac8;
        }
    }
    ctx->pc = 0x385AB8u;
    // 0x385ab8: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385AB8u;
    SET_GPR_U32(ctx, 31, 0x385AC0u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385AB8u, 0x385AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385AC0u;
label_385ac0:
    // 0x385ac0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x385AC0u;
    {
        const bool branch_taken_0x385ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AC0u;
        // 0x385ac4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ac0) {
            ctx->pc = 0x385AD8u;
            goto label_385ad8;
        }
    }
    ctx->pc = 0x385AC8u;
label_385ac8:
    // 0x385ac8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x385ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x385acc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x385accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x385ad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385ad4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385ad8:
    // 0x385ad8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x385ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x385adc: 0x2644b168  addiu       $a0, $s2, -0x4E98
    ctx->pc = 0x385adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947176));
    // 0x385ae0: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x385ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x385ae4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x385ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x385ae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385AE8u;
    {
        const bool branch_taken_0x385ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AE8u;
        // 0x385aec: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ae8) {
            ctx->pc = 0x385B00u;
            goto label_385b00;
        }
    }
    ctx->pc = 0x385AF0u;
    // 0x385af0: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385AF0u;
    SET_GPR_U32(ctx, 31, 0x385AF8u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385AF0u, 0x385AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385AF8u;
label_385af8:
    // 0x385af8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x385AF8u;
    {
        const bool branch_taken_0x385af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385AF8u;
        // 0x385afc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385af8) {
            ctx->pc = 0x385B10u;
            goto label_385b10;
        }
    }
    ctx->pc = 0x385B00u;
label_385b00:
    // 0x385b00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x385b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x385b04: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x385b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x385b08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385b0c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385b10:
    // 0x385b10: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x385b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x385b14: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x385b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x385b18: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x385b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x385b1c: 0x26630014  addiu       $v1, $s3, 0x14
    ctx->pc = 0x385b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x385b20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x385b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x385b24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x385b24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b28: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x385b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x385b2c: 0x2644b168  addiu       $a0, $s2, -0x4E98
    ctx->pc = 0x385b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947176));
    // 0x385b30: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x385b30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x385b34: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x385b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x385b38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x385b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x385b3c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x385b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x385b40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x385B40u;
    {
        const bool branch_taken_0x385b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385b40) {
            ctx->pc = 0x385B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385B40u;
            // 0x385b44: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385B58u;
            goto label_385b58;
        }
    }
    ctx->pc = 0x385B48u;
    // 0x385b48: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385B48u;
    SET_GPR_U32(ctx, 31, 0x385B50u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385B48u, 0x385B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B50u;
label_385b50:
    // 0x385b50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x385B50u;
    {
        const bool branch_taken_0x385b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B50u;
        // 0x385b54: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b50) {
            ctx->pc = 0x385B64u;
            goto label_385b64;
        }
    }
    ctx->pc = 0x385B58u;
label_385b58:
    // 0x385b58: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x385b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x385b5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385b60: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385b64:
    // 0x385b64: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x385b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x385b68: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x385B68u;
    SET_GPR_U32(ctx, 31, 0x385B70u);
    ctx->pc = 0x385B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B68u;
    // 0x385b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x385B68u, 0x385B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B70u;
label_385b70:
    // 0x385b70: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x385b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x385b74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x385b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b78: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x385b78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x385b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x385b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x385b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b84: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x385B84u;
    SET_GPR_U32(ctx, 31, 0x385B8Cu);
    ctx->pc = 0x385B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B84u;
    // 0x385b88: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x385B84u, 0x385B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B8Cu;
label_385b8c:
    // 0x385b8c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x385b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x385b90: 0x10730026  beq         $v1, $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x385B90u;
    {
        const bool branch_taken_0x385b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x385B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B90u;
        // 0x385b94: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b90) {
            ctx->pc = 0x385C2Cu;
            goto label_385c2c;
        }
    }
    ctx->pc = 0x385B98u;
    // 0x385b98: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x385b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x385b9c: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x385b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x385ba0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x385ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x385ba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385ba8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x385BA8u;
    {
        const bool branch_taken_0x385ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BA8u;
        // 0x385bac: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ba8) {
            ctx->pc = 0x385BF8u;
            goto label_385bf8;
        }
    }
    ctx->pc = 0x385BB0u;
    // 0x385bb0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x385bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x385bb4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x385bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x385bb8: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x385bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x385bbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385BBCu;
    {
        const bool branch_taken_0x385bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BBCu;
        // 0x385bc0: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385bbc) {
            ctx->pc = 0x385BD4u;
            goto label_385bd4;
        }
    }
    ctx->pc = 0x385BC4u;
    // 0x385bc4: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x385BC4u;
    SET_GPR_U32(ctx, 31, 0x385BCCu);
    ctx->pc = 0x385BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385BC4u;
    // 0x385bc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x385BC4u, 0x385BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385BCCu;
label_385bcc:
    // 0x385bcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x385BCCu;
    {
        const bool branch_taken_0x385bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385BCCu;
        // 0x385bd0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385bcc) {
            ctx->pc = 0x385BFCu;
            goto label_385bfc;
        }
    }
    ctx->pc = 0x385BD4u;
label_385bd4:
    // 0x385bd4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x385bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x385bd8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x385bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x385bdc: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x385bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x385be0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385be4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x385be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x385be8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x385be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x385bec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x385becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385bf0: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x385bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x385bf4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x385bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_385bf8:
    // 0x385bf8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x385bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_385bfc:
    // 0x385bfc: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x385bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x385c00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x385c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x385c04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x385C04u;
    {
        const bool branch_taken_0x385c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385c04) {
            ctx->pc = 0x385C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385C04u;
            // 0x385c08: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385C1Cu;
            goto label_385c1c;
        }
    }
    ctx->pc = 0x385C0Cu;
    // 0x385c0c: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385C0Cu;
    SET_GPR_U32(ctx, 31, 0x385C14u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385C0Cu, 0x385C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C14u;
label_385c14:
    // 0x385c14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385C14u;
    {
        const bool branch_taken_0x385c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C14u;
        // 0x385c18: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c14) {
            ctx->pc = 0x385C24u;
            goto label_385c24;
        }
    }
    ctx->pc = 0x385C1Cu;
label_385c1c:
    // 0x385c1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385c20: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385c24:
    // 0x385c24: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x385c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x385c28: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x385c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_385c2c:
    // 0x385c2c: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x385c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x385c30: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x385c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x385c34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385c38: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x385C38u;
    {
        const bool branch_taken_0x385c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C38u;
        // 0x385c3c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c38) {
            ctx->pc = 0x385C88u;
            goto label_385c88;
        }
    }
    ctx->pc = 0x385C40u;
    // 0x385c40: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x385c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x385c44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x385c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x385c48: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x385c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x385c4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385C4Cu;
    {
        const bool branch_taken_0x385c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C4Cu;
        // 0x385c50: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c4c) {
            ctx->pc = 0x385C64u;
            goto label_385c64;
        }
    }
    ctx->pc = 0x385C54u;
    // 0x385c54: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x385C54u;
    SET_GPR_U32(ctx, 31, 0x385C5Cu);
    ctx->pc = 0x385C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385C54u;
    // 0x385c58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x385C54u, 0x385C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385C5Cu;
label_385c5c:
    // 0x385c5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x385C5Cu;
    {
        const bool branch_taken_0x385c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x385c5c) {
            ctx->pc = 0x385C88u;
            goto label_385c88;
        }
    }
    ctx->pc = 0x385C64u;
label_385c64:
    // 0x385c64: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x385c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x385c68: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x385c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x385c6c: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x385c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x385c70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385c74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x385c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x385c78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x385c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x385c7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x385c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385c80: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x385c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x385c84: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x385c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_385c88:
    // 0x385c88: 0x12740025  beq         $s3, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x385C88u;
    {
        const bool branch_taken_0x385c88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x385c88) {
            ctx->pc = 0x385D20u;
            goto label_385d20;
        }
    }
    ctx->pc = 0x385C90u;
    // 0x385c90: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x385c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x385c94: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x385c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x385c98: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x385c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x385c9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385ca0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x385CA0u;
    {
        const bool branch_taken_0x385ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CA0u;
        // 0x385ca4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ca0) {
            ctx->pc = 0x385CF0u;
            goto label_385cf0;
        }
    }
    ctx->pc = 0x385CA8u;
    // 0x385ca8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x385ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x385cac: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x385cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x385cb0: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x385cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x385cb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385CB4u;
    {
        const bool branch_taken_0x385cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CB4u;
        // 0x385cb8: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385cb4) {
            ctx->pc = 0x385CCCu;
            goto label_385ccc;
        }
    }
    ctx->pc = 0x385CBCu;
    // 0x385cbc: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x385CBCu;
    SET_GPR_U32(ctx, 31, 0x385CC4u);
    ctx->pc = 0x385CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385CBCu;
    // 0x385cc0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x385CBCu, 0x385CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385CC4u;
label_385cc4:
    // 0x385cc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x385CC4u;
    {
        const bool branch_taken_0x385cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385CC4u;
        // 0x385cc8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385cc4) {
            ctx->pc = 0x385CF4u;
            goto label_385cf4;
        }
    }
    ctx->pc = 0x385CCCu;
label_385ccc:
    // 0x385ccc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x385cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x385cd0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x385cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x385cd4: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x385cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x385cd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385cdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x385cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x385ce0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x385ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x385ce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x385ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385ce8: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x385ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x385cec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x385cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_385cf0:
    // 0x385cf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x385cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_385cf4:
    // 0x385cf4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x385cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x385cf8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x385cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x385cfc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x385CFCu;
    {
        const bool branch_taken_0x385cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385cfc) {
            ctx->pc = 0x385D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385CFCu;
            // 0x385d00: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385D14u;
            goto label_385d14;
        }
    }
    ctx->pc = 0x385D04u;
    // 0x385d04: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385D04u;
    SET_GPR_U32(ctx, 31, 0x385D0Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385D04u, 0x385D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D0Cu;
label_385d0c:
    // 0x385d0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385D0Cu;
    {
        const bool branch_taken_0x385d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D0Cu;
        // 0x385d10: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d0c) {
            ctx->pc = 0x385D1Cu;
            goto label_385d1c;
        }
    }
    ctx->pc = 0x385D14u;
label_385d14:
    // 0x385d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385d18: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385d1c:
    // 0x385d1c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x385d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_385d20:
    // 0x385d20: 0x12c00050  beqz        $s6, . + 4 + (0x50 << 2)
    ctx->pc = 0x385D20u;
    {
        const bool branch_taken_0x385d20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D20u;
        // 0x385d24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d20) {
            ctx->pc = 0x385E64u;
            goto label_385e64;
        }
    }
    ctx->pc = 0x385D28u;
    // 0x385d28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x385d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x385d2c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x385d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x385d30: 0x2452b168  addiu       $s2, $v0, -0x4E98
    ctx->pc = 0x385d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x385d34: 0x24774030  addiu       $s7, $v1, 0x4030
    ctx->pc = 0x385d34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x385d38: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x385d38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d3c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x385d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_385d40:
    // 0x385d40: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x385d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x385d44: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x385d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x385d48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x385D48u;
    {
        const bool branch_taken_0x385d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D48u;
        // 0x385d4c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d48) {
            ctx->pc = 0x385D60u;
            goto label_385d60;
        }
    }
    ctx->pc = 0x385D50u;
    // 0x385d50: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385D50u;
    SET_GPR_U32(ctx, 31, 0x385D58u);
    ctx->pc = 0x385D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D50u;
    // 0x385d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385D50u, 0x385D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D58u;
label_385d58:
    // 0x385d58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x385D58u;
    {
        const bool branch_taken_0x385d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385D58u;
        // 0x385d5c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385d58) {
            ctx->pc = 0x385D70u;
            goto label_385d70;
        }
    }
    ctx->pc = 0x385D60u;
label_385d60:
    // 0x385d60: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x385d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x385d64: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x385d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x385d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385d6c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x385d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_385d70:
    // 0x385d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d74: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x385D74u;
    SET_GPR_U32(ctx, 31, 0x385D7Cu);
    ctx->pc = 0x385D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D74u;
    // 0x385d78: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x385D74u, 0x385D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D7Cu;
label_385d7c:
    // 0x385d7c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x385d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x385d80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x385d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x385d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x385d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x385d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x385d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385d90: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x385D90u;
    SET_GPR_U32(ctx, 31, 0x385D98u);
    ctx->pc = 0x385D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385D90u;
    // 0x385d94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x385D90u, 0x385D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385D98u;
label_385d98:
    // 0x385d98: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x385d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x385d9c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x385d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x385da0: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x385DA0u;
    {
        const bool branch_taken_0x385da0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x385DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DA0u;
        // 0x385da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385da0) {
            ctx->pc = 0x385DECu;
            goto label_385dec;
        }
    }
    ctx->pc = 0x385DA8u;
    // 0x385da8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x385DA8u;
    {
        const bool branch_taken_0x385da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DA8u;
        // 0x385dac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385da8) {
            ctx->pc = 0x385DDCu;
            goto label_385ddc;
        }
    }
    ctx->pc = 0x385DB0u;
    // 0x385db0: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x385db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x385db4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x385db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x385db8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x385DB8u;
    {
        const bool branch_taken_0x385db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385db8) {
            ctx->pc = 0x385DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385DB8u;
            // 0x385dbc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385DD0u;
            goto label_385dd0;
        }
    }
    ctx->pc = 0x385DC0u;
    // 0x385dc0: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385DC0u;
    SET_GPR_U32(ctx, 31, 0x385DC8u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385DC0u, 0x385DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DC8u;
label_385dc8:
    // 0x385dc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385DC8u;
    {
        const bool branch_taken_0x385dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DC8u;
        // 0x385dcc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385dc8) {
            ctx->pc = 0x385DD8u;
            goto label_385dd8;
        }
    }
    ctx->pc = 0x385DD0u;
label_385dd0:
    // 0x385dd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385dd4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385dd8:
    // 0x385dd8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x385dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_385ddc:
    // 0x385ddc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x385ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x385de0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x385de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x385de4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x385DE4u;
    {
        const bool branch_taken_0x385de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DE4u;
        // 0x385de8: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385de4) {
            ctx->pc = 0x385DF8u;
            goto label_385df8;
        }
    }
    ctx->pc = 0x385DECu;
label_385dec:
    // 0x385dec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x385decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385df0: 0xc0eed3c  jal         func_3BB4F0
    ctx->pc = 0x385DF0u;
    SET_GPR_U32(ctx, 31, 0x385DF8u);
    ctx->pc = 0x385DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385DF0u;
    // 0x385df4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB4F0u, 0x385DF0u, 0x385DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DF8u;
label_385df8:
    // 0x385df8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x385df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385dfc: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x385dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x385e00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x385e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x385e04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385e08: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x385E08u;
    {
        const bool branch_taken_0x385e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E08u;
        // 0x385e0c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385e08) {
            ctx->pc = 0x385E50u;
            goto label_385e50;
        }
    }
    ctx->pc = 0x385E10u;
    // 0x385e10: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x385e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x385e14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x385e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x385e18: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x385e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x385e1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385E1Cu;
    {
        const bool branch_taken_0x385e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E1Cu;
        // 0x385e20: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385e1c) {
            ctx->pc = 0x385E34u;
            goto label_385e34;
        }
    }
    ctx->pc = 0x385E24u;
    // 0x385e24: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x385E24u;
    SET_GPR_U32(ctx, 31, 0x385E2Cu);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x385E24u, 0x385E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E2Cu;
label_385e2c:
    // 0x385e2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x385E2Cu;
    {
        const bool branch_taken_0x385e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E2Cu;
        // 0x385e30: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385e2c) {
            ctx->pc = 0x385E54u;
            goto label_385e54;
        }
    }
    ctx->pc = 0x385E34u;
label_385e34:
    // 0x385e34: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x385e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x385e38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385e3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x385e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x385e40: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x385e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x385e44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x385e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385e48: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x385e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x385e4c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x385e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_385e50:
    // 0x385e50: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x385e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_385e54:
    // 0x385e54: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x385e54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x385e58: 0x236182b  sltu        $v1, $s1, $s6
    ctx->pc = 0x385e58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x385e5c: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x385E5Cu;
    {
        const bool branch_taken_0x385e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x385E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E5Cu;
        // 0x385e60: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385e5c) {
            ctx->pc = 0x385D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385d40;
        }
    }
    ctx->pc = 0x385E64u;
label_385e64:
    // 0x385e64: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x385e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385e68: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x385e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x385e6c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x385e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x385e70: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x385e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x385e74: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x385e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x385e78: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x385e78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x385e7c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x385e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x385e80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x385e80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x385e84: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x385e84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x385e88: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x385e88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x385e8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x385e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385e90: 0x3e00008  jr          $ra
    ctx->pc = 0x385E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E90u;
        // 0x385e94: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385E98u;
}
