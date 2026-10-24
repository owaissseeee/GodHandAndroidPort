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

// Function: AllocZeroedAndInitObjSlots_315510
// Address: 0x315510 - 0x315580
void AllocZeroedAndInitObjSlots_315510_0x315510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitObjSlots_315510_0x315510");
#endif

    switch (ctx->pc) {
        case 0x315544u: goto label_315544;
        case 0x31555cu: goto label_31555c;
        case 0x315564u: goto label_315564;
        default: break;
    }

    ctx->pc = 0x315510u;

    // 0x315510: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315514: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315518: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31551c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31551cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315524: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315528: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315528u;
    {
        const bool branch_taken_0x315528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315528u;
        // 0x31552c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315528) {
            ctx->pc = 0x31556Cu;
            goto label_31556c;
        }
    }
    ctx->pc = 0x315530u;
    // 0x315530: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315534: 0x24040b40  addiu       $a0, $zero, 0xB40
    ctx->pc = 0x315534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x315538: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31553c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31553Cu;
    SET_GPR_U32(ctx, 31, 0x315544u);
    ctx->pc = 0x315540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31553Cu;
    // 0x315540: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31553Cu, 0x315544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315544u;
label_315544:
    // 0x315544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315548: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315548u;
    {
        const bool branch_taken_0x315548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315548u;
        // 0x31554c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315548) {
            ctx->pc = 0x31556Cu;
            goto label_31556c;
        }
    }
    ctx->pc = 0x315550u;
    // 0x315550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315554: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315554u;
    SET_GPR_U32(ctx, 31, 0x31555Cu);
    ctx->pc = 0x315558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315554u;
    // 0x315558: 0x24060b40  addiu       $a2, $zero, 0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315554u, 0x31555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31555Cu;
label_31555c:
    // 0x31555c: 0xc067c2a  jal         func_19F0A8
    ctx->pc = 0x31555Cu;
    SET_GPR_U32(ctx, 31, 0x315564u);
    ctx->pc = 0x315560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31555Cu;
    // 0x315560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0A8u, 0x31555Cu, 0x315564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315564u;
label_315564:
    // 0x315564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315564u;
    {
        const bool branch_taken_0x315564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315564u;
        // 0x315568: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315564) {
            ctx->pc = 0x315574u;
            goto label_315574;
        }
    }
    ctx->pc = 0x31556Cu;
label_31556c:
    // 0x31556c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31556cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315570: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315574:
    // 0x315574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315578: 0x3e00008  jr          $ra
    ctx->pc = 0x315578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315578u;
        // 0x31557c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315580u;
}
