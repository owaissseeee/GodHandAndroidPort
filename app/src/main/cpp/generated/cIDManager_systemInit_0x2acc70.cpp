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

// Function: cIDManager_systemInit
// Address: 0x2acc70 - 0x2accd8
void cIDManager_systemInit_0x2acc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDManager_systemInit_0x2acc70");
#endif

    switch (ctx->pc) {
        case 0x2acc98u: goto label_2acc98;
        case 0x2accb4u: goto label_2accb4;
        case 0x2accc4u: goto label_2accc4;
        default: break;
    }

    ctx->pc = 0x2acc70u;

    // 0x2acc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2acc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2acc74: 0x24060640  addiu       $a2, $zero, 0x640
    ctx->pc = 0x2acc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x2acc78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2acc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2acc7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2acc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2acc80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2acc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2acc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2acc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2acc8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc90: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2ACC90u;
    SET_GPR_U32(ctx, 31, 0x2ACC98u);
    ctx->pc = 0x2ACC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC90u;
    // 0x2acc94: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2ACC90u, 0x2ACC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC98u;
label_2acc98:
    // 0x2acc98: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2acc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2acc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acca0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2acca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2acca4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2acca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2acca8: 0xac603544  sw          $zero, 0x3544($v1)
    ctx->pc = 0x2acca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13636), GPR_U32(ctx, 0));
    // 0x2accac: 0xc0ab336  jal         func_2ACCD8
    ctx->pc = 0x2ACCACu;
    SET_GPR_U32(ctx, 31, 0x2ACCB4u);
    ctx->pc = 0x2ACCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCACu;
    // 0x2accb0: 0xae000740  sw          $zero, 0x740($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1856), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCD8u, 0x2ACCACu, 0x2ACCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCB4u;
label_2accb4:
    // 0x2accb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2accb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2accb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accbc: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x2ACCBCu;
    SET_GPR_U32(ctx, 31, 0x2ACCC4u);
    ctx->pc = 0x2ACCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCBCu;
    // 0x2accc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x2ACCBCu, 0x2ACCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCC4u;
label_2accc4:
    // 0x2accc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2accc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2accc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2accc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2accccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCD0u;
        // 0x2accd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACCD8u;
}
