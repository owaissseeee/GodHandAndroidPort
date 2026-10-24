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

// Function: _ri0_111
// Address: 0x39fcc0 - 0x39fdd8
void _ri0_111_0x39fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_111_0x39fcc0");
#endif

    switch (ctx->pc) {
        case 0x39fce8u: goto label_39fce8;
        case 0x39fd20u: goto label_39fd20;
        default: break;
    }

    ctx->pc = 0x39fcc0u;

    // 0x39fcc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39fcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39fcc4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39fcc8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39fcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39fccc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x39fcccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39fcd0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39fcd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39fcd4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39fcd4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39fcd8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39fcd8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39fcdc: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x39fcdcu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x39fce0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x39fce0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fce4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x39fce4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fce8:
    // 0x39fce8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39fce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39fcec: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39fcecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39fcf0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39fcf0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39fcf4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39fcf4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39fcf8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39fcf8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fcfc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39fcfcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39fd00: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x39fd00u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39fd04: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39fd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39fd08: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x39fd08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x39fd0c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39fd0cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fd10: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x39fd10u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39fd14: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39fd14u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39fd18: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x39FD18u;
    {
        const bool branch_taken_0x39fd18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD18u;
        // 0x39fd1c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd18) {
            ctx->pc = 0x39FD8Cu;
            goto label_39fd8c;
        }
    }
    ctx->pc = 0x39FD20u;
label_39fd20:
    // 0x39fd20: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x39fd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x39fd24: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39fd24u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39fd28: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39fd28u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39fd2c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39fd2cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39fd30: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39fd30u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fd34: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39fd34u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39fd38: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x39fd38u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39fd3c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39fd3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39fd40: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39fd44: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39fd44u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fd48: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x39fd48u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39fd4c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39fd4cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39fd50: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x39fd50u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39fd54: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x39fd54u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x39fd58: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x39fd58u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39fd5c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x39fd5cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x39fd60: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x39fd60u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x39fd64: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x39fd64u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x39fd68: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x39fd68u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x39fd6c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x39fd6cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39fd70: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x39fd70u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x39fd74: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x39fd74u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x39fd78: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x39fd78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39fd7c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x39fd7cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39fd80: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x39fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x39fd84: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x39FD84u;
    {
        const bool branch_taken_0x39fd84 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD84u;
        // 0x39fd88: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fd84) {
            ctx->pc = 0x39FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fd20;
        }
    }
    ctx->pc = 0x39FD8Cu;
label_39fd8c:
    // 0x39fd8c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x39fd8cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x39fd90: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x39fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x39fd94: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39fd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39fd98: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x39fd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x39fd9c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x39fd9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x39fda0: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x39FDA0u;
    {
        const bool branch_taken_0x39fda0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDA0u;
        // 0x39fda4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fda0) {
            ctx->pc = 0x39FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fd20;
        }
    }
    ctx->pc = 0x39FDA8u;
    // 0x39fda8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39fda8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39fdac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39fdb0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39fdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39fdb4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x39fdb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x39fdb8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x39fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x39fdbc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x39fdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x39fdc0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x39fdc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x39fdc4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x39FDC4u;
    {
        const bool branch_taken_0x39fdc4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDC4u;
        // 0x39fdc8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fdc4) {
            ctx->pc = 0x39FCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fce8;
        }
    }
    ctx->pc = 0x39FDCCu;
    // 0x39fdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x39FDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FDD4u;
    // 0x39fdd4: 0x0  nop
    ctx->pc = 0x39fdd4u;
    // NOP
    ctx->pc = 0x39fdd8u;
}
