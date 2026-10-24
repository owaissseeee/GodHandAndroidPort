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

// Function: _ri0_001
// Address: 0x39f2b0 - 0x39f380
void _ri0_001_0x39f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_001_0x39f2b0");
#endif

    switch (ctx->pc) {
        case 0x39f2d8u: goto label_39f2d8;
        case 0x39f2f8u: goto label_39f2f8;
        default: break;
    }

    ctx->pc = 0x39f2b0u;

    // 0x39f2b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f2b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f2b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f2b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f2bc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x39f2bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f2c0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f2c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f2c4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f2c4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f2c8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f2c8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f2cc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x39f2ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f2d0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x39f2d0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39f2d4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f2d4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_39f2d8:
    // 0x39f2d8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f2dc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f2dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f2e0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f2e0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f2e4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f2e4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f2e8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f2e8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f2ec: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x39f2ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x39f2f0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x39F2F0u;
    {
        const bool branch_taken_0x39f2f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F2F0u;
        // 0x39f2f4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f2f0) {
            ctx->pc = 0x39F334u;
            goto label_39f334;
        }
    }
    ctx->pc = 0x39F2F8u;
label_39f2f8:
    // 0x39f2f8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39f2fc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x39f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x39f300: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f300u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f304: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f304u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f308: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f308u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f30c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f30cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f310: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x39f310u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39f314: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f314u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f318: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x39f318u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x39f31c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x39f31cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f320: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x39f320u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x39f324: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x39f324u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f328: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x39f328u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x39f32c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x39F32Cu;
    {
        const bool branch_taken_0x39f32c = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F32Cu;
        // 0x39f330: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f32c) {
            ctx->pc = 0x39F2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f2f8;
        }
    }
    ctx->pc = 0x39F334u;
label_39f334:
    // 0x39f334: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x39f334u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x39f338: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x39f338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x39f33c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f340: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x39f340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x39f344: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x39f344u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x39f348: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x39F348u;
    {
        const bool branch_taken_0x39f348 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F348u;
        // 0x39f34c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f348) {
            ctx->pc = 0x39F2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f2f8;
        }
    }
    ctx->pc = 0x39F350u;
    // 0x39f350: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f350u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f354: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f358: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f35c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x39f35cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x39f360: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x39f360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x39f364: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x39f364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x39f368: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x39f368u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x39f36c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x39F36Cu;
    {
        const bool branch_taken_0x39f36c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F36Cu;
        // 0x39f370: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f36c) {
            ctx->pc = 0x39F2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f2d8;
        }
    }
    ctx->pc = 0x39F374u;
    // 0x39f374: 0x3e00008  jr          $ra
    ctx->pc = 0x39F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F37Cu;
    // 0x39f37c: 0x0  nop
    ctx->pc = 0x39f37cu;
    // NOP
    ctx->pc = 0x39f380u;
}
