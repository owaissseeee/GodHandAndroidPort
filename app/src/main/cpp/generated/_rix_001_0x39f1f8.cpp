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

// Function: _rix_001
// Address: 0x39f1f8 - 0x39f2b0
void _rix_001_0x39f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rix_001_0x39f1f8");
#endif

    switch (ctx->pc) {
        case 0x39f23cu: goto label_39f23c;
        default: break;
    }

    ctx->pc = 0x39f1f8u;

    // 0x39f1f8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x39f1f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39f1fc: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x39f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x39f200: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x39f200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x39f204: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x39f204u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39f208: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x39f208u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39f20c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x39f20cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39f210: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x39f210u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x39f214: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x39f214u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x39f218: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x39f218u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f21c: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x39f21cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x39f220: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x39f220u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f224: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x39f224u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x39f228: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x39f228u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x39f22c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x39f22cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x39f230: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x39f230u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39f234: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x39F234u;
    {
        const bool branch_taken_0x39f234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F234u;
        // 0x39f238: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f234) {
            ctx->pc = 0x39F28Cu;
            goto label_39f28c;
        }
    }
    ctx->pc = 0x39F23Cu;
label_39f23c:
    // 0x39f23c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x39f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x39f240: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x39f240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x39f244: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x39f244u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39f248: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x39f248u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39f24c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x39f24cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x39f250: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x39f250u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f254: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x39f254u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x39f258: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x39f258u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39f25c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x39f25cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x39f260: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x39f260u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x39f264: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x39f264u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x39f268: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x39f268u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x39f26c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x39f26cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x39f270: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x39f270u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x39f274: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x39f274u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x39f278: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x39f278u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x39f27c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x39f27cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x39f280: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x39f280u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x39f284: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x39F284u;
    {
        const bool branch_taken_0x39f284 = (GPR_S64(ctx, 7) > 0);
        ctx->pc = 0x39F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F284u;
        // 0x39f288: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f284) {
            ctx->pc = 0x39F23Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f23c;
        }
    }
    ctx->pc = 0x39F28Cu;
label_39f28c:
    // 0x39f28c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x39f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x39f290: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x39f290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x39f294: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x39f294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x39f298: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x39f298u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x39f29c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x39F29Cu;
    {
        const bool branch_taken_0x39f29c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F29Cu;
        // 0x39f2a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f29c) {
            ctx->pc = 0x39F23Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39f23c;
        }
    }
    ctx->pc = 0x39F2A4u;
    // 0x39f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x39F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F2ACu;
    // 0x39f2ac: 0x0  nop
    ctx->pc = 0x39f2acu;
    // NOP
    ctx->pc = 0x39f2b0u;
}
