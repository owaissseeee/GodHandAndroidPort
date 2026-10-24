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

// Function: func_0018C048
// Address: 0x18c048 - 0x18c098
void func_0018C048_0x18c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018C048_0x18c048");
#endif

    switch (ctx->pc) {
        case 0x18c06cu: goto label_18c06c;
        case 0x18c084u: goto label_18c084;
        default: break;
    }

    ctx->pc = 0x18c048u;

    // 0x18c048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c04c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18c050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c054: 0x8c625b68  lw          $v0, 0x5B68($v1)
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B68u));
    // 0x18c058: 0x24705b68  addiu       $s0, $v1, 0x5B68
    ctx->pc = 0x18c058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23400));
    // 0x18c05c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C05Cu;
    {
        const bool branch_taken_0x18c05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C05Cu;
        // 0x18c060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c05c) {
            ctx->pc = 0x18C084u;
            goto label_18c084;
        }
    }
    ctx->pc = 0x18C064u;
    // 0x18c064: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x18C064u;
    SET_GPR_U32(ctx, 31, 0x18C06Cu);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x18C064u, 0x18C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C06Cu;
label_18c06c:
    // 0x18c06c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18c070: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18c070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18c074: 0x24a538a0  addiu       $a1, $a1, 0x38A0
    ctx->pc = 0x18c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14496));
    // 0x18c078: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x18c078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x18c07c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18C07Cu;
    SET_GPR_U32(ctx, 31, 0x18C084u);
    ctx->pc = 0x18C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C07Cu;
    // 0x18c080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18C07Cu, 0x18C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C084u;
label_18c084:
    // 0x18c084: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c08c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c090: 0x3e00008  jr          $ra
    ctx->pc = 0x18C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C090u;
        // 0x18c094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C098u;
}
