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

// Function: sj_hexstr_to_val
// Address: 0x33ad08 - 0x33adc0
void sj_hexstr_to_val_0x33ad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sj_hexstr_to_val_0x33ad08");
#endif

    ctx->pc = 0x33ad08u;

    // 0x33ad08: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x33ad08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33ad0c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x33ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x33ad10: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x33ad10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x33ad14: 0x24c68c08  addiu       $a2, $a2, -0x73F8
    ctx->pc = 0x33ad14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937608));
    // 0x33ad18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33ad1c: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x33ad1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33ad20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33ad24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ad28: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x33ad28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ad2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33ad30: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x33ad30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33ad34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33ad38: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x33ad38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x33ad3c: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x33ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x33ad40: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33ad44: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x33ad44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33ad48: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x33ad48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33ad4c: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x33ad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x33ad50: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x33ad50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33ad54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33ad58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33ad5c: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x33ad5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x33ad60: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x33ad60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ad64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ad68: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x33ad68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x33ad6c: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x33ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x33ad70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33ad74: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x33ad74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33ad78: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x33ad78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33ad7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33ad80: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x33ad80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x33ad84: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x33ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x33ad88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33ad8c: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x33ad8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x33ad90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ad94: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x33ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x33ad98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33ad9c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33ada0: 0x454821  addu        $t1, $v0, $a1
    ctx->pc = 0x33ada0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33ada4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33ada8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x33ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x33adac: 0x3e00008  jr          $ra
    ctx->pc = 0x33ADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADACu;
        // 0x33adb0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ADB4u;
    // 0x33adb4: 0x0  nop
    ctx->pc = 0x33adb4u;
    // NOP
    // 0x33adb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33adb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33adbc: 0x0  nop
    ctx->pc = 0x33adbcu;
    // NOP
    ctx->pc = 0x33adc0u;
}
