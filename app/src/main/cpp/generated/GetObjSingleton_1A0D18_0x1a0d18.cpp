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

// Function: GetObjSingleton_1A0D18
// Address: 0x1a0d18 - 0x1a0d68
void GetObjSingleton_1A0D18_0x1a0d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjSingleton_1A0D18_0x1a0d18");
#endif

    switch (ctx->pc) {
        case 0x1a0d3cu: goto label_1a0d3c;
        case 0x1a0d54u: goto label_1a0d54;
        default: break;
    }

    ctx->pc = 0x1a0d18u;

    // 0x1a0d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0d1c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a0d20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a0d24: 0x8c625f18  lw          $v0, 0x5F18($v1)
    ctx->pc = 0x1a0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F18u));
    // 0x1a0d28: 0x24705f18  addiu       $s0, $v1, 0x5F18
    ctx->pc = 0x1a0d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24344));
    // 0x1a0d2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0D2Cu;
    {
        const bool branch_taken_0x1a0d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D2Cu;
        // 0x1a0d30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d2c) {
            ctx->pc = 0x1A0D54u;
            goto label_1a0d54;
        }
    }
    ctx->pc = 0x1A0D34u;
    // 0x1a0d34: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1A0D34u;
    SET_GPR_U32(ctx, 31, 0x1A0D3Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1A0D34u, 0x1A0D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D3Cu;
label_1a0d3c:
    // 0x1a0d3c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a0d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a0d40: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a0d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a0d44: 0x24a56e20  addiu       $a1, $a1, 0x6E20
    ctx->pc = 0x1a0d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28192));
    // 0x1a0d48: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1a0d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1a0d4c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A0D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D54u);
    ctx->pc = 0x1A0D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D4Cu;
    // 0x1a0d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A0D4Cu, 0x1A0D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D54u;
label_1a0d54:
    // 0x1a0d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a0d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D60u;
        // 0x1a0d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D68u;
}
