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

// Function: func_0035C2D0
// Address: 0x35c2d0 - 0x35c320
void func_0035C2D0_0x35c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C2D0_0x35c2d0");
#endif

    switch (ctx->pc) {
        case 0x35c2d0u: goto label_35c2d0;
        case 0x35c2d4u: goto label_35c2d4;
        case 0x35c2d8u: goto label_35c2d8;
        case 0x35c2dcu: goto label_35c2dc;
        case 0x35c2e0u: goto label_35c2e0;
        case 0x35c2e4u: goto label_35c2e4;
        case 0x35c2e8u: goto label_35c2e8;
        case 0x35c2ecu: goto label_35c2ec;
        case 0x35c2f0u: goto label_35c2f0;
        case 0x35c2f4u: goto label_35c2f4;
        case 0x35c2f8u: goto label_35c2f8;
        case 0x35c2fcu: goto label_35c2fc;
        case 0x35c300u: goto label_35c300;
        case 0x35c304u: goto label_35c304;
        case 0x35c308u: goto label_35c308;
        case 0x35c30cu: goto label_35c30c;
        case 0x35c310u: goto label_35c310;
        case 0x35c314u: goto label_35c314;
        case 0x35c318u: goto label_35c318;
        case 0x35c31cu: goto label_35c31c;
        default: break;
    }

    ctx->pc = 0x35c2d0u;

label_35c2d0:
    // 0x35c2d0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_35c2d4:
    // 0x35c2d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_35c2d8:
    // 0x35c2d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_35c2dc:
    // 0x35c2dc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x35c2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_35c2e0:
    // 0x35c2e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35c2e4:
    // 0x35c2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35c2e8:
    // 0x35c2e8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x35c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35c2ec:
    // 0x35c2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c2f0:
    // 0x35c2f0: 0x8c691f3c  lw          $t1, 0x1F3C($v1)
    ctx->pc = 0x35c2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7996)));
label_35c2f4:
    // 0x35c2f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x35c2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_35c2f8:
    // 0x35c2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35c2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c2fc:
    // 0x35c2fc: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x35c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_35c300:
    // 0x35c300: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
label_35c304:
    if (ctx->pc == 0x35C304u) {
        ctx->pc = 0x35C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C300u;
        // 0x35c304: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35C308u;
        goto label_35c308;
    }
    ctx->pc = 0x35C300u;
    {
        const bool branch_taken_0x35c300 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C300u;
        // 0x35c304: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c300) {
            ctx->pc = 0x35C314u;
            goto label_35c314;
        }
    }
    ctx->pc = 0x35C308u;
label_35c308:
    // 0x35c308: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35c30c:
    // 0x35c30c: 0x40f809  jalr        $v0
label_35c310:
    if (ctx->pc == 0x35C310u) {
        ctx->pc = 0x35C314u;
        goto label_35c314;
    }
    ctx->pc = 0x35C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35C314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C30Cu, 0x35C314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35C314u;
label_35c314:
    // 0x35c314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35c318:
    // 0x35c318: 0x3e00008  jr          $ra
label_35c31c:
    if (ctx->pc == 0x35C31Cu) {
        ctx->pc = 0x35C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C318u;
        // 0x35c31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35C320u;
        goto label_fallthrough_0x35c318;
    }
    ctx->pc = 0x35C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C318u;
        // 0x35c31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35c318:
    ctx->pc = 0x35C320u;
}
