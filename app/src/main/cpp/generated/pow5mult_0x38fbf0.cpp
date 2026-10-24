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

// Function: pow5mult
// Address: 0x38fbf0 - 0x38fc68
void pow5mult_0x38fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pow5mult_0x38fbf0");
#endif

    switch (ctx->pc) {
        case 0x38fc10u: goto label_38fc10;
        case 0x38fc18u: goto label_38fc18;
        case 0x38fc58u: goto label_38fc58;
        default: break;
    }

    ctx->pc = 0x38fbf0u;

    // 0x38fbf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38fbf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38fbf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38fbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fbfc: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x38fbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x38fc00: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38FC00u;
    {
        const bool branch_taken_0x38fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC00u;
        // 0x38fc04: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc00) {
            ctx->pc = 0x38FC2Cu;
            goto label_38fc2c;
        }
    }
    ctx->pc = 0x38FC08u;
    // 0x38fc08: 0x24053d09  addiu       $a1, $zero, 0x3D09
    ctx->pc = 0x38fc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
    // 0x38fc0c: 0x0  nop
    ctx->pc = 0x38fc0cu;
    // NOP
label_38fc10:
    // 0x38fc10: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x38FC10u;
    SET_GPR_U32(ctx, 31, 0x38FC18u);
    ctx->pc = 0x38FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC10u;
    // 0x38fc14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x38FC10u, 0x38FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC18u;
label_38fc18:
    // 0x38fc18: 0x2610fffa  addiu       $s0, $s0, -0x6
    ctx->pc = 0x38fc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x38fc1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc20: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x38fc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x38fc24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38FC24u;
    {
        const bool branch_taken_0x38fc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC24u;
        // 0x38fc28: 0x24053d09  addiu       $a1, $zero, 0x3D09 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc24) {
            ctx->pc = 0x38FC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fc10;
        }
    }
    ctx->pc = 0x38FC2Cu;
label_38fc2c:
    // 0x38fc2c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FC2Cu;
    {
        const bool branch_taken_0x38fc2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC2Cu;
        // 0x38fc30: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc2c) {
            ctx->pc = 0x38FC3Cu;
            goto label_38fc3c;
        }
    }
    ctx->pc = 0x38FC34u;
    // 0x38fc34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38FC34u;
    {
        const bool branch_taken_0x38fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC34u;
        // 0x38fc38: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc34) {
            ctx->pc = 0x38FC58u;
            goto label_38fc58;
        }
    }
    ctx->pc = 0x38FC3Cu;
label_38fc3c:
    // 0x38fc3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x38fc40: 0x24425160  addiu       $v0, $v0, 0x5160
    ctx->pc = 0x38fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20832));
    // 0x38fc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38fc48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38fc4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38fc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc50: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x38FC50u;
    SET_GPR_U32(ctx, 31, 0x38FC58u);
    ctx->pc = 0x38FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC50u;
    // 0x38fc54: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x38FC50u, 0x38FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC58u;
label_38fc58:
    // 0x38fc58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38fc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38fc5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38fc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fc60: 0x3e00008  jr          $ra
    ctx->pc = 0x38FC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC60u;
        // 0x38fc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FC68u;
}
