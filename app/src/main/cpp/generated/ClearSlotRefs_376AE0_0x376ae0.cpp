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

// Function: ClearSlotRefs_376AE0
// Address: 0x376ae0 - 0x376b80
void ClearSlotRefs_376AE0_0x376ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearSlotRefs_376AE0_0x376ae0");
#endif

    switch (ctx->pc) {
        case 0x376b18u: goto label_376b18;
        case 0x376b4cu: goto label_376b4c;
        default: break;
    }

    ctx->pc = 0x376ae0u;

    // 0x376ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x376ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x376ae4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376ae8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x376ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x376aec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x376aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x376af0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x376af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x376af4: 0x2450cf20  addiu       $s0, $v0, -0x30E0
    ctx->pc = 0x376af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x376af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x376afc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x376b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x376b04: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x376b04u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x376b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376b0c: 0x26130f00  addiu       $s3, $s0, 0xF00
    ctx->pc = 0x376b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x376b10: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x376b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x376b14: 0x0  nop
    ctx->pc = 0x376b14u;
    // NOP
label_376b18:
    // 0x376b18: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x376B18u;
    {
        const bool branch_taken_0x376b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b18) {
            ctx->pc = 0x376B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376B18u;
            // 0x376b1c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376B50u;
            goto label_376b50;
        }
    }
    ctx->pc = 0x376B20u;
    // 0x376b20: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x376b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x376b24: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x376b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x376b28: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x376B28u;
    {
        const bool branch_taken_0x376b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b28) {
            ctx->pc = 0x376B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376B28u;
            // 0x376b2c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376B50u;
            goto label_376b50;
        }
    }
    ctx->pc = 0x376B30u;
    // 0x376b30: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x376b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x376b34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x376b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x376b38: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376B38u;
    {
        const bool branch_taken_0x376b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x376b38) {
            ctx->pc = 0x376B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376B38u;
            // 0x376b3c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376B50u;
            goto label_376b50;
        }
    }
    ctx->pc = 0x376B40u;
    // 0x376b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b44: 0xc0df62e  jal         func_37D8B8
    ctx->pc = 0x376B44u;
    SET_GPR_U32(ctx, 31, 0x376B4Cu);
    ctx->pc = 0x376B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B44u;
    // 0x376b48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8B8u, 0x376B44u, 0x376B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B4Cu;
label_376b4c:
    // 0x376b4c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x376b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_376b50:
    // 0x376b50: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x376b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x376b54: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x376B54u;
    {
        const bool branch_taken_0x376b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376b54) {
            ctx->pc = 0x376B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376B54u;
            // 0x376b58: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376b18;
        }
    }
    ctx->pc = 0x376B5Cu;
    // 0x376b5c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x376b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x376b60: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x376b60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x376b64: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x376b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x376b68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x376b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x376b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376b70: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x376b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376b78: 0x3e00008  jr          $ra
    ctx->pc = 0x376B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B78u;
        // 0x376b7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376B80u;
}
