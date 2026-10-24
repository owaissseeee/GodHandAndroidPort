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

// Function: cEmWrap_getPos
// Address: 0x295ab8 - 0x295af8
void cEmWrap_getPos_0x295ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_getPos_0x295ab8");
#endif

    switch (ctx->pc) {
        case 0x295accu: goto label_295acc;
        default: break;
    }

    ctx->pc = 0x295ab8u;

    // 0x295ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295abc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295ac4: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295AC4u;
    SET_GPR_U32(ctx, 31, 0x295ACCu);
    ctx->pc = 0x295AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295AC4u;
    // 0x295ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295AC4u, 0x295ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295ACCu;
label_295acc:
    // 0x295acc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x295ACCu;
    {
        const bool branch_taken_0x295acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295ACCu;
        // 0x295ad0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295acc) {
            ctx->pc = 0x295AE0u;
            goto label_295ae0;
        }
    }
    ctx->pc = 0x295AD4u;
    // 0x295ad4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x295ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295ad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295AD8u;
    {
        const bool branch_taken_0x295ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AD8u;
        // 0x295adc: 0x8c6200f0  lw          $v0, 0xF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ad8) {
            ctx->pc = 0x295AE4u;
            goto label_295ae4;
        }
    }
    ctx->pc = 0x295AE0u;
label_295ae0:
    // 0x295ae0: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x295ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
label_295ae4:
    // 0x295ae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295aec: 0x3e00008  jr          $ra
    ctx->pc = 0x295AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295AECu;
        // 0x295af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295AF4u;
    // 0x295af4: 0x0  nop
    ctx->pc = 0x295af4u;
    // NOP
    ctx->pc = 0x295af8u;
}
