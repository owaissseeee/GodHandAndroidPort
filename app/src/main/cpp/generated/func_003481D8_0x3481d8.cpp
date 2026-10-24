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

// Function: func_003481D8
// Address: 0x3481d8 - 0x348210
void func_003481D8_0x3481d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003481D8_0x3481d8");
#endif

    switch (ctx->pc) {
        case 0x3481f0u: goto label_3481f0;
        default: break;
    }

    ctx->pc = 0x3481d8u;

    // 0x3481d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3481d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3481dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3481dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3481e0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x3481e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3481e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3481e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3481e8: 0xc0d2084  jal         func_348210
    ctx->pc = 0x3481E8u;
    SET_GPR_U32(ctx, 31, 0x3481F0u);
    ctx->pc = 0x3481ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481E8u;
    // 0x3481ec: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348210u, 0x3481E8u, 0x3481F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481F0u;
label_3481f0:
    // 0x3481f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3481f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3481f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3481F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3481F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481F4u;
        // 0x3481f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3481F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3481FCu;
    // 0x3481fc: 0x0  nop
    ctx->pc = 0x3481fcu;
    // NOP
    // 0x348200: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x348200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x348204: 0x0  nop
    ctx->pc = 0x348204u;
    // NOP
    // 0x348208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x348208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34820c: 0x0  nop
    ctx->pc = 0x34820cu;
    // NOP
    ctx->pc = 0x348210u;
}
