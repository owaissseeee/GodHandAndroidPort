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

// Function: func_00350390
// Address: 0x350390 - 0x350418
void func_00350390_0x350390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350390_0x350390");
#endif

    switch (ctx->pc) {
        case 0x3503d8u: goto label_3503d8;
        case 0x3503ecu: goto label_3503ec;
        default: break;
    }

    ctx->pc = 0x350390u;

    // 0x350390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35039c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35039cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3503a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3503a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3503a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3503a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3503a8: 0x8c831fc0  lw          $v1, 0x1FC0($a0)
    ctx->pc = 0x3503a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x3503ac: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x3503acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3503b0: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3503B0u;
    {
        const bool branch_taken_0x3503b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3503B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503B0u;
        // 0x3503b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503b0) {
            ctx->pc = 0x3503FCu;
            goto label_3503fc;
        }
    }
    ctx->pc = 0x3503B8u;
    // 0x3503b8: 0x68082  srl         $s0, $a2, 2
    ctx->pc = 0x3503b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3503bc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3503bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3503c0: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x3503c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x3503c4: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3503c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3503c8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3503C8u;
    {
        const bool branch_taken_0x3503c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3503CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503C8u;
        // 0x3503cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503c8) {
            ctx->pc = 0x3503F8u;
            goto label_3503f8;
        }
    }
    ctx->pc = 0x3503D0u;
    // 0x3503d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3503d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3503d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3503d8:
    // 0x3503d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3503d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3503dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3503dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3503e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3503e4: 0xc0db15a  jal         func_36C568
    ctx->pc = 0x3503E4u;
    SET_GPR_U32(ctx, 31, 0x3503ECu);
    ctx->pc = 0x3503E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3503E4u;
    // 0x3503e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C568u, 0x3503E4u, 0x3503ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3503ECu;
label_3503ec:
    // 0x3503ec: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x3503ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3503f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3503F0u;
    {
        const bool branch_taken_0x3503f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3503F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3503F0u;
        // 0x3503f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503f0) {
            ctx->pc = 0x3503D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3503d8;
        }
    }
    ctx->pc = 0x3503F8u;
label_3503f8:
    // 0x3503f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3503f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3503fc:
    // 0x3503fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3503fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350408: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x350408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35040c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350410: 0x3e00008  jr          $ra
    ctx->pc = 0x350410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350410u;
        // 0x350414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350418u;
}
