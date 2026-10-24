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

// Function: func_0032D9B8
// Address: 0x32d9b8 - 0x32da08
void func_0032D9B8_0x32d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D9B8_0x32d9b8");
#endif

    switch (ctx->pc) {
        case 0x32d9dcu: goto label_32d9dc;
        case 0x32d9ecu: goto label_32d9ec;
        default: break;
    }

    ctx->pc = 0x32d9b8u;

    // 0x32d9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32d9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d9c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d9c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32d9c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32d9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d9cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32d9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32d9d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32d9d4: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32D9D4u;
    SET_GPR_U32(ctx, 31, 0x32D9DCu);
    ctx->pc = 0x32D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9D4u;
    // 0x32d9d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32D9D4u, 0x32D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9DCu;
label_32d9dc:
    // 0x32d9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d9e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32d9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d9e4: 0xc0cb682  jal         func_32DA08
    ctx->pc = 0x32D9E4u;
    SET_GPR_U32(ctx, 31, 0x32D9ECu);
    ctx->pc = 0x32D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9E4u;
    // 0x32d9e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA08u, 0x32D9E4u, 0x32D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D9ECu;
label_32d9ec:
    // 0x32d9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d9f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d9f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d9f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d9f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32d9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d9fc: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32D9FCu;
    ctx->pc = 0x32DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9FCu;
    // 0x32da00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32D9FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DA04u;
    // 0x32da04: 0x0  nop
    ctx->pc = 0x32da04u;
    // NOP
    ctx->pc = 0x32da08u;
}
