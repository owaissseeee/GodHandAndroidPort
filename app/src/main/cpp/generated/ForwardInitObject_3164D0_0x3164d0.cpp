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

// Function: ForwardInitObject_3164D0
// Address: 0x3164d0 - 0x316540
void ForwardInitObject_3164D0_0x3164d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_3164D0_0x3164d0");
#endif

    switch (ctx->pc) {
        case 0x316504u: goto label_316504;
        case 0x31651cu: goto label_31651c;
        case 0x316524u: goto label_316524;
        default: break;
    }

    ctx->pc = 0x3164d0u;

    // 0x3164d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3164d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3164d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3164d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3164d8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3164d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3164dc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3164dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3164e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3164e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3164e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3164e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3164e8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3164E8u;
    {
        const bool branch_taken_0x3164e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3164ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164E8u;
        // 0x3164ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164e8) {
            ctx->pc = 0x31652Cu;
            goto label_31652c;
        }
    }
    ctx->pc = 0x3164F0u;
    // 0x3164f0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3164f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3164f4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x3164f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x3164f8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3164f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3164fc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3164FCu;
    SET_GPR_U32(ctx, 31, 0x316504u);
    ctx->pc = 0x316500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3164FCu;
    // 0x316500: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3164FCu, 0x316504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316504u;
label_316504:
    // 0x316504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316508: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316508u;
    {
        const bool branch_taken_0x316508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316508u;
        // 0x31650c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316508) {
            ctx->pc = 0x31652Cu;
            goto label_31652c;
        }
    }
    ctx->pc = 0x316510u;
    // 0x316510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316514: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316514u;
    SET_GPR_U32(ctx, 31, 0x31651Cu);
    ctx->pc = 0x316518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316514u;
    // 0x316518: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316514u, 0x31651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31651Cu;
label_31651c:
    // 0x31651c: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x31651Cu;
    SET_GPR_U32(ctx, 31, 0x316524u);
    ctx->pc = 0x316520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31651Cu;
    // 0x316520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8108u, 0x31651Cu, 0x316524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316524u;
label_316524:
    // 0x316524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316524u;
    {
        const bool branch_taken_0x316524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316524u;
        // 0x316528: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316524) {
            ctx->pc = 0x316534u;
            goto label_316534;
        }
    }
    ctx->pc = 0x31652Cu;
label_31652c:
    // 0x31652c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31652cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316534:
    // 0x316534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316538: 0x3e00008  jr          $ra
    ctx->pc = 0x316538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316538u;
        // 0x31653c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316540u;
}
