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

// Function: func_00155BE8
// Address: 0x155be8 - 0x155c68
void func_00155BE8_0x155be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155BE8_0x155be8");
#endif

    ctx->pc = 0x155be8u;

    // 0x155be8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x155be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x155bec: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x155bf0: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x155BF0u;
    {
        const bool branch_taken_0x155bf0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x155BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BF0u;
        // 0x155bf4: 0x8c870220  lw          $a3, 0x220($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155bf0) {
            ctx->pc = 0x155C4Cu;
            goto label_155c4c;
        }
    }
    ctx->pc = 0x155BF8u;
    // 0x155bf8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x155bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x155bfc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x155c00: 0x24425d80  addiu       $v0, $v0, 0x5D80
    ctx->pc = 0x155c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23936));
    // 0x155c04: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x155c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x155c08: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x155c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x155c0c: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x155c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x155c10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x155c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x155c14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x155c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x155c18: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155c1c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x155c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x155c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155c24: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x155c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x155c28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x155c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x155c2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x155c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x155c30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x155c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x155c34: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x155c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x155c38: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x155c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x155c3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x155c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x155c40: 0xfce20060  sd          $v0, 0x60($a3)
    ctx->pc = 0x155c40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 2));
    // 0x155c44: 0x3e00008  jr          $ra
    ctx->pc = 0x155C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C44u;
        // 0x155c48: 0xfce30050  sd          $v1, 0x50($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 80), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C4Cu;
label_155c4c:
    // 0x155c4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x155c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x155c50: 0xfce20060  sd          $v0, 0x60($a3)
    ctx->pc = 0x155c50u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 2));
    // 0x155c54: 0x3e00008  jr          $ra
    ctx->pc = 0x155C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C54u;
        // 0x155c58: 0xfce20050  sd          $v0, 0x50($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155C5Cu;
    // 0x155c5c: 0x0  nop
    ctx->pc = 0x155c5cu;
    // NOP
    // 0x155c60: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x155c60u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x155c64: 0x0  nop
    ctx->pc = 0x155c64u;
    // NOP
    ctx->pc = 0x155c68u;
}
