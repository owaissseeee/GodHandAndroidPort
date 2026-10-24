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

// Function: func_001ADBE8
// Address: 0x1adbe8 - 0x1adc38
void func_001ADBE8_0x1adbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ADBE8_0x1adbe8");
#endif

    switch (ctx->pc) {
        case 0x1adbfcu: goto label_1adbfc;
        default: break;
    }

    ctx->pc = 0x1adbe8u;

    // 0x1adbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adbec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1adbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1adbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adbf4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1ADBF4u;
    SET_GPR_U32(ctx, 31, 0x1ADBFCu);
    ctx->pc = 0x1ADBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBF4u;
    // 0x1adbf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1ADBF4u, 0x1ADBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBFCu;
label_1adbfc:
    // 0x1adbfc: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1adbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1adc00: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1adc04: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1adc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1adc08: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x1adc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1adc0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adc10: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1adc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1adc14: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1adc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1adc18: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1adc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1adc1c: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1adc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x1adc20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1adc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adc24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adc28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC2Cu;
        // 0x1adc30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADC34u;
    // 0x1adc34: 0x0  nop
    ctx->pc = 0x1adc34u;
    // NOP
    ctx->pc = 0x1adc38u;
}
