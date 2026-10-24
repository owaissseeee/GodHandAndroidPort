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

// Function: func_00349F80
// Address: 0x349f80 - 0x349fb0
void func_00349F80_0x349f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349F80_0x349f80");
#endif

    switch (ctx->pc) {
        case 0x349f80u: goto label_349f80;
        case 0x349f84u: goto label_349f84;
        case 0x349f88u: goto label_349f88;
        case 0x349f8cu: goto label_349f8c;
        case 0x349f90u: goto label_349f90;
        case 0x349f94u: goto label_349f94;
        case 0x349f98u: goto label_349f98;
        case 0x349f9cu: goto label_349f9c;
        case 0x349fa0u: goto label_349fa0;
        case 0x349fa4u: goto label_349fa4;
        case 0x349fa8u: goto label_349fa8;
        case 0x349facu: goto label_349fac;
        default: break;
    }

    ctx->pc = 0x349f80u;

label_349f80:
    // 0x349f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_349f84:
    // 0x349f84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x349f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_349f88:
    // 0x349f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_349f8c:
    // 0x349f8c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x349f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_349f90:
    // 0x349f90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x349f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349f94:
    // 0x349f94: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x349f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_349f98:
    // 0x349f98: 0x40f809  jalr        $v0
label_349f9c:
    if (ctx->pc == 0x349F9Cu) {
        ctx->pc = 0x349F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F98u;
        // 0x349f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349FA0u;
        goto label_349fa0;
    }
    ctx->pc = 0x349F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x349FA0u);
        ctx->pc = 0x349F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F98u;
        // 0x349f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F98u, 0x349FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x349FA0u;
label_349fa0:
    // 0x349fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349fa4:
    // 0x349fa4: 0x3e00008  jr          $ra
label_349fa8:
    if (ctx->pc == 0x349FA8u) {
        ctx->pc = 0x349FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FA4u;
        // 0x349fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349FACu;
        goto label_349fac;
    }
    ctx->pc = 0x349FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349FA4u;
        // 0x349fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349FACu;
label_349fac:
    // 0x349fac: 0x0  nop
    ctx->pc = 0x349facu;
    // NOP
    ctx->pc = 0x349fb0u;
}
