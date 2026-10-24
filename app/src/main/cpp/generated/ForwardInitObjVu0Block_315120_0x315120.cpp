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

// Function: ForwardInitObjVu0Block_315120
// Address: 0x315120 - 0x315190
void ForwardInitObjVu0Block_315120_0x315120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObjVu0Block_315120_0x315120");
#endif

    switch (ctx->pc) {
        case 0x315154u: goto label_315154;
        case 0x31516cu: goto label_31516c;
        case 0x315174u: goto label_315174;
        default: break;
    }

    ctx->pc = 0x315120u;

    // 0x315120: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315124: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315128: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315128u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31512c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31512cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315134: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315138: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315138u;
    {
        const bool branch_taken_0x315138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315138u;
        // 0x31513c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315138) {
            ctx->pc = 0x31517Cu;
            goto label_31517c;
        }
    }
    ctx->pc = 0x315140u;
    // 0x315140: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315144: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x315144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x315148: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31514c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31514Cu;
    SET_GPR_U32(ctx, 31, 0x315154u);
    ctx->pc = 0x315150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31514Cu;
    // 0x315150: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31514Cu, 0x315154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315154u;
label_315154:
    // 0x315154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315158: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315158u;
    {
        const bool branch_taken_0x315158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315158u;
        // 0x31515c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315158) {
            ctx->pc = 0x31517Cu;
            goto label_31517c;
        }
    }
    ctx->pc = 0x315160u;
    // 0x315160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315164: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315164u;
    SET_GPR_U32(ctx, 31, 0x31516Cu);
    ctx->pc = 0x315168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315164u;
    // 0x315168: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315164u, 0x31516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31516Cu;
label_31516c:
    // 0x31516c: 0xc067670  jal         func_19D9C0
    ctx->pc = 0x31516Cu;
    SET_GPR_U32(ctx, 31, 0x315174u);
    ctx->pc = 0x315170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31516Cu;
    // 0x315170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9C0u, 0x31516Cu, 0x315174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315174u;
label_315174:
    // 0x315174: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315174u;
    {
        const bool branch_taken_0x315174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315174u;
        // 0x315178: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315174) {
            ctx->pc = 0x315184u;
            goto label_315184;
        }
    }
    ctx->pc = 0x31517Cu;
label_31517c:
    // 0x31517c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31517cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315180: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315184:
    // 0x315184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315188: 0x3e00008  jr          $ra
    ctx->pc = 0x315188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315188u;
        // 0x31518c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315190u;
}
