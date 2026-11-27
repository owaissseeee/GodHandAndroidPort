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

// Function: close__7filebuf
// Address: 0x38f020 - 0x38f050
void close__7filebuf_0x38f020(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("close__7filebuf_0x38f020");
#endif

    if (__builtin_expect(ctx->pc != 0x38f020u, 0)) {
        switch (ctx->pc) {
            case 0x38f034u: goto label_38f034;
            default: break;
        }
    }


    // 0x38f020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f02c: 0xc0e49d6  jal         func_392758
    SET_GPR_U32(ctx, 31, 0x38F034u);
    ctx->pc = 0x38F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F02Cu;
    // 0x38f030: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ps2__IO_file_close_it_0x392758, 0x392758u, 0x38f034u)) {
        return;
    }
label_38f034:
    // 0x38f034: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x38f034u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x38f038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f03c: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f044: 0x3e00008  jr          $ra
    ctx->pc = 0x38F044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F044u;
        // 0x38f048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x38f04c: 0x0  nop
    // NOP
    ctx->pc = 0x38f050u;
}