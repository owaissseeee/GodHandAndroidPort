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

// Function: func_00298C18
// Address: 0x298c18 - 0x298c58
void func_00298C18_0x298c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298C18_0x298c18");
#endif

    switch (ctx->pc) {
        case 0x298c34u: goto label_298c34;
        case 0x298c48u: goto label_298c48;
        default: break;
    }

    ctx->pc = 0x298c18u;

    // 0x298c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298c1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x298c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298c20: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298C20u;
    {
        const bool branch_taken_0x298c20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x298C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C20u;
        // 0x298c24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c20) {
            ctx->pc = 0x298C3Cu;
            goto label_298c3c;
        }
    }
    ctx->pc = 0x298C28u;
    // 0x298c28: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x298c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x298c2c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298C2Cu;
    SET_GPR_U32(ctx, 31, 0x298C34u);
    ctx->pc = 0x298C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C2Cu;
    // 0x298c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298C2Cu, 0x298C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C34u;
label_298c34:
    // 0x298c34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298C34u;
    {
        const bool branch_taken_0x298c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C34u;
        // 0x298c38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c34) {
            ctx->pc = 0x298C4Cu;
            goto label_298c4c;
        }
    }
    ctx->pc = 0x298C3Cu;
label_298c3c:
    // 0x298c3c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x298c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x298c40: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298C40u;
    SET_GPR_U32(ctx, 31, 0x298C48u);
    ctx->pc = 0x298C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C40u;
    // 0x298c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298C40u, 0x298C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C48u;
label_298c48:
    // 0x298c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298c4c:
    // 0x298c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x298C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C4Cu;
        // 0x298c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298C54u;
    // 0x298c54: 0x0  nop
    ctx->pc = 0x298c54u;
    // NOP
    ctx->pc = 0x298c58u;
}
