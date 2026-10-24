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

// Function: func_003390B8
// Address: 0x3390b8 - 0x339108
void func_003390B8_0x3390b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003390B8_0x3390b8");
#endif

    switch (ctx->pc) {
        case 0x3390dcu: goto label_3390dc;
        case 0x3390ecu: goto label_3390ec;
        default: break;
    }

    ctx->pc = 0x3390b8u;

    // 0x3390b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3390b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3390bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3390bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3390c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3390c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3390c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3390c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3390c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3390ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3390d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3390d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3390d4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3390D4u;
    SET_GPR_U32(ctx, 31, 0x3390DCu);
    ctx->pc = 0x3390D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390D4u;
    // 0x3390d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3390D4u, 0x3390DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390DCu;
label_3390dc:
    // 0x3390dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3390dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3390e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3390e4: 0xc0ce442  jal         func_339108
    ctx->pc = 0x3390E4u;
    SET_GPR_U32(ctx, 31, 0x3390ECu);
    ctx->pc = 0x3390E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390E4u;
    // 0x3390e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339108u, 0x3390E4u, 0x3390ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3390ECu;
label_3390ec:
    // 0x3390ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3390ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3390f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3390f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3390f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3390f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3390f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3390f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3390fc: 0x80ce284  j           func_338A10
    ctx->pc = 0x3390FCu;
    ctx->pc = 0x339100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3390FCu;
    // 0x339100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3390FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339104u;
    // 0x339104: 0x0  nop
    ctx->pc = 0x339104u;
    // NOP
    ctx->pc = 0x339108u;
}
