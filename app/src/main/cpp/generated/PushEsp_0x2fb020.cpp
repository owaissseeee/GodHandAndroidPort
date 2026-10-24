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

// Function: PushEsp
// Address: 0x2fb020 - 0x2fb060
void PushEsp_0x2fb020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PushEsp_0x2fb020");
#endif

    ctx->pc = 0x2fb020u;

    // 0x2fb020: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2fb020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2fb024: 0x3c060072  lui         $a2, 0x72
    ctx->pc = 0x2fb024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)114 << 16));
    // 0x2fb028: 0x2442b7c0  addiu       $v0, $v0, -0x4840
    ctx->pc = 0x2fb028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb02c: 0x24c6b840  addiu       $a2, $a2, -0x47C0
    ctx->pc = 0x2fb02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948928));
    // 0x2fb030: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2fb030u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fb034: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2fb034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2fb038: 0x41bc2  srl         $v1, $a0, 15
    ctx->pc = 0x2fb038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 15));
    // 0x2fb03c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fb040: 0x42282  srl         $a0, $a0, 10
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x2fb044: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2fb044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fb048: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2fb048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2fb04c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb050: 0x852806  srlv        $a1, $a1, $a0
    ctx->pc = 0x2fb050u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fb054: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2fb054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2fb058: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB058u;
        // 0x2fb05c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB060u;
}
