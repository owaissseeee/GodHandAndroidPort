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

// Function: func_00170438
// Address: 0x170438 - 0x170470
void func_00170438_0x170438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170438_0x170438");
#endif

    switch (ctx->pc) {
        case 0x170460u: goto label_170460;
        default: break;
    }

    ctx->pc = 0x170438u;

    // 0x170438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17043c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x17043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170440: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x170440u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x170444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17044c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x170450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170454: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x170454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x170458: 0xc0c194a  jal         func_306528
    ctx->pc = 0x170458u;
    SET_GPR_U32(ctx, 31, 0x170460u);
    ctx->pc = 0x17045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170458u;
    // 0x17045c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x170458u, 0x170460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170460u;
label_170460:
    // 0x170460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170464: 0x3e00008  jr          $ra
    ctx->pc = 0x170464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170464u;
        // 0x170468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17046Cu;
    // 0x17046c: 0x0  nop
    ctx->pc = 0x17046cu;
    // NOP
    ctx->pc = 0x170470u;
}
