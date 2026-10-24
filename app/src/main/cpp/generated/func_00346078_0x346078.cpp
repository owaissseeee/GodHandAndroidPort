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

// Function: func_00346078
// Address: 0x346078 - 0x346100
void func_00346078_0x346078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346078_0x346078");
#endif

    switch (ctx->pc) {
        case 0x34609cu: goto label_34609c;
        case 0x3460d0u: goto label_3460d0;
        case 0x3460dcu: goto label_3460dc;
        default: break;
    }

    ctx->pc = 0x346078u;

    // 0x346078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34607c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x346084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346088: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x346088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34608c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x346090: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x346090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x346094: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x346094u;
    SET_GPR_U32(ctx, 31, 0x34609Cu);
    ctx->pc = 0x346098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346094u;
    // 0x346098: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x346094u, 0x34609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34609Cu;
label_34609c:
    // 0x34609c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3460a0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3460A0u;
    {
        const bool branch_taken_0x3460a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3460A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460A0u;
        // 0x3460a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460a0) {
            ctx->pc = 0x3460C8u;
            goto label_3460c8;
        }
    }
    ctx->pc = 0x3460A8u;
    // 0x3460a8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3460a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3460ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3460acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3460b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3460b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3460b4: 0x24848110  addiu       $a0, $a0, -0x7EF0
    ctx->pc = 0x3460b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    // 0x3460b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3460b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3460bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3460bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3460c0: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x3460C0u;
    ctx->pc = 0x3460C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460C0u;
    // 0x3460c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3460C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3460C8u;
label_3460c8:
    // 0x3460c8: 0xc0d1aba  jal         func_346AE8
    ctx->pc = 0x3460C8u;
    SET_GPR_U32(ctx, 31, 0x3460D0u);
    ctx->pc = 0x346AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346AE8u, 0x3460C8u, 0x3460D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460D0u;
label_3460d0:
    // 0x3460d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3460d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460d4: 0xc0d1750  jal         func_345D40
    ctx->pc = 0x3460D4u;
    SET_GPR_U32(ctx, 31, 0x3460DCu);
    ctx->pc = 0x3460D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460D4u;
    // 0x3460d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D40u, 0x3460D4u, 0x3460DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460DCu;
label_3460dc:
    // 0x3460dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3460dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3460e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3460e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3460e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3460e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3460ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3460ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3460f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3460f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3460f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3460f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3460f8: 0x80d188a  j           func_346228
    ctx->pc = 0x3460F8u;
    ctx->pc = 0x3460FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460F8u;
    // 0x3460fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346228u, 0x3460F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346100u;
}
