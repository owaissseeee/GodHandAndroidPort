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

// Function: SetObjTargetAndActivate_1FD2C0
// Address: 0x1fd2c0 - 0x1fd308
void SetObjTargetAndActivate_1FD2C0_0x1fd2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetObjTargetAndActivate_1FD2C0_0x1fd2c0");
#endif

    switch (ctx->pc) {
        case 0x1fd2e8u: goto label_1fd2e8;
        default: break;
    }

    ctx->pc = 0x1fd2c0u;

    // 0x1fd2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd2c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd2c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2d0: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1fd2d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1fd2d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD2D4u;
    {
        const bool branch_taken_0x1fd2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2D4u;
        // 0x1fd2d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2d4) {
            ctx->pc = 0x1FD2F4u;
            goto label_1fd2f4;
        }
    }
    ctx->pc = 0x1FD2DCu;
    // 0x1fd2dc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1fd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1fd2e0: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1FD2E0u;
    SET_GPR_U32(ctx, 31, 0x1FD2E8u);
    ctx->pc = 0x1FD2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2E0u;
    // 0x1fd2e4: 0xae060030  sw          $a2, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1FD2E0u, 0x1FD2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2E8u;
label_1fd2e8:
    // 0x1fd2e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd2f0: 0xa203004a  sb          $v1, 0x4A($s0)
    ctx->pc = 0x1fd2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
label_1fd2f4:
    // 0x1fd2f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2FCu;
        // 0x1fd300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD304u;
    // 0x1fd304: 0x0  nop
    ctx->pc = 0x1fd304u;
    // NOP
    ctx->pc = 0x1fd308u;
}
