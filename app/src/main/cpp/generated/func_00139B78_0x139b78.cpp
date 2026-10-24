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

// Function: func_00139B78
// Address: 0x139b78 - 0x139bc8
void func_00139B78_0x139b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00139B78_0x139b78");
#endif

    switch (ctx->pc) {
        case 0x139b9cu: goto label_139b9c;
        case 0x139bb4u: goto label_139bb4;
        default: break;
    }

    ctx->pc = 0x139b78u;

    // 0x139b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139b7c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x139b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x139b80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139b84: 0x8c625588  lw          $v0, 0x5588($v1)
    ctx->pc = 0x139b84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785588u));
    // 0x139b88: 0x24705588  addiu       $s0, $v1, 0x5588
    ctx->pc = 0x139b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21896));
    // 0x139b8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139B8Cu;
    {
        const bool branch_taken_0x139b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B8Cu;
        // 0x139b90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b8c) {
            ctx->pc = 0x139BB4u;
            goto label_139bb4;
        }
    }
    ctx->pc = 0x139B94u;
    // 0x139b94: 0xc04e2de  jal         func_138B78
    ctx->pc = 0x139B94u;
    SET_GPR_U32(ctx, 31, 0x139B9Cu);
    ctx->pc = 0x138B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138B78u, 0x139B94u, 0x139B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B9Cu;
label_139b9c:
    // 0x139b9c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x139b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x139ba0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x139ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x139ba4: 0x24a5d950  addiu       $a1, $a1, -0x26B0
    ctx->pc = 0x139ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957392));
    // 0x139ba8: 0x24c60d20  addiu       $a2, $a2, 0xD20
    ctx->pc = 0x139ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3360));
    // 0x139bac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x139BACu;
    SET_GPR_U32(ctx, 31, 0x139BB4u);
    ctx->pc = 0x139BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BACu;
    // 0x139bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x139BACu, 0x139BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BB4u;
label_139bb4:
    // 0x139bb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x139bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139bbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x139BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BC0u;
        // 0x139bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139BC8u;
}
