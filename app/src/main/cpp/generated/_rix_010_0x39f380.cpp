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

// Function: _rix_010
// Address: 0x39f380 - 0x39f430
void _rix_010_0x39f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_010_0x39f380");
#endif

    switch (ctx->pc) {
        case 0x39f3acu: goto label_39f3ac;
        default: break;
    }

    ctx->pc = 0x39f380u;

    // 0x39f380: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f380u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f384: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f388: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f38c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x39f38cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f390: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f390u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f394: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f398: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f398u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f39c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f39cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f3a0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x39f3a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f3a4: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x39f3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x39f3a8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39f3a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39f3ac:
    // 0x39f3ac: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x39f3acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f3b0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x39f3b0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f3b4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f3b4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f3b8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x39f3b8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39f3bc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x39f3bcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x39f3c0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x39f3c0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f3c4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f3c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f3c8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x39f3c8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f3cc: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39f3ccu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f3d0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x39f3d0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x39f3d4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x39f3d4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39f3d8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x39f3d8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39f3dc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x39f3dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x39f3e0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x39f3e0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x39f3e4: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x39f3e4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x39f3e8: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x39f3e8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x39f3ec: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x39f3ecu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x39f3f0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x39f3f0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x39f3f4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x39f3f8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x39f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x39f3fc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x39f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x39f400: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x39f400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x39f404: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x39F404u;
    {
        const bool branch_taken_0x39f404 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F404u;
        // 0x39f408: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f404) {
            ctx->pc = 0x39F3ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f3ac;
        }
    }
    ctx->pc = 0x39F40Cu;
    // 0x39f40c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39f40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39f410: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x39f410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x39f414: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f418: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x39f418u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39f41c: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x39F41Cu;
    {
        const bool branch_taken_0x39f41c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F41Cu;
        // 0x39f420: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f41c) {
            ctx->pc = 0x39F3ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f3ac;
        }
    }
    ctx->pc = 0x39F424u;
    // 0x39f424: 0x3e00008  jr          $ra
    ctx->pc = 0x39F424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F42Cu;
    // 0x39f42c: 0x0  nop
    ctx->pc = 0x39f42cu;
    // NOP
    ctx->pc = 0x39f430u;
}
