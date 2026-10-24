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

// Function: ForwardInitObject_316310
// Address: 0x316310 - 0x316380
void ForwardInitObject_316310_0x316310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316310_0x316310");
#endif

    switch (ctx->pc) {
        case 0x316344u: goto label_316344;
        case 0x31635cu: goto label_31635c;
        case 0x316364u: goto label_316364;
        default: break;
    }

    ctx->pc = 0x316310u;

    // 0x316310: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316314: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316318: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31631c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31631cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316320: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316324: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316328: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316328u;
    {
        const bool branch_taken_0x316328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316328u;
        // 0x31632c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316328) {
            ctx->pc = 0x31636Cu;
            goto label_31636c;
        }
    }
    ctx->pc = 0x316330u;
    // 0x316330: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316334: 0x24040770  addiu       $a0, $zero, 0x770
    ctx->pc = 0x316334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
    // 0x316338: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31633c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31633Cu;
    SET_GPR_U32(ctx, 31, 0x316344u);
    ctx->pc = 0x316340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31633Cu;
    // 0x316340: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31633Cu, 0x316344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316344u;
label_316344:
    // 0x316344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316348: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316348u;
    {
        const bool branch_taken_0x316348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316348u;
        // 0x31634c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316348) {
            ctx->pc = 0x31636Cu;
            goto label_31636c;
        }
    }
    ctx->pc = 0x316350u;
    // 0x316350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316354: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316354u;
    SET_GPR_U32(ctx, 31, 0x31635Cu);
    ctx->pc = 0x316358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316354u;
    // 0x316358: 0x24060770  addiu       $a2, $zero, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316354u, 0x31635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31635Cu;
label_31635c:
    // 0x31635c: 0xc06cdb8  jal         func_1B36E0
    ctx->pc = 0x31635Cu;
    SET_GPR_U32(ctx, 31, 0x316364u);
    ctx->pc = 0x316360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31635Cu;
    // 0x316360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x31635Cu, 0x316364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316364u;
label_316364:
    // 0x316364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316364u;
    {
        const bool branch_taken_0x316364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316364u;
        // 0x316368: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316364) {
            ctx->pc = 0x316374u;
            goto label_316374;
        }
    }
    ctx->pc = 0x31636Cu;
label_31636c:
    // 0x31636c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31636cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316374:
    // 0x316374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316378: 0x3e00008  jr          $ra
    ctx->pc = 0x316378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316378u;
        // 0x31637c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316380u;
}
