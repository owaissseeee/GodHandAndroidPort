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

// Function: ActBtnHandler_Variant2
// Address: 0x1e9f18 - 0x1e9f68
void ActBtnHandler_Variant2_0x1e9f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActBtnHandler_Variant2_0x1e9f18");
#endif

    switch (ctx->pc) {
        case 0x1e9f38u: goto label_1e9f38;
        case 0x1e9f54u: goto label_1e9f54;
        default: break;
    }

    ctx->pc = 0x1e9f18u;

    // 0x1e9f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e9f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e9f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f28: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e9f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e9f2c: 0x960501b0  lhu         $a1, 0x1B0($s0)
    ctx->pc = 0x1e9f2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1e9f30: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x1E9F30u;
    SET_GPR_U32(ctx, 31, 0x1E9F38u);
    ctx->pc = 0x1E9F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F30u;
    // 0x1e9f34: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x1E9F30u, 0x1E9F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F38u;
label_1e9f38:
    // 0x1e9f38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1e9f3c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1e9f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1e9f40: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x1e9f40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1e9f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f48: 0x24a59f68  addiu       $a1, $a1, -0x6098
    ctx->pc = 0x1e9f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942568));
    // 0x1e9f4c: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x1E9F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F54u);
    ctx->pc = 0x1E9F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F4Cu;
    // 0x1e9f50: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x1E9F4Cu, 0x1E9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F54u;
label_1e9f54:
    // 0x1e9f54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e9f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F5Cu;
        // 0x1e9f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9F64u;
    // 0x1e9f64: 0x0  nop
    ctx->pc = 0x1e9f64u;
    // NOP
    ctx->pc = 0x1e9f68u;
}
