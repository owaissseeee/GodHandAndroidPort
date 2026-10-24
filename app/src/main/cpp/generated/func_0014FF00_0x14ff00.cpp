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

// Function: func_0014FF00
// Address: 0x14ff00 - 0x14ff60
void func_0014FF00_0x14ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014FF00_0x14ff00");
#endif

    ctx->pc = 0x14ff00u;

    // 0x14ff00: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x14ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14ff04: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x14ff08: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x14ff08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ff0c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x14ff0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x14ff10: 0x65202b  sltu        $a0, $v1, $a1
    ctx->pc = 0x14ff10u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x14ff14: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14ff14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff18: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x14ff18u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x14ff1c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x14ff1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x14ff20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x14ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ff24: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x14ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x14ff28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x14ff28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x14ff2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14ff30: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x14ff30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x14ff34: 0x9d040004  lwu         $a0, 0x4($t0)
    ctx->pc = 0x14ff34u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14ff38: 0xfd060000  sd          $a2, 0x0($t0)
    ctx->pc = 0x14ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 6));
    // 0x14ff3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x14ff3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x14ff40: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x14ff40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14ff44: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14ff48: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x14ff48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x14ff4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x14ff4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14ff50: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF50u;
        // 0x14ff54: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF58u;
    // 0x14ff58: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x14ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x14ff5c: 0x0  nop
    ctx->pc = 0x14ff5cu;
    // NOP
    ctx->pc = 0x14ff60u;
}
