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

// Function: func_00328140
// Address: 0x328140 - 0x328178
void func_00328140_0x328140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328140_0x328140");
#endif

    switch (ctx->pc) {
        case 0x328154u: goto label_328154;
        case 0x32815cu: goto label_32815c;
        case 0x328164u: goto label_328164;
        default: break;
    }

    ctx->pc = 0x328140u;

    // 0x328140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328148: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32814c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x32814Cu;
    SET_GPR_U32(ctx, 31, 0x328154u);
    ctx->pc = 0x328150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32814Cu;
    // 0x328150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x32814Cu, 0x328154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328154u;
label_328154:
    // 0x328154: 0xc0ca05e  jal         func_328178
    ctx->pc = 0x328154u;
    SET_GPR_U32(ctx, 31, 0x32815Cu);
    ctx->pc = 0x328158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328154u;
    // 0x328158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328178u, 0x328154u, 0x32815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32815Cu;
label_32815c:
    // 0x32815c: 0xc0ca422  jal         func_329088
    ctx->pc = 0x32815Cu;
    SET_GPR_U32(ctx, 31, 0x328164u);
    ctx->pc = 0x328160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32815Cu;
    // 0x328160: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x32815Cu, 0x328164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328164u;
label_328164:
    // 0x328164: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328168: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32816c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32816cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328170: 0x3e00008  jr          $ra
    ctx->pc = 0x328170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328170u;
        // 0x328174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328178u;
}
