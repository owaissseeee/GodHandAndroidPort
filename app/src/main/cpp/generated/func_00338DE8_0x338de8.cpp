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

// Function: func_00338DE8
// Address: 0x338de8 - 0x338e38
void func_00338DE8_0x338de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338DE8_0x338de8");
#endif

    switch (ctx->pc) {
        case 0x338e0cu: goto label_338e0c;
        case 0x338e1cu: goto label_338e1c;
        default: break;
    }

    ctx->pc = 0x338de8u;

    // 0x338de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338df8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x338df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x338dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x338e00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x338e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x338e04: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x338E04u;
    SET_GPR_U32(ctx, 31, 0x338E0Cu);
    ctx->pc = 0x338E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E04u;
    // 0x338e08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x338E04u, 0x338E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E0Cu;
label_338e0c:
    // 0x338e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e14: 0xc0ce38e  jal         func_338E38
    ctx->pc = 0x338E14u;
    SET_GPR_U32(ctx, 31, 0x338E1Cu);
    ctx->pc = 0x338E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E14u;
    // 0x338e18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E38u, 0x338E14u, 0x338E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E1Cu;
label_338e1c:
    // 0x338e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338e20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338e24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x338e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338e28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x338e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x338e2c: 0x80ce284  j           func_338A10
    ctx->pc = 0x338E2Cu;
    ctx->pc = 0x338E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E2Cu;
    // 0x338e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338E2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338E34u;
    // 0x338e34: 0x0  nop
    ctx->pc = 0x338e34u;
    // NOP
    ctx->pc = 0x338e38u;
}
