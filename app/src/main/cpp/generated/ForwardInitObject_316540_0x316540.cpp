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

// Function: ForwardInitObject_316540
// Address: 0x316540 - 0x3165b0
void ForwardInitObject_316540_0x316540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316540_0x316540");
#endif

    switch (ctx->pc) {
        case 0x316574u: goto label_316574;
        case 0x31658cu: goto label_31658c;
        case 0x316594u: goto label_316594;
        default: break;
    }

    ctx->pc = 0x316540u;

    // 0x316540: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316544: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316548: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316548u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31654c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31654cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316550: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316554: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316558: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316558u;
    {
        const bool branch_taken_0x316558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316558u;
        // 0x31655c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316558) {
            ctx->pc = 0x31659Cu;
            goto label_31659c;
        }
    }
    ctx->pc = 0x316560u;
    // 0x316560: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316564: 0x24040690  addiu       $a0, $zero, 0x690
    ctx->pc = 0x316564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
    // 0x316568: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31656c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31656Cu;
    SET_GPR_U32(ctx, 31, 0x316574u);
    ctx->pc = 0x316570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31656Cu;
    // 0x316570: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31656Cu, 0x316574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316574u;
label_316574:
    // 0x316574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316578: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316578u;
    {
        const bool branch_taken_0x316578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316578u;
        // 0x31657c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316578) {
            ctx->pc = 0x31659Cu;
            goto label_31659c;
        }
    }
    ctx->pc = 0x316580u;
    // 0x316580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316584: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316584u;
    SET_GPR_U32(ctx, 31, 0x31658Cu);
    ctx->pc = 0x316588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316584u;
    // 0x316588: 0x24060690  addiu       $a2, $zero, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316584u, 0x31658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31658Cu;
label_31658c:
    // 0x31658c: 0xc07001a  jal         func_1C0068
    ctx->pc = 0x31658Cu;
    SET_GPR_U32(ctx, 31, 0x316594u);
    ctx->pc = 0x316590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31658Cu;
    // 0x316590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0068u, 0x31658Cu, 0x316594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316594u;
label_316594:
    // 0x316594: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316594u;
    {
        const bool branch_taken_0x316594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316594u;
        // 0x316598: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316594) {
            ctx->pc = 0x3165A4u;
            goto label_3165a4;
        }
    }
    ctx->pc = 0x31659Cu;
label_31659c:
    // 0x31659c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31659cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3165a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3165a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3165a4:
    // 0x3165a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3165a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3165a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3165A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3165ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165A8u;
        // 0x3165ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3165A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3165B0u;
}
