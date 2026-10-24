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

// Function: func_0013EBA0
// Address: 0x13eba0 - 0x13ec50
void func_0013EBA0_0x13eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013EBA0_0x13eba0");
#endif

    switch (ctx->pc) {
        case 0x13ec14u: goto label_13ec14;
        case 0x13ec38u: goto label_13ec38;
        default: break;
    }

    ctx->pc = 0x13eba0u;

    // 0x13eba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13eba4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13eba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13eba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ebac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ebacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ebb4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x13ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13ebb8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x13EBB8u;
    {
        const bool branch_taken_0x13ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ebb8) {
            ctx->pc = 0x13EBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EBB8u;
            // 0x13ebbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC3Cu;
            goto label_13ec3c;
        }
    }
    ctx->pc = 0x13EBC0u;
    // 0x13ebc0: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x13ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x13ebc4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13EBC4u;
    {
        const bool branch_taken_0x13ebc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBC4u;
        // 0x13ebc8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebc4) {
            ctx->pc = 0x13EC38u;
            goto label_13ec38;
        }
    }
    ctx->pc = 0x13EBCCu;
    // 0x13ebcc: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x13ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x13ebd0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x13ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x13ebd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ebd8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13EBD8u;
    {
        const bool branch_taken_0x13ebd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBD8u;
        // 0x13ebdc: 0x24717a24  addiu       $s1, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebd8) {
            ctx->pc = 0x13EC38u;
            goto label_13ec38;
        }
    }
    ctx->pc = 0x13EBE0u;
    // 0x13ebe0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x13ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13ebe4: 0x4420015  bltzl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13EBE4u;
    {
        const bool branch_taken_0x13ebe4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x13ebe4) {
            ctx->pc = 0x13EBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EBE4u;
            // 0x13ebe8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC3Cu;
            goto label_13ec3c;
        }
    }
    ctx->pc = 0x13EBECu;
    // 0x13ebec: 0x84820548  lh          $v0, 0x548($a0)
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x13ebf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13EBF0u;
    {
        const bool branch_taken_0x13ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBF0u;
        // 0x13ebf4: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebf0) {
            ctx->pc = 0x13EC38u;
            goto label_13ec38;
        }
    }
    ctx->pc = 0x13EBF8u;
    // 0x13ebf8: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x13ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x13ebfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ec00: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13EC00u;
    {
        const bool branch_taken_0x13ec00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec00) {
            ctx->pc = 0x13EC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EC00u;
            // 0x13ec04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC3Cu;
            goto label_13ec3c;
        }
    }
    ctx->pc = 0x13EC08u;
    // 0x13ec08: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x13ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x13ec0c: 0xc07f1c2  jal         func_1FC708
    ctx->pc = 0x13EC0Cu;
    SET_GPR_U32(ctx, 31, 0x13EC14u);
    ctx->pc = 0x13EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC0Cu;
    // 0x13ec10: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC708u, 0x13EC0Cu, 0x13EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC14u;
label_13ec14:
    // 0x13ec14: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EC14u;
    {
        const bool branch_taken_0x13ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ec14) {
            ctx->pc = 0x13EC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EC14u;
            // 0x13ec18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC3Cu;
            goto label_13ec3c;
        }
    }
    ctx->pc = 0x13EC1Cu;
    // 0x13ec1c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x13ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x13ec20: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x13ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x13ec24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13ec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ec28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EC28u;
    {
        const bool branch_taken_0x13ec28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ec28) {
            ctx->pc = 0x13EC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EC28u;
            // 0x13ec2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC3Cu;
            goto label_13ec3c;
        }
    }
    ctx->pc = 0x13EC30u;
    // 0x13ec30: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13EC30u;
    SET_GPR_U32(ctx, 31, 0x13EC38u);
    ctx->pc = 0x13EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC30u;
    // 0x13ec34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13EC30u, 0x13EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC38u;
label_13ec38:
    // 0x13ec38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13ec38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13ec3c:
    // 0x13ec3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ec3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ec40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ec44: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC44u;
        // 0x13ec48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EC4Cu;
    // 0x13ec4c: 0x0  nop
    ctx->pc = 0x13ec4cu;
    // NOP
    ctx->pc = 0x13ec50u;
}
