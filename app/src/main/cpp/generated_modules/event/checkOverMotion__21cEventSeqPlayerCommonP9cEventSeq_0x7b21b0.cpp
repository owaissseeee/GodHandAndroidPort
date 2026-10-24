#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: checkOverMotion__21cEventSeqPlayerCommonP9cEventSeq
// Address: 0x7b21b0 - 0x7b2220
void checkOverMotion__21cEventSeqPlayerCommonP9cEventSeq_0x7b21b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkOverMotion__21cEventSeqPlayerCommonP9cEventSeq_0x7b21b0");
#endif

    switch (ctx->pc) {
        case 0x7b21dcu: goto label_7b21dc;
        case 0x7b2204u: goto label_7b2204;
        default: break;
    }

    ctx->pc = 0x7b21b0u;

    // 0x7b21b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7b21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7b21b4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b21b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7b21b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7b21bc: 0x248458d8  addiu       $a0, $a0, 0x58D8
    ctx->pc = 0x7b21bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    // 0x7b21c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7b21c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7b21c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7b21c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b21c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7b21c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7b21cc: 0x82050005  lb          $a1, 0x5($s0)
    ctx->pc = 0x7b21ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x7b21d0: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x7b21d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x7b21d4: 0xc1ec182  jal         func_7B0608
    ctx->pc = 0x7B21D4u;
    SET_GPR_U32(ctx, 31, 0x7B21DCu);
    ctx->pc = 0x7B21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B21D4u;
    // 0x7b21d8: 0x92070004  lbu         $a3, 0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0608u, 0x7B21D4u, 0x7B21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B21DCu;
label_7b21dc:
    // 0x7b21dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7b21dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b21e0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x7b21e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x7b21e4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x7b21e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x7b21e8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B21E8u;
    {
        const bool branch_taken_0x7b21e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b21e8) {
            ctx->pc = 0x7B21ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B21E8u;
            // 0x7b21ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2210u;
            goto label_7b2210;
        }
    }
    ctx->pc = 0x7B21F0u;
    // 0x7b21f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7b21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7b21f4: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x7b21f4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b21f8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7b21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7b21fc: 0xc0b1354  jal         func_2C4D50
    ctx->pc = 0x7B21FCu;
    SET_GPR_U32(ctx, 31, 0x7B2204u);
    ctx->pc = 0x7B2200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B21FCu;
    // 0x7b2200: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D50u, 0x7B21FCu, 0x7B2204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2204u;
label_7b2204:
    // 0x7b2204: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x7b2204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x7b2208: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x7b2208u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x7b220c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7b220cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7b2210:
    // 0x7b2210: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7b2210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b2214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7b2214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2218: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2218u;
        // 0x7b221c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2220u;
}
} // namespace gh_event
