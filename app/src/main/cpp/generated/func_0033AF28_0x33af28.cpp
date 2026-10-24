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

// Function: func_0033AF28
// Address: 0x33af28 - 0x33af70
void func_0033AF28_0x33af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033AF28_0x33af28");
#endif

    ctx->pc = 0x33af28u;

    // 0x33af28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33af28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33af2c: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x33af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x33af30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33af30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33af34: 0x24a58400  addiu       $a1, $a1, -0x7C00
    ctx->pc = 0x33af34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935552));
    // 0x33af38: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x33af38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x758400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x758400u, _value); } while (0);
    // 0x33af3c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x33af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33af40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33af40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33af44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33af44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33af48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33af48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33af4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af50: 0x80cc99c  j           func_332670
    ctx->pc = 0x33AF50u;
    ctx->pc = 0x33AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF50u;
    // 0x33af54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x33AF50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33AF58u;
    // 0x33af58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33af5c: 0x0  nop
    ctx->pc = 0x33af5cu;
    // NOP
    // 0x33af60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33af64: 0x0  nop
    ctx->pc = 0x33af64u;
    // NOP
    // 0x33af68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33af68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33af6c: 0x0  nop
    ctx->pc = 0x33af6cu;
    // NOP
    ctx->pc = 0x33af70u;
}
