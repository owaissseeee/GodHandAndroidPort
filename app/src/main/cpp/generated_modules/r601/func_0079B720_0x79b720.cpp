#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_0079B720
// Address: 0x79b720 - 0x79b790
void func_0079B720_0x79b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B720_0x79b720");
#endif

    switch (ctx->pc) {
        case 0x79b748u: goto label_79b748;
        case 0x79b754u: goto label_79b754;
        case 0x79b75cu: goto label_79b75c;
        case 0x79b770u: goto label_79b770;
        case 0x79b77cu: goto label_79b77c;
        default: break;
    }

    ctx->pc = 0x79b720u;

    // 0x79b720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b724: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79b724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79b728: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79b72c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79b72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b730: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b734: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79b734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b738: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b738u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b73c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B73Cu;
    {
        const bool branch_taken_0x79b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B73Cu;
        // 0x79b740: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b73c) {
            ctx->pc = 0x79B754u;
            goto label_79b754;
        }
    }
    ctx->pc = 0x79B744u;
    // 0x79b744: 0x0  nop
    ctx->pc = 0x79b744u;
    // NOP
label_79b748:
    // 0x79b748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b74c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B74Cu;
    SET_GPR_U32(ctx, 31, 0x79B754u);
    ctx->pc = 0x79B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B74Cu;
    // 0x79b750: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B74Cu, 0x79B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B754u;
label_79b754:
    // 0x79b754: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x79B754u;
    SET_GPR_U32(ctx, 31, 0x79B75Cu);
    ctx->pc = 0x79B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B754u;
    // 0x79b758: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79B754u, 0x79B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B75Cu;
label_79b75c:
    // 0x79b75c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B75Cu;
    {
        const bool branch_taken_0x79b75c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B75Cu;
        // 0x79b760: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b75c) {
            ctx->pc = 0x79B748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b748;
        }
    }
    ctx->pc = 0x79B764u;
    // 0x79b764: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x79b768: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x79B768u;
    SET_GPR_U32(ctx, 31, 0x79B770u);
    ctx->pc = 0x79B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B768u;
    // 0x79b76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x79B768u, 0x79B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B770u;
label_79b770:
    // 0x79b770: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b774: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B774u;
    SET_GPR_U32(ctx, 31, 0x79B77Cu);
    ctx->pc = 0x79B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B774u;
    // 0x79b778: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B774u, 0x79B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B77Cu;
label_79b77c:
    // 0x79b77c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79b780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b788: 0x3e00008  jr          $ra
    ctx->pc = 0x79B788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B788u;
        // 0x79b78c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B790u;
}
} // namespace gh_r601
