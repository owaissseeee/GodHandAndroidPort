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

// Function: func_003AEEC0
// Address: 0x3aeec0 - 0x3aefc0
void func_003AEEC0_0x3aeec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AEEC0_0x3aeec0");
#endif

    switch (ctx->pc) {
        case 0x3aef0cu: goto label_3aef0c;
        case 0x3aef34u: goto label_3aef34;
        case 0x3aef48u: goto label_3aef48;
        case 0x3aef60u: goto label_3aef60;
        case 0x3aef84u: goto label_3aef84;
        case 0x3aef94u: goto label_3aef94;
        default: break;
    }

    ctx->pc = 0x3aeec0u;

    // 0x3aeec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3aeec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3aeec4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3aeec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3aeec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3aeec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3aeecc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3aeeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeed0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3aeed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3aeed4: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x3aeed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x3aeed8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3aeed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3aeedc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3aeedcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aeee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aeee4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3AEEE4u;
    {
        const bool branch_taken_0x3aeee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEEE4u;
        // 0x3aeee8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeee4) {
            ctx->pc = 0x3AEF10u;
            goto label_3aef10;
        }
    }
    ctx->pc = 0x3AEEECu;
    // 0x3aeeec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3aeeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3aeef0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3aeef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3aeef4: 0x2442fcd8  addiu       $v0, $v0, -0x328
    ctx->pc = 0x3aeef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966488));
    // 0x3aeef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3aeef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3aeefc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3aeefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3aef00: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3aef00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3aef04: 0xc0eba3e  jal         func_3AE8F8
    ctx->pc = 0x3AEF04u;
    SET_GPR_U32(ctx, 31, 0x3AEF0Cu);
    ctx->pc = 0x3AEF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF04u;
    // 0x3aef08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8F8u, 0x3AEF04u, 0x3AEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF0Cu;
label_3aef0c:
    // 0x3aef0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3aef0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aef10:
    // 0x3aef10: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x3aef10u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x3aef14: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3AEF14u;
    {
        const bool branch_taken_0x3aef14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF14u;
        // 0x3aef18: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef14) {
            ctx->pc = 0x3AEFA4u;
            goto label_3aefa4;
        }
    }
    ctx->pc = 0x3AEF1Cu;
    // 0x3aef1c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x3aef1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3aef20: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AEF20u;
    {
        const bool branch_taken_0x3aef20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF20u;
        // 0x3aef24: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef20) {
            ctx->pc = 0x3AEF70u;
            goto label_3aef70;
        }
    }
    ctx->pc = 0x3AEF28u;
    // 0x3aef28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aef28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aef2c: 0xc0ebb20  jal         func_3AEC80
    ctx->pc = 0x3AEF2Cu;
    SET_GPR_U32(ctx, 31, 0x3AEF34u);
    ctx->pc = 0x3AEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF2Cu;
    // 0x3aef30: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEC80u, 0x3AEF2Cu, 0x3AEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF34u;
label_3aef34:
    // 0x3aef34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aef34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aef38: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x3aef38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x3aef3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3AEF3Cu;
    {
        const bool branch_taken_0x3aef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF3Cu;
        // 0x3aef40: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef3c) {
            ctx->pc = 0x3AEF6Cu;
            goto label_3aef6c;
        }
    }
    ctx->pc = 0x3AEF44u;
    // 0x3aef44: 0x0  nop
    ctx->pc = 0x3aef44u;
    // NOP
label_3aef48:
    // 0x3aef48: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AEF48u;
    {
        const bool branch_taken_0x3aef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aef48) {
            ctx->pc = 0x3AEF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEF48u;
            // 0x3aef4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEF6Cu;
            goto label_3aef6c;
        }
    }
    ctx->pc = 0x3AEF50u;
    // 0x3aef50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aef50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aef54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aef54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aef58: 0xc0ebb2e  jal         func_3AECB8
    ctx->pc = 0x3AEF58u;
    SET_GPR_U32(ctx, 31, 0x3AEF60u);
    ctx->pc = 0x3AEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF58u;
    // 0x3aef5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AECB8u, 0x3AEF58u, 0x3AEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF60u;
label_3aef60:
    // 0x3aef60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3aef60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3aef64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3aef64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3aef68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3aef68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aef6c:
    // 0x3aef6c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3aef6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_3aef70:
    // 0x3aef70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AEF70u;
    {
        const bool branch_taken_0x3aef70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEF70u;
        // 0x3aef74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef70) {
            ctx->pc = 0x3AEF94u;
            goto label_3aef94;
        }
    }
    ctx->pc = 0x3AEF78u;
    // 0x3aef78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aef7c: 0xc0ebb2e  jal         func_3AECB8
    ctx->pc = 0x3AEF7Cu;
    SET_GPR_U32(ctx, 31, 0x3AEF84u);
    ctx->pc = 0x3AEF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF7Cu;
    // 0x3aef80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AECB8u, 0x3AEF7Cu, 0x3AEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF84u;
label_3aef84:
    // 0x3aef84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3aef84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aef88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3aef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aef8c: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3AEF8Cu;
    SET_GPR_U32(ctx, 31, 0x3AEF94u);
    ctx->pc = 0x3AEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEF8Cu;
    // 0x3aef90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3AEF8Cu, 0x3AEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEF94u;
label_3aef94:
    // 0x3aef94: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x3aef94u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x3aef98: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3AEF98u;
    {
        const bool branch_taken_0x3aef98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aef98) {
            ctx->pc = 0x3AEF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEF98u;
            // 0x3aef9c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aef48;
        }
    }
    ctx->pc = 0x3AEFA0u;
    // 0x3aefa0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3aefa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aefa4:
    // 0x3aefa4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3aefa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aefa8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3aefa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aefac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3aefacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aefb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3aefb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aefb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aefb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aefb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEFB8u;
        // 0x3aefbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEFC0u;
}
