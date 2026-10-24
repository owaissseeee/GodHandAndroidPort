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

// Function: func_0032A530
// Address: 0x32a530 - 0x32a568
void func_0032A530_0x32a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A530_0x32a530");
#endif

    switch (ctx->pc) {
        case 0x32a544u: goto label_32a544;
        case 0x32a54cu: goto label_32a54c;
        case 0x32a554u: goto label_32a554;
        default: break;
    }

    ctx->pc = 0x32a530u;

    // 0x32a530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32a53c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A53Cu;
    SET_GPR_U32(ctx, 31, 0x32A544u);
    ctx->pc = 0x32A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A53Cu;
    // 0x32a540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A53Cu, 0x32A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A544u;
label_32a544:
    // 0x32a544: 0xc0ca95a  jal         func_32A568
    ctx->pc = 0x32A544u;
    SET_GPR_U32(ctx, 31, 0x32A54Cu);
    ctx->pc = 0x32A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A544u;
    // 0x32a548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A568u, 0x32A544u, 0x32A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A54Cu;
label_32a54c:
    // 0x32a54c: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32A54Cu;
    SET_GPR_U32(ctx, 31, 0x32A554u);
    ctx->pc = 0x32A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A54Cu;
    // 0x32a550: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A54Cu, 0x32A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A554u;
label_32a554:
    // 0x32a554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32a554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32a558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a560: 0x3e00008  jr          $ra
    ctx->pc = 0x32A560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A560u;
        // 0x32a564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A568u;
}
