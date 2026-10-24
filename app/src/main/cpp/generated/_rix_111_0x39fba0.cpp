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

// Function: _rix_111
// Address: 0x39fba0 - 0x39fcc0
void _rix_111_0x39fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_111_0x39fba0");
#endif

    switch (ctx->pc) {
        case 0x39fc04u: goto label_39fc04;
        default: break;
    }

    ctx->pc = 0x39fba0u;

    // 0x39fba0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39fba0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39fba4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39fba8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39fba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39fbac: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x39fbacu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39fbb0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39fbb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39fbb4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39fbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39fbb8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39fbb8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39fbbc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39fbbcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39fbc0: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x39fbc0u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x39fbc4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x39fbc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fbc8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x39fbc8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39fbcc: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x39fbccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39fbd0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39fbd0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fbd4: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x39fbd4u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39fbd8: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x39fbd8u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x39fbdc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39fbdcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39fbe0: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x39fbe0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39fbe4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39fbe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39fbe8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x39fbe8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fbec: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x39fbecu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39fbf0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x39fbf0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x39fbf4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x39fbf4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x39fbf8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x39fbf8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x39fbfc: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x39FBFCu;
    {
        const bool branch_taken_0x39fbfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBFCu;
        // 0x39fc00: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbfc) {
            ctx->pc = 0x39FCA0u;
            goto label_39fca0;
        }
    }
    ctx->pc = 0x39FC04u;
label_39fc04:
    // 0x39fc04: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x39fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x39fc08: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x39fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x39fc0c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x39fc0cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39fc10: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x39fc10u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39fc14: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39fc14u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fc18: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x39fc18u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39fc1c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x39fc1cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x39fc20: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x39fc20u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39fc24: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39fc24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39fc28: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x39fc28u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39fc2c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x39fc2cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39fc30: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x39fc30u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x39fc34: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x39fc34u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39fc38: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x39fc38u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39fc3c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x39fc3cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x39fc40: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x39fc40u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x39fc44: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x39fc44u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x39fc48: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x39fc48u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x39fc4c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x39fc4cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39fc50: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x39fc50u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x39fc54: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x39fc54u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39fc58: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x39fc58u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x39fc5c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x39fc5cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x39fc60: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x39fc60u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x39fc64: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x39fc64u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x39fc68: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x39fc68u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x39fc6c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x39fc6cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x39fc70: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x39fc70u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x39fc74: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39fc74u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39fc78: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39fc78u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39fc7c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x39fc7cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39fc80: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x39fc80u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39fc84: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x39fc84u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x39fc88: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x39fc88u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x39fc8c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x39fc90: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x39fc90u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x39fc94: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x39fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x39fc98: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x39FC98u;
    {
        const bool branch_taken_0x39fc98 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC98u;
        // 0x39fc9c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fc98) {
            ctx->pc = 0x39FC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fc04;
        }
    }
    ctx->pc = 0x39FCA0u;
label_39fca0:
    // 0x39fca0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39fca4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x39fca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x39fca8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39fca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39fcac: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x39fcacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39fcb0: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x39FCB0u;
    {
        const bool branch_taken_0x39fcb0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCB0u;
        // 0x39fcb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fcb0) {
            ctx->pc = 0x39FC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fc04;
        }
    }
    ctx->pc = 0x39FCB8u;
    // 0x39fcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x39FCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FCC0u;
}
