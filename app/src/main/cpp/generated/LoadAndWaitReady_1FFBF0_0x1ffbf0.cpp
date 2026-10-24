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

// Function: LoadAndWaitReady_1FFBF0
// Address: 0x1ffbf0 - 0x1ffc60
void LoadAndWaitReady_1FFBF0_0x1ffbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadAndWaitReady_1FFBF0_0x1ffbf0");
#endif

    switch (ctx->pc) {
        case 0x1ffc18u: goto label_1ffc18;
        case 0x1ffc30u: goto label_1ffc30;
        case 0x1ffc38u: goto label_1ffc38;
        case 0x1ffc40u: goto label_1ffc40;
        default: break;
    }

    ctx->pc = 0x1ffbf0u;

    // 0x1ffbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ffbf4: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x1ffbf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ffbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ffbfc: 0x24e70d80  addiu       $a3, $a3, 0xD80
    ctx->pc = 0x1ffbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3456));
    // 0x1ffc00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ffc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ffc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ffc08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffc0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ffc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc10: 0xc0c8abe  jal         func_322AF8
    ctx->pc = 0x1FFC10u;
    SET_GPR_U32(ctx, 31, 0x1FFC18u);
    ctx->pc = 0x1FFC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC10u;
    // 0x1ffc14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322AF8u, 0x1FFC10u, 0x1FFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC18u;
label_1ffc18:
    // 0x1ffc18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FFC18u;
    {
        const bool branch_taken_0x1ffc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC18u;
        // 0x1ffc1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc18) {
            ctx->pc = 0x1FFC50u;
            goto label_1ffc50;
        }
    }
    ctx->pc = 0x1FFC20u;
    // 0x1ffc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffc24: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1ffc24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ffc28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFC28u;
    {
        const bool branch_taken_0x1ffc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC28u;
        // 0x1ffc2c: 0xa2220018  sb          $v0, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc28) {
            ctx->pc = 0x1FFC38u;
            goto label_1ffc38;
        }
    }
    ctx->pc = 0x1FFC30u;
label_1ffc30:
    // 0x1ffc30: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x1FFC30u;
    SET_GPR_U32(ctx, 31, 0x1FFC38u);
    ctx->pc = 0x1FFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC30u;
    // 0x1ffc34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x1FFC30u, 0x1FFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC38u;
label_1ffc38:
    // 0x1ffc38: 0xc0c8c00  jal         func_323000
    ctx->pc = 0x1FFC38u;
    SET_GPR_U32(ctx, 31, 0x1FFC40u);
    ctx->pc = 0x1FFC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC38u;
    // 0x1ffc3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323000u, 0x1FFC38u, 0x1FFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC40u;
label_1ffc40:
    // 0x1ffc40: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FFC40u;
    {
        const bool branch_taken_0x1ffc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ffc40) {
            ctx->pc = 0x1FFC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffc30;
        }
    }
    ctx->pc = 0x1FFC48u;
    // 0x1ffc48: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x1ffc48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ffc4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ffc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ffc50:
    // 0x1ffc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffc54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffc58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC58u;
        // 0x1ffc5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFC60u;
}
