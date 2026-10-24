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

// Function: cMessage_getMessageAddr
// Address: 0x2aead0 - 0x2aeb00
void cMessage_getMessageAddr_0x2aead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_getMessageAddr_0x2aead0");
#endif

    ctx->pc = 0x2aead0u;

    // 0x2aead0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2aead0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2aead4: 0x51302  srl         $v0, $a1, 12
    ctx->pc = 0x2aead4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x2aead8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2aead8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aeadc: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x2aeadcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2aeae0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2aeae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aeae4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2aeae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2aeae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2aeae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aeaec: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2aeaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aeaf0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2aeaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2aeaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAF4u;
        // 0x2aeaf8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEAFCu;
    // 0x2aeafc: 0x0  nop
    ctx->pc = 0x2aeafcu;
    // NOP
    ctx->pc = 0x2aeb00u;
}
