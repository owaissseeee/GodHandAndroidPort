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

// Function: mwsfcre_IsOkUsrMalloc
// Address: 0x3441d0 - 0x344220
void mwsfcre_IsOkUsrMalloc_0x3441d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsfcre_IsOkUsrMalloc_0x3441d0");
#endif

    switch (ctx->pc) {
        case 0x3441e4u: goto label_3441e4;
        default: break;
    }

    ctx->pc = 0x3441d0u;

    // 0x3441d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3441d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3441d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3441d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3441d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3441d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3441dc: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x3441DCu;
    SET_GPR_U32(ctx, 31, 0x3441E4u);
    ctx->pc = 0x3441E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3441DCu;
    // 0x3441e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x3441DCu, 0x3441E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441E4u;
label_3441e4:
    // 0x3441e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3441e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3441e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3441e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3441ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3441ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3441f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3441F0u;
    {
        const bool branch_taken_0x3441f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3441F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441F0u;
        // 0x3441f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3441f0) {
            ctx->pc = 0x34420Cu;
            goto label_34420c;
        }
    }
    ctx->pc = 0x3441F8u;
    // 0x3441f8: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x3441f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3441fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3441fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344200: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x344200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x344204: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x344204u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x344208: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x344208u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_34420c:
    // 0x34420c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34420cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344210: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x344210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344218: 0x3e00008  jr          $ra
    ctx->pc = 0x344218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344218u;
        // 0x34421c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344220u;
}
