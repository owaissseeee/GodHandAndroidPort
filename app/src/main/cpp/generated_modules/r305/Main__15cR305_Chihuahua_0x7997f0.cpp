#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: Main__15cR305_Chihuahua
// Address: 0x7997f0 - 0x799858
void Main__15cR305_Chihuahua_0x7997f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main__15cR305_Chihuahua_0x7997f0");
#endif

    switch (ctx->pc) {
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        default: break;
    }

    ctx->pc = 0x7997f0u;

label_7997f0:
    // 0x7997f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7997f4:
    // 0x7997f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7997f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_7997f8:
    // 0x7997f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7997f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7997fc:
    // 0x7997fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_799800:
    // 0x799800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799804:
    // 0x799804: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_799808:
    if (ctx->pc == 0x799808u) {
        ctx->pc = 0x799808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799804u;
        // 0x799808: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79980Cu;
        goto label_79980c;
    }
    ctx->pc = 0x799804u;
    {
        const bool branch_taken_0x799804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799804) {
            ctx->pc = 0x799808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799804u;
            // 0x799808: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799848u;
            goto label_799848;
        }
    }
    ctx->pc = 0x79980Cu;
label_79980c:
    // 0x79980c: 0xc1e6812  jal         func_79A048
label_799810:
    if (ctx->pc == 0x799810u) {
        ctx->pc = 0x799814u;
        goto label_799814;
    }
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x79A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A048u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0xc1e68de  jal         func_79A378
label_799818:
    if (ctx->pc == 0x799818u) {
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79981Cu;
        goto label_79981c;
    }
    ctx->pc = 0x799814u;
    SET_GPR_U32(ctx, 31, 0x79981Cu);
    ctx->pc = 0x799818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799814u;
    // 0x799818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A378u, 0x799814u, 0x79981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_799820:
    // 0x799820: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799824:
    // 0x799824: 0x2442a600  addiu       $v0, $v0, -0x5A00
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
label_799828:
    // 0x799828: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_79982c:
    // 0x79982c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799830:
    // 0x799830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_799834:
    // 0x799834: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_799838:
    // 0x799838: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79983c:
    // 0x79983c: 0x60f809  jalr        $v1
label_799840:
    if (ctx->pc == 0x799840u) {
        ctx->pc = 0x799840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79983Cu;
        // 0x799840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799844u;
        goto label_799844;
    }
    ctx->pc = 0x79983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799844u);
        ctx->pc = 0x799840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79983Cu;
        // 0x799840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79983Cu, 0x799844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799844u;
label_799844:
    // 0x799844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799848:
    // 0x799848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79984c:
    // 0x79984c: 0x3e00008  jr          $ra
label_799850:
    if (ctx->pc == 0x799850u) {
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799854u;
        goto label_799854;
    }
    ctx->pc = 0x79984Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79984Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799854u;
label_799854:
    // 0x799854: 0x0  nop
    ctx->pc = 0x799854u;
    // NOP
    ctx->pc = 0x799858u;
}
} // namespace gh_r305
