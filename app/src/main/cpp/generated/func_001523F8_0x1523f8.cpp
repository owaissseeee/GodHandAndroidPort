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

// Function: func_001523F8
// Address: 0x1523f8 - 0x152428
void func_001523F8_0x1523f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001523F8_0x1523f8");
#endif

    switch (ctx->pc) {
        case 0x15241cu: goto label_15241c;
        default: break;
    }

    ctx->pc = 0x1523f8u;

    // 0x1523f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1523fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1523fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152400: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x152400u;
    {
        const bool branch_taken_0x152400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x152404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152400u;
        // 0x152404: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152400) {
            ctx->pc = 0x15241Cu;
            goto label_15241c;
        }
    }
    ctx->pc = 0x152408u;
    // 0x152408: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152408u;
    {
        const bool branch_taken_0x152408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152408u;
        // 0x15240c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152408) {
            ctx->pc = 0x152420u;
            goto label_152420;
        }
    }
    ctx->pc = 0x152410u;
    // 0x152410: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x152410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x152414: 0xc05423e  jal         func_1508F8
    ctx->pc = 0x152414u;
    SET_GPR_U32(ctx, 31, 0x15241Cu);
    ctx->pc = 0x152418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152414u;
    // 0x152418: 0x248464a0  addiu       $a0, $a0, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508F8u, 0x152414u, 0x15241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15241Cu;
label_15241c:
    // 0x15241c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152420:
    // 0x152420: 0x3e00008  jr          $ra
    ctx->pc = 0x152420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152420u;
        // 0x152424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152428u;
}
