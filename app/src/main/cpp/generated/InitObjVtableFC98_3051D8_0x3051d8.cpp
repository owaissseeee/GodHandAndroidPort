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

// Function: InitObjVtableFC98_3051D8
// Address: 0x3051d8 - 0x305200
void InitObjVtableFC98_3051D8_0x3051d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableFC98_3051D8_0x3051d8");
#endif

    switch (ctx->pc) {
        case 0x3051f4u: goto label_3051f4;
        default: break;
    }

    ctx->pc = 0x3051d8u;

    // 0x3051d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3051d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3051dc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3051dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3051e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3051e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3051e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3051e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051e8: 0x2442fc98  addiu       $v0, $v0, -0x368
    ctx->pc = 0x3051e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966424));
    // 0x3051ec: 0xc0c0a3a  jal         func_3028E8
    ctx->pc = 0x3051ECu;
    SET_GPR_U32(ctx, 31, 0x3051F4u);
    ctx->pc = 0x3051F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051ECu;
    // 0x3051f0: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028E8u, 0x3051ECu, 0x3051F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051F4u;
label_3051f4:
    // 0x3051f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3051f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3051f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3051F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051F8u;
        // 0x3051fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3051F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305200u;
}
