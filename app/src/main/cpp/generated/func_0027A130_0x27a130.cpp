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

// Function: func_0027A130
// Address: 0x27a130 - 0x27a180
void func_0027A130_0x27a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027A130_0x27a130");
#endif

    switch (ctx->pc) {
        case 0x27a154u: goto label_27a154;
        case 0x27a16cu: goto label_27a16c;
        default: break;
    }

    ctx->pc = 0x27a130u;

    // 0x27a130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a134: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x27a134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x27a138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27a13c: 0x8c626218  lw          $v0, 0x6218($v1)
    ctx->pc = 0x27a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786218u));
    // 0x27a140: 0x24706218  addiu       $s0, $v1, 0x6218
    ctx->pc = 0x27a140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25112));
    // 0x27a144: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A144u;
    {
        const bool branch_taken_0x27a144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A144u;
        // 0x27a148: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a144) {
            ctx->pc = 0x27A16Cu;
            goto label_27a16c;
        }
    }
    ctx->pc = 0x27A14Cu;
    // 0x27a14c: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x27A14Cu;
    SET_GPR_U32(ctx, 31, 0x27A154u);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x27A14Cu, 0x27A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A154u;
label_27a154:
    // 0x27a154: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x27a158: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x27a158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x27a15c: 0x24a57f58  addiu       $a1, $a1, 0x7F58
    ctx->pc = 0x27a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32600));
    // 0x27a160: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x27a160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x27a164: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x27A164u;
    SET_GPR_U32(ctx, 31, 0x27A16Cu);
    ctx->pc = 0x27A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A164u;
    // 0x27a168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x27A164u, 0x27A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A16Cu;
label_27a16c:
    // 0x27a16c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27a16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27a174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a178: 0x3e00008  jr          $ra
    ctx->pc = 0x27A178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A178u;
        // 0x27a17c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A180u;
}
