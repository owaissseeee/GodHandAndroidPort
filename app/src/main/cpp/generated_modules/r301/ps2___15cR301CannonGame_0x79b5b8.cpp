#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: __15cR301CannonGame
// Address: 0x79b5b8 - 0x79b698
void ps2___15cR301CannonGame_0x79b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___15cR301CannonGame_0x79b5b8");
#endif

    switch (ctx->pc) {
        case 0x79b5e0u: goto label_79b5e0;
        case 0x79b5ecu: goto label_79b5ec;
        case 0x79b610u: goto label_79b610;
        case 0x79b630u: goto label_79b630;
        case 0x79b640u: goto label_79b640;
        case 0x79b660u: goto label_79b660;
        default: break;
    }

    ctx->pc = 0x79b5b8u;

    // 0x79b5b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79b5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79b5bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79b5c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79b5c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79b5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79b5cc: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x79b5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x79b5d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79b5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79b5d4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x79b5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b5dc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b5e0:
    // 0x79b5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5e4: 0xc1e6c38  jal         func_79B0E0
    ctx->pc = 0x79B5E4u;
    SET_GPR_U32(ctx, 31, 0x79B5ECu);
    ctx->pc = 0x79B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5E4u;
    // 0x79b5e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B0E0u, 0x79B5E4u, 0x79B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5ECu;
label_79b5ec:
    // 0x79b5ec: 0x0  nop
    ctx->pc = 0x79b5ecu;
    // NOP
    // 0x79b5f0: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B5F0u;
    {
        const bool branch_taken_0x79b5f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x79B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5F0u;
        // 0x79b5f4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b5f0) {
            ctx->pc = 0x79B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b5e0;
        }
    }
    ctx->pc = 0x79B5F8u;
    // 0x79b5f8: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x79b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x79b5fc: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x79b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x79b600: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b604: 0x26440100  addiu       $a0, $s2, 0x100
    ctx->pc = 0x79b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x79b608: 0x2650004c  addiu       $s0, $s2, 0x4C
    ctx->pc = 0x79b608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x79b60c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x79b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b610:
    // 0x79b610: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x79b610u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b614: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79b618: 0x0  nop
    ctx->pc = 0x79b618u;
    // NOP
    // 0x79b61c: 0x0  nop
    ctx->pc = 0x79b61cu;
    // NOP
    // 0x79b620: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B620u;
    {
        const bool branch_taken_0x79b620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x79B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B620u;
        // 0x79b624: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b620) {
            ctx->pc = 0x79B610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b610;
        }
    }
    ctx->pc = 0x79B628u;
    // 0x79b628: 0xc1e7472  jal         func_79D1C8
    ctx->pc = 0x79B628u;
    SET_GPR_U32(ctx, 31, 0x79B630u);
    ctx->pc = 0x79D1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D1C8u, 0x79B628u, 0x79B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B630u;
label_79b630:
    // 0x79b630: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x79b630u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x79b634: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b638: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x79b638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x79b63c: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x79b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_79b640:
    // 0x79b640: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x79b640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x79b644: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79b644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79b648: 0x0  nop
    ctx->pc = 0x79b648u;
    // NOP
    // 0x79b64c: 0x0  nop
    ctx->pc = 0x79b64cu;
    // NOP
    // 0x79b650: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B650u;
    {
        const bool branch_taken_0x79b650 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x79B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B650u;
        // 0x79b654: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b650) {
            ctx->pc = 0x79B640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b640;
        }
    }
    ctx->pc = 0x79B658u;
    // 0x79b658: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x79b658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x79b65c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x79b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79b660:
    // 0x79b660: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x79b660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x79b664: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x79b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79b668: 0x0  nop
    ctx->pc = 0x79b668u;
    // NOP
    // 0x79b66c: 0x0  nop
    ctx->pc = 0x79b66cu;
    // NOP
    // 0x79b670: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B670u;
    {
        const bool branch_taken_0x79b670 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x79B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B670u;
        // 0x79b674: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b670) {
            ctx->pc = 0x79B660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b660;
        }
    }
    ctx->pc = 0x79B678u;
    // 0x79b678: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79b678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b67c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79b67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b680: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79b680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79b684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b688: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79b688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b690: 0x3e00008  jr          $ra
    ctx->pc = 0x79B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B690u;
        // 0x79b694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B698u;
}
} // namespace gh_r301
