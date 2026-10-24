#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __throw_type_match
// Address: 0x7cb378 - 0x7cb3a8
void ps2___throw_type_match_0x7cb378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_type_match_0x7cb378");
#endif

    switch (ctx->pc) {
        case 0x7cb38cu: goto label_7cb38c;
        default: break;
    }

    ctx->pc = 0x7cb378u;

    // 0x7cb378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb37c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7cb380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7cb384: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x7CB384u;
    SET_GPR_U32(ctx, 31, 0x7CB38Cu);
    ctx->pc = 0x7CB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB384u;
    // 0x7cb388: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x7CB384u, 0x7CB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB38Cu;
label_7cb38c:
    // 0x7cb38c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x7cb38cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x7cb390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb39c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB39Cu;
        // 0x7cb3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB3A4u;
    // 0x7cb3a4: 0x0  nop
    ctx->pc = 0x7cb3a4u;
    // NOP
    ctx->pc = 0x7cb3a8u;
}
} // namespace gh_mcport
