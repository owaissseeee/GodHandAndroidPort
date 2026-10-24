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

// Function: func_0012E5C8
// Address: 0x12e5c8 - 0x12e640
void func_0012E5C8_0x12e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012E5C8_0x12e5c8");
#endif

    ctx->pc = 0x12e5c8u;

    // 0x12e5c8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12e5cc: 0x2442d540  addiu       $v0, $v0, -0x2AC0
    ctx->pc = 0x12e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
    // 0x12e5d0: 0xac820198  sw          $v0, 0x198($a0)
    ctx->pc = 0x12e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 2));
    // 0x12e5d4: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x12e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5d8: 0xf8800040  sqc2        $vf0, 0x40($a0)
    ctx->pc = 0x12e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5dc: 0xf8800050  sqc2        $vf0, 0x50($a0)
    ctx->pc = 0x12e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5e0: 0xf8800090  sqc2        $vf0, 0x90($a0)
    ctx->pc = 0x12e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5e4: 0xf88000a0  sqc2        $vf0, 0xA0($a0)
    ctx->pc = 0x12e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5e8: 0xf88000b0  sqc2        $vf0, 0xB0($a0)
    ctx->pc = 0x12e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5ec: 0xf88000c0  sqc2        $vf0, 0xC0($a0)
    ctx->pc = 0x12e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5f0: 0xf88000d0  sqc2        $vf0, 0xD0($a0)
    ctx->pc = 0x12e5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5f4: 0xf88000e0  sqc2        $vf0, 0xE0($a0)
    ctx->pc = 0x12e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5f8: 0xf88000f0  sqc2        $vf0, 0xF0($a0)
    ctx->pc = 0x12e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e5fc: 0xf8800100  sqc2        $vf0, 0x100($a0)
    ctx->pc = 0x12e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e600: 0xf8800120  sqc2        $vf0, 0x120($a0)
    ctx->pc = 0x12e600u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e604: 0xf8800130  sqc2        $vf0, 0x130($a0)
    ctx->pc = 0x12e604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e608: 0xf8800150  sqc2        $vf0, 0x150($a0)
    ctx->pc = 0x12e608u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 336), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e60c: 0xf8800160  sqc2        $vf0, 0x160($a0)
    ctx->pc = 0x12e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 352), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12e610: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12e610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e614: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12e614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12e618: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12e618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12e61c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12e620: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12e620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12e624: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12e624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12e628: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12e628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12e62c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x12e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x12e630: 0xac800190  sw          $zero, 0x190($a0)
    ctx->pc = 0x12e630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 0));
    // 0x12e634: 0x3e00008  jr          $ra
    ctx->pc = 0x12E634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E634u;
        // 0x12e638: 0xac800194  sw          $zero, 0x194($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E63Cu;
    // 0x12e63c: 0x0  nop
    ctx->pc = 0x12e63cu;
    // NOP
    ctx->pc = 0x12e640u;
}
