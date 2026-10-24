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

// Function: Obj0000_Call_0034C378_Field_1F44
// Address: 0x34e020 - 0x34e048
void Obj0000_Call_0034C378_Field_1F44_0x34e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Call_0034C378_Field_1F44_0x34e020");
#endif

    ctx->pc = 0x34e020u;

    // 0x34e020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e024: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34e024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e02c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x34e02cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e030: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34e030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e034: 0x8c851f44  lw          $a1, 0x1F44($a0)
    ctx->pc = 0x34e034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8004)));
    // 0x34e038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e03c: 0x80d30de  j           func_34C378
    ctx->pc = 0x34E03Cu;
    ctx->pc = 0x34E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E03Cu;
    // 0x34e040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C378u, 0x34E03Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34E044u;
    // 0x34e044: 0x0  nop
    ctx->pc = 0x34e044u;
    // NOP
    ctx->pc = 0x34e048u;
}
