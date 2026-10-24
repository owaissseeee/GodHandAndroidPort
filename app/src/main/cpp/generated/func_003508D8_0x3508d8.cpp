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

// Function: func_003508D8
// Address: 0x3508d8 - 0x350988
void func_003508D8_0x3508d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003508D8_0x3508d8");
#endif

    switch (ctx->pc) {
        case 0x35090cu: goto label_35090c;
        case 0x350920u: goto label_350920;
        case 0x350930u: goto label_350930;
        case 0x350944u: goto label_350944;
        default: break;
    }

    ctx->pc = 0x3508d8u;

    // 0x3508d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3508d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3508dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3508dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3508e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3508e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3508e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3508e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3508e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3508ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3508ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3508f0: 0x26221fb8  addiu       $v0, $s1, 0x1FB8
    ctx->pc = 0x3508f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8120));
    // 0x3508f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3508f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3508f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3508f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3508fc: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x3508fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x350900: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x350900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x350904: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x350904u;
    SET_GPR_U32(ctx, 31, 0x35090Cu);
    ctx->pc = 0x350908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350904u;
    // 0x350908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x350904u, 0x35090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35090Cu;
label_35090c:
    // 0x35090c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350910: 0x10530015  beq         $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x350910u;
    {
        const bool branch_taken_0x350910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x350914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350910u;
        // 0x350914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350910) {
            ctx->pc = 0x350968u;
            goto label_350968;
        }
    }
    ctx->pc = 0x350918u;
    // 0x350918: 0xc0d328c  jal         func_34CA30
    ctx->pc = 0x350918u;
    SET_GPR_U32(ctx, 31, 0x350920u);
    ctx->pc = 0x34CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA30u, 0x350918u, 0x350920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350920u;
label_350920:
    // 0x350920: 0x54530012  bnel        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x350920u;
    {
        const bool branch_taken_0x350920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x350920) {
            ctx->pc = 0x350924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350920u;
            // 0x350924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35096Cu;
            goto label_35096c;
        }
    }
    ctx->pc = 0x350928u;
    // 0x350928: 0xc0d4262  jal         func_350988
    ctx->pc = 0x350928u;
    SET_GPR_U32(ctx, 31, 0x350930u);
    ctx->pc = 0x35092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350928u;
    // 0x35092c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350988u, 0x350928u, 0x350930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350930u;
label_350930:
    // 0x350930: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x350930u;
    {
        const bool branch_taken_0x350930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350930u;
        // 0x350934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350930) {
            ctx->pc = 0x350968u;
            goto label_350968;
        }
    }
    ctx->pc = 0x350938u;
    // 0x350938: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x350938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35093c: 0xc0d3280  jal         func_34CA00
    ctx->pc = 0x35093Cu;
    SET_GPR_U32(ctx, 31, 0x350944u);
    ctx->pc = 0x350940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35093Cu;
    // 0x350940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA00u, 0x35093Cu, 0x350944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350944u;
label_350944:
    // 0x350944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35094c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35094cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350950: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350954: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x350954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35095c: 0x80d42ce  j           func_350B38
    ctx->pc = 0x35095Cu;
    ctx->pc = 0x350960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35095Cu;
    // 0x350960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B38u, 0x35095Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350964u;
    // 0x350964: 0x0  nop
    ctx->pc = 0x350964u;
    // NOP
label_350968:
    // 0x350968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35096c:
    // 0x35096c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35096cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x350974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35097c: 0x3e00008  jr          $ra
    ctx->pc = 0x35097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35097Cu;
        // 0x350980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35097Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350984u;
    // 0x350984: 0x0  nop
    ctx->pc = 0x350984u;
    // NOP
    ctx->pc = 0x350988u;
}
