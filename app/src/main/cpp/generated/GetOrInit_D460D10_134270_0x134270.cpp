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

// Function: GetOrInit_D460D10_134270
// Address: 0x134270 - 0x1342b8
void GetOrInit_D460D10_134270_0x134270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_D460D10_134270_0x134270");
#endif

    switch (ctx->pc) {
        case 0x13429cu: goto label_13429c;
        default: break;
    }

    ctx->pc = 0x134270u;

    // 0x134270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134274: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x134274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x134278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x134278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13427c: 0x8c620d10  lw          $v0, 0xD10($v1)
    ctx->pc = 0x13427cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D10u));
    // 0x134280: 0x24700d10  addiu       $s0, $v1, 0xD10
    ctx->pc = 0x134280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3344));
    // 0x134284: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134284u;
    {
        const bool branch_taken_0x134284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134284u;
        // 0x134288: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134284) {
            ctx->pc = 0x13429Cu;
            goto label_13429c;
        }
    }
    ctx->pc = 0x13428Cu;
    // 0x13428c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13428cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x134290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134294: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x134294u;
    SET_GPR_U32(ctx, 31, 0x13429Cu);
    ctx->pc = 0x134298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134294u;
    // 0x134298: 0x24a5d830  addiu       $a1, $a1, -0x27D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x134294u, 0x13429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13429Cu;
label_13429c:
    // 0x13429c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13429cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1342a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1342a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1342a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1342a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1342A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1342ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342A8u;
        // 0x1342ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1342A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1342B0u;
    // 0x1342b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1342b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1342b4: 0x0  nop
    ctx->pc = 0x1342b4u;
    // NOP
    ctx->pc = 0x1342b8u;
}
