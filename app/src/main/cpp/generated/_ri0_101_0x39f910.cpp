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

// Function: _ri0_101
// Address: 0x39f910 - 0x39f9f8
void _ri0_101_0x39f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_101_0x39f910");
#endif

    switch (ctx->pc) {
        case 0x39f938u: goto label_39f938;
        case 0x39f958u: goto label_39f958;
        default: break;
    }

    ctx->pc = 0x39f910u;

    // 0x39f910: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f910u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f914: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f918: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f91c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x39f91cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f920: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f920u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f924: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f924u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f928: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f928u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f92c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x39f92cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f930: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x39f930u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39f934: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f934u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_39f938:
    // 0x39f938: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f93c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f93cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f940: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f940u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f944: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f944u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f948: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f948u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f94c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x39f94cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x39f950: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x39F950u;
    {
        const bool branch_taken_0x39f950 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F950u;
        // 0x39f954: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f950) {
            ctx->pc = 0x39F9ACu;
            goto label_39f9ac;
        }
    }
    ctx->pc = 0x39F958u;
label_39f958:
    // 0x39f958: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39f958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39f95c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x39f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x39f960: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x39f960u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f964: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x39f964u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f968: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x39f968u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x39f96c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x39f96cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f970: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x39f970u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x39f974: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f974u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f978: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x39f978u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x39f97c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x39f97cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f980: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x39f980u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x39f984: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x39f984u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f988: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x39f988u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x39f98c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x39f98cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x39f990: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x39f990u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f994: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x39f994u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x39f998: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x39f998u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x39f99c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x39f99cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39f9a0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x39f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x39f9a4: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x39F9A4u;
    {
        const bool branch_taken_0x39f9a4 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9A4u;
        // 0x39f9a8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9a4) {
            ctx->pc = 0x39F958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f958;
        }
    }
    ctx->pc = 0x39F9ACu;
label_39f9ac:
    // 0x39f9ac: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x39f9acu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x39f9b0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x39f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x39f9b4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f9b8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x39f9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x39f9bc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x39f9bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x39f9c0: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x39F9C0u;
    {
        const bool branch_taken_0x39f9c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9C0u;
        // 0x39f9c4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9c0) {
            ctx->pc = 0x39F958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f958;
        }
    }
    ctx->pc = 0x39F9C8u;
    // 0x39f9c8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f9c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f9cc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f9d0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f9d4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x39f9d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x39f9d8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x39f9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x39f9dc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x39f9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x39f9e0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x39f9e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x39f9e4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x39F9E4u;
    {
        const bool branch_taken_0x39f9e4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9E4u;
        // 0x39f9e8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9e4) {
            ctx->pc = 0x39F938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f938;
        }
    }
    ctx->pc = 0x39F9ECu;
    // 0x39f9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x39F9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F9F4u;
    // 0x39f9f4: 0x0  nop
    ctx->pc = 0x39f9f4u;
    // NOP
    ctx->pc = 0x39f9f8u;
}
