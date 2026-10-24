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

// Function: func_003280D8
// Address: 0x3280d8 - 0x328120
void func_003280D8_0x3280d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003280D8_0x3280d8");
#endif

    switch (ctx->pc) {
        case 0x3280f4u: goto label_3280f4;
        case 0x328100u: goto label_328100;
        case 0x328108u: goto label_328108;
        default: break;
    }

    ctx->pc = 0x3280d8u;

    // 0x3280d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3280d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3280dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3280dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3280e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3280e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3280e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3280e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3280e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3280ec: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x3280ECu;
    SET_GPR_U32(ctx, 31, 0x3280F4u);
    ctx->pc = 0x3280F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280ECu;
    // 0x3280f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x3280ECu, 0x3280F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280F4u;
label_3280f4:
    // 0x3280f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3280f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3280f8: 0xc0ca048  jal         func_328120
    ctx->pc = 0x3280F8u;
    SET_GPR_U32(ctx, 31, 0x328100u);
    ctx->pc = 0x3280FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280F8u;
    // 0x3280fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328120u, 0x3280F8u, 0x328100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328100u;
label_328100:
    // 0x328100: 0xc0ca422  jal         func_329088
    ctx->pc = 0x328100u;
    SET_GPR_U32(ctx, 31, 0x328108u);
    ctx->pc = 0x328104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328100u;
    // 0x328104: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328100u, 0x328108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328108u;
label_328108:
    // 0x328108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32810c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32810cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328118: 0x3e00008  jr          $ra
    ctx->pc = 0x328118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328118u;
        // 0x32811c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328120u;
}
