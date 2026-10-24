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

// Function: ForwardSoundEventAll_375DE0
// Address: 0x375de0 - 0x375e78
void ForwardSoundEventAll_375DE0_0x375de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardSoundEventAll_375DE0_0x375de0");
#endif

    switch (ctx->pc) {
        case 0x375e20u: goto label_375e20;
        case 0x375e34u: goto label_375e34;
        default: break;
    }

    ctx->pc = 0x375de0u;

    // 0x375de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x375de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x375de4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x375de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375de8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x375de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x375dec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x375decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x375df0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x375df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x375df4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x375df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x375df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x375df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x375dfc: 0x24500850  addiu       $s0, $v0, 0x850
    ctx->pc = 0x375dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x375e00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x375e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x375e04: 0x49403  sra         $s2, $a0, 16
    ctx->pc = 0x375e04u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 16));
    // 0x375e08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x375e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x375e0c: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x375e0cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x375e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375e14: 0x26142a00  addiu       $s4, $s0, 0x2A00
    ctx->pc = 0x375e14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 10752));
    // 0x375e18: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x375e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375e1c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x375e1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_375e20:
    // 0x375e20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x375E20u;
    {
        const bool branch_taken_0x375e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E20u;
        // 0x375e24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e20) {
            ctx->pc = 0x375E44u;
            goto label_375e44;
        }
    }
    ctx->pc = 0x375E28u;
    // 0x375e28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x375e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x375e2c: 0xc0dd79e  jal         func_375E78
    ctx->pc = 0x375E2Cu;
    SET_GPR_U32(ctx, 31, 0x375E34u);
    ctx->pc = 0x375E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E2Cu;
    // 0x375e30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375E78u, 0x375E2Cu, 0x375E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E34u;
label_375e34:
    // 0x375e34: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x375E34u;
    {
        const bool branch_taken_0x375e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x375E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E34u;
        // 0x375e38: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e34) {
            ctx->pc = 0x375E48u;
            goto label_375e48;
        }
    }
    ctx->pc = 0x375E3Cu;
    // 0x375e3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x375E3Cu;
    {
        const bool branch_taken_0x375e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E3Cu;
        // 0x375e40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e3c) {
            ctx->pc = 0x375E58u;
            goto label_375e58;
        }
    }
    ctx->pc = 0x375E44u;
label_375e44:
    // 0x375e44: 0x261000e0  addiu       $s0, $s0, 0xE0
    ctx->pc = 0x375e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_375e48:
    // 0x375e48: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x375e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x375e4c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x375E4Cu;
    {
        const bool branch_taken_0x375e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x375e4c) {
            ctx->pc = 0x375E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375E4Cu;
            // 0x375e50: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375e20;
        }
    }
    ctx->pc = 0x375E54u;
    // 0x375e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375e58:
    // 0x375e58: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x375e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375e5c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x375e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375e60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x375e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375e64: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x375e64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375e68: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x375e68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375e70: 0x3e00008  jr          $ra
    ctx->pc = 0x375E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E70u;
        // 0x375e74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375E78u;
}
