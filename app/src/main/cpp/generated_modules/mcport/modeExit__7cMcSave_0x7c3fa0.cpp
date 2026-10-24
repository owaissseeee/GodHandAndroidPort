#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: modeExit__7cMcSave
// Address: 0x7c3fa0 - 0x7c3ff8
void modeExit__7cMcSave_0x7c3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeExit__7cMcSave_0x7c3fa0");
#endif

    switch (ctx->pc) {
        case 0x7c3fccu: goto label_7c3fcc;
        default: break;
    }

    ctx->pc = 0x7c3fa0u;

    // 0x7c3fa0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c3fa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c3fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c3fa8: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x7c3fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c3fac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3FACu;
    {
        const bool branch_taken_0x7c3fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3FACu;
        // 0x7c3fb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3fac) {
            ctx->pc = 0x7C3FC4u;
            goto label_7c3fc4;
        }
    }
    ctx->pc = 0x7C3FB4u;
    // 0x7c3fb4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c3fb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c3fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c3fbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C3FBCu;
    {
        const bool branch_taken_0x7c3fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3FBCu;
        // 0x7c3fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3fbc) {
            ctx->pc = 0x7C3FECu;
            goto label_7c3fec;
        }
    }
    ctx->pc = 0x7C3FC4u;
label_7c3fc4:
    // 0x7c3fc4: 0xc1f22c8  jal         func_7C8B20
    ctx->pc = 0x7C3FC4u;
    SET_GPR_U32(ctx, 31, 0x7C3FCCu);
    ctx->pc = 0x7C8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B20u, 0x7C3FC4u, 0x7C3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3FCCu;
label_7c3fcc:
    // 0x7c3fcc: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7c3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7c3fd0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x7c3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x7c3fd4: 0x24847a84  addiu       $a0, $a0, 0x7A84
    ctx->pc = 0x7c3fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31364));
    // 0x7c3fd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7c3fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7c3fdc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A88u));
    // 0x7c3fe0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c3fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c3fe4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7c3fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7c3fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7c3fec:
    // 0x7c3fec: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3FECu;
        // 0x7c3ff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3FF4u;
    // 0x7c3ff4: 0x0  nop
    ctx->pc = 0x7c3ff4u;
    // NOP
    ctx->pc = 0x7c3ff8u;
}
} // namespace gh_mcport
