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

// Function: func_003634E0
// Address: 0x3634e0 - 0x363528
void func_003634E0_0x3634e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003634E0_0x3634e0");
#endif

    switch (ctx->pc) {
        case 0x363508u: goto label_363508;
        default: break;
    }

    ctx->pc = 0x3634e0u;

    // 0x3634e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3634e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3634e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3634e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3634e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3634e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3634ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3634ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3634f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3634f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3634f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3634f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3634f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3634F8u;
    {
        const bool branch_taken_0x3634f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3634FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634F8u;
        // 0x3634fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3634f8) {
            ctx->pc = 0x363508u;
            goto label_363508;
        }
    }
    ctx->pc = 0x363500u;
    // 0x363500: 0xc0d97ac  jal         func_365EB0
    ctx->pc = 0x363500u;
    SET_GPR_U32(ctx, 31, 0x363508u);
    ctx->pc = 0x365EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365EB0u, 0x363500u, 0x363508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363508u;
label_363508:
    // 0x363508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36350c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36350cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x363510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x363514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36351c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363520: 0x80d8d4a  j           func_363528
    ctx->pc = 0x363520u;
    ctx->pc = 0x363524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363520u;
    // 0x363524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363528u, 0x363520u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x363528u;
}
