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

// Function: ForwardEventToList_1FD820
// Address: 0x1fd820 - 0x1fd888
void ForwardEventToList_1FD820_0x1fd820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardEventToList_1FD820_0x1fd820");
#endif

    switch (ctx->pc) {
        case 0x1fd820u: goto label_1fd820;
        case 0x1fd824u: goto label_1fd824;
        case 0x1fd828u: goto label_1fd828;
        case 0x1fd82cu: goto label_1fd82c;
        case 0x1fd830u: goto label_1fd830;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd83cu: goto label_1fd83c;
        case 0x1fd840u: goto label_1fd840;
        case 0x1fd844u: goto label_1fd844;
        case 0x1fd848u: goto label_1fd848;
        case 0x1fd84cu: goto label_1fd84c;
        case 0x1fd850u: goto label_1fd850;
        case 0x1fd854u: goto label_1fd854;
        case 0x1fd858u: goto label_1fd858;
        case 0x1fd85cu: goto label_1fd85c;
        case 0x1fd860u: goto label_1fd860;
        case 0x1fd864u: goto label_1fd864;
        case 0x1fd868u: goto label_1fd868;
        case 0x1fd86cu: goto label_1fd86c;
        case 0x1fd870u: goto label_1fd870;
        case 0x1fd874u: goto label_1fd874;
        case 0x1fd878u: goto label_1fd878;
        case 0x1fd87cu: goto label_1fd87c;
        case 0x1fd880u: goto label_1fd880;
        case 0x1fd884u: goto label_1fd884;
        default: break;
    }

    ctx->pc = 0x1fd820u;

label_1fd820:
    // 0x1fd820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fd824:
    // 0x1fd824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd828:
    // 0x1fd828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd82c:
    // 0x1fd82c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fd830:
    // 0x1fd830: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x1fd830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1fd834:
    // 0x1fd834: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1fd838:
    if (ctx->pc == 0x1FD838u) {
        ctx->pc = 0x1FD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD834u;
        // 0x1fd838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD83Cu;
        goto label_1fd83c;
    }
    ctx->pc = 0x1FD834u;
    {
        const bool branch_taken_0x1fd834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD834u;
        // 0x1fd838: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd834) {
            ctx->pc = 0x1FD868u;
            goto label_1fd868;
        }
    }
    ctx->pc = 0x1FD83Cu;
label_1fd83c:
    // 0x1fd83c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1fd83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1fd840:
    // 0x1fd840: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd844:
    // 0x1fd844: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fd848:
    // 0x1fd848: 0x8cc20100  lw          $v0, 0x100($a2)
    ctx->pc = 0x1fd848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
label_1fd84c:
    // 0x1fd84c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fd84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fd850:
    // 0x1fd850: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fd850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fd854:
    // 0x1fd854: 0x60f809  jalr        $v1
label_1fd858:
    if (ctx->pc == 0x1FD858u) {
        ctx->pc = 0x1FD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD854u;
        // 0x1fd858: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD85Cu;
        goto label_1fd85c;
    }
    ctx->pc = 0x1FD854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD85Cu);
        ctx->pc = 0x1FD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD854u;
        // 0x1fd858: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD854u, 0x1FD85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD85Cu;
label_1fd85c:
    // 0x1fd85c: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x1fd85cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1fd860:
    // 0x1fd860: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_1fd864:
    if (ctx->pc == 0x1FD864u) {
        ctx->pc = 0x1FD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD860u;
        // 0x1fd864: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD868u;
        goto label_1fd868;
    }
    ctx->pc = 0x1FD860u;
    {
        const bool branch_taken_0x1fd860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd860) {
            ctx->pc = 0x1FD864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD860u;
            // 0x1fd864: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd840;
        }
    }
    ctx->pc = 0x1FD868u;
label_1fd868:
    // 0x1fd868: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd86c:
    // 0x1fd86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd870:
    // 0x1fd870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd874:
    // 0x1fd874: 0x3e00008  jr          $ra
label_1fd878:
    if (ctx->pc == 0x1FD878u) {
        ctx->pc = 0x1FD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD874u;
        // 0x1fd878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD87Cu;
        goto label_1fd87c;
    }
    ctx->pc = 0x1FD874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD874u;
        // 0x1fd878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD87Cu;
label_1fd87c:
    // 0x1fd87c: 0x0  nop
    ctx->pc = 0x1fd87cu;
    // NOP
label_1fd880:
    // 0x1fd880: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fd880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fd884:
    // 0x1fd884: 0x0  nop
    ctx->pc = 0x1fd884u;
    // NOP
    ctx->pc = 0x1fd888u;
}
