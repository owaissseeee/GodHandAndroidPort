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

// Function: ForwardInitObject_316700
// Address: 0x316700 - 0x316770
void ForwardInitObject_316700_0x316700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316700_0x316700");
#endif

    switch (ctx->pc) {
        case 0x316734u: goto label_316734;
        case 0x31674cu: goto label_31674c;
        case 0x316754u: goto label_316754;
        default: break;
    }

    ctx->pc = 0x316700u;

    // 0x316700: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316704: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316708: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31670c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31670cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316714: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316718: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316718u;
    {
        const bool branch_taken_0x316718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316718u;
        // 0x31671c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316718) {
            ctx->pc = 0x31675Cu;
            goto label_31675c;
        }
    }
    ctx->pc = 0x316720u;
    // 0x316720: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316720u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316724: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x316724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x316728: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31672c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31672Cu;
    SET_GPR_U32(ctx, 31, 0x316734u);
    ctx->pc = 0x316730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31672Cu;
    // 0x316730: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31672Cu, 0x316734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316734u;
label_316734:
    // 0x316734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316738: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316738u;
    {
        const bool branch_taken_0x316738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316738u;
        // 0x31673c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316738) {
            ctx->pc = 0x31675Cu;
            goto label_31675c;
        }
    }
    ctx->pc = 0x316740u;
    // 0x316740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316744: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316744u;
    SET_GPR_U32(ctx, 31, 0x31674Cu);
    ctx->pc = 0x316748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316744u;
    // 0x316748: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316744u, 0x31674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31674Cu;
label_31674c:
    // 0x31674c: 0xc0723e0  jal         func_1C8F80
    ctx->pc = 0x31674Cu;
    SET_GPR_U32(ctx, 31, 0x316754u);
    ctx->pc = 0x316750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31674Cu;
    // 0x316750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F80u, 0x31674Cu, 0x316754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316754u;
label_316754:
    // 0x316754: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316754u;
    {
        const bool branch_taken_0x316754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316754u;
        // 0x316758: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316754) {
            ctx->pc = 0x316764u;
            goto label_316764;
        }
    }
    ctx->pc = 0x31675Cu;
label_31675c:
    // 0x31675c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31675cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316764:
    // 0x316764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316768: 0x3e00008  jr          $ra
    ctx->pc = 0x316768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316768u;
        // 0x31676c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316770u;
}
