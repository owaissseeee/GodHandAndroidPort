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

// Function: _ri0_011
// Address: 0x39f5e0 - 0x39f6e0
void _ri0_011_0x39f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_011_0x39f5e0");
#endif

    switch (ctx->pc) {
        case 0x39f608u: goto label_39f608;
        case 0x39f640u: goto label_39f640;
        default: break;
    }

    ctx->pc = 0x39f5e0u;

    // 0x39f5e0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f5e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f5e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f5e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f5ec: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x39f5ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f5f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f5f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f5f4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f5f4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f5f8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f5f8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f5fc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x39f5fcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x39f600: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x39f600u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f604: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x39f604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f608:
    // 0x39f608: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f60c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f60cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f610: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f610u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f614: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f614u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f618: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f618u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f61c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f61cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f620: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x39f620u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39f624: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39f624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39f628: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x39f628u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x39f62c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39f62cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f630: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x39f630u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f634: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39f634u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39f638: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x39F638u;
    {
        const bool branch_taken_0x39f638 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F638u;
        // 0x39f63c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f638) {
            ctx->pc = 0x39F694u;
            goto label_39f694;
        }
    }
    ctx->pc = 0x39F640u;
label_39f640:
    // 0x39f640: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x39f640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x39f644: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f644u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f648: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f648u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f64c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f64cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f650: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f650u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f654: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f654u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f658: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x39f658u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39f65c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f65cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f660: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39f664: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39f664u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f668: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x39f668u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f66c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39f66cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39f670: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x39f670u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f674: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x39f674u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x39f678: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x39f678u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f67c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x39f67cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x39f680: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x39f680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39f684: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x39f684u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x39f688: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x39f688u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x39f68c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x39F68Cu;
    {
        const bool branch_taken_0x39f68c = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F68Cu;
        // 0x39f690: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f68c) {
            ctx->pc = 0x39F640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f640;
        }
    }
    ctx->pc = 0x39F694u;
label_39f694:
    // 0x39f694: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x39f694u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x39f698: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x39f698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x39f69c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f69cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f6a0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x39f6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x39f6a4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x39f6a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x39f6a8: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x39F6A8u;
    {
        const bool branch_taken_0x39f6a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6A8u;
        // 0x39f6ac: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f6a8) {
            ctx->pc = 0x39F640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f640;
        }
    }
    ctx->pc = 0x39F6B0u;
    // 0x39f6b0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f6b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f6b4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f6b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f6bc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x39f6bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x39f6c0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x39f6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x39f6c4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x39f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x39f6c8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x39f6c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x39f6cc: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x39F6CCu;
    {
        const bool branch_taken_0x39f6cc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6CCu;
        // 0x39f6d0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f6cc) {
            ctx->pc = 0x39F608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f608;
        }
    }
    ctx->pc = 0x39F6D4u;
    // 0x39f6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x39F6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F6DCu;
    // 0x39f6dc: 0x0  nop
    ctx->pc = 0x39f6dcu;
    // NOP
    ctx->pc = 0x39f6e0u;
}
