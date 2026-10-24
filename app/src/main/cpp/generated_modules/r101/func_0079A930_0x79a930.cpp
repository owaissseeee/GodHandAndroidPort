#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_0079A930
// Address: 0x79a930 - 0x79a9e0
void func_0079A930_0x79a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A930_0x79a930");
#endif

    switch (ctx->pc) {
        case 0x79a978u: goto label_79a978;
        case 0x79a980u: goto label_79a980;
        case 0x79a990u: goto label_79a990;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9d8u: goto label_79a9d8;
        default: break;
    }

    ctx->pc = 0x79a930u;

    // 0x79a930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a934: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a938: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a93c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a940: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a944: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a948: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x79a94c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a950: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79a954: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a958: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x79a958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a95c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79a960: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x79a960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a964: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a968: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x79a968u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a970: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A970u;
    SET_GPR_U32(ctx, 31, 0x79A978u);
    ctx->pc = 0x79A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A970u;
    // 0x79a974: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A970u, 0x79A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A978u;
label_79a978:
    // 0x79a978: 0xc1e6a22  jal         func_79A888
    ctx->pc = 0x79A978u;
    SET_GPR_U32(ctx, 31, 0x79A980u);
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A978u, 0x79A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A980u;
label_79a980:
    // 0x79a980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a984: 0x26248658  addiu       $a0, $s1, -0x79A8
    ctx->pc = 0x79a984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    // 0x79a988: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A988u;
    SET_GPR_U32(ctx, 31, 0x79A990u);
    ctx->pc = 0x79A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A988u;
    // 0x79a98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A988u, 0x79A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A990u;
label_79a990:
    // 0x79a990: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a994: 0x8e42ad80  lw          $v0, -0x5280($s2)
    ctx->pc = 0x79a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946176)));
    // 0x79a998: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x79a99c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x79a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x79a9a0: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x79a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79a9a4: 0x0  nop
    ctx->pc = 0x79a9a4u;
    // NOP
label_79a9a8:
    // 0x79a9a8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A9A8u;
    SET_GPR_U32(ctx, 31, 0x79A9B0u);
    ctx->pc = 0x79A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9A8u;
    // 0x79a9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A9A8u, 0x79A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B0u;
label_79a9b0:
    // 0x79a9b0: 0xc1e6a22  jal         func_79A888
    ctx->pc = 0x79A9B0u;
    SET_GPR_U32(ctx, 31, 0x79A9B8u);
    ctx->pc = 0x79A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9B0u;
    // 0x79a9b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A888u, 0x79A9B0u, 0x79A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B8u;
label_79a9b8:
    // 0x79a9b8: 0x8e64ad80  lw          $a0, -0x5280($s3)
    ctx->pc = 0x79a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946176)));
    // 0x79a9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a9c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a9c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a9c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x79a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x79a9cc: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79a9d0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A9D0u;
    SET_GPR_U32(ctx, 31, 0x79A9D8u);
    ctx->pc = 0x79A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D0u;
    // 0x79a9d4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A9D0u, 0x79A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D8u;
label_79a9d8:
    // 0x79a9d8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x79A9D8u;
    {
        const bool branch_taken_0x79a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D8u;
        // 0x79a9dc: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9d8) {
            ctx->pc = 0x79A9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9a8;
        }
    }
    ctx->pc = 0x79A9E0u;
}
} // namespace gh_r101
