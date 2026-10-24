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

// Function: func_001BB508
// Address: 0x1bb508 - 0x1bb548
void func_001BB508_0x1bb508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BB508_0x1bb508");
#endif

    switch (ctx->pc) {
        case 0x1bb52cu: goto label_1bb52c;
        case 0x1bb534u: goto label_1bb534;
        default: break;
    }

    ctx->pc = 0x1bb508u;

    // 0x1bb508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb50c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bb510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bb514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb520: 0xa2020531  sb          $v0, 0x531($s0)
    ctx->pc = 0x1bb520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bb524: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1BB524u;
    SET_GPR_U32(ctx, 31, 0x1BB52Cu);
    ctx->pc = 0x1BB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB524u;
    // 0x1bb528: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1BB524u, 0x1BB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB52Cu;
label_1bb52c:
    // 0x1bb52c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1BB52Cu;
    SET_GPR_U32(ctx, 31, 0x1BB534u);
    ctx->pc = 0x1BB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB52Cu;
    // 0x1bb530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1BB52Cu, 0x1BB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB534u;
label_1bb534:
    // 0x1bb534: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bb534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb53c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB53Cu;
        // 0x1bb540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB544u;
    // 0x1bb544: 0x0  nop
    ctx->pc = 0x1bb544u;
    // NOP
    ctx->pc = 0x1bb548u;
}
