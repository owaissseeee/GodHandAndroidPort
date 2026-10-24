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

// Function: func_003B2AC8
// Address: 0x3b2ac8 - 0x3b2b70
void func_003B2AC8_0x3b2ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B2AC8_0x3b2ac8");
#endif

    switch (ctx->pc) {
        case 0x3b2ae0u: goto label_3b2ae0;
        case 0x3b2af8u: goto label_3b2af8;
        case 0x3b2b3cu: goto label_3b2b3c;
        case 0x3b2b58u: goto label_3b2b58;
        default: break;
    }

    ctx->pc = 0x3b2ac8u;

    // 0x3b2ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b2ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b2acc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b2accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b2ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b2ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b2ad8: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B2AD8u;
    SET_GPR_U32(ctx, 31, 0x3B2AE0u);
    ctx->pc = 0x3B2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2AD8u;
    // 0x3b2adc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B2AD8u, 0x3B2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AE0u;
label_3b2ae0:
    // 0x3b2ae0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3b2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3b2ae4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b2ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ae8: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B2AE8u;
    {
        const bool branch_taken_0x3b2ae8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x3B2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2AE8u;
        // 0x3b2aec: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ae8) {
            ctx->pc = 0x3B2B50u;
            goto label_3b2b50;
        }
    }
    ctx->pc = 0x3B2AF0u;
    // 0x3b2af0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b2af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2af4: 0x0  nop
    ctx->pc = 0x3b2af4u;
    // NOP
label_3b2af8:
    // 0x3b2af8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3b2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b2afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b2b00: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B2B00u;
    {
        const bool branch_taken_0x3b2b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2b00) {
            ctx->pc = 0x3B2B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2B00u;
            // 0x3b2b04: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2B44u;
            goto label_3b2b44;
        }
    }
    ctx->pc = 0x3B2B08u;
    // 0x3b2b08: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3b2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3b2b0c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x3b2b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x3b2b10: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3b2b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3b2b14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b2b18: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3b2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b2b1c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2B1Cu;
    {
        const bool branch_taken_0x3b2b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3B2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B1Cu;
        // 0x3b2b20: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b1c) {
            ctx->pc = 0x3B2B30u;
            goto label_3b2b30;
        }
    }
    ctx->pc = 0x3B2B24u;
    // 0x3b2b24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3b2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3b2b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2b2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3b2b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3b2b30:
    // 0x3b2b30: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x3b2b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x3b2b34: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B2B34u;
    SET_GPR_U32(ctx, 31, 0x3B2B3Cu);
    ctx->pc = 0x3B2B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2B34u;
    // 0x3b2b38: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B2B34u, 0x3B2B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2B3Cu;
label_3b2b3c:
    // 0x3b2b3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2B3Cu;
    {
        const bool branch_taken_0x3b2b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B3Cu;
        // 0x3b2b40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b3c) {
            ctx->pc = 0x3B2B5Cu;
            goto label_3b2b5c;
        }
    }
    ctx->pc = 0x3B2B44u;
label_3b2b44:
    // 0x3b2b44: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3b2b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b2b48: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3B2B48u;
    {
        const bool branch_taken_0x3b2b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B48u;
        // 0x3b2b4c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2b48) {
            ctx->pc = 0x3B2AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2af8;
        }
    }
    ctx->pc = 0x3B2B50u;
label_3b2b50:
    // 0x3b2b50: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B2B50u;
    SET_GPR_U32(ctx, 31, 0x3B2B58u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B2B50u, 0x3B2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2B58u;
label_3b2b58:
    // 0x3b2b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b2b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b2b5c:
    // 0x3b2b5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b2b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2b60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2b68: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2B68u;
        // 0x3b2b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2B70u;
}
