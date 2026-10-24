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

// Function: Slot2_actBtnHandler
// Address: 0x1e4920 - 0x1e4970
void Slot2_actBtnHandler_0x1e4920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_actBtnHandler_0x1e4920");
#endif

    switch (ctx->pc) {
        case 0x1e4940u: goto label_1e4940;
        case 0x1e495cu: goto label_1e495c;
        default: break;
    }

    ctx->pc = 0x1e4920u;

    // 0x1e4920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4924: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e4928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e492c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e492cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4930: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e4930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e4934: 0x960503d0  lhu         $a1, 0x3D0($s0)
    ctx->pc = 0x1e4934u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 976)));
    // 0x1e4938: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x1E4938u;
    SET_GPR_U32(ctx, 31, 0x1E4940u);
    ctx->pc = 0x1E493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4938u;
    // 0x1e493c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x1E4938u, 0x1E4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4940u;
label_1e4940:
    // 0x1e4940: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e4940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1e4944: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e4944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e4948: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x1e4948u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1e494c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e494cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4950: 0x24a54970  addiu       $a1, $a1, 0x4970
    ctx->pc = 0x1e4950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18800));
    // 0x1e4954: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x1E4954u;
    SET_GPR_U32(ctx, 31, 0x1E495Cu);
    ctx->pc = 0x1E4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4954u;
    // 0x1e4958: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x1E4954u, 0x1E495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E495Cu;
label_1e495c:
    // 0x1e495c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e495cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4964: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4964u;
        // 0x1e4968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E496Cu;
    // 0x1e496c: 0x0  nop
    ctx->pc = 0x1e496cu;
    // NOP
    ctx->pc = 0x1e4970u;
}
