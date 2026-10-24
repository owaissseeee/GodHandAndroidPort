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

// Function: func_0013BBD8
// Address: 0x13bbd8 - 0x13bc28
void func_0013BBD8_0x13bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013BBD8_0x13bbd8");
#endif

    switch (ctx->pc) {
        case 0x13bbfcu: goto label_13bbfc;
        case 0x13bc14u: goto label_13bc14;
        default: break;
    }

    ctx->pc = 0x13bbd8u;

    // 0x13bbd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13bbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13bbdc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13bbe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13bbe4: 0x8c625598  lw          $v0, 0x5598($v1)
    ctx->pc = 0x13bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785598u));
    // 0x13bbe8: 0x24705598  addiu       $s0, $v1, 0x5598
    ctx->pc = 0x13bbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21912));
    // 0x13bbec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13BBECu;
    {
        const bool branch_taken_0x13bbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBECu;
        // 0x13bbf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bbec) {
            ctx->pc = 0x13BC14u;
            goto label_13bc14;
        }
    }
    ctx->pc = 0x13BBF4u;
    // 0x13bbf4: 0xc04e608  jal         func_139820
    ctx->pc = 0x13BBF4u;
    SET_GPR_U32(ctx, 31, 0x13BBFCu);
    ctx->pc = 0x139820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139820u, 0x13BBF4u, 0x13BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BBFCu;
label_13bbfc:
    // 0x13bbfc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13bbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13bc00: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x13bc00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x13bc04: 0x24a5dbd8  addiu       $a1, $a1, -0x2428
    ctx->pc = 0x13bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958040));
    // 0x13bc08: 0x24c65578  addiu       $a2, $a2, 0x5578
    ctx->pc = 0x13bc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21880));
    // 0x13bc0c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13BC0Cu;
    SET_GPR_U32(ctx, 31, 0x13BC14u);
    ctx->pc = 0x13BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC0Cu;
    // 0x13bc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13BC0Cu, 0x13BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC14u;
label_13bc14:
    // 0x13bc14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13bc14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bc1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13bc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bc20: 0x3e00008  jr          $ra
    ctx->pc = 0x13BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC20u;
        // 0x13bc24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BC28u;
}
