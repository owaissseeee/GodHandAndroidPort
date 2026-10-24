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

// Function: func_00331400
// Address: 0x331400 - 0x331458
void func_00331400_0x331400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331400_0x331400");
#endif

    switch (ctx->pc) {
        case 0x331424u: goto label_331424;
        case 0x33142cu: goto label_33142c;
        case 0x331440u: goto label_331440;
        default: break;
    }

    ctx->pc = 0x331400u;

    // 0x331400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33140c: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x33140cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x331410: 0x26108490  addiu       $s0, $s0, -0x7B70
    ctx->pc = 0x331410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935696));
    // 0x331414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x331414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x331418: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x331418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D8490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8490u, _value); } while (0);
    // 0x33141c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33141Cu;
    SET_GPR_U32(ctx, 31, 0x331424u);
    ctx->pc = 0x331420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33141Cu;
    // 0x331420: 0x24042600  addiu       $a0, $zero, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33141Cu, 0x331424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331424u;
label_331424:
    // 0x331424: 0xc0e669a  jal         func_399A68
    ctx->pc = 0x331424u;
    SET_GPR_U32(ctx, 31, 0x33142Cu);
    ctx->pc = 0x399A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399A68u, 0x331424u, 0x33142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33142Cu;
label_33142c:
    // 0x33142c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331430: 0x24042601  addiu       $a0, $zero, 0x2601
    ctx->pc = 0x331430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9729));
    // 0x331434: 0x2463848c  addiu       $v1, $v1, -0x7B74
    ctx->pc = 0x331434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935692));
    // 0x331438: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331438u;
    SET_GPR_U32(ctx, 31, 0x331440u);
    ctx->pc = 0x33143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331438u;
    // 0x33143c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331438u, 0x331440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331440u;
label_331440:
    // 0x331440: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x331440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x331444: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x331444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33144c: 0x3e00008  jr          $ra
    ctx->pc = 0x33144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33144Cu;
        // 0x331450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331454u;
    // 0x331454: 0x0  nop
    ctx->pc = 0x331454u;
    // NOP
    ctx->pc = 0x331458u;
}
