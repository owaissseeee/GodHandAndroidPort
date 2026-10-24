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

// Function: SetBgmTbl
// Address: 0x2d0ac0 - 0x2d0b88
void SetBgmTbl_0x2d0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBgmTbl_0x2d0ac0");
#endif

    switch (ctx->pc) {
        case 0x2d0af8u: goto label_2d0af8;
        case 0x2d0b24u: goto label_2d0b24;
        default: break;
    }

    ctx->pc = 0x2d0ac0u;

    // 0x2d0ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0ac4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d0ac8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d0acc: 0x24423138  addiu       $v0, $v0, 0x3138
    ctx->pc = 0x2d0accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12600));
    // 0x2d0ad0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d0ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d0ad4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d0ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d0ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d0adc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0ae4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d0ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ae8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d0ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d0aec: 0x24650420  addiu       $a1, $v1, 0x420
    ctx->pc = 0x2d0aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1056));
    // 0x2d0af0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d0af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0af4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2d0af4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3C3138u));
label_2d0af8:
    // 0x2d0af8: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D0AF8u;
    {
        const bool branch_taken_0x2d0af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d0af8) {
            ctx->pc = 0x2D0AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0AF8u;
            // 0x2d0afc: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0B00u;
            goto label_2d0b00;
        }
    }
    ctx->pc = 0x2D0B00u;
label_2d0b00:
    // 0x2d0b00: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2d0b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2d0b04: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2d0b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2d0b08: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0B08u;
    {
        const bool branch_taken_0x2d0b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0b08) {
            ctx->pc = 0x2D0B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0B08u;
            // 0x2d0b0c: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0af8;
        }
    }
    ctx->pc = 0x2D0B10u;
    // 0x2d0b10: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D0B10u;
    {
        const bool branch_taken_0x2d0b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B10u;
        // 0x2d0b14: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b10) {
            ctx->pc = 0x2D0B6Cu;
            goto label_2d0b6c;
        }
    }
    ctx->pc = 0x2D0B18u;
    // 0x2d0b18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b1c: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x2D0B1Cu;
    SET_GPR_U32(ctx, 31, 0x2D0B24u);
    ctx->pc = 0x2D0B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B1Cu;
    // 0x2d0b20: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x2D0B1Cu, 0x2D0B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B24u;
label_2d0b24:
    // 0x2d0b24: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2d0b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d0b28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0B28u;
    {
        const bool branch_taken_0x2d0b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B28u;
        // 0x2d0b2c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b28) {
            ctx->pc = 0x2D0B48u;
            goto label_2d0b48;
        }
    }
    ctx->pc = 0x2D0B30u;
    // 0x2d0b30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2d0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d0b34: 0x2442d110  addiu       $v0, $v0, -0x2EF0
    ctx->pc = 0x2d0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955280));
    // 0x2d0b38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0b3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0b40: 0x800008  jr          $a0
    ctx->pc = 0x2D0B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0B48u: goto label_2d0b48;
            case 0x2D0B50u: goto label_2d0b50;
            case 0x2D0B58u: goto label_2d0b58;
            case 0x2D0B60u: goto label_2d0b60;
            case 0x2D0B68u: goto label_2d0b68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D0B48u;
label_2d0b48:
    // 0x2d0b48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0B48u;
    {
        const bool branch_taken_0x2d0b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B48u;
        // 0x2d0b4c: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b48) {
            ctx->pc = 0x2D0B6Cu;
            goto label_2d0b6c;
        }
    }
    ctx->pc = 0x2D0B50u;
label_2d0b50:
    // 0x2d0b50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0B50u;
    {
        const bool branch_taken_0x2d0b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B50u;
        // 0x2d0b54: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b50) {
            ctx->pc = 0x2D0B6Cu;
            goto label_2d0b6c;
        }
    }
    ctx->pc = 0x2D0B58u;
label_2d0b58:
    // 0x2d0b58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0B58u;
    {
        const bool branch_taken_0x2d0b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B58u;
        // 0x2d0b5c: 0xae12000c  sw          $s2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b58) {
            ctx->pc = 0x2D0B6Cu;
            goto label_2d0b6c;
        }
    }
    ctx->pc = 0x2D0B60u;
label_2d0b60:
    // 0x2d0b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0B60u;
    {
        const bool branch_taken_0x2d0b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B60u;
        // 0x2d0b64: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b60) {
            ctx->pc = 0x2D0B6Cu;
            goto label_2d0b6c;
        }
    }
    ctx->pc = 0x2D0B68u;
label_2d0b68:
    // 0x2d0b68: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x2d0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
label_2d0b6c:
    // 0x2d0b6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d0b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0b70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d0b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0b74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d0b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B7Cu;
        // 0x2d0b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0B84u;
    // 0x2d0b84: 0x0  nop
    ctx->pc = 0x2d0b84u;
    // NOP
    ctx->pc = 0x2d0b88u;
}
