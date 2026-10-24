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

// Function: func_00183348
// Address: 0x183348 - 0x183380
void func_00183348_0x183348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00183348_0x183348");
#endif

    switch (ctx->pc) {
        case 0x18335cu: goto label_18335c;
        default: break;
    }

    ctx->pc = 0x183348u;

    // 0x183348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18334c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183354: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x183354u;
    SET_GPR_U32(ctx, 31, 0x18335Cu);
    ctx->pc = 0x183358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183354u;
    // 0x183358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x183354u, 0x18335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18335Cu;
label_18335c:
    // 0x18335c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x18335cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x183360: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x183360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183364: 0x24632b48  addiu       $v1, $v1, 0x2B48
    ctx->pc = 0x183364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11080));
    // 0x183368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18336c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x18336cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x183370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183374: 0x3e00008  jr          $ra
    ctx->pc = 0x183374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183374u;
        // 0x183378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18337Cu;
    // 0x18337c: 0x0  nop
    ctx->pc = 0x18337cu;
    // NOP
    ctx->pc = 0x183380u;
}
