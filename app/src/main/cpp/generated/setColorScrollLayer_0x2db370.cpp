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

// Function: setColorScrollLayer
// Address: 0x2db370 - 0x2db3e8
void setColorScrollLayer_0x2db370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setColorScrollLayer_0x2db370");
#endif

    switch (ctx->pc) {
        case 0x2db390u: goto label_2db390;
        default: break;
    }

    ctx->pc = 0x2db370u;

    // 0x2db370: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2db370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2db374: 0x8cc34c38  lw          $v1, 0x4C38($a2)
    ctx->pc = 0x2db374u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C38u));
    // 0x2db378: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db37c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2db37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db380: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DB380u;
    {
        const bool branch_taken_0x2db380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2db380) {
            ctx->pc = 0x2DB3DCu;
            goto label_2db3dc;
        }
    }
    ctx->pc = 0x2DB388u;
    // 0x2db388: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2db388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db38c: 0x0  nop
    ctx->pc = 0x2db38cu;
    // NOP
label_2db390:
    // 0x2db390: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x2db390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
    // 0x2db394: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB394u;
    {
        const bool branch_taken_0x2db394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db394) {
            ctx->pc = 0x2DB398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB394u;
            // 0x2db398: 0x8cc34c38  lw          $v1, 0x4C38($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB3CCu;
            goto label_2db3cc;
        }
    }
    ctx->pc = 0x2DB39Cu;
    // 0x2db39c: 0xe46c0240  swc1        $f12, 0x240($v1)
    ctx->pc = 0x2db39cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
    // 0x2db3a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db3a4: 0xe44d0244  swc1        $f13, 0x244($v0)
    ctx->pc = 0x2db3a4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
    // 0x2db3a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2db3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db3ac: 0xe46e0248  swc1        $f14, 0x248($v1)
    ctx->pc = 0x2db3acu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 584), bits); }
    // 0x2db3b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db3b4: 0xe44c0310  swc1        $f12, 0x310($v0)
    ctx->pc = 0x2db3b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 784), bits); }
    // 0x2db3b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2db3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db3bc: 0xe46d0314  swc1        $f13, 0x314($v1)
    ctx->pc = 0x2db3bcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 788), bits); }
    // 0x2db3c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db3c4: 0xe44e0318  swc1        $f14, 0x318($v0)
    ctx->pc = 0x2db3c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 792), bits); }
    // 0x2db3c8: 0x8cc34c38  lw          $v1, 0x4C38($a2)
    ctx->pc = 0x2db3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19512)));
label_2db3cc:
    // 0x2db3cc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2db3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2db3d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db3d4: 0x54a2ffee  bnel        $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2DB3D4u;
    {
        const bool branch_taken_0x2db3d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db3d4) {
            ctx->pc = 0x2DB3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB3D4u;
            // 0x2db3d8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db390;
        }
    }
    ctx->pc = 0x2DB3DCu;
label_2db3dc:
    // 0x2db3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB3E4u;
    // 0x2db3e4: 0x0  nop
    ctx->pc = 0x2db3e4u;
    // NOP
    ctx->pc = 0x2db3e8u;
}
