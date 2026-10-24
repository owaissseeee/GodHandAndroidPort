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

// Function: func_001672F0
// Address: 0x1672f0 - 0x167328
void func_001672F0_0x1672f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001672F0_0x1672f0");
#endif

    switch (ctx->pc) {
        case 0x167304u: goto label_167304;
        case 0x16730cu: goto label_16730c;
        default: break;
    }

    ctx->pc = 0x1672f0u;

    // 0x1672f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1672f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1672f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1672f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1672f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1672f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1672fc: 0xc07f1b2  jal         func_1FC6C8
    ctx->pc = 0x1672FCu;
    SET_GPR_U32(ctx, 31, 0x167304u);
    ctx->pc = 0x167300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672FCu;
    // 0x167300: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6C8u, 0x1672FCu, 0x167304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167304u;
label_167304:
    // 0x167304: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167304u;
    SET_GPR_U32(ctx, 31, 0x16730Cu);
    ctx->pc = 0x167308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167304u;
    // 0x167308: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167304u, 0x16730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16730Cu;
label_16730c:
    // 0x16730c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x16730cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x167310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167318: 0xa06285f8  sb          $v0, -0x7A08($v1)
    ctx->pc = 0x167318u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5E85F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5E85F8u, _value); } while (0);
    // 0x16731c: 0x3e00008  jr          $ra
    ctx->pc = 0x16731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16731Cu;
        // 0x167320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16731Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167324u;
    // 0x167324: 0x0  nop
    ctx->pc = 0x167324u;
    // NOP
    ctx->pc = 0x167328u;
}
