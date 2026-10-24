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

// Function: func_0036F008
// Address: 0x36f008 - 0x36f048
void func_0036F008_0x36f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036F008_0x36f008");
#endif

    ctx->pc = 0x36f008u;

    // 0x36f008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f00c: 0x2487014c  addiu       $a3, $a0, 0x14C
    ctx->pc = 0x36f00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
    // 0x36f010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f014: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x36f014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f018: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x36f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x36f01c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x36f01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x36f020: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x36f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36f024: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x36f024u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36f028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f02c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x36f02cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x36f030: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x36f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36f034: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x36f034u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x36f038: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x36f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36f03c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x36f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x36f040: 0x80e9452  j           func_3A5148
    ctx->pc = 0x36F040u;
    ctx->pc = 0x36F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F040u;
    // 0x36f044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x36F040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36F048u;
}
