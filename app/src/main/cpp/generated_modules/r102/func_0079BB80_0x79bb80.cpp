#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079BB80
// Address: 0x79bb80 - 0x79bc30
void func_0079BB80_0x79bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BB80_0x79bb80");
#endif

    switch (ctx->pc) {
        case 0x79bbc8u: goto label_79bbc8;
        case 0x79bbd0u: goto label_79bbd0;
        case 0x79bbe0u: goto label_79bbe0;
        case 0x79bbf8u: goto label_79bbf8;
        case 0x79bc00u: goto label_79bc00;
        case 0x79bc08u: goto label_79bc08;
        case 0x79bc28u: goto label_79bc28;
        default: break;
    }

    ctx->pc = 0x79bb80u;

    // 0x79bb80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79bb84: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79bb88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79bb8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bb90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79bb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79bb94: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79bb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79bb98: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79bb98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x79bb9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79bb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79bba0: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79bba0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79bba4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79bba8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x79bba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79bbb0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x79bbb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbb4: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79bbb8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79bbb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79bbc0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BBC0u;
    SET_GPR_U32(ctx, 31, 0x79BBC8u);
    ctx->pc = 0x79BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBC0u;
    // 0x79bbc4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BBC0u, 0x79BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBC8u;
label_79bbc8:
    // 0x79bbc8: 0xc1e6eb4  jal         func_79BAD0
    ctx->pc = 0x79BBC8u;
    SET_GPR_U32(ctx, 31, 0x79BBD0u);
    ctx->pc = 0x79BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAD0u, 0x79BBC8u, 0x79BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBD0u;
label_79bbd0:
    // 0x79bbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79bbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bbd4: 0x26248658  addiu       $a0, $s1, -0x79A8
    ctx->pc = 0x79bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    // 0x79bbd8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79BBD8u;
    SET_GPR_U32(ctx, 31, 0x79BBE0u);
    ctx->pc = 0x79BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBD8u;
    // 0x79bbdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79BBD8u, 0x79BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBE0u;
label_79bbe0:
    // 0x79bbe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79bbe4: 0x8e42c000  lw          $v0, -0x4000($s2)
    ctx->pc = 0x79bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950912)));
    // 0x79bbe8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x79bbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79bbec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x79bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x79bbf0: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x79bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79bbf4: 0x0  nop
    ctx->pc = 0x79bbf4u;
    // NOP
label_79bbf8:
    // 0x79bbf8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79BBF8u;
    SET_GPR_U32(ctx, 31, 0x79BC00u);
    ctx->pc = 0x79BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBF8u;
    // 0x79bbfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79BBF8u, 0x79BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC00u;
label_79bc00:
    // 0x79bc00: 0xc1e6eb4  jal         func_79BAD0
    ctx->pc = 0x79BC00u;
    SET_GPR_U32(ctx, 31, 0x79BC08u);
    ctx->pc = 0x79BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC00u;
    // 0x79bc04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAD0u, 0x79BC00u, 0x79BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC08u;
label_79bc08:
    // 0x79bc08: 0x8e64c000  lw          $a0, -0x4000($s3)
    ctx->pc = 0x79bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950912)));
    // 0x79bc0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bc10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bc14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x79bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79bc18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x79bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x79bc1c: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79bc20: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BC20u;
    SET_GPR_U32(ctx, 31, 0x79BC28u);
    ctx->pc = 0x79BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BC20u;
    // 0x79bc24: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BC20u, 0x79BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BC28u;
label_79bc28:
    // 0x79bc28: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x79BC28u;
    {
        const bool branch_taken_0x79bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC28u;
        // 0x79bc2c: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc28) {
            ctx->pc = 0x79BBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bbf8;
        }
    }
    ctx->pc = 0x79BC30u;
}
} // namespace gh_r102
