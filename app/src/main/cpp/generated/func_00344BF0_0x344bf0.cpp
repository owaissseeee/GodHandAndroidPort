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

// Function: func_00344BF0
// Address: 0x344bf0 - 0x344c30
void func_00344BF0_0x344bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344BF0_0x344bf0");
#endif

    ctx->pc = 0x344bf0u;

    // 0x344bf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x344bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344bf4: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x344bf4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x344bf8: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x344BF8u;
    {
        const bool branch_taken_0x344bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x344BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BF8u;
        // 0x344bfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344bf8) {
            ctx->pc = 0x344C24u;
            goto label_344c24;
        }
    }
    ctx->pc = 0x344C00u;
    // 0x344c00: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x344C00u;
    {
        const bool branch_taken_0x344c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x344c00) {
            ctx->pc = 0x344C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344C00u;
            // 0x344c04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344C18u;
            goto label_344c18;
        }
    }
    ctx->pc = 0x344C08u;
    // 0x344c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344c0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x344C0Cu;
    {
        const bool branch_taken_0x344c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C0Cu;
        // 0x344c10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c0c) {
            ctx->pc = 0x344C1Cu;
            goto label_344c1c;
        }
    }
    ctx->pc = 0x344C14u;
    // 0x344c14: 0x0  nop
    ctx->pc = 0x344c14u;
    // NOP
label_344c18:
    // 0x344c18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x344c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344c1c:
    // 0x344c1c: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x344C1Cu;
    {
        const bool branch_taken_0x344c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x344c1c) {
            ctx->pc = 0x344C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344C1Cu;
            // 0x344c20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344C24u;
            goto label_344c24;
        }
    }
    ctx->pc = 0x344C24u;
label_344c24:
    // 0x344c24: 0x3e00008  jr          $ra
    ctx->pc = 0x344C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C24u;
        // 0x344c28: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344C2Cu;
    // 0x344c2c: 0x0  nop
    ctx->pc = 0x344c2cu;
    // NOP
    ctx->pc = 0x344c30u;
}
