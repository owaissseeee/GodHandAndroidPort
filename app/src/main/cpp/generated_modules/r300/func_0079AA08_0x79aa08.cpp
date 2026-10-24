#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_0079AA08
// Address: 0x79aa08 - 0x79aab8
void func_0079AA08_0x79aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AA08_0x79aa08");
#endif

    switch (ctx->pc) {
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa58u: goto label_79aa58;
        case 0x79aa68u: goto label_79aa68;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aab0u: goto label_79aab0;
        default: break;
    }

    ctx->pc = 0x79aa08u;

    // 0x79aa08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79aa0c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79aa14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79aa1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79aa20: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x79aa24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79aa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79aa28: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79aa2c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79aa30: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x79aa30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa34: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79aa38: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x79aa38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa3c: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79aa40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79aa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79aa48: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AA48u;
    SET_GPR_U32(ctx, 31, 0x79AA50u);
    ctx->pc = 0x79AA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA48u;
    // 0x79aa4c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AA48u, 0x79AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA50u;
label_79aa50:
    // 0x79aa50: 0xc1e6a52  jal         func_79A948
    ctx->pc = 0x79AA50u;
    SET_GPR_U32(ctx, 31, 0x79AA58u);
    ctx->pc = 0x79A948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A948u, 0x79AA50u, 0x79AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA58u;
label_79aa58:
    // 0x79aa58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79aa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa5c: 0x26248658  addiu       $a0, $s1, -0x79A8
    ctx->pc = 0x79aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    // 0x79aa60: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79AA60u;
    SET_GPR_U32(ctx, 31, 0x79AA68u);
    ctx->pc = 0x79AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA60u;
    // 0x79aa64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79AA60u, 0x79AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA68u;
label_79aa68:
    // 0x79aa68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79aa6c: 0x8e42ae80  lw          $v0, -0x5180($s2)
    ctx->pc = 0x79aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946432)));
    // 0x79aa70: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x79aa70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79aa74: 0xac500114  sw          $s0, 0x114($v0)
    ctx->pc = 0x79aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 16));
    // 0x79aa78: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x79aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79aa7c: 0x0  nop
    ctx->pc = 0x79aa7cu;
    // NOP
label_79aa80:
    // 0x79aa80: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79AA80u;
    SET_GPR_U32(ctx, 31, 0x79AA88u);
    ctx->pc = 0x79AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA80u;
    // 0x79aa84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79AA80u, 0x79AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA88u;
label_79aa88:
    // 0x79aa88: 0xc1e6a52  jal         func_79A948
    ctx->pc = 0x79AA88u;
    SET_GPR_U32(ctx, 31, 0x79AA90u);
    ctx->pc = 0x79AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA88u;
    // 0x79aa8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A948u, 0x79AA88u, 0x79AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA90u;
label_79aa90:
    // 0x79aa90: 0x8e64ae80  lw          $a0, -0x5180($s3)
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946432)));
    // 0x79aa94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aa98: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x79aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x79aa9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x79aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79aaa0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x79aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x79aaa4: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79aaa8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AAA8u;
    SET_GPR_U32(ctx, 31, 0x79AAB0u);
    ctx->pc = 0x79AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAA8u;
    // 0x79aaac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AAA8u, 0x79AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAB0u;
label_79aab0:
    // 0x79aab0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x79AAB0u;
    {
        const bool branch_taken_0x79aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab0) {
            ctx->pc = 0x79AA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa80;
        }
    }
    ctx->pc = 0x79AAB8u;
}
} // namespace gh_r300
