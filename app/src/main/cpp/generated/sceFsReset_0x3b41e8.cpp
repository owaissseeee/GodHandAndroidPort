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

// Function: sceFsReset
// Address: 0x3b41e8 - 0x3b4220
void sceFsReset_0x3b41e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceFsReset_0x3b41e8");
#endif

    switch (ctx->pc) {
        case 0x3b420cu: goto label_3b420c;
        default: break;
    }

    ctx->pc = 0x3b41e8u;

    // 0x3b41e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b41e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b41ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b41f0: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b41f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b41f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b41f8: 0xac40aedc  sw          $zero, -0x5124($v0)
    ctx->pc = 0x3b41f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAEDCu, _value); } while (0);
    // 0x3b41fc: 0x248416e8  addiu       $a0, $a0, 0x16E8
    ctx->pc = 0x3b41fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5864));
    // 0x3b4200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b4200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4204: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3B4204u;
    SET_GPR_U32(ctx, 31, 0x3B420Cu);
    ctx->pc = 0x3B4208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4204u;
    // 0x3b4208: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B4204u, 0x3B420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B420Cu;
label_3b420c:
    // 0x3b420c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b420cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4214: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4214u;
        // 0x3b4218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B421Cu;
    // 0x3b421c: 0x0  nop
    ctx->pc = 0x3b421cu;
    // NOP
    ctx->pc = 0x3b4220u;
}
