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

// Function: func_00323660
// Address: 0x323660 - 0x323700
void func_00323660_0x323660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323660_0x323660");
#endif

    switch (ctx->pc) {
        case 0x323694u: goto label_323694;
        case 0x32369cu: goto label_32369c;
        case 0x3236b8u: goto label_3236b8;
        case 0x3236ccu: goto label_3236cc;
        case 0x3236e4u: goto label_3236e4;
        default: break;
    }

    ctx->pc = 0x323660u;

    // 0x323660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323664: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x323664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32366c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32366cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323670: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x323674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x323674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32367c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32367cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x323680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323688: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x323688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32368c: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x32368Cu;
    SET_GPR_U32(ctx, 31, 0x323694u);
    ctx->pc = 0x323690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32368Cu;
    // 0x323690: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x32368Cu, 0x323694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323694u;
label_323694:
    // 0x323694: 0xc0c8d34  jal         func_3234D0
    ctx->pc = 0x323694u;
    SET_GPR_U32(ctx, 31, 0x32369Cu);
    ctx->pc = 0x3234D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234D0u, 0x323694u, 0x32369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32369Cu;
label_32369c:
    // 0x32369c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32369cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3236a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3236a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3236A8u;
    {
        const bool branch_taken_0x3236a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3236ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236A8u;
        // 0x3236ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236a8) {
            ctx->pc = 0x3236CCu;
            goto label_3236cc;
        }
    }
    ctx->pc = 0x3236B0u;
    // 0x3236b0: 0xc0c8d5a  jal         func_323568
    ctx->pc = 0x3236B0u;
    SET_GPR_U32(ctx, 31, 0x3236B8u);
    ctx->pc = 0x323568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323568u, 0x3236B0u, 0x3236B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236B8u;
label_3236b8:
    // 0x3236b8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3236B8u;
    {
        const bool branch_taken_0x3236b8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3236BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236B8u;
        // 0x3236bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236b8) {
            ctx->pc = 0x3236D0u;
            goto label_3236d0;
        }
    }
    ctx->pc = 0x3236C0u;
    // 0x3236c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3236c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236c4: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x3236C4u;
    SET_GPR_U32(ctx, 31, 0x3236CCu);
    ctx->pc = 0x3236C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236C4u;
    // 0x3236c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x3236C4u, 0x3236CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236CCu;
label_3236cc:
    // 0x3236cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3236ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3236d0:
    // 0x3236d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3236d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3236d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3236d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3236d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3236dc: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x3236DCu;
    SET_GPR_U32(ctx, 31, 0x3236E4u);
    ctx->pc = 0x3236E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236DCu;
    // 0x3236e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x3236DCu, 0x3236E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3236E4u;
label_3236e4:
    // 0x3236e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3236e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3236e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3236ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3236ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3236f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3236f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3236f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3236f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3236f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3236F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3236FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236F8u;
        // 0x3236fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3236F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323700u;
}
