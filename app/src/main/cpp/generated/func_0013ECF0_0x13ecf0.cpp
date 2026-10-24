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

// Function: func_0013ECF0
// Address: 0x13ecf0 - 0x13ed28
void func_0013ECF0_0x13ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013ECF0_0x13ecf0");
#endif

    switch (ctx->pc) {
        case 0x13ed0cu: goto label_13ed0c;
        default: break;
    }

    ctx->pc = 0x13ecf0u;

    // 0x13ecf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ecf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13ecf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ecf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13ecfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ed00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ed04: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13ED04u;
    SET_GPR_U32(ctx, 31, 0x13ED0Cu);
    ctx->pc = 0x13ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED04u;
    // 0x13ed08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13ED04u, 0x13ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED0Cu;
label_13ed0c:
    // 0x13ed0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13ed10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ed10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ed14: 0xa60300be  sh          $v1, 0xBE($s0)
    ctx->pc = 0x13ed14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 190), (uint16_t)GPR_U32(ctx, 3));
    // 0x13ed18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13ed18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ed1c: 0x3e00008  jr          $ra
    ctx->pc = 0x13ED1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED1Cu;
        // 0x13ed20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ED1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ED24u;
    // 0x13ed24: 0x0  nop
    ctx->pc = 0x13ed24u;
    // NOP
    ctx->pc = 0x13ed28u;
}
