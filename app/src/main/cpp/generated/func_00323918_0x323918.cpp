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

// Function: func_00323918
// Address: 0x323918 - 0x323960
void func_00323918_0x323918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323918_0x323918");
#endif

    switch (ctx->pc) {
        case 0x323934u: goto label_323934;
        case 0x323940u: goto label_323940;
        case 0x323948u: goto label_323948;
        default: break;
    }

    ctx->pc = 0x323918u;

    // 0x323918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32391c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32392c: 0xc0c9220  jal         func_324880
    ctx->pc = 0x32392Cu;
    SET_GPR_U32(ctx, 31, 0x323934u);
    ctx->pc = 0x323930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32392Cu;
    // 0x323930: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x32392Cu, 0x323934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323934u;
label_323934:
    // 0x323934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323938: 0xc0c8e58  jal         func_323960
    ctx->pc = 0x323938u;
    SET_GPR_U32(ctx, 31, 0x323940u);
    ctx->pc = 0x32393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323938u;
    // 0x32393c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323960u, 0x323938u, 0x323940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323940u;
label_323940:
    // 0x323940: 0xc0c9226  jal         func_324898
    ctx->pc = 0x323940u;
    SET_GPR_U32(ctx, 31, 0x323948u);
    ctx->pc = 0x323944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323940u;
    // 0x323944: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x323940u, 0x323948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323948u;
label_323948:
    // 0x323948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32394c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323958: 0x3e00008  jr          $ra
    ctx->pc = 0x323958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323958u;
        // 0x32395c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323960u;
}
