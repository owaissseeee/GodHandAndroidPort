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

// Function: func_00375D98
// Address: 0x375d98 - 0x375de0
void func_00375D98_0x375d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375D98_0x375d98");
#endif

    switch (ctx->pc) {
        case 0x375dc0u: goto label_375dc0;
        case 0x375dd0u: goto label_375dd0;
        default: break;
    }

    ctx->pc = 0x375d98u;

    // 0x375d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375d9c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x375d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x375da0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x375da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x375da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375da8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x375da8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x375dac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x375DACu;
    {
        const bool branch_taken_0x375dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x375DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DACu;
        // 0x375db0: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375dac) {
            ctx->pc = 0x375DC8u;
            goto label_375dc8;
        }
    }
    ctx->pc = 0x375DB4u;
    // 0x375db4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x375db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375db8: 0xc0dd778  jal         func_375DE0
    ctx->pc = 0x375DB8u;
    SET_GPR_U32(ctx, 31, 0x375DC0u);
    ctx->pc = 0x375DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375DB8u;
    // 0x375dbc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375DE0u, 0x375DB8u, 0x375DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DC0u;
label_375dc0:
    // 0x375dc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x375DC0u;
    {
        const bool branch_taken_0x375dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DC0u;
        // 0x375dc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375dc0) {
            ctx->pc = 0x375DD4u;
            goto label_375dd4;
        }
    }
    ctx->pc = 0x375DC8u;
label_375dc8:
    // 0x375dc8: 0xc0dd79e  jal         func_375E78
    ctx->pc = 0x375DC8u;
    SET_GPR_U32(ctx, 31, 0x375DD0u);
    ctx->pc = 0x375E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375E78u, 0x375DC8u, 0x375DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DD0u;
label_375dd0:
    // 0x375dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375dd4:
    // 0x375dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x375DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DD4u;
        // 0x375dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375DDCu;
    // 0x375ddc: 0x0  nop
    ctx->pc = 0x375ddcu;
    // NOP
    ctx->pc = 0x375de0u;
}
