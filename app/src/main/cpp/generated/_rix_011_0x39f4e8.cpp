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

// Function: _rix_011
// Address: 0x39f4e8 - 0x39f5e0
void _rix_011_0x39f4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_011_0x39f4e8");
#endif

    switch (ctx->pc) {
        case 0x39f54cu: goto label_39f54c;
        default: break;
    }

    ctx->pc = 0x39f4e8u;

    // 0x39f4e8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f4e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f4ec: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f4f0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f4f4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x39f4f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f4f8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f4f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f4fc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f500: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f500u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f504: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f504u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f508: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x39f508u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x39f50c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x39f50cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f510: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x39f510u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f514: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x39f514u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f518: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f518u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f51c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x39f51cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f520: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x39f520u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x39f524: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39f524u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39f528: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x39f528u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39f52c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39f52cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39f530: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39f530u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f534: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x39f534u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39f538: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x39f538u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x39f53c: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x39f53cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x39f540: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x39f540u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x39f544: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x39F544u;
    {
        const bool branch_taken_0x39f544 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F544u;
        // 0x39f548: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f544) {
            ctx->pc = 0x39F5C0u;
            goto label_39f5c0;
        }
    }
    ctx->pc = 0x39F54Cu;
label_39f54c:
    // 0x39f54c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x39f54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x39f550: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x39f550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x39f554: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x39f554u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f558: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x39f558u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f55c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f55cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f560: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x39f560u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39f564: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x39f564u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x39f568: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x39f568u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f56c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f56cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f570: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x39f570u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f574: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x39f574u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f578: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x39f578u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x39f57c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x39f57cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39f580: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x39f580u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39f584: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x39f584u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x39f588: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x39f588u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x39f58c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x39f58cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x39f590: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x39f590u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x39f594: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x39f594u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f598: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x39f598u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x39f59c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x39f59cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39f5a0: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x39f5a0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x39f5a4: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x39f5a4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x39f5a8: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x39f5a8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x39f5ac: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x39f5b0: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x39f5b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x39f5b4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x39f5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x39f5b8: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x39F5B8u;
    {
        const bool branch_taken_0x39f5b8 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5B8u;
        // 0x39f5bc: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f5b8) {
            ctx->pc = 0x39F54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f54c;
        }
    }
    ctx->pc = 0x39F5C0u;
label_39f5c0:
    // 0x39f5c0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39f5c4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x39f5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x39f5c8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f5cc: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x39f5ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39f5d0: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x39F5D0u;
    {
        const bool branch_taken_0x39f5d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5D0u;
        // 0x39f5d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f5d0) {
            ctx->pc = 0x39F54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f54c;
        }
    }
    ctx->pc = 0x39F5D8u;
    // 0x39f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x39F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F5E0u;
}
