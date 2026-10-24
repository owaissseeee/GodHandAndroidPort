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

// Function: func_0030F5F0
// Address: 0x30f5f0 - 0x30f650
void func_0030F5F0_0x30f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030F5F0_0x30f5f0");
#endif

    switch (ctx->pc) {
        case 0x30f604u: goto label_30f604;
        case 0x30f610u: goto label_30f610;
        case 0x30f61cu: goto label_30f61c;
        case 0x30f628u: goto label_30f628;
        case 0x30f634u: goto label_30f634;
        case 0x30f640u: goto label_30f640;
        default: break;
    }

    ctx->pc = 0x30f5f0u;

    // 0x30f5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30f5f4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30f5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f5fc: 0xc0c4a2c  jal         func_3128B0
    ctx->pc = 0x30F5FCu;
    SET_GPR_U32(ctx, 31, 0x30F604u);
    ctx->pc = 0x30F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F5FCu;
    // 0x30f600: 0x24844c30  addiu       $a0, $a0, 0x4C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128B0u, 0x30F5FCu, 0x30F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F604u;
label_30f604:
    // 0x30f604: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30f608: 0xc0c4a2c  jal         func_3128B0
    ctx->pc = 0x30F608u;
    SET_GPR_U32(ctx, 31, 0x30F610u);
    ctx->pc = 0x30F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F608u;
    // 0x30f60c: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128B0u, 0x30F608u, 0x30F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F610u;
label_30f610:
    // 0x30f610: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30f614: 0xc0c4a2c  jal         func_3128B0
    ctx->pc = 0x30F614u;
    SET_GPR_U32(ctx, 31, 0x30F61Cu);
    ctx->pc = 0x30F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F614u;
    // 0x30f618: 0x24844c50  addiu       $a0, $a0, 0x4C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128B0u, 0x30F614u, 0x30F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F61Cu;
label_30f61c:
    // 0x30f61c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30f620: 0xc0c4a2c  jal         func_3128B0
    ctx->pc = 0x30F620u;
    SET_GPR_U32(ctx, 31, 0x30F628u);
    ctx->pc = 0x30F624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F620u;
    // 0x30f624: 0x24844c58  addiu       $a0, $a0, 0x4C58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128B0u, 0x30F620u, 0x30F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F628u;
label_30f628:
    // 0x30f628: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30f62c: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x30F62Cu;
    SET_GPR_U32(ctx, 31, 0x30F634u);
    ctx->pc = 0x30F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F62Cu;
    // 0x30f630: 0x24844c20  addiu       $a0, $a0, 0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x30F62Cu, 0x30F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F634u;
label_30f634:
    // 0x30f634: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30f638: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x30F638u;
    SET_GPR_U32(ctx, 31, 0x30F640u);
    ctx->pc = 0x30F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F638u;
    // 0x30f63c: 0x24844c10  addiu       $a0, $a0, 0x4C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x30F638u, 0x30F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F640u;
label_30f640:
    // 0x30f640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f644: 0x3e00008  jr          $ra
    ctx->pc = 0x30F644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F644u;
        // 0x30f648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F64Cu;
    // 0x30f64c: 0x0  nop
    ctx->pc = 0x30f64cu;
    // NOP
    ctx->pc = 0x30f650u;
}
