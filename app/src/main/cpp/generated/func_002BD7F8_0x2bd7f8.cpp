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

// Function: func_002BD7F8
// Address: 0x2bd7f8 - 0x2bd828
void func_002BD7F8_0x2bd7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BD7F8_0x2bd7f8");
#endif

    switch (ctx->pc) {
        case 0x2bd81cu: goto label_2bd81c;
        default: break;
    }

    ctx->pc = 0x2bd7f8u;

    // 0x2bd7f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bd7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd7fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bd7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bd800: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2bd800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd804: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2bd804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd808: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bd808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bd80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bd80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd814: 0xc0aedd8  jal         func_2BB760
    ctx->pc = 0x2BD814u;
    SET_GPR_U32(ctx, 31, 0x2BD81Cu);
    ctx->pc = 0x2BD818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD814u;
    // 0x2bd818: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB760u, 0x2BD814u, 0x2BD81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD81Cu;
label_2bd81c:
    // 0x2bd81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bd81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd820: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD820u;
        // 0x2bd824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD828u;
}
