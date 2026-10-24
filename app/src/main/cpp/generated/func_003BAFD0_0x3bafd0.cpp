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

// Function: func_003BAFD0
// Address: 0x3bafd0 - 0x3baff8
void func_003BAFD0_0x3bafd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BAFD0_0x3bafd0");
#endif

    ctx->pc = 0x3bafd0u;

    // 0x3bafd0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3bafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3bafd4: 0x80c893e  j           func_3224F8
    ctx->pc = 0x3BAFD4u;
    ctx->pc = 0x3BAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAFD4u;
    // 0x3bafd8: 0x2484c9b4  addiu       $a0, $a0, -0x364C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3224F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3224F8u, 0x3BAFD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BAFDCu;
    // 0x3bafdc: 0x0  nop
    ctx->pc = 0x3bafdcu;
    // NOP
    // 0x3bafe0: 0x0  nop
    ctx->pc = 0x3bafe0u;
    // NOP
    // 0x3bafe4: 0x3baff8  .word       0x003BAFF8                   # dsll        $s5, $k1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3bafe4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 27) << 31);
    // 0x3bafe8: 0x0  nop
    ctx->pc = 0x3bafe8u;
    // NOP
    // 0x3bafec: 0x372c80  .word       0x00372C80                   # sll         $a1, $s7, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3bafecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 18));
    // 0x3baff0: 0x0  nop
    ctx->pc = 0x3baff0u;
    // NOP
    // 0x3baff4: 0x0  nop
    ctx->pc = 0x3baff4u;
    // NOP
    ctx->pc = 0x3baff8u;
}
