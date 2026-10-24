#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: setBombWork__5cR409RC4cVecT1
// Address: 0x79b5a8 - 0x79b6d0
void setBombWork__5cR409RC4cVecT1_0x79b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setBombWork__5cR409RC4cVecT1_0x79b5a8");
#endif

    switch (ctx->pc) {
        case 0x79b610u: goto label_79b610;
        case 0x79b63cu: goto label_79b63c;
        case 0x79b658u: goto label_79b658;
        case 0x79b670u: goto label_79b670;
        case 0x79b688u: goto label_79b688;
        case 0x79b6a4u: goto label_79b6a4;
        default: break;
    }

    ctx->pc = 0x79b5a8u;

    // 0x79b5a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79b5ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79b5b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79b5b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79b5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79b5bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x79b5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79b5c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79b5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b5cc: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x79b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x79b5d0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x79b5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b5d4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x79B5D4u;
    {
        const bool branch_taken_0x79b5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5D4u;
        // 0x79b5d8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5d4) {
            ctx->pc = 0x79B6B0u;
            goto label_79b6b0;
        }
    }
    ctx->pc = 0x79B5DCu;
    // 0x79b5dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b5e0: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x79b5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x79b5e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x79b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x79b5e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b5ec: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x79B5ECu;
    {
        const bool branch_taken_0x79b5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5ECu;
        // 0x79b5f0: 0x24050057  addiu       $a1, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5ec) {
            ctx->pc = 0x79B6A4u;
            goto label_79b6a4;
        }
    }
    ctx->pc = 0x79B5F4u;
    // 0x79b5f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b5f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b5fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79b5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b604: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x79b604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b608: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x79B608u;
    SET_GPR_U32(ctx, 31, 0x79B610u);
    ctx->pc = 0x79B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B608u;
    // 0x79b60c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x79B608u, 0x79B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B610u;
label_79b610:
    // 0x79b610: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x79b610u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79b614: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b618: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b61c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x79b61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b620: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x79b624: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b62c: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x79b62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x79b630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b634: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79B634u;
    SET_GPR_U32(ctx, 31, 0x79B63Cu);
    ctx->pc = 0x79B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B634u;
    // 0x79b638: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79B634u, 0x79B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B63Cu;
label_79b63c:
    // 0x79b63c: 0x240600d3  addiu       $a2, $zero, 0xD3
    ctx->pc = 0x79b63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x79b640: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x79b640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b644: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b648: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b650: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x79B650u;
    SET_GPR_U32(ctx, 31, 0x79B658u);
    ctx->pc = 0x79B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B650u;
    // 0x79b654: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x79B650u, 0x79B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B658u;
label_79b658:
    // 0x79b658: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x79b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x79b65c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79b65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b664: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x79b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x79b668: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x79B668u;
    SET_GPR_U32(ctx, 31, 0x79B670u);
    ctx->pc = 0x79B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B668u;
    // 0x79b66c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x79B668u, 0x79B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B670u;
label_79b670:
    // 0x79b670: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x79b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x79b674: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x79b674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b67c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x79b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x79b680: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x79B680u;
    SET_GPR_U32(ctx, 31, 0x79B688u);
    ctx->pc = 0x79B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B680u;
    // 0x79b684: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x79B680u, 0x79B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B688u;
label_79b688:
    // 0x79b688: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x79b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x79b68c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b690: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x79b698: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x79b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x79b69c: 0xc07f5c6  jal         func_1FD718
    ctx->pc = 0x79B69Cu;
    SET_GPR_U32(ctx, 31, 0x79B6A4u);
    ctx->pc = 0x79B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B69Cu;
    // 0x79b6a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x79B69Cu, 0x79B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6A4u;
label_79b6a4:
    // 0x79b6a4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x79b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x79b6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b6ac: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x79b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_79b6b0:
    // 0x79b6b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79b6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b6b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79b6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b6b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79b6b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b6bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79b6bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b6c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79b6c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b6c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6C8u;
        // 0x79b6cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B6D0u;
}
} // namespace gh_r409
