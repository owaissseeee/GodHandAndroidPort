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

// Function: InitObjVtableE_199DC0
// Address: 0x199dc0 - 0x199df8
void InitObjVtableE_199DC0_0x199dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableE_199DC0_0x199dc0");
#endif

    switch (ctx->pc) {
        case 0x199dd4u: goto label_199dd4;
        default: break;
    }

    ctx->pc = 0x199dc0u;

    // 0x199dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199dc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199dcc: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x199DCCu;
    SET_GPR_U32(ctx, 31, 0x199DD4u);
    ctx->pc = 0x199DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DCCu;
    // 0x199dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x199DCCu, 0x199DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199DD4u;
label_199dd4:
    // 0x199dd4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x199dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ddc: 0x246351c0  addiu       $v1, $v1, 0x51C0
    ctx->pc = 0x199ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20928));
    // 0x199de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199de4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x199de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x199de8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199dec: 0x3e00008  jr          $ra
    ctx->pc = 0x199DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DECu;
        // 0x199df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199DF4u;
    // 0x199df4: 0x0  nop
    ctx->pc = 0x199df4u;
    // NOP
    ctx->pc = 0x199df8u;
}
