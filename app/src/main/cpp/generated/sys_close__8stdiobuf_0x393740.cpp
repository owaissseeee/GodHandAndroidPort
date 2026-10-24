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

// Function: sys_close__8stdiobuf
// Address: 0x393740 - 0x393770
void sys_close__8stdiobuf_0x393740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sys_close__8stdiobuf_0x393740");
#endif

    switch (ctx->pc) {
        case 0x393758u: goto label_393758;
        default: break;
    }

    ctx->pc = 0x393740u;

    // 0x393740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x393744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x393748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39374c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39374cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393750: 0xc0e97da  jal         func_3A5F68
    ctx->pc = 0x393750u;
    SET_GPR_U32(ctx, 31, 0x393758u);
    ctx->pc = 0x393754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393750u;
    // 0x393754: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5F68u, 0x393750u, 0x393758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393758u;
label_393758:
    // 0x393758: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x393758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x39375c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393764: 0x3e00008  jr          $ra
    ctx->pc = 0x393764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393764u;
        // 0x393768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39376Cu;
    // 0x39376c: 0x0  nop
    ctx->pc = 0x39376cu;
    // NOP
    ctx->pc = 0x393770u;
}
