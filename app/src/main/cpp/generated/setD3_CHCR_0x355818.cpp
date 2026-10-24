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

// Function: setD3_CHCR
// Address: 0x355818 - 0x355880
void setD3_CHCR_0x355818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD3_CHCR_0x355818");
#endif

    switch (ctx->pc) {
        case 0x35582cu: goto label_35582c;
        default: break;
    }

    ctx->pc = 0x355818u;

    // 0x355818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x355818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35581c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x355820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x355824: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x355824u;
    SET_GPR_U32(ctx, 31, 0x35582Cu);
    ctx->pc = 0x355828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355824u;
    // 0x355828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x355824u, 0x35582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35582Cu;
label_35582c:
    // 0x35582c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x35582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x355830: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x355830u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x355834: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x355834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x355838: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x355838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x35583c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x35583cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x355840: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x355840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x355844: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x355844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x355848: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x355848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x35584c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x35584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x355850: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x355850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x355854: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x355854u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x355858: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x355858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35585c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x35585cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16));
    // 0x355860: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x355860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355864: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x355864u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x355868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35586c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35586cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x355870: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x355870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x355874: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x355874u;
    ctx->pc = 0x355878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355874u;
    // 0x355878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x355874u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35587Cu;
    // 0x35587c: 0x0  nop
    ctx->pc = 0x35587cu;
    // NOP
    ctx->pc = 0x355880u;
}
