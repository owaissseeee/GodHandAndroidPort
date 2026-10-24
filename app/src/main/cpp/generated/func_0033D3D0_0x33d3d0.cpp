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

// Function: func_0033D3D0
// Address: 0x33d3d0 - 0x33d4d8
void func_0033D3D0_0x33d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D3D0_0x33d3d0");
#endif

    ctx->pc = 0x33d3d0u;

    // 0x33d3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d3d4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x33d3d4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33d3dc: 0x27050048  addiu       $a1, $t8, 0x48
    ctx->pc = 0x33d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 72));
    // 0x33d3e0: 0x8cae0008  lw          $t6, 0x8($a1)
    ctx->pc = 0x33d3e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33d3e4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x33d3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33d3e8: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33D3E8u;
    {
        const bool branch_taken_0x33d3e8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d3e8) {
            ctx->pc = 0x33D3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D3E8u;
            // 0x33d3ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D3F0u;
            goto label_33d3f0;
        }
    }
    ctx->pc = 0x33D3F0u;
label_33d3f0:
    // 0x33d3f0: 0x8caf0018  lw          $t7, 0x18($a1)
    ctx->pc = 0x33d3f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x33d3f4: 0xce001a  div         $zero, $a2, $t6
    ctx->pc = 0x33d3f4u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33d3f8: 0x8ca80020  lw          $t0, 0x20($a1)
    ctx->pc = 0x33d3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x33d3fc: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x33d3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33d400: 0x1e81023  subu        $v0, $t7, $t0
    ctx->pc = 0x33d400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x33d404: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x33d404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x33d408: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33d40c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33d410: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x33d410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x33d414: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33d418: 0x8cac0024  lw          $t4, 0x24($a1)
    ctx->pc = 0x33d418u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x33d41c: 0xec382a  slt         $a3, $a3, $t4
    ctx->pc = 0x33d41cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x33d420: 0x3012  mflo        $a2
    ctx->pc = 0x33d420u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33d424: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x33d424u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33d428: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x33d428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d42c: 0x1012  mflo        $v0
    ctx->pc = 0x33d42cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x33d430: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x33d430u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33d434: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x33d434u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d438: 0x6812  mflo        $t5
    ctx->pc = 0x33d438u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x33d43c: 0x2810  mfhi        $a1
    ctx->pc = 0x33d43cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x33d440: 0x1691818  mult        $v1, $t3, $t1
    ctx->pc = 0x33d440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33d444: 0x1252823  subu        $a1, $t1, $a1
    ctx->pc = 0x33d444u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x33d448: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x33d448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x33d44c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x33d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33d450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D450u;
    {
        const bool branch_taken_0x33d450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D450u;
        // 0x33d454: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d450) {
            ctx->pc = 0x33D464u;
            goto label_33d464;
        }
    }
    ctx->pc = 0x33D458u;
    // 0x33d458: 0x1051023  subu        $v0, $t0, $a1
    ctx->pc = 0x33d458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x33d45c: 0x4f102a  slt         $v0, $v0, $t7
    ctx->pc = 0x33d45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x33d460: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x33d460u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_33d464:
    // 0x33d464: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x33d464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d468: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33d468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33d46c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33D46Cu;
    {
        const bool branch_taken_0x33d46c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d46c) {
            ctx->pc = 0x33D470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D46Cu;
            // 0x33d470: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D474u;
            goto label_33d474;
        }
    }
    ctx->pc = 0x33D474u;
label_33d474:
    // 0x33d474: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x33d474u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x33d478: 0x189001a  div         $zero, $t4, $t1
    ctx->pc = 0x33d478u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33d47c: 0x2812  mflo        $a1
    ctx->pc = 0x33d47cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x33d480: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x33d480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x33d484: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x33d484u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x33d488: 0x1aa182a  slt         $v1, $t5, $t2
    ctx->pc = 0x33d488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x33d48c: 0x1a3500b  movn        $t2, $t5, $v1
    ctx->pc = 0x33d48cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 13));
    // 0x33d490: 0x16a102a  slt         $v0, $t3, $t2
    ctx->pc = 0x33d490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x33d494: 0x15c60006  bne         $t6, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D494u;
    {
        const bool branch_taken_0x33d494 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 6));
        ctx->pc = 0x33D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D494u;
        // 0x33d498: 0x162500b  movn        $t2, $t3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d494) {
            ctx->pc = 0x33D4B0u;
            goto label_33d4b0;
        }
    }
    ctx->pc = 0x33D49Cu;
    // 0x33d49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d4a0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x33d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d4a4: 0x80cf4c8  j           func_33D320
    ctx->pc = 0x33D4A4u;
    ctx->pc = 0x33D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D4A4u;
    // 0x33d4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D320u, 0x33D4A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D4ACu;
    // 0x33d4ac: 0x0  nop
    ctx->pc = 0x33d4acu;
    // NOP
label_33d4b0:
    // 0x33d4b0: 0x8f0200e8  lw          $v0, 0xE8($t8)
    ctx->pc = 0x33d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 232)));
    // 0x33d4b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D4B4u;
    {
        const bool branch_taken_0x33d4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4B4u;
        // 0x33d4b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4b4) {
            ctx->pc = 0x33D4C8u;
            goto label_33d4c8;
        }
    }
    ctx->pc = 0x33D4BCu;
    // 0x33d4bc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x33d4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d4c0: 0x80cf4de  j           func_33D378
    ctx->pc = 0x33D4C0u;
    ctx->pc = 0x33D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D4C0u;
    // 0x33d4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D378u, 0x33D4C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D4C8u;
label_33d4c8:
    // 0x33d4c8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x33d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d4cc: 0x80cf4b4  j           func_33D2D0
    ctx->pc = 0x33D4CCu;
    ctx->pc = 0x33D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D4CCu;
    // 0x33d4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2D0u, 0x33D4CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33D4D4u;
    // 0x33d4d4: 0x0  nop
    ctx->pc = 0x33d4d4u;
    // NOP
    ctx->pc = 0x33d4d8u;
}
