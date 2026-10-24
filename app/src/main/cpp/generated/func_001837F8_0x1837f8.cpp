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

// Function: func_001837F8
// Address: 0x1837f8 - 0x183848
void func_001837F8_0x1837f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001837F8_0x1837f8");
#endif

    switch (ctx->pc) {
        case 0x18381cu: goto label_18381c;
        case 0x183834u: goto label_183834;
        default: break;
    }

    ctx->pc = 0x1837f8u;

    // 0x1837f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1837f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1837fc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1837fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x183800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183804: 0x8c625ab8  lw          $v0, 0x5AB8($v1)
    ctx->pc = 0x183804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785AB8u));
    // 0x183808: 0x24705ab8  addiu       $s0, $v1, 0x5AB8
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23224));
    // 0x18380c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18380Cu;
    {
        const bool branch_taken_0x18380c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18380Cu;
        // 0x183810: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18380c) {
            ctx->pc = 0x183834u;
            goto label_183834;
        }
    }
    ctx->pc = 0x183814u;
    // 0x183814: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x183814u;
    SET_GPR_U32(ctx, 31, 0x18381Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x183814u, 0x18381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18381Cu;
label_18381c:
    // 0x18381c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18381cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x183820: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x183820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x183824: 0x24a52ce8  addiu       $a1, $a1, 0x2CE8
    ctx->pc = 0x183824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11496));
    // 0x183828: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x183828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x18382c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18382Cu;
    SET_GPR_U32(ctx, 31, 0x183834u);
    ctx->pc = 0x183830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18382Cu;
    // 0x183830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18382Cu, 0x183834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183834u;
label_183834:
    // 0x183834: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x183834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18383c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18383cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183840: 0x3e00008  jr          $ra
    ctx->pc = 0x183840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183840u;
        // 0x183844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183848u;
}
