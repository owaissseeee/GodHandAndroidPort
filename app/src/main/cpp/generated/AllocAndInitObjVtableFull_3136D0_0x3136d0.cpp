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

// Function: AllocAndInitObjVtableFull_3136D0
// Address: 0x3136d0 - 0x313740
void AllocAndInitObjVtableFull_3136D0_0x3136d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndInitObjVtableFull_3136D0_0x3136d0");
#endif

    switch (ctx->pc) {
        case 0x313704u: goto label_313704;
        case 0x31371cu: goto label_31371c;
        case 0x313724u: goto label_313724;
        default: break;
    }

    ctx->pc = 0x3136d0u;

    // 0x3136d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3136d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3136d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3136d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3136d8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3136d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3136dc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3136dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3136e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3136e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3136e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3136e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3136e8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3136E8u;
    {
        const bool branch_taken_0x3136e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3136ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136E8u;
        // 0x3136ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136e8) {
            ctx->pc = 0x31372Cu;
            goto label_31372c;
        }
    }
    ctx->pc = 0x3136F0u;
    // 0x3136f0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3136f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3136f4: 0x240415c0  addiu       $a0, $zero, 0x15C0
    ctx->pc = 0x3136f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5568));
    // 0x3136f8: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x3136f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x3136fc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3136FCu;
    SET_GPR_U32(ctx, 31, 0x313704u);
    ctx->pc = 0x313700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136FCu;
    // 0x313700: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3136FCu, 0x313704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313704u;
label_313704:
    // 0x313704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313708: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313708u;
    {
        const bool branch_taken_0x313708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313708u;
        // 0x31370c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313708) {
            ctx->pc = 0x31372Cu;
            goto label_31372c;
        }
    }
    ctx->pc = 0x313710u;
    // 0x313710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313714: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313714u;
    SET_GPR_U32(ctx, 31, 0x31371Cu);
    ctx->pc = 0x313718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313714u;
    // 0x313718: 0x240615c0  addiu       $a2, $zero, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313714u, 0x31371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31371Cu;
label_31371c:
    // 0x31371c: 0xc09fb9a  jal         func_27EE68
    ctx->pc = 0x31371Cu;
    SET_GPR_U32(ctx, 31, 0x313724u);
    ctx->pc = 0x313720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31371Cu;
    // 0x313720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EE68u, 0x31371Cu, 0x313724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313724u;
label_313724:
    // 0x313724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313724u;
    {
        const bool branch_taken_0x313724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313724u;
        // 0x313728: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313724) {
            ctx->pc = 0x313734u;
            goto label_313734;
        }
    }
    ctx->pc = 0x31372Cu;
label_31372c:
    // 0x31372c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313734:
    // 0x313734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313738: 0x3e00008  jr          $ra
    ctx->pc = 0x313738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313738u;
        // 0x31373c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313740u;
}
