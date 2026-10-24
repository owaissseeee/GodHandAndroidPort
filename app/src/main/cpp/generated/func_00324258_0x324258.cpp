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

// Function: func_00324258
// Address: 0x324258 - 0x3242b0
void func_00324258_0x324258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324258_0x324258");
#endif

    switch (ctx->pc) {
        case 0x32427cu: goto label_32427c;
        case 0x32428cu: goto label_32428c;
        case 0x324294u: goto label_324294;
        default: break;
    }

    ctx->pc = 0x324258u;

    // 0x324258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32425c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324268: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x324268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32426c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324270: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x324270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x324274: 0xc0c9220  jal         func_324880
    ctx->pc = 0x324274u;
    SET_GPR_U32(ctx, 31, 0x32427Cu);
    ctx->pc = 0x324278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324274u;
    // 0x324278: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x324274u, 0x32427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32427Cu;
label_32427c:
    // 0x32427c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x324280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324284: 0xc0c90ac  jal         func_3242B0
    ctx->pc = 0x324284u;
    SET_GPR_U32(ctx, 31, 0x32428Cu);
    ctx->pc = 0x324288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324284u;
    // 0x324288: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242B0u, 0x324284u, 0x32428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32428Cu;
label_32428c:
    // 0x32428c: 0xc0c9226  jal         func_324898
    ctx->pc = 0x32428Cu;
    SET_GPR_U32(ctx, 31, 0x324294u);
    ctx->pc = 0x324290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32428Cu;
    // 0x324290: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x32428Cu, 0x324294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324294u;
label_324294:
    // 0x324294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x324298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32429c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32429cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3242a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3242a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3242a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3242a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3242a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3242A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3242ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242A8u;
        // 0x3242ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3242A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3242B0u;
}
