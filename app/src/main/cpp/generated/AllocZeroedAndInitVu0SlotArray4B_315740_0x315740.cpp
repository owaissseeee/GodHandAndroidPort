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

// Function: AllocZeroedAndInitVu0SlotArray4B_315740
// Address: 0x315740 - 0x3157b0
void AllocZeroedAndInitVu0SlotArray4B_315740_0x315740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitVu0SlotArray4B_315740_0x315740");
#endif

    switch (ctx->pc) {
        case 0x315774u: goto label_315774;
        case 0x31578cu: goto label_31578c;
        case 0x315794u: goto label_315794;
        default: break;
    }

    ctx->pc = 0x315740u;

    // 0x315740: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315744: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315748: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31574c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315754: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315758: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315758u;
    {
        const bool branch_taken_0x315758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315758u;
        // 0x31575c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315758) {
            ctx->pc = 0x31579Cu;
            goto label_31579c;
        }
    }
    ctx->pc = 0x315760u;
    // 0x315760: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315764: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x315764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x315768: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31576c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31576Cu;
    SET_GPR_U32(ctx, 31, 0x315774u);
    ctx->pc = 0x315770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31576Cu;
    // 0x315770: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31576Cu, 0x315774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315774u;
label_315774:
    // 0x315774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315778: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315778u;
    {
        const bool branch_taken_0x315778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315778u;
        // 0x31577c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315778) {
            ctx->pc = 0x31579Cu;
            goto label_31579c;
        }
    }
    ctx->pc = 0x315780u;
    // 0x315780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315784: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315784u;
    SET_GPR_U32(ctx, 31, 0x31578Cu);
    ctx->pc = 0x315788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315784u;
    // 0x315788: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315784u, 0x31578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31578Cu;
label_31578c:
    // 0x31578c: 0xc068220  jal         func_1A0880
    ctx->pc = 0x31578Cu;
    SET_GPR_U32(ctx, 31, 0x315794u);
    ctx->pc = 0x315790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31578Cu;
    // 0x315790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0880u, 0x31578Cu, 0x315794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315794u;
label_315794:
    // 0x315794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315794u;
    {
        const bool branch_taken_0x315794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315794u;
        // 0x315798: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315794) {
            ctx->pc = 0x3157A4u;
            goto label_3157a4;
        }
    }
    ctx->pc = 0x31579Cu;
label_31579c:
    // 0x31579c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31579cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3157a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3157a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3157a4:
    // 0x3157a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3157a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3157a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3157A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3157ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157A8u;
        // 0x3157ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3157A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3157B0u;
}
