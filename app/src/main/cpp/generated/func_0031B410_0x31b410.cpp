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

// Function: func_0031B410
// Address: 0x31b410 - 0x31b4b8
void func_0031B410_0x31b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031B410_0x31b410");
#endif

    ctx->pc = 0x31b410u;

    // 0x31b410: 0xdca40040  ld          $a0, 0x40($a1)
    ctx->pc = 0x31b410u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x31b414: 0x3403f008  ori         $v1, $zero, 0xF008
    ctx->pc = 0x31b414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61448);
    // 0x31b418: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x31b418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x31b41c: 0x3463ffe0  ori         $v1, $v1, 0xFFE0
    ctx->pc = 0x31b41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65504);
    // 0x31b420: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x31b420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x31b424: 0xdca60038  ld          $a2, 0x38($a1)
    ctx->pc = 0x31b424u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x31b428: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x31b428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31b42c: 0xdca80028  ld          $t0, 0x28($a1)
    ctx->pc = 0x31b42cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x31b430: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x31b430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31b434: 0xdca70030  ld          $a3, 0x30($a1)
    ctx->pc = 0x31b434u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x31b438: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x31b438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31b43c: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x31b43cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x31b440: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x31b440u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x31b444: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x31b444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x31b448: 0xfca40040  sd          $a0, 0x40($a1)
    ctx->pc = 0x31b448u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 4));
    // 0x31b44c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31b450: 0xfca60038  sd          $a2, 0x38($a1)
    ctx->pc = 0x31b450u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 6));
    // 0x31b454: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31b454u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31b458: 0xfca80028  sd          $t0, 0x28($a1)
    ctx->pc = 0x31b458u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 8));
    // 0x31b45c: 0xfca70030  sd          $a3, 0x30($a1)
    ctx->pc = 0x31b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 7));
    // 0x31b460: 0xa0a9006b  sb          $t1, 0x6B($a1)
    ctx->pc = 0x31b460u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 107), (uint8_t)GPR_U32(ctx, 9));
    // 0x31b464: 0xa0a0007b  sb          $zero, 0x7B($a1)
    ctx->pc = 0x31b464u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b468: 0xa0a90068  sb          $t1, 0x68($a1)
    ctx->pc = 0x31b468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 104), (uint8_t)GPR_U32(ctx, 9));
    // 0x31b46c: 0xa0a90069  sb          $t1, 0x69($a1)
    ctx->pc = 0x31b46cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 105), (uint8_t)GPR_U32(ctx, 9));
    // 0x31b470: 0xa0a9006a  sb          $t1, 0x6A($a1)
    ctx->pc = 0x31b470u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 106), (uint8_t)GPR_U32(ctx, 9));
    // 0x31b474: 0xa0a0006f  sb          $zero, 0x6F($a1)
    ctx->pc = 0x31b474u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b478: 0xa0a0006e  sb          $zero, 0x6E($a1)
    ctx->pc = 0x31b478u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b47c: 0xa0a0006c  sb          $zero, 0x6C($a1)
    ctx->pc = 0x31b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b480: 0xa0a0006d  sb          $zero, 0x6D($a1)
    ctx->pc = 0x31b480u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 109), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b484: 0xa0a00070  sb          $zero, 0x70($a1)
    ctx->pc = 0x31b484u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b488: 0xa0a00073  sb          $zero, 0x73($a1)
    ctx->pc = 0x31b488u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 115), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b48c: 0xa0a00071  sb          $zero, 0x71($a1)
    ctx->pc = 0x31b48cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b490: 0xa0a00072  sb          $zero, 0x72($a1)
    ctx->pc = 0x31b490u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b494: 0xa0a00074  sb          $zero, 0x74($a1)
    ctx->pc = 0x31b494u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b498: 0xa0a00075  sb          $zero, 0x75($a1)
    ctx->pc = 0x31b498u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b49c: 0xa0a00076  sb          $zero, 0x76($a1)
    ctx->pc = 0x31b49cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b4a0: 0xa0a00077  sb          $zero, 0x77($a1)
    ctx->pc = 0x31b4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b4a4: 0xa0a00078  sb          $zero, 0x78($a1)
    ctx->pc = 0x31b4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b4a8: 0xa0a00079  sb          $zero, 0x79($a1)
    ctx->pc = 0x31b4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31B4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B4ACu;
        // 0x31b4b0: 0xa0a0007a  sb          $zero, 0x7A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B4B4u;
    // 0x31b4b4: 0x0  nop
    ctx->pc = 0x31b4b4u;
    // NOP
    ctx->pc = 0x31b4b8u;
}
