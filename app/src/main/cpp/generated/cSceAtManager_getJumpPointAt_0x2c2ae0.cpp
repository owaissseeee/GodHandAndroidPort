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

// Function: cSceAtManager_getJumpPointAt
// Address: 0x2c2ae0 - 0x2c2b58
void cSceAtManager_getJumpPointAt_0x2c2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_getJumpPointAt_0x2c2ae0");
#endif

    switch (ctx->pc) {
        case 0x2c2b00u: goto label_2c2b00;
        case 0x2c2b10u: goto label_2c2b10;
        case 0x2c2b2cu: goto label_2c2b2c;
        default: break;
    }

    ctx->pc = 0x2c2ae0u;

    // 0x2c2ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c2ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c2ae4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c2ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c2ae8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c2ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c2aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2af0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c2af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c2af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2af8: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C2AF8u;
    SET_GPR_U32(ctx, 31, 0x2C2B00u);
    ctx->pc = 0x2C2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2AF8u;
    // 0x2c2afc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C2AF8u, 0x2C2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B00u;
label_2c2b00:
    // 0x2c2b00: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c2b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2b04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2B04u;
    {
        const bool branch_taken_0x2c2b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B04u;
        // 0x2c2b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b04) {
            ctx->pc = 0x2C2B24u;
            goto label_2c2b24;
        }
    }
    ctx->pc = 0x2C2B0Cu;
    // 0x2c2b0c: 0x0  nop
    ctx->pc = 0x2c2b0cu;
    // NOP
label_2c2b10:
    // 0x2c2b10: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2B10u;
    {
        const bool branch_taken_0x2c2b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2c2b10) {
            ctx->pc = 0x2C2B24u;
            goto label_2c2b24;
        }
    }
    ctx->pc = 0x2C2B18u;
    // 0x2c2b18: 0x90a20079  lbu         $v0, 0x79($a1)
    ctx->pc = 0x2c2b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 121)));
    // 0x2c2b1c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2B1Cu;
    {
        const bool branch_taken_0x2c2b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B1Cu;
        // 0x2c2b20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2b1c) {
            ctx->pc = 0x2C2B3Cu;
            goto label_2c2b3c;
        }
    }
    ctx->pc = 0x2C2B24u;
label_2c2b24:
    // 0x2c2b24: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C2B24u;
    SET_GPR_U32(ctx, 31, 0x2C2B2Cu);
    ctx->pc = 0x2C2B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2B24u;
    // 0x2c2b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C2B24u, 0x2C2B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B2Cu;
label_2c2b2c:
    // 0x2c2b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c2b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b30: 0x54a0fff7  bnel        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C2B30u;
    {
        const bool branch_taken_0x2c2b30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b30) {
            ctx->pc = 0x2C2B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2B30u;
            // 0x2c2b34: 0x90a20035  lbu         $v0, 0x35($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2b10;
        }
    }
    ctx->pc = 0x2C2B38u;
    // 0x2c2b38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2b3c:
    // 0x2c2b3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c2b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2b40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c2b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2b44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c2b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2B4Cu;
        // 0x2c2b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2B54u;
    // 0x2c2b54: 0x0  nop
    ctx->pc = 0x2c2b54u;
    // NOP
    ctx->pc = 0x2c2b58u;
}
