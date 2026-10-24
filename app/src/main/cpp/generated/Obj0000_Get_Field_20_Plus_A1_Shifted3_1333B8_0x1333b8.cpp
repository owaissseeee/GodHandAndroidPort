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

// Function: Obj0000_Get_Field_20_Plus_A1_Shifted3_1333B8
// Address: 0x1333b8 - 0x133408
void Obj0000_Get_Field_20_Plus_A1_Shifted3_1333B8_0x1333b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Field_20_Plus_A1_Shifted3_1333B8_0x1333b8");
#endif

    ctx->pc = 0x1333b8u;

    // 0x1333b8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1333b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1333bc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1333bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1333c0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1333c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1333c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1333C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1333C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333C4u;
        // 0x1333c8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1333C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1333CCu;
    // 0x1333cc: 0x0  nop
    ctx->pc = 0x1333ccu;
    // NOP
    // 0x1333d0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x1333d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1333d4: 0x0  nop
    ctx->pc = 0x1333d4u;
    // NOP
    // 0x1333d8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x1333d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1333dc: 0x0  nop
    ctx->pc = 0x1333dcu;
    // NOP
    // 0x1333e0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x1333e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1333e4: 0x0  nop
    ctx->pc = 0x1333e4u;
    // NOP
    // 0x1333e8: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x1333e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1333ec: 0x0  nop
    ctx->pc = 0x1333ecu;
    // NOP
    // 0x1333f0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x1333f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1333f4: 0x0  nop
    ctx->pc = 0x1333f4u;
    // NOP
    // 0x1333f8: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x1333f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1333fc: 0x0  nop
    ctx->pc = 0x1333fcu;
    // NOP
    // 0x133400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133404: 0x0  nop
    ctx->pc = 0x133404u;
    // NOP
    ctx->pc = 0x133408u;
}
