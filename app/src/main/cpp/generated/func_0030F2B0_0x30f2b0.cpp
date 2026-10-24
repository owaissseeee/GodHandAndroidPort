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

// Function: func_0030F2B0
// Address: 0x30f2b0 - 0x30f348
void func_0030F2B0_0x30f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030F2B0_0x30f2b0");
#endif

    switch (ctx->pc) {
        case 0x30f2d8u: goto label_30f2d8;
        default: break;
    }

    ctx->pc = 0x30f2b0u;

    // 0x30f2b0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30f2b4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30f2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30f2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f2bc: 0x3c086c07  lui         $t0, 0x6C07
    ctx->pc = 0x30f2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27655 << 16));
    // 0x30f2c0: 0xac444250  sw          $a0, 0x4250($v0)
    ctx->pc = 0x30f2c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x754250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754250u, _value); } while (0);
    // 0x30f2c4: 0x244a4250  addiu       $t2, $v0, 0x4250
    ctx->pc = 0x30f2c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 16976));
    // 0x30f2c8: 0xaca33d08  sw          $v1, 0x3D08($a1)
    ctx->pc = 0x30f2c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C3D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C3D08u, _value); } while (0);
    // 0x30f2cc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x30f2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2d0: 0x35088965  ori         $t0, $t0, 0x8965
    ctx->pc = 0x30f2d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35173);
    // 0x30f2d4: 0x0  nop
    ctx->pc = 0x30f2d4u;
    // NOP
label_30f2d8:
    // 0x30f2d8: 0x8d253d08  lw          $a1, 0x3D08($t1)
    ctx->pc = 0x30f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15624)));
    // 0x30f2dc: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x30f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30f2e0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x30f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30f2e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f2e8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x30f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30f2ec: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x30f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x30f2f0: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x30f2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x30f2f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f2f8: 0x28870270  slti        $a3, $a0, 0x270
    ctx->pc = 0x30f2f8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)624) ? 1 : 0);
    // 0x30f2fc: 0xad243d08  sw          $a0, 0x3D08($t1)
    ctx->pc = 0x30f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 15624), GPR_U32(ctx, 4));
    // 0x30f300: 0x21f82  srl         $v1, $v0, 30
    ctx->pc = 0x30f300u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
    // 0x30f304: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x30f304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x30f308: 0x480019  multu       $v0, $t0
    ctx->pc = 0x30f308u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30f30c: 0x1812  mflo        $v1
    ctx->pc = 0x30f30cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x30f310: 0x1010  mfhi        $v0
    ctx->pc = 0x30f310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30f314: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30f314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30f318: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30f318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30f31c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30f31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30f320: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30f324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30f328: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x30f328u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x30f32c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30f330: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x30F330u;
    {
        const bool branch_taken_0x30f330 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F330u;
        // 0x30f334: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f330) {
            ctx->pc = 0x30F2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f2d8;
        }
    }
    ctx->pc = 0x30F338u;
    // 0x30f338: 0x3e00008  jr          $ra
    ctx->pc = 0x30F338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F340u;
    // 0x30f340: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30f344: 0x0  nop
    ctx->pc = 0x30f344u;
    // NOP
    ctx->pc = 0x30f348u;
}
