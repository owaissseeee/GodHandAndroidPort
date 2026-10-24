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

// Function: FindResolveActor_295978
// Address: 0x295978 - 0x2959b0
void FindResolveActor_295978_0x295978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindResolveActor_295978_0x295978");
#endif

    switch (ctx->pc) {
        case 0x295998u: goto label_295998;
        default: break;
    }

    ctx->pc = 0x295978u;

    // 0x295978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29597c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295988: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x295988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x29598c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x29598cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x295990: 0xc0a421a  jal         func_290868
    ctx->pc = 0x295990u;
    SET_GPR_U32(ctx, 31, 0x295998u);
    ctx->pc = 0x295994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295990u;
    // 0x295994: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x295990u, 0x295998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295998u;
label_295998:
    // 0x295998: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x295998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x29599c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29599cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2959a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2959a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2959a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2959a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2959a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2959A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2959ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2959A8u;
        // 0x2959ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2959A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2959B0u;
}
