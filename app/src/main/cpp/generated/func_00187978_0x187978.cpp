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

// Function: func_00187978
// Address: 0x187978 - 0x1879c8
void func_00187978_0x187978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187978_0x187978");
#endif

    switch (ctx->pc) {
        case 0x18799cu: goto label_18799c;
        case 0x1879b4u: goto label_1879b4;
        default: break;
    }

    ctx->pc = 0x187978u;

    // 0x187978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18797c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18797cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x187980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187984: 0x8c625af8  lw          $v0, 0x5AF8($v1)
    ctx->pc = 0x187984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785AF8u));
    // 0x187988: 0x24705af8  addiu       $s0, $v1, 0x5AF8
    ctx->pc = 0x187988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23288));
    // 0x18798c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18798Cu;
    {
        const bool branch_taken_0x18798c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18798Cu;
        // 0x187990: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18798c) {
            ctx->pc = 0x1879B4u;
            goto label_1879b4;
        }
    }
    ctx->pc = 0x187994u;
    // 0x187994: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x187994u;
    SET_GPR_U32(ctx, 31, 0x18799Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x187994u, 0x18799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18799Cu;
label_18799c:
    // 0x18799c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18799cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1879a0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1879a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1879a4: 0x24a53218  addiu       $a1, $a1, 0x3218
    ctx->pc = 0x1879a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12824));
    // 0x1879a8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1879ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1879ACu;
    SET_GPR_U32(ctx, 31, 0x1879B4u);
    ctx->pc = 0x1879B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879ACu;
    // 0x1879b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1879ACu, 0x1879B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879B4u;
label_1879b4:
    // 0x1879b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1879b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1879b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1879bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1879bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1879c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1879C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1879C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879C0u;
        // 0x1879c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1879C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1879C8u;
}
