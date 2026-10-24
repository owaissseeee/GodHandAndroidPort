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

// Function: GetOrInitSingleton7857C8_16FF18
// Address: 0x16ff18 - 0x16ff68
void GetOrInitSingleton7857C8_16FF18_0x16ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton7857C8_16FF18_0x16ff18");
#endif

    switch (ctx->pc) {
        case 0x16ff3cu: goto label_16ff3c;
        case 0x16ff54u: goto label_16ff54;
        default: break;
    }

    ctx->pc = 0x16ff18u;

    // 0x16ff18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ff18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ff1c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x16ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x16ff20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ff20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ff24: 0x8c6257c8  lw          $v0, 0x57C8($v1)
    ctx->pc = 0x16ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7857C8u));
    // 0x16ff28: 0x247057c8  addiu       $s0, $v1, 0x57C8
    ctx->pc = 0x16ff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22472));
    // 0x16ff2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16FF2Cu;
    {
        const bool branch_taken_0x16ff2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF2Cu;
        // 0x16ff30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff2c) {
            ctx->pc = 0x16FF54u;
            goto label_16ff54;
        }
    }
    ctx->pc = 0x16FF34u;
    // 0x16ff34: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x16FF34u;
    SET_GPR_U32(ctx, 31, 0x16FF3Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x16FF34u, 0x16FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF3Cu;
label_16ff3c:
    // 0x16ff3c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16ff40: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x16ff40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x16ff44: 0x24a503f8  addiu       $a1, $a1, 0x3F8
    ctx->pc = 0x16ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1016));
    // 0x16ff48: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x16ff48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x16ff4c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x16FF4Cu;
    SET_GPR_U32(ctx, 31, 0x16FF54u);
    ctx->pc = 0x16FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF4Cu;
    // 0x16ff50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x16FF4Cu, 0x16FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF54u;
label_16ff54:
    // 0x16ff54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ff54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ff5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ff5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ff60: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF60u;
        // 0x16ff64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF68u;
}
