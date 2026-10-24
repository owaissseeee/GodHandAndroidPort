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

// Function: AllocInitObj17E828_3176C0
// Address: 0x3176c0 - 0x317730
void AllocInitObj17E828_3176C0_0x3176c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj17E828_3176C0_0x3176c0");
#endif

    switch (ctx->pc) {
        case 0x3176f4u: goto label_3176f4;
        case 0x31770cu: goto label_31770c;
        case 0x317714u: goto label_317714;
        default: break;
    }

    ctx->pc = 0x3176c0u;

    // 0x3176c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3176c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3176c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3176c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3176c8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3176c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3176cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3176ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3176d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3176d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3176d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3176d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3176d8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3176D8u;
    {
        const bool branch_taken_0x3176d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3176DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176D8u;
        // 0x3176dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176d8) {
            ctx->pc = 0x31771Cu;
            goto label_31771c;
        }
    }
    ctx->pc = 0x3176E0u;
    // 0x3176e0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3176e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3176e4: 0x240406b0  addiu       $a0, $zero, 0x6B0
    ctx->pc = 0x3176e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    // 0x3176e8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3176e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3176ec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3176ECu;
    SET_GPR_U32(ctx, 31, 0x3176F4u);
    ctx->pc = 0x3176F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3176ECu;
    // 0x3176f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3176ECu, 0x3176F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176F4u;
label_3176f4:
    // 0x3176f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3176f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3176F8u;
    {
        const bool branch_taken_0x3176f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3176FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176F8u;
        // 0x3176fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176f8) {
            ctx->pc = 0x31771Cu;
            goto label_31771c;
        }
    }
    ctx->pc = 0x317700u;
    // 0x317700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317704: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317704u;
    SET_GPR_U32(ctx, 31, 0x31770Cu);
    ctx->pc = 0x317708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317704u;
    // 0x317708: 0x240606b0  addiu       $a2, $zero, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317704u, 0x31770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31770Cu;
label_31770c:
    // 0x31770c: 0xc05fa0a  jal         func_17E828
    ctx->pc = 0x31770Cu;
    SET_GPR_U32(ctx, 31, 0x317714u);
    ctx->pc = 0x317710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31770Cu;
    // 0x317710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E828u, 0x31770Cu, 0x317714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317714u;
label_317714:
    // 0x317714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317714u;
    {
        const bool branch_taken_0x317714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317714u;
        // 0x317718: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317714) {
            ctx->pc = 0x317724u;
            goto label_317724;
        }
    }
    ctx->pc = 0x31771Cu;
label_31771c:
    // 0x31771c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31771cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317724:
    // 0x317724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317728: 0x3e00008  jr          $ra
    ctx->pc = 0x317728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317728u;
        // 0x31772c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317730u;
}
