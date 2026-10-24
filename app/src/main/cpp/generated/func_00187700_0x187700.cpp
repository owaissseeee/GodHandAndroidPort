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

// Function: func_00187700
// Address: 0x187700 - 0x187750
void func_00187700_0x187700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187700_0x187700");
#endif

    switch (ctx->pc) {
        case 0x187724u: goto label_187724;
        case 0x18773cu: goto label_18773c;
        default: break;
    }

    ctx->pc = 0x187700u;

    // 0x187700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187704: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x187708: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18770c: 0x8c625ae8  lw          $v0, 0x5AE8($v1)
    ctx->pc = 0x18770cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785AE8u));
    // 0x187710: 0x24705ae8  addiu       $s0, $v1, 0x5AE8
    ctx->pc = 0x187710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23272));
    // 0x187714: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x187714u;
    {
        const bool branch_taken_0x187714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187714u;
        // 0x187718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187714) {
            ctx->pc = 0x18773Cu;
            goto label_18773c;
        }
    }
    ctx->pc = 0x18771Cu;
    // 0x18771c: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x18771Cu;
    SET_GPR_U32(ctx, 31, 0x187724u);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x18771Cu, 0x187724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187724u;
label_187724:
    // 0x187724: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x187724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x187728: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18772c: 0x24a53130  addiu       $a1, $a1, 0x3130
    ctx->pc = 0x18772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12592));
    // 0x187730: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x187730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x187734: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x187734u;
    SET_GPR_U32(ctx, 31, 0x18773Cu);
    ctx->pc = 0x187738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187734u;
    // 0x187738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x187734u, 0x18773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18773Cu;
label_18773c:
    // 0x18773c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18773cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187744: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187748: 0x3e00008  jr          $ra
    ctx->pc = 0x187748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187748u;
        // 0x18774c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187750u;
}
