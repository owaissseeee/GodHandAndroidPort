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

// Function: cSndMemHeap_GlobalCtor
// Address: 0x2cd9e8 - 0x2cda08
void cSndMemHeap_GlobalCtor_0x2cd9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_GlobalCtor_0x2cd9e8");
#endif

    switch (ctx->pc) {
        case 0x2cd9fcu: goto label_2cd9fc;
        default: break;
    }

    ctx->pc = 0x2cd9e8u;

    // 0x2cd9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd9f4: 0xc0b3668  jal         func_2CD9A0
    ctx->pc = 0x2CD9F4u;
    SET_GPR_U32(ctx, 31, 0x2CD9FCu);
    ctx->pc = 0x2CD9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD9F4u;
    // 0x2cd9f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD9A0u, 0x2CD9F4u, 0x2CD9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9FCu;
label_2cd9fc:
    // 0x2cd9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cda00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA00u;
        // 0x2cda04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA08u;
}
