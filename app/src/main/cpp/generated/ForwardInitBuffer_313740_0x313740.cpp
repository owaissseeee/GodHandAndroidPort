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

// Function: ForwardInitBuffer_313740
// Address: 0x313740 - 0x3137b0
void ForwardInitBuffer_313740_0x313740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313740_0x313740");
#endif

    switch (ctx->pc) {
        case 0x313774u: goto label_313774;
        case 0x31378cu: goto label_31378c;
        case 0x313794u: goto label_313794;
        default: break;
    }

    ctx->pc = 0x313740u;

    // 0x313740: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313744: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313748: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31374c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31374cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313754: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313758: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313758u;
    {
        const bool branch_taken_0x313758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313758u;
        // 0x31375c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313758) {
            ctx->pc = 0x31379Cu;
            goto label_31379c;
        }
    }
    ctx->pc = 0x313760u;
    // 0x313760: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313764: 0x240415c0  addiu       $a0, $zero, 0x15C0
    ctx->pc = 0x313764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5568));
    // 0x313768: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x313768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31376c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31376Cu;
    SET_GPR_U32(ctx, 31, 0x313774u);
    ctx->pc = 0x313770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31376Cu;
    // 0x313770: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31376Cu, 0x313774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313774u;
label_313774:
    // 0x313774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313778: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313778u;
    {
        const bool branch_taken_0x313778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313778u;
        // 0x31377c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313778) {
            ctx->pc = 0x31379Cu;
            goto label_31379c;
        }
    }
    ctx->pc = 0x313780u;
    // 0x313780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313784: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313784u;
    SET_GPR_U32(ctx, 31, 0x31378Cu);
    ctx->pc = 0x313788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313784u;
    // 0x313788: 0x240615c0  addiu       $a2, $zero, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313784u, 0x31378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31378Cu;
label_31378c:
    // 0x31378c: 0xc0a058e  jal         func_281638
    ctx->pc = 0x31378Cu;
    SET_GPR_U32(ctx, 31, 0x313794u);
    ctx->pc = 0x313790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31378Cu;
    // 0x313790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281638u, 0x31378Cu, 0x313794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313794u;
label_313794:
    // 0x313794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313794u;
    {
        const bool branch_taken_0x313794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313794u;
        // 0x313798: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313794) {
            ctx->pc = 0x3137A4u;
            goto label_3137a4;
        }
    }
    ctx->pc = 0x31379Cu;
label_31379c:
    // 0x31379c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31379cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3137a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3137a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3137a4:
    // 0x3137a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3137a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3137a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3137A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3137ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137A8u;
        // 0x3137ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3137A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3137B0u;
}
