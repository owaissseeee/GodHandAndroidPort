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

// Function: InitActorSetVtable2_170CE8
// Address: 0x170ce8 - 0x170d20
void InitActorSetVtable2_170CE8_0x170ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActorSetVtable2_170CE8_0x170ce8");
#endif

    switch (ctx->pc) {
        case 0x170cfcu: goto label_170cfc;
        default: break;
    }

    ctx->pc = 0x170ce8u;

    // 0x170ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170cf4: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x170CF4u;
    SET_GPR_U32(ctx, 31, 0x170CFCu);
    ctx->pc = 0x170CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170CF4u;
    // 0x170cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x170CF4u, 0x170CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CFCu;
label_170cfc:
    // 0x170cfc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x170d00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d04: 0x24630850  addiu       $v1, $v1, 0x850
    ctx->pc = 0x170d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x170d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d0c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x170d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x170d10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170d14: 0x3e00008  jr          $ra
    ctx->pc = 0x170D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D14u;
        // 0x170d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170D1Cu;
    // 0x170d1c: 0x0  nop
    ctx->pc = 0x170d1cu;
    // NOP
    ctx->pc = 0x170d20u;
}
