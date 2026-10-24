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

// Function: func_00178810
// Address: 0x178810 - 0x178848
void func_00178810_0x178810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178810_0x178810");
#endif

    switch (ctx->pc) {
        case 0x178824u: goto label_178824;
        default: break;
    }

    ctx->pc = 0x178810u;

    // 0x178810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178814: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17881c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17881Cu;
    SET_GPR_U32(ctx, 31, 0x178824u);
    ctx->pc = 0x178820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17881Cu;
    // 0x178820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17881Cu, 0x178824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178824u;
label_178824:
    // 0x178824: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x178824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x178828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17882c: 0x24631590  addiu       $v1, $v1, 0x1590
    ctx->pc = 0x17882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5520));
    // 0x178830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178834: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x178834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x178838: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17883c: 0x3e00008  jr          $ra
    ctx->pc = 0x17883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17883Cu;
        // 0x178840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178844u;
    // 0x178844: 0x0  nop
    ctx->pc = 0x178844u;
    // NOP
    ctx->pc = 0x178848u;
}
