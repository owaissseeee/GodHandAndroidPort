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

// Function: func_0026A338
// Address: 0x26a338 - 0x26a3d8
void func_0026A338_0x26a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026A338_0x26a338");
#endif

    ctx->pc = 0x26a338u;

    // 0x26a338: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x26a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x26a33c: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x26a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x26a340: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26A340u;
    {
        const bool branch_taken_0x26a340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A340u;
        // 0x26a344: 0x28620223  slti        $v0, $v1, 0x223 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a340) {
            ctx->pc = 0x26A394u;
            goto label_26a394;
        }
    }
    ctx->pc = 0x26A348u;
    // 0x26a348: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A348u;
    {
        const bool branch_taken_0x26a348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a348) {
            ctx->pc = 0x26A34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A348u;
            // 0x26a34c: 0x90821700  lbu         $v0, 0x1700($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5888)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A368u;
            goto label_26a368;
        }
    }
    ctx->pc = 0x26A350u;
    // 0x26a350: 0x28620277  slti        $v0, $v1, 0x277
    ctx->pc = 0x26a350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x26a354: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A354u;
    {
        const bool branch_taken_0x26a354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A354u;
        // 0x26a358: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a354) {
            ctx->pc = 0x26A364u;
            goto label_26a364;
        }
    }
    ctx->pc = 0x26A35Cu;
    // 0x26a35c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26A35Cu;
    {
        const bool branch_taken_0x26a35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a35c) {
            ctx->pc = 0x26A360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A35Cu;
            // 0x26a360: 0x90821700  lbu         $v0, 0x1700($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5888)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A398u;
            goto label_26a398;
        }
    }
    ctx->pc = 0x26A364u;
label_26a364:
    // 0x26a364: 0x90821700  lbu         $v0, 0x1700($a0)
    ctx->pc = 0x26a364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5888)));
label_26a368:
    // 0x26a368: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26a368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26a36c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x26a36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x26a370: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26a370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x26a374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a378: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A378u;
    {
        const bool branch_taken_0x26a378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a378) {
            ctx->pc = 0x26A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A378u;
            // 0x26a37c: 0xe48016fc  swc1        $f0, 0x16FC($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5884), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A3C4u;
            goto label_26a3c4;
        }
    }
    ctx->pc = 0x26A380u;
    // 0x26a380: 0x3c01be86  lui         $at, 0xBE86
    ctx->pc = 0x26a380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48774 << 16));
    // 0x26a384: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26a384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x26a388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a38c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26A38Cu;
    {
        const bool branch_taken_0x26a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A38Cu;
        // 0x26a390: 0xe48016fc  swc1        $f0, 0x16FC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a38c) {
            ctx->pc = 0x26A3C4u;
            goto label_26a3c4;
        }
    }
    ctx->pc = 0x26A394u;
label_26a394:
    // 0x26a394: 0x90821700  lbu         $v0, 0x1700($a0)
    ctx->pc = 0x26a394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5888)));
label_26a398:
    // 0x26a398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26a39c: 0x3c01bdfa  lui         $at, 0xBDFA
    ctx->pc = 0x26a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48634 << 16));
    // 0x26a3a0: 0x342135dd  ori         $at, $at, 0x35DD
    ctx->pc = 0x26a3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13789);
    // 0x26a3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a3a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A3A8u;
    {
        const bool branch_taken_0x26a3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3a8) {
            ctx->pc = 0x26A3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A3A8u;
            // 0x26a3ac: 0xe48016fc  swc1        $f0, 0x16FC($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5884), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A3C4u;
            goto label_26a3c4;
        }
    }
    ctx->pc = 0x26A3B0u;
    // 0x26a3b0: 0x3c013dfa  lui         $at, 0x3DFA
    ctx->pc = 0x26a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15866 << 16));
    // 0x26a3b4: 0x342135dd  ori         $at, $at, 0x35DD
    ctx->pc = 0x26a3b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13789);
    // 0x26a3b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a3bc: 0x0  nop
    ctx->pc = 0x26a3bcu;
    // NOP
    // 0x26a3c0: 0xe48016fc  swc1        $f0, 0x16FC($a0)
    ctx->pc = 0x26a3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5884), bits); }
label_26a3c4:
    // 0x26a3c4: 0x90821700  lbu         $v0, 0x1700($a0)
    ctx->pc = 0x26a3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5888)));
    // 0x26a3c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26a3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x26A3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3CCu;
        // 0x26a3d0: 0xa0821700  sb          $v0, 0x1700($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5888), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A3D4u;
    // 0x26a3d4: 0x0  nop
    ctx->pc = 0x26a3d4u;
    // NOP
    ctx->pc = 0x26a3d8u;
}
