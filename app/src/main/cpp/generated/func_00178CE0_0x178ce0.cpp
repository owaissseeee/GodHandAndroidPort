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

// Function: func_00178CE0
// Address: 0x178ce0 - 0x178d30
void func_00178CE0_0x178ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178CE0_0x178ce0");
#endif

    switch (ctx->pc) {
        case 0x178d04u: goto label_178d04;
        case 0x178d1cu: goto label_178d1c;
        default: break;
    }

    ctx->pc = 0x178ce0u;

    // 0x178ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178ce4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x178ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x178ce8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178cec: 0x8c625928  lw          $v0, 0x5928($v1)
    ctx->pc = 0x178cecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785928u));
    // 0x178cf0: 0x24705928  addiu       $s0, $v1, 0x5928
    ctx->pc = 0x178cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22824));
    // 0x178cf4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178CF4u;
    {
        const bool branch_taken_0x178cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CF4u;
        // 0x178cf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cf4) {
            ctx->pc = 0x178D1Cu;
            goto label_178d1c;
        }
    }
    ctx->pc = 0x178CFCu;
    // 0x178cfc: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x178CFCu;
    SET_GPR_U32(ctx, 31, 0x178D04u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x178CFCu, 0x178D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D04u;
label_178d04:
    // 0x178d04: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x178d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x178d08: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x178d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x178d0c: 0x24a51728  addiu       $a1, $a1, 0x1728
    ctx->pc = 0x178d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5928));
    // 0x178d10: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x178d14: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x178D14u;
    SET_GPR_U32(ctx, 31, 0x178D1Cu);
    ctx->pc = 0x178D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D14u;
    // 0x178d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x178D14u, 0x178D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D1Cu;
label_178d1c:
    // 0x178d1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178d24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178d28: 0x3e00008  jr          $ra
    ctx->pc = 0x178D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D28u;
        // 0x178d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D30u;
}
