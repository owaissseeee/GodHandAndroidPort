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

// Function: __throw_type_match
// Address: 0x3202a8 - 0x3202d8
void ps2___throw_type_match_0x3202a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_type_match_0x3202a8");
#endif

    switch (ctx->pc) {
        case 0x3202bcu: goto label_3202bc;
        default: break;
    }

    ctx->pc = 0x3202a8u;

    // 0x3202a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3202a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3202ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3202acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3202b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3202b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3202b4: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x3202B4u;
    SET_GPR_U32(ctx, 31, 0x3202BCu);
    ctx->pc = 0x3202B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202B4u;
    // 0x3202b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x3202B4u, 0x3202BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202BCu;
label_3202bc:
    // 0x3202bc: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x3202bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3202c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3202c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3202c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3202c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3202c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3202c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3202cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3202CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3202D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202CCu;
        // 0x3202d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3202CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3202D4u;
    // 0x3202d4: 0x0  nop
    ctx->pc = 0x3202d4u;
    // NOP
    ctx->pc = 0x3202d8u;
}
