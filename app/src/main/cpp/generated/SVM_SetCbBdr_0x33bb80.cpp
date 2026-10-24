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

// Function: SVM_SetCbBdr
// Address: 0x33bb80 - 0x33bbd8
void SVM_SetCbBdr_0x33bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SVM_SetCbBdr_0x33bb80");
#endif

    switch (ctx->pc) {
        case 0x33bba4u: goto label_33bba4;
        default: break;
    }

    ctx->pc = 0x33bb80u;

    // 0x33bb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33bb84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33bb88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33bb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33bb90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33bb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bb94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33bb98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33bb9c: 0xc0ced96  jal         func_33B658
    ctx->pc = 0x33BB9Cu;
    SET_GPR_U32(ctx, 31, 0x33BBA4u);
    ctx->pc = 0x33BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB9Cu;
    // 0x33bba0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x33BB9Cu, 0x33BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BBA4u;
label_33bba4:
    // 0x33bba4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33bba8: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x33bba8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33bbac: 0x24428860  addiu       $v0, $v0, -0x77A0
    ctx->pc = 0x33bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936672));
    // 0x33bbb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33bbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33bbb4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x33bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33bbb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33bbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33bbbc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x33bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x33bbc0: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x33bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x33bbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bbc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33bbcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bbccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bbd0: 0x80ced9c  j           func_33B670
    ctx->pc = 0x33BBD0u;
    ctx->pc = 0x33BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BBD0u;
    // 0x33bbd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x33BBD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BBD8u;
}
