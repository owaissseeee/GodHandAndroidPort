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

// Function: AllocAndInit680_3175E0
// Address: 0x3175e0 - 0x317650
void AllocAndInit680_3175E0_0x3175e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndInit680_3175E0_0x3175e0");
#endif

    switch (ctx->pc) {
        case 0x317614u: goto label_317614;
        case 0x31762cu: goto label_31762c;
        case 0x317634u: goto label_317634;
        default: break;
    }

    ctx->pc = 0x3175e0u;

    // 0x3175e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3175e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3175e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3175e8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3175e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3175ec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3175ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3175f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3175f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3175f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3175f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3175f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3175F8u;
    {
        const bool branch_taken_0x3175f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3175FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175F8u;
        // 0x3175fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175f8) {
            ctx->pc = 0x31763Cu;
            goto label_31763c;
        }
    }
    ctx->pc = 0x317600u;
    // 0x317600: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317604: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x317604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x317608: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31760c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31760Cu;
    SET_GPR_U32(ctx, 31, 0x317614u);
    ctx->pc = 0x317610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31760Cu;
    // 0x317610: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31760Cu, 0x317614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317614u;
label_317614:
    // 0x317614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317618: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317618u;
    {
        const bool branch_taken_0x317618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317618u;
        // 0x31761c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317618) {
            ctx->pc = 0x31763Cu;
            goto label_31763c;
        }
    }
    ctx->pc = 0x317620u;
    // 0x317620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317624: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317624u;
    SET_GPR_U32(ctx, 31, 0x31762Cu);
    ctx->pc = 0x317628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317624u;
    // 0x317628: 0x24060680  addiu       $a2, $zero, 0x680 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317624u, 0x31762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31762Cu;
label_31762c:
    // 0x31762c: 0xc05f574  jal         func_17D5D0
    ctx->pc = 0x31762Cu;
    SET_GPR_U32(ctx, 31, 0x317634u);
    ctx->pc = 0x317630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31762Cu;
    // 0x317630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5D0u, 0x31762Cu, 0x317634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317634u;
label_317634:
    // 0x317634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317634u;
    {
        const bool branch_taken_0x317634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317634u;
        // 0x317638: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317634) {
            ctx->pc = 0x317644u;
            goto label_317644;
        }
    }
    ctx->pc = 0x31763Cu;
label_31763c:
    // 0x31763c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31763cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317644:
    // 0x317644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317648: 0x3e00008  jr          $ra
    ctx->pc = 0x317648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317648u;
        // 0x31764c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317650u;
}
