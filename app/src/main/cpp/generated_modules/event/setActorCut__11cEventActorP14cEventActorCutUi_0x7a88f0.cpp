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
// Function: setActorCut__11cEventActorP14cEventActorCutUi
// Address: 0x7a88f0 - 0x7a8998
void setActorCut__11cEventActorP14cEventActorCutUi_0x7a88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setActorCut__11cEventActorP14cEventActorCutUi_0x7a88f0");
#endif

    switch (ctx->pc) {
        case 0x7a8940u: goto label_7a8940;
        case 0x7a8960u: goto label_7a8960;
        default: break;
    }

    ctx->pc = 0x7a88f0u;

    // 0x7a88f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7a88f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7a88f4: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7a88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7a88f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7a88f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7a88fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7a88fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7a8900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7a8900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8904: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7a8904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7a8908: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7a8908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a890c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7a890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7a8910: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7a8910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7a8914: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x7a8914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8918: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7a8918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7a891c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a8920: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x7a8920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x7a8924: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7a8924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7a8928: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7A8928u;
    {
        const bool branch_taken_0x7a8928 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8928u;
        // 0x7a892c: 0x8c725288  lw          $s2, 0x5288($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8928) {
            ctx->pc = 0x7A8970u;
            goto label_7a8970;
        }
    }
    ctx->pc = 0x7A8930u;
    // 0x7a8930: 0x2415001c  addiu       $s5, $zero, 0x1C
    ctx->pc = 0x7a8930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a8934: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7a8934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8938: 0x2751018  mult        $v0, $s3, $s5
    ctx->pc = 0x7a8938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7a893c: 0x0  nop
    ctx->pc = 0x7a893cu;
    // NOP
label_7a8940:
    // 0x7a8940: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7a8940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7a8944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7a8944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8948: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7a8948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a894c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x7a894cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7a8950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7a8954: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x7a8954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x7a8958: 0xc1ea266  jal         func_7A8998
    ctx->pc = 0x7A8958u;
    SET_GPR_U32(ctx, 31, 0x7A8960u);
    ctx->pc = 0x7A895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8958u;
    // 0x7a895c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8998u, 0x7A8958u, 0x7A8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8960u;
label_7a8960:
    // 0x7a8960: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7a8960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7a8964: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x7a8964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a8968: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x7A8968u;
    {
        const bool branch_taken_0x7a8968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8968u;
        // 0x7a896c: 0x2751018  mult        $v0, $s3, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8968) {
            ctx->pc = 0x7A8940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a8940;
        }
    }
    ctx->pc = 0x7A8970u;
label_7a8970:
    // 0x7a8970: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7a8970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7a8974: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7a8974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7a8978: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7a8978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a897c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7a897cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a8980: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7a8980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a8984: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7a8984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a8988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a8988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a898c: 0x3e00008  jr          $ra
    ctx->pc = 0x7A898Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A898Cu;
        // 0x7a8990: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A898Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8994u;
    // 0x7a8994: 0x0  nop
    ctx->pc = 0x7a8994u;
    // NOP
    ctx->pc = 0x7a8998u;
}
} // namespace gh_event
