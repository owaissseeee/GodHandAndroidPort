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

// Function: func_002A4BA0
// Address: 0x2a4ba0 - 0x2a4c00
void func_002A4BA0_0x2a4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4BA0_0x2a4ba0");
#endif

    ctx->pc = 0x2a4ba0u;

    // 0x2a4ba0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2a4ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ba4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2a4ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a4ba8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A4BA8u;
    {
        const bool branch_taken_0x2a4ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BA8u;
        // 0x2a4bac: 0x41b02  srl         $v1, $a0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ba8) {
            ctx->pc = 0x2A4BECu;
            goto label_2a4bec;
        }
    }
    ctx->pc = 0x2A4BB0u;
    // 0x2a4bb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a4bb4: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x2a4bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2a4bb8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x2a4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a4bbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a4bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a4bc0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2a4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a4bc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bc8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2a4bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2a4bcc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a4bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a4bd0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a4bd4: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x2a4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x2a4bd8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2a4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2a4bdc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4be0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2a4be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BE4u;
        // 0x2a4be8: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4BECu;
label_2a4bec:
    // 0x2a4bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4BECu;
        // 0x2a4bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4BF4u;
    // 0x2a4bf4: 0x0  nop
    ctx->pc = 0x2a4bf4u;
    // NOP
    // 0x2a4bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bfc: 0x0  nop
    ctx->pc = 0x2a4bfcu;
    // NOP
    ctx->pc = 0x2a4c00u;
}
