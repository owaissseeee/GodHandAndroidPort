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

// Function: func_00167360
// Address: 0x167360 - 0x1673b0
void func_00167360_0x167360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167360_0x167360");
#endif

    switch (ctx->pc) {
        case 0x167384u: goto label_167384;
        case 0x16739cu: goto label_16739c;
        default: break;
    }

    ctx->pc = 0x167360u;

    // 0x167360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167364: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x167364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x167368: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16736c: 0x8c625738  lw          $v0, 0x5738($v1)
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785738u));
    // 0x167370: 0x24705738  addiu       $s0, $v1, 0x5738
    ctx->pc = 0x167370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22328));
    // 0x167374: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167374u;
    {
        const bool branch_taken_0x167374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167374u;
        // 0x167378: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167374) {
            ctx->pc = 0x16739Cu;
            goto label_16739c;
        }
    }
    ctx->pc = 0x16737Cu;
    // 0x16737c: 0xc05858a  jal         func_161628
    ctx->pc = 0x16737Cu;
    SET_GPR_U32(ctx, 31, 0x167384u);
    ctx->pc = 0x161628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161628u, 0x16737Cu, 0x167384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167384u;
label_167384:
    // 0x167384: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x167384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x167388: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x167388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x16738c: 0x24a5fb60  addiu       $a1, $a1, -0x4A0
    ctx->pc = 0x16738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966112));
    // 0x167390: 0x24c60d38  addiu       $a2, $a2, 0xD38
    ctx->pc = 0x167390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3384));
    // 0x167394: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x167394u;
    SET_GPR_U32(ctx, 31, 0x16739Cu);
    ctx->pc = 0x167398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167394u;
    // 0x167398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x167394u, 0x16739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16739Cu;
label_16739c:
    // 0x16739c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16739cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1673a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1673a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1673a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1673a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1673A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673A8u;
        // 0x1673ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1673A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1673B0u;
}
