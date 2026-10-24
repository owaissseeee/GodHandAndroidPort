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

// Function: func_0019C118
// Address: 0x19c118 - 0x19c150
void func_0019C118_0x19c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C118_0x19c118");
#endif

    switch (ctx->pc) {
        case 0x19c12cu: goto label_19c12c;
        default: break;
    }

    ctx->pc = 0x19c118u;

    // 0x19c118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c11c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c124: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x19C124u;
    SET_GPR_U32(ctx, 31, 0x19C12Cu);
    ctx->pc = 0x19C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C124u;
    // 0x19c128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x19C124u, 0x19C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C12Cu;
label_19c12c:
    // 0x19c12c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x19c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x19c130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c134: 0x24635ac0  addiu       $v1, $v1, 0x5AC0
    ctx->pc = 0x19c134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x19c138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c13c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x19c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x19c140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c144: 0x3e00008  jr          $ra
    ctx->pc = 0x19C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C144u;
        // 0x19c148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C14Cu;
    // 0x19c14c: 0x0  nop
    ctx->pc = 0x19c14cu;
    // NOP
    ctx->pc = 0x19c150u;
}
