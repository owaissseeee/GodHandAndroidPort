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

// Function: func_00334CA0
// Address: 0x334ca0 - 0x334d10
void func_00334CA0_0x334ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334CA0_0x334ca0");
#endif

    switch (ctx->pc) {
        case 0x334cb4u: goto label_334cb4;
        case 0x334cd8u: goto label_334cd8;
        default: break;
    }

    ctx->pc = 0x334ca0u;

    // 0x334ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x334ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x334cac: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x334CACu;
    SET_GPR_U32(ctx, 31, 0x334CB4u);
    ctx->pc = 0x334CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CACu;
    // 0x334cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x334CACu, 0x334CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CB4u;
label_334cb4:
    // 0x334cb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x334cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334cb8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x334cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x334cbc: 0x2cc30011  sltiu       $v1, $a2, 0x11
    ctx->pc = 0x334cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x334cc0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x334cc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x334cc4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x334CC4u;
    {
        const bool branch_taken_0x334cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CC4u;
        // 0x334cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cc4) {
            ctx->pc = 0x334CFCu;
            goto label_334cfc;
        }
    }
    ctx->pc = 0x334CCCu;
    // 0x334ccc: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x334cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x334cd0: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x334cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x334cd4: 0x0  nop
    ctx->pc = 0x334cd4u;
    // NOP
label_334cd8:
    // 0x334cd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x334cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x334cdc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x334cdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334ce4: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x334CE4u;
    {
        const bool branch_taken_0x334ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x334CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CE4u;
        // 0x334ce8: 0xa6202b  sltu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ce4) {
            ctx->pc = 0x334D00u;
            goto label_334d00;
        }
    }
    ctx->pc = 0x334CECu;
    // 0x334cec: 0x0  nop
    ctx->pc = 0x334cecu;
    // NOP
    // 0x334cf0: 0x0  nop
    ctx->pc = 0x334cf0u;
    // NOP
    // 0x334cf4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x334CF4u;
    {
        const bool branch_taken_0x334cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x334CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CF4u;
        // 0x334cf8: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cf4) {
            ctx->pc = 0x334CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334cd8;
        }
    }
    ctx->pc = 0x334CFCu;
label_334cfc:
    // 0x334cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334d00:
    // 0x334d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334d08: 0x3e00008  jr          $ra
    ctx->pc = 0x334D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D08u;
        // 0x334d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334D10u;
}
