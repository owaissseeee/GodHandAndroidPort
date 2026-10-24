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

// Function: func_002A4C00
// Address: 0x2a4c00 - 0x2a4c38
void func_002A4C00_0x2a4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4C00_0x2a4c00");
#endif

    ctx->pc = 0x2a4c00u;

    // 0x2a4c00: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2a4c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a4c04: 0x51302  srl         $v0, $a1, 12
    ctx->pc = 0x2a4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x2a4c08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a4c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a4c0c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x2a4c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2a4c10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a4c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4c14: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a4c18: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4c1c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2a4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a4c20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C20u;
        // 0x2a4c24: 0x90a20008  lbu         $v0, 0x8($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4C28u;
    // 0x2a4c28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a4c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4c2c: 0x0  nop
    ctx->pc = 0x2a4c2cu;
    // NOP
    // 0x2a4c30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4c34: 0x0  nop
    ctx->pc = 0x2a4c34u;
    // NOP
    ctx->pc = 0x2a4c38u;
}
