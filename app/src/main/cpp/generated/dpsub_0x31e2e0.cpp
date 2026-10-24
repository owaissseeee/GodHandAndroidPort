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

// Function: dpsub
// Address: 0x31e2e0 - 0x31e348
void dpsub_0x31e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpsub_0x31e2e0");
#endif

    switch (ctx->pc) {
        case 0x31e300u: goto label_31e300;
        case 0x31e310u: goto label_31e310;
        case 0x31e32cu: goto label_31e32c;
        case 0x31e334u: goto label_31e334;
        default: break;
    }

    ctx->pc = 0x31e2e0u;

    // 0x31e2e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31e2e4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x31e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x31e2e8: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x31e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x31e2ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31e2f0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x31e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x31e2f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x31e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x31e2f8: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E2F8u;
    SET_GPR_U32(ctx, 31, 0x31E300u);
    ctx->pc = 0x31E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2F8u;
    // 0x31e2fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E2F8u, 0x31E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E300u;
label_31e300:
    // 0x31e300: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x31e300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e304: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x31e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x31e308: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E308u;
    SET_GPR_U32(ctx, 31, 0x31E310u);
    ctx->pc = 0x31E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E308u;
    // 0x31e30c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E308u, 0x31E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E310u;
label_31e310:
    // 0x31e310: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x31e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x31e314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e318: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x31e318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31e31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e320: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31e320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31e324: 0xc0c7812  jal         func_31E048
    ctx->pc = 0x31E324u;
    SET_GPR_U32(ctx, 31, 0x31E32Cu);
    ctx->pc = 0x31E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E324u;
    // 0x31e328: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E048u, 0x31E324u, 0x31E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E32Cu;
label_31e32c:
    // 0x31e32c: 0xc0c779e  jal         func_31DE78
    ctx->pc = 0x31E32Cu;
    SET_GPR_U32(ctx, 31, 0x31E334u);
    ctx->pc = 0x31E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E32Cu;
    // 0x31e330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE78u, 0x31E32Cu, 0x31E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E334u;
label_31e334:
    // 0x31e334: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x31e334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31e338: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x31e338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31e33c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E33Cu;
        // 0x31e340: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E344u;
    // 0x31e344: 0x0  nop
    ctx->pc = 0x31e344u;
    // NOP
    ctx->pc = 0x31e348u;
}
