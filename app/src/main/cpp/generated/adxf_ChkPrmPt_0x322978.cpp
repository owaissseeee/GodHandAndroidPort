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

// Function: adxf_ChkPrmPt
// Address: 0x322978 - 0x3229d0
void adxf_ChkPrmPt_0x322978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("adxf_ChkPrmPt_0x322978");
#endif

    switch (ctx->pc) {
        case 0x3229b0u: goto label_3229b0;
        default: break;
    }

    ctx->pc = 0x322978u;

    // 0x322978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32297c: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x32297cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x322980: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322980u;
    {
        const bool branch_taken_0x322980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x322984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322980u;
        // 0x322984: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322980) {
            ctx->pc = 0x322998u;
            goto label_322998;
        }
    }
    ctx->pc = 0x322988u;
    // 0x322988: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x322988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32298c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32298Cu;
    {
        const bool branch_taken_0x32298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32298Cu;
        // 0x322990: 0x24841390  addiu       $a0, $a0, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32298c) {
            ctx->pc = 0x3229A8u;
            goto label_3229a8;
        }
    }
    ctx->pc = 0x322994u;
    // 0x322994: 0x0  nop
    ctx->pc = 0x322994u;
    // NOP
label_322998:
    // 0x322998: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x322998u;
    {
        const bool branch_taken_0x322998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322998u;
        // 0x32299c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322998) {
            ctx->pc = 0x3229B4u;
            goto label_3229b4;
        }
    }
    ctx->pc = 0x3229A0u;
    // 0x3229a0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3229a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3229a4: 0x248413c8  addiu       $a0, $a0, 0x13C8
    ctx->pc = 0x3229a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5064));
label_3229a8:
    // 0x3229a8: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x3229A8u;
    SET_GPR_U32(ctx, 31, 0x3229B0u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x3229A8u, 0x3229B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3229B0u;
label_3229b0:
    // 0x3229b0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3229b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3229b4:
    // 0x3229b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3229b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3229b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3229B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3229BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229B8u;
        // 0x3229bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3229B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3229C0u;
    // 0x3229c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3229c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3229c4: 0x0  nop
    ctx->pc = 0x3229c4u;
    // NOP
    // 0x3229c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3229c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3229cc: 0x0  nop
    ctx->pc = 0x3229ccu;
    // NOP
    ctx->pc = 0x3229d0u;
}
