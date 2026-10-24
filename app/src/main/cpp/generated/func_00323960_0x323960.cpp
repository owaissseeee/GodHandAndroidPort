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

// Function: func_00323960
// Address: 0x323960 - 0x323a00
void func_00323960_0x323960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323960_0x323960");
#endif

    switch (ctx->pc) {
        case 0x323994u: goto label_323994;
        case 0x32399cu: goto label_32399c;
        case 0x3239b8u: goto label_3239b8;
        case 0x3239ccu: goto label_3239cc;
        case 0x3239e4u: goto label_3239e4;
        default: break;
    }

    ctx->pc = 0x323960u;

    // 0x323960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323964: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x323964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32396c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32396cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x323974: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x323974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32397c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32397cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x323980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x323984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x323988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32398c: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x32398Cu;
    SET_GPR_U32(ctx, 31, 0x323994u);
    ctx->pc = 0x323990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32398Cu;
    // 0x323990: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x32398Cu, 0x323994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323994u;
label_323994:
    // 0x323994: 0xc0c8d34  jal         func_3234D0
    ctx->pc = 0x323994u;
    SET_GPR_U32(ctx, 31, 0x32399Cu);
    ctx->pc = 0x3234D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234D0u, 0x323994u, 0x32399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32399Cu;
label_32399c:
    // 0x32399c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32399cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3239a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3239a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3239A8u;
    {
        const bool branch_taken_0x3239a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3239ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239A8u;
        // 0x3239ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239a8) {
            ctx->pc = 0x3239CCu;
            goto label_3239cc;
        }
    }
    ctx->pc = 0x3239B0u;
    // 0x3239b0: 0xc0c8e10  jal         func_323840
    ctx->pc = 0x3239B0u;
    SET_GPR_U32(ctx, 31, 0x3239B8u);
    ctx->pc = 0x323840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323840u, 0x3239B0u, 0x3239B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239B8u;
label_3239b8:
    // 0x3239b8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3239B8u;
    {
        const bool branch_taken_0x3239b8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3239BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239B8u;
        // 0x3239bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239b8) {
            ctx->pc = 0x3239D0u;
            goto label_3239d0;
        }
    }
    ctx->pc = 0x3239C0u;
    // 0x3239c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3239c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239c4: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x3239C4u;
    SET_GPR_U32(ctx, 31, 0x3239CCu);
    ctx->pc = 0x3239C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239C4u;
    // 0x3239c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x3239C4u, 0x3239CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239CCu;
label_3239cc:
    // 0x3239cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3239ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3239d0:
    // 0x3239d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3239d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3239d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3239d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3239d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3239dc: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x3239DCu;
    SET_GPR_U32(ctx, 31, 0x3239E4u);
    ctx->pc = 0x3239E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239DCu;
    // 0x3239e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x3239DCu, 0x3239E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239E4u;
label_3239e4:
    // 0x3239e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3239e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3239e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3239ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3239ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3239f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3239f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3239f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3239f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3239f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3239F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3239FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239F8u;
        // 0x3239fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A00u;
}
