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

// Function: func_001A5100
// Address: 0x1a5100 - 0x1a5190
void func_001A5100_0x1a5100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A5100_0x1a5100");
#endif

    switch (ctx->pc) {
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5160u: goto label_1a5160;
        default: break;
    }

    ctx->pc = 0x1a5100u;

    // 0x1a5100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a5100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5104: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a5104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a5108: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a5108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a510c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5110: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a5110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a5114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5118: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A5118u;
    SET_GPR_U32(ctx, 31, 0x1A5120u);
    ctx->pc = 0x1A511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5118u;
    // 0x1a511c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A5118u, 0x1A5120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5120u;
label_1a5120:
    // 0x1a5120: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1a5120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1a5124: 0x246372f8  addiu       $v1, $v1, 0x72F8
    ctx->pc = 0x1a5124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29432));
    // 0x1a5128: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x1a5128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
    // 0x1a512c: 0xfa200600  sqc2        $vf0, 0x600($s1)
    ctx->pc = 0x1a512cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a5130: 0xfa200610  sqc2        $vf0, 0x610($s1)
    ctx->pc = 0x1a5130u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a5134: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a5134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5138: 0x26300630  addiu       $s0, $s1, 0x630
    ctx->pc = 0x1a5138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x1a513c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x1a513cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a5140:
    // 0x1a5140: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a5140u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a5144: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a5144u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a5148: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a5148u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a514c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a514cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a5150: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a5150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a5154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5158: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A5158u;
    SET_GPR_U32(ctx, 31, 0x1A5160u);
    ctx->pc = 0x1A515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5158u;
    // 0x1a515c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A5158u, 0x1A5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5160u;
label_1a5160:
    // 0x1a5160: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a5160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a5164: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A5164u;
    {
        const bool branch_taken_0x1a5164 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5164u;
        // 0x1a5168: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5164) {
            ctx->pc = 0x1A5140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5140;
        }
    }
    ctx->pc = 0x1A516Cu;
    // 0x1a516c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a516cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5170: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a5170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5174: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a5174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5178: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a517c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a517cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5184: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5184u;
        // 0x1a5188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A518Cu;
    // 0x1a518c: 0x0  nop
    ctx->pc = 0x1a518cu;
    // NOP
    ctx->pc = 0x1a5190u;
}
