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

// Function: func_003243C8
// Address: 0x3243c8 - 0x324400
void func_003243C8_0x3243c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003243C8_0x3243c8");
#endif

    switch (ctx->pc) {
        case 0x3243dcu: goto label_3243dc;
        case 0x3243e4u: goto label_3243e4;
        case 0x3243ecu: goto label_3243ec;
        default: break;
    }

    ctx->pc = 0x3243c8u;

    // 0x3243c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3243c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3243cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3243ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3243d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3243d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3243d4: 0xc0c9220  jal         func_324880
    ctx->pc = 0x3243D4u;
    SET_GPR_U32(ctx, 31, 0x3243DCu);
    ctx->pc = 0x3243D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3243D4u;
    // 0x3243d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x3243D4u, 0x3243DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3243DCu;
label_3243dc:
    // 0x3243dc: 0xc0c9100  jal         func_324400
    ctx->pc = 0x3243DCu;
    SET_GPR_U32(ctx, 31, 0x3243E4u);
    ctx->pc = 0x3243E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3243DCu;
    // 0x3243e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324400u, 0x3243DCu, 0x3243E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3243E4u;
label_3243e4:
    // 0x3243e4: 0xc0c9226  jal         func_324898
    ctx->pc = 0x3243E4u;
    SET_GPR_U32(ctx, 31, 0x3243ECu);
    ctx->pc = 0x3243E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3243E4u;
    // 0x3243e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x3243E4u, 0x3243ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3243ECu;
label_3243ec:
    // 0x3243ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3243ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3243f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3243f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3243f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3243f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3243F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3243FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243F8u;
        // 0x3243fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324400u;
}
