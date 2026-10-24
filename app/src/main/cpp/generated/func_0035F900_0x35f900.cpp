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

// Function: func_0035F900
// Address: 0x35f900 - 0x35f958
void func_0035F900_0x35f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F900_0x35f900");
#endif

    switch (ctx->pc) {
        case 0x35f924u: goto label_35f924;
        case 0x35f92cu: goto label_35f92c;
        case 0x35f934u: goto label_35f934;
        case 0x35f93cu: goto label_35f93c;
        default: break;
    }

    ctx->pc = 0x35f900u;

    // 0x35f900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f904: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35f908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f90c: 0x2450e330  addiu       $s0, $v0, -0x1CD0
    ctx->pc = 0x35f90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x35f910: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35f910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE330u));
    // 0x35f914: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35F914u;
    {
        const bool branch_taken_0x35f914 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x35F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F914u;
        // 0x35f918: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f914) {
            ctx->pc = 0x35F948u;
            goto label_35f948;
        }
    }
    ctx->pc = 0x35F91Cu;
    // 0x35f91c: 0xc0d7fba  jal         func_35FEE8
    ctx->pc = 0x35F91Cu;
    SET_GPR_U32(ctx, 31, 0x35F924u);
    ctx->pc = 0x35FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEE8u, 0x35F91Cu, 0x35F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F924u;
label_35f924:
    // 0x35f924: 0xc0db2aa  jal         func_36CAA8
    ctx->pc = 0x35F924u;
    SET_GPR_U32(ctx, 31, 0x35F92Cu);
    ctx->pc = 0x36CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAA8u, 0x35F924u, 0x35F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F92Cu;
label_35f92c:
    // 0x35f92c: 0xc0d7f9e  jal         func_35FE78
    ctx->pc = 0x35F92Cu;
    SET_GPR_U32(ctx, 31, 0x35F934u);
    ctx->pc = 0x35FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE78u, 0x35F92Cu, 0x35F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F934u;
label_35f934:
    // 0x35f934: 0xc0d8332  jal         func_360CC8
    ctx->pc = 0x35F934u;
    SET_GPR_U32(ctx, 31, 0x35F93Cu);
    ctx->pc = 0x360CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360CC8u, 0x35F934u, 0x35F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F93Cu;
label_35f93c:
    // 0x35f93c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35f940: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35f944: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35f944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_35f948:
    // 0x35f948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f94c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35f94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f950: 0x3e00008  jr          $ra
    ctx->pc = 0x35F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F950u;
        // 0x35f954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F958u;
}
