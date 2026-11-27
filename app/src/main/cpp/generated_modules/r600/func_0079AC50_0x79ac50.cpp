#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079AC50
// Address: 0x79ac50 - 0x79acd0
void func_0079AC50_0x79ac50(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AC50_0x79ac50");
#endif

    if (__builtin_expect(ctx->pc != 0x79ac50u, 0)) {
        switch (ctx->pc) {
            case 0x79ac98u: goto label_79ac98;
            case 0x79acb0u: goto label_79acb0;
            case 0x79acc0u: goto label_79acc0;
            default: break;
        }
    }



    // 0x79ac50: 0x3c014092  lui         $at, 0x4092
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16530 << 16));
    // 0x79ac54: 0x3421e148  ori         $at, $at, 0xE148
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x79ac58: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ac5c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ac60: 0x3c01c262  lui         $at, 0xC262
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49762 << 16));
    // 0x79ac64: 0x34211eb8  ori         $at, $at, 0x1EB8
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x79ac68: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ac6c: 0x3c01421e  lui         $at, 0x421E
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16926 << 16));
    // 0x79ac70: 0x3421eb85  ori         $at, $at, 0xEB85
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x79ac74: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79ac78: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79ac7c: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79ac80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79ac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79ac84: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79ac84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79ac88: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79ac88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79ac8c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79ac8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79ac90: 0xc0b6dac  jal         func_2DB6B0
    SET_GPR_U32(ctx, 31, 0x79AC98u);
    ctx->pc = 0x79AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC90u;
    // 0x79ac94: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &Getplayer_0x2db6b0, 0x2DB6B0u, 0x79AC98u)) {
        return;
    }
label_79ac98:
    // 0x79ac98: 0x3c01c043  lui         $at, 0xC043
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49219 << 16));
    // 0x79ac9c: 0x3421d70a  ori         $at, $at, 0xD70A
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79aca0: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79aca4: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aca8: 0xc04b388  jal         func_12CE20
    SET_GPR_U32(ctx, 31, 0x79ACB0u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACA8u;
    // 0x79acac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE20u;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_lookCliff_0x12ce20, 0x12CE20u, 0x79ACB0u)) {
        return;
    }
label_79acb0:
    // 0x79acb0: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79acb4: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79acb8: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x79ACC0u);
    ctx->pc = 0x79ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACB8u;
    // 0x79acbc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x79ACC0u)) {
        return;
    }
label_79acc0:
    // 0x79acc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79acc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACC4u;
        // 0x79acc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79accc: 0x0  nop
    // NOP
    ctx->pc = 0x79acd0u;
}
} // namespace gh_r600
