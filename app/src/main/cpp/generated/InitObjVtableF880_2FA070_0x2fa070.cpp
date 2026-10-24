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

// Function: InitObjVtableF880_2FA070
// Address: 0x2fa070 - 0x2fa0b0
void InitObjVtableF880_2FA070_0x2fa070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableF880_2FA070_0x2fa070");
#endif

    switch (ctx->pc) {
        case 0x2fa08cu: goto label_2fa08c;
        default: break;
    }

    ctx->pc = 0x2fa070u;

    // 0x2fa070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa074: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2fa074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2fa078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa07c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2fa07cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa080: 0x2442f880  addiu       $v0, $v0, -0x780
    ctx->pc = 0x2fa080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965376));
    // 0x2fa084: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2FA084u;
    SET_GPR_U32(ctx, 31, 0x2FA08Cu);
    ctx->pc = 0x2FA088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA084u;
    // 0x2fa088: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2FA084u, 0x2FA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA08Cu;
label_2fa08c:
    // 0x2fa08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa090: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA090u;
        // 0x2fa094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA098u;
    // 0x2fa098: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2fa098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fa09c: 0x0  nop
    ctx->pc = 0x2fa09cu;
    // NOP
    // 0x2fa0a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2fa0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fa0a4: 0x0  nop
    ctx->pc = 0x2fa0a4u;
    // NOP
    // 0x2fa0a8: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x2fa0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2fa0ac: 0x0  nop
    ctx->pc = 0x2fa0acu;
    // NOP
    ctx->pc = 0x2fa0b0u;
}
