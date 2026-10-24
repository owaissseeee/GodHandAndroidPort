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

// Function: func_00346D80
// Address: 0x346d80 - 0x346dd0
void func_00346D80_0x346d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346D80_0x346d80");
#endif

    switch (ctx->pc) {
        case 0x346d98u: goto label_346d98;
        case 0x346db4u: goto label_346db4;
        default: break;
    }

    ctx->pc = 0x346d80u;

    // 0x346d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346d88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x346d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x346d90: 0xc0d1b74  jal         func_346DD0
    ctx->pc = 0x346D90u;
    SET_GPR_U32(ctx, 31, 0x346D98u);
    ctx->pc = 0x346D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D90u;
    // 0x346d94: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346DD0u, 0x346D90u, 0x346D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D98u;
label_346d98:
    // 0x346d98: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x346d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x346d9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x346d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x346da0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x346da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346da4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346DA4u;
    {
        const bool branch_taken_0x346da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x346DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DA4u;
        // 0x346da8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346da4) {
            ctx->pc = 0x346DBCu;
            goto label_346dbc;
        }
    }
    ctx->pc = 0x346DACu;
    // 0x346dac: 0xc0d8202  jal         func_360808
    ctx->pc = 0x346DACu;
    SET_GPR_U32(ctx, 31, 0x346DB4u);
    ctx->pc = 0x346DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DACu;
    // 0x346db0: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360808u, 0x346DACu, 0x346DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DB4u;
label_346db4:
    // 0x346db4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x346db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x346db8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x346db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_346dbc:
    // 0x346dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346dc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x346dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x346DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DC4u;
        // 0x346dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346DCCu;
    // 0x346dcc: 0x0  nop
    ctx->pc = 0x346dccu;
    // NOP
    ctx->pc = 0x346dd0u;
}
