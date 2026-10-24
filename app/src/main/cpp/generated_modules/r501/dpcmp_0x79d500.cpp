#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: dpcmp
// Address: 0x79d500 - 0x79d550
void dpcmp_0x79d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpcmp_0x79d500");
#endif

    switch (ctx->pc) {
        case 0x79d520u: goto label_79d520;
        case 0x79d530u: goto label_79d530;
        case 0x79d53cu: goto label_79d53c;
        default: break;
    }

    ctx->pc = 0x79d500u;

    // 0x79d500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79d504: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x79d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x79d508: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x79d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x79d50c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79d510: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x79d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x79d514: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79d518: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D518u;
    SET_GPR_U32(ctx, 31, 0x79D520u);
    ctx->pc = 0x79D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D518u;
    // 0x79d51c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D518u, 0x79D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D520u;
label_79d520:
    // 0x79d520: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79d520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79d524: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x79d524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x79d528: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D528u;
    SET_GPR_U32(ctx, 31, 0x79D530u);
    ctx->pc = 0x79D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D528u;
    // 0x79d52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D528u, 0x79D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D530u;
label_79d530:
    // 0x79d530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79d530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d534: 0xc1e74fa  jal         func_79D3E8
    ctx->pc = 0x79D534u;
    SET_GPR_U32(ctx, 31, 0x79D53Cu);
    ctx->pc = 0x79D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D534u;
    // 0x79d538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D3E8u, 0x79D534u, 0x79D53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D53Cu;
label_79d53c:
    // 0x79d53c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79d53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79d540: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x79d540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79d544: 0x3e00008  jr          $ra
    ctx->pc = 0x79D544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D544u;
        // 0x79d548: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D54Cu;
    // 0x79d54c: 0x0  nop
    ctx->pc = 0x79d54cu;
    // NOP
    ctx->pc = 0x79d550u;
}
} // namespace gh_r501
