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

// Function: isceSifSendCmd
// Address: 0x3b26c8 - 0x3b2708
void isceSifSendCmd_0x3b26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isceSifSendCmd_0x3b26c8");
#endif

    switch (ctx->pc) {
        case 0x3b26f8u: goto label_3b26f8;
        default: break;
    }

    ctx->pc = 0x3b26c8u;

    // 0x3b26c8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3b26c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26cc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3b26ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26d0: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x3b26d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b26d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b26d8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3b26d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3b26dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b26e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b26e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b26e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26e8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3b26e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26ec: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x3b26ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26f0: 0xc0ec954  jal         func_3B2550
    ctx->pc = 0x3B26F0u;
    SET_GPR_U32(ctx, 31, 0x3B26F8u);
    ctx->pc = 0x3B26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26F0u;
    // 0x3b26f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2550u, 0x3B26F0u, 0x3B26F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26F8u;
label_3b26f8:
    // 0x3b26f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b26f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b26fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B26FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26FCu;
        // 0x3b2700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B26FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2704u;
    // 0x3b2704: 0x0  nop
    ctx->pc = 0x3b2704u;
    // NOP
    ctx->pc = 0x3b2708u;
}
