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

// Function: cScenario_runRoomExitFunc
// Address: 0x2c3820 - 0x2c3858
void cScenario_runRoomExitFunc_0x2c3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_runRoomExitFunc_0x2c3820");
#endif

    switch (ctx->pc) {
        case 0x2c3820u: goto label_2c3820;
        case 0x2c3824u: goto label_2c3824;
        case 0x2c3828u: goto label_2c3828;
        case 0x2c382cu: goto label_2c382c;
        case 0x2c3830u: goto label_2c3830;
        case 0x2c3834u: goto label_2c3834;
        case 0x2c3838u: goto label_2c3838;
        case 0x2c383cu: goto label_2c383c;
        case 0x2c3840u: goto label_2c3840;
        case 0x2c3844u: goto label_2c3844;
        case 0x2c3848u: goto label_2c3848;
        case 0x2c384cu: goto label_2c384c;
        case 0x2c3850u: goto label_2c3850;
        case 0x2c3854u: goto label_2c3854;
        default: break;
    }

    ctx->pc = 0x2c3820u;

label_2c3820:
    // 0x2c3820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c3824:
    // 0x2c3824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c3824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c3828:
    // 0x2c3828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c382c:
    // 0x2c382c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c382cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3830:
    // 0x2c3830: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_2c3834:
    // 0x2c3834: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2c3838:
    if (ctx->pc == 0x2C3838u) {
        ctx->pc = 0x2C3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3834u;
        // 0x2c3838: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C383Cu;
        goto label_2c383c;
    }
    ctx->pc = 0x2C3834u;
    {
        const bool branch_taken_0x2c3834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3834) {
            ctx->pc = 0x2C3838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3834u;
            // 0x2c3838: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C384Cu;
            goto label_2c384c;
        }
    }
    ctx->pc = 0x2C383Cu;
label_2c383c:
    // 0x2c383c: 0x40f809  jalr        $v0
label_2c3840:
    if (ctx->pc == 0x2C3840u) {
        ctx->pc = 0x2C3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C383Cu;
        // 0x2c3840: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3844u;
        goto label_2c3844;
    }
    ctx->pc = 0x2C383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3844u);
        ctx->pc = 0x2C3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C383Cu;
        // 0x2c3840: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C383Cu, 0x2C3844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3844u;
label_2c3844:
    // 0x2c3844: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2c3844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_2c3848:
    // 0x2c3848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c3848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c384c:
    // 0x2c384c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3850:
    // 0x2c3850: 0x3e00008  jr          $ra
label_2c3854:
    if (ctx->pc == 0x2C3854u) {
        ctx->pc = 0x2C3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3850u;
        // 0x2c3854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3858u;
        goto label_fallthrough_0x2c3850;
    }
    ctx->pc = 0x2C3850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3850u;
        // 0x2c3854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3850:
    ctx->pc = 0x2C3858u;
}
