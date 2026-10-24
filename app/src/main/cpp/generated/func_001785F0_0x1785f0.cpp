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

// Function: func_001785F0
// Address: 0x1785f0 - 0x178618
void func_001785F0_0x1785f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001785F0_0x1785f0");
#endif

    switch (ctx->pc) {
        case 0x17860cu: goto label_17860c;
        default: break;
    }

    ctx->pc = 0x1785f0u;

    // 0x1785f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1785f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1785f4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1785f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1785f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1785f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1785fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1785fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178600: 0x244214a8  addiu       $v0, $v0, 0x14A8
    ctx->pc = 0x178600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5288));
    // 0x178604: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x178604u;
    SET_GPR_U32(ctx, 31, 0x17860Cu);
    ctx->pc = 0x178608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178604u;
    // 0x178608: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x178604u, 0x17860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17860Cu;
label_17860c:
    // 0x17860c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17860cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178610: 0x3e00008  jr          $ra
    ctx->pc = 0x178610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178610u;
        // 0x178614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178618u;
}
