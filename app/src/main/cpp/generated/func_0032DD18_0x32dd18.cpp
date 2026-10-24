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

// Function: func_0032DD18
// Address: 0x32dd18 - 0x32dd70
void func_0032DD18_0x32dd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DD18_0x32dd18");
#endif

    switch (ctx->pc) {
        case 0x32dd50u: goto label_32dd50;
        default: break;
    }

    ctx->pc = 0x32dd18u;

    // 0x32dd18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32dd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32dd1c: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x32dd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x32dd20: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32DD20u;
    {
        const bool branch_taken_0x32dd20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD20u;
        // 0x32dd24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd20) {
            ctx->pc = 0x32DD38u;
            goto label_32dd38;
        }
    }
    ctx->pc = 0x32DD28u;
    // 0x32dd28: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32dd2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32DD2Cu;
    {
        const bool branch_taken_0x32dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD2Cu;
        // 0x32dd30: 0x24842b98  addiu       $a0, $a0, 0x2B98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd2c) {
            ctx->pc = 0x32DD48u;
            goto label_32dd48;
        }
    }
    ctx->pc = 0x32DD34u;
    // 0x32dd34: 0x0  nop
    ctx->pc = 0x32dd34u;
    // NOP
label_32dd38:
    // 0x32dd38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DD38u;
    {
        const bool branch_taken_0x32dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD38u;
        // 0x32dd3c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd38) {
            ctx->pc = 0x32DD58u;
            goto label_32dd58;
        }
    }
    ctx->pc = 0x32DD40u;
    // 0x32dd40: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32dd44: 0x24842bc0  addiu       $a0, $a0, 0x2BC0
    ctx->pc = 0x32dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11200));
label_32dd48:
    // 0x32dd48: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32DD48u;
    SET_GPR_U32(ctx, 31, 0x32DD50u);
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32DD48u, 0x32DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD50u;
label_32dd50:
    // 0x32dd50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32DD50u;
    {
        const bool branch_taken_0x32dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD50u;
        // 0x32dd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dd50) {
            ctx->pc = 0x32DD60u;
            goto label_32dd60;
        }
    }
    ctx->pc = 0x32DD58u;
label_32dd58:
    // 0x32dd58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32dd5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x32dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32dd60:
    // 0x32dd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32dd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dd64: 0x3e00008  jr          $ra
    ctx->pc = 0x32DD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DD64u;
        // 0x32dd68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DD6Cu;
    // 0x32dd6c: 0x0  nop
    ctx->pc = 0x32dd6cu;
    // NOP
    ctx->pc = 0x32dd70u;
}
