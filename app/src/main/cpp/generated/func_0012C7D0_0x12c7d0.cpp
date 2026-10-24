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

// Function: func_0012C7D0
// Address: 0x12c7d0 - 0x12c8d8
void func_0012C7D0_0x12c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012C7D0_0x12c7d0");
#endif

    switch (ctx->pc) {
        case 0x12c7d0u: goto label_12c7d0;
        case 0x12c7d4u: goto label_12c7d4;
        case 0x12c7d8u: goto label_12c7d8;
        case 0x12c7dcu: goto label_12c7dc;
        case 0x12c7e0u: goto label_12c7e0;
        case 0x12c7e4u: goto label_12c7e4;
        case 0x12c7e8u: goto label_12c7e8;
        case 0x12c7ecu: goto label_12c7ec;
        case 0x12c7f0u: goto label_12c7f0;
        case 0x12c7f4u: goto label_12c7f4;
        case 0x12c7f8u: goto label_12c7f8;
        case 0x12c7fcu: goto label_12c7fc;
        case 0x12c800u: goto label_12c800;
        case 0x12c804u: goto label_12c804;
        case 0x12c808u: goto label_12c808;
        case 0x12c80cu: goto label_12c80c;
        case 0x12c810u: goto label_12c810;
        case 0x12c814u: goto label_12c814;
        case 0x12c818u: goto label_12c818;
        case 0x12c81cu: goto label_12c81c;
        case 0x12c820u: goto label_12c820;
        case 0x12c824u: goto label_12c824;
        case 0x12c828u: goto label_12c828;
        case 0x12c82cu: goto label_12c82c;
        case 0x12c830u: goto label_12c830;
        case 0x12c834u: goto label_12c834;
        case 0x12c838u: goto label_12c838;
        case 0x12c83cu: goto label_12c83c;
        case 0x12c840u: goto label_12c840;
        case 0x12c844u: goto label_12c844;
        case 0x12c848u: goto label_12c848;
        case 0x12c84cu: goto label_12c84c;
        case 0x12c850u: goto label_12c850;
        case 0x12c854u: goto label_12c854;
        case 0x12c858u: goto label_12c858;
        case 0x12c85cu: goto label_12c85c;
        case 0x12c860u: goto label_12c860;
        case 0x12c864u: goto label_12c864;
        case 0x12c868u: goto label_12c868;
        case 0x12c86cu: goto label_12c86c;
        case 0x12c870u: goto label_12c870;
        case 0x12c874u: goto label_12c874;
        case 0x12c878u: goto label_12c878;
        case 0x12c87cu: goto label_12c87c;
        case 0x12c880u: goto label_12c880;
        case 0x12c884u: goto label_12c884;
        case 0x12c888u: goto label_12c888;
        case 0x12c88cu: goto label_12c88c;
        case 0x12c890u: goto label_12c890;
        case 0x12c894u: goto label_12c894;
        case 0x12c898u: goto label_12c898;
        case 0x12c89cu: goto label_12c89c;
        case 0x12c8a0u: goto label_12c8a0;
        case 0x12c8a4u: goto label_12c8a4;
        case 0x12c8a8u: goto label_12c8a8;
        case 0x12c8acu: goto label_12c8ac;
        case 0x12c8b0u: goto label_12c8b0;
        case 0x12c8b4u: goto label_12c8b4;
        case 0x12c8b8u: goto label_12c8b8;
        case 0x12c8bcu: goto label_12c8bc;
        case 0x12c8c0u: goto label_12c8c0;
        case 0x12c8c4u: goto label_12c8c4;
        case 0x12c8c8u: goto label_12c8c8;
        case 0x12c8ccu: goto label_12c8cc;
        case 0x12c8d0u: goto label_12c8d0;
        case 0x12c8d4u: goto label_12c8d4;
        default: break;
    }

    ctx->pc = 0x12c7d0u;

label_12c7d0:
    // 0x12c7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12c7d4:
    // 0x12c7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c7d8:
    // 0x12c7d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_12c7dc:
    // 0x12c7dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12c7e0:
    // 0x12c7e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12c7e4:
    // 0x12c7e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12c7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12c7e8:
    // 0x12c7e8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_12c7ec:
    if (ctx->pc == 0x12C7ECu) {
        ctx->pc = 0x12C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7E8u;
        // 0x12c7ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C7F0u;
        goto label_12c7f0;
    }
    ctx->pc = 0x12C7E8u;
    {
        const bool branch_taken_0x12c7e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7E8u;
        // 0x12c7ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7e8) {
            ctx->pc = 0x12C800u;
            goto label_12c800;
        }
    }
    ctx->pc = 0x12C7F0u;
label_12c7f0:
    // 0x12c7f0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x12c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_12c7f4:
    // 0x12c7f4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x12c7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_12c7f8:
    // 0x12c7f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_12c7fc:
    if (ctx->pc == 0x12C7FCu) {
        ctx->pc = 0x12C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7F8u;
        // 0x12c7fc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C800u;
        goto label_12c800;
    }
    ctx->pc = 0x12C7F8u;
    {
        const bool branch_taken_0x12c7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7F8u;
        // 0x12c7fc: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7f8) {
            ctx->pc = 0x12C814u;
            goto label_12c814;
        }
    }
    ctx->pc = 0x12C800u;
label_12c800:
    // 0x12c800: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x12c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_12c804:
    // 0x12c804: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12c804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_12c808:
    // 0x12c808: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x12c808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_12c80c:
    // 0x12c80c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12c80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_12c810:
    // 0x12c810: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x12c810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_12c814:
    // 0x12c814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c818:
    // 0x12c818: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_12c81c:
    if (ctx->pc == 0x12C81Cu) {
        ctx->pc = 0x12C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C818u;
        // 0x12c81c: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C820u;
        goto label_12c820;
    }
    ctx->pc = 0x12C818u;
    {
        const bool branch_taken_0x12c818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C818u;
        // 0x12c81c: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c818) {
            ctx->pc = 0x12C828u;
            goto label_12c828;
        }
    }
    ctx->pc = 0x12C820u;
label_12c820:
    // 0x12c820: 0x10000003  b           . + 4 + (0x3 << 2)
label_12c824:
    if (ctx->pc == 0x12C824u) {
        ctx->pc = 0x12C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C820u;
        // 0x12c824: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C828u;
        goto label_12c828;
    }
    ctx->pc = 0x12C820u;
    {
        const bool branch_taken_0x12c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C820u;
        // 0x12c824: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c820) {
            ctx->pc = 0x12C830u;
            goto label_12c830;
        }
    }
    ctx->pc = 0x12C828u;
label_12c828:
    // 0x12c828: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_12c82c:
    // 0x12c82c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12c82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_12c830:
    // 0x12c830: 0xc0b6db0  jal         func_2DB6C0
label_12c834:
    if (ctx->pc == 0x12C834u) {
        ctx->pc = 0x12C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C830u;
        // 0x12c834: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C838u;
        goto label_12c838;
    }
    ctx->pc = 0x12C830u;
    SET_GPR_U32(ctx, 31, 0x12C838u);
    ctx->pc = 0x12C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C830u;
    // 0x12c834: 0xae0205a0  sw          $v0, 0x5A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x12C830u, 0x12C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C838u;
label_12c838:
    // 0x12c838: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_12c83c:
    if (ctx->pc == 0x12C83Cu) {
        ctx->pc = 0x12C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C838u;
        // 0x12c83c: 0x8e060698  lw          $a2, 0x698($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C840u;
        goto label_12c840;
    }
    ctx->pc = 0x12C838u;
    {
        const bool branch_taken_0x12c838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c838) {
            ctx->pc = 0x12C83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C838u;
            // 0x12c83c: 0x8e060698  lw          $a2, 0x698($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C864u;
            goto label_12c864;
        }
    }
    ctx->pc = 0x12C840u;
label_12c840:
    // 0x12c840: 0xc0b6db0  jal         func_2DB6C0
label_12c844:
    if (ctx->pc == 0x12C844u) {
        ctx->pc = 0x12C848u;
        goto label_12c848;
    }
    ctx->pc = 0x12C840u;
    SET_GPR_U32(ctx, 31, 0x12C848u);
    ctx->pc = 0x2DB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6C0u, 0x12C840u, 0x12C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C848u;
label_12c848:
    // 0x12c848: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x12c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_12c84c:
    // 0x12c84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12c850:
    // 0x12c850: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x12c850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_12c854:
    // 0x12c854: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x12c854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_12c858:
    // 0x12c858: 0xc0f809  jalr        $a2
label_12c85c:
    if (ctx->pc == 0x12C85Cu) {
        ctx->pc = 0x12C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C858u;
        // 0x12c85c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C860u;
        goto label_12c860;
    }
    ctx->pc = 0x12C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x12C860u);
        ctx->pc = 0x12C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C858u;
        // 0x12c85c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C858u, 0x12C860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C860u;
label_12c860:
    // 0x12c860: 0x8e060698  lw          $a2, 0x698($s0)
    ctx->pc = 0x12c860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_12c864:
    // 0x12c864: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_12c868:
    if (ctx->pc == 0x12C868u) {
        ctx->pc = 0x12C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C864u;
        // 0x12c868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C86Cu;
        goto label_12c86c;
    }
    ctx->pc = 0x12C864u;
    {
        const bool branch_taken_0x12c864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C864u;
        // 0x12c868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c864) {
            ctx->pc = 0x12C880u;
            goto label_12c880;
        }
    }
    ctx->pc = 0x12C86Cu;
label_12c86c:
    // 0x12c86c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x12c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_12c870:
    // 0x12c870: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x12c870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_12c874:
    // 0x12c874: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_12c878:
    // 0x12c878: 0x60f809  jalr        $v1
label_12c87c:
    if (ctx->pc == 0x12C87Cu) {
        ctx->pc = 0x12C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C878u;
        // 0x12c87c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C880u;
        goto label_12c880;
    }
    ctx->pc = 0x12C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12C880u);
        ctx->pc = 0x12C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C878u;
        // 0x12c87c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C878u, 0x12C880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C880u;
label_12c880:
    // 0x12c880: 0x8e0606a0  lw          $a2, 0x6A0($s0)
    ctx->pc = 0x12c880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_12c884:
    // 0x12c884: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_12c888:
    if (ctx->pc == 0x12C888u) {
        ctx->pc = 0x12C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C884u;
        // 0x12c888: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C88Cu;
        goto label_12c88c;
    }
    ctx->pc = 0x12C884u;
    {
        const bool branch_taken_0x12c884 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C884u;
        // 0x12c888: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c884) {
            ctx->pc = 0x12C8A0u;
            goto label_12c8a0;
        }
    }
    ctx->pc = 0x12C88Cu;
label_12c88c:
    // 0x12c88c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x12c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_12c890:
    // 0x12c890: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x12c890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_12c894:
    // 0x12c894: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x12c894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_12c898:
    // 0x12c898: 0x60f809  jalr        $v1
label_12c89c:
    if (ctx->pc == 0x12C89Cu) {
        ctx->pc = 0x12C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C898u;
        // 0x12c89c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8A0u;
        goto label_12c8a0;
    }
    ctx->pc = 0x12C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12C8A0u);
        ctx->pc = 0x12C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C898u;
        // 0x12c89c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C898u, 0x12C8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C8A0u;
label_12c8a0:
    // 0x12c8a0: 0x8e0606a8  lw          $a2, 0x6A8($s0)
    ctx->pc = 0x12c8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
label_12c8a4:
    // 0x12c8a4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_12c8a8:
    if (ctx->pc == 0x12C8A8u) {
        ctx->pc = 0x12C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8A4u;
        // 0x12c8a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8ACu;
        goto label_12c8ac;
    }
    ctx->pc = 0x12C8A4u;
    {
        const bool branch_taken_0x12c8a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8A4u;
        // 0x12c8a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8a4) {
            ctx->pc = 0x12C8C0u;
            goto label_12c8c0;
        }
    }
    ctx->pc = 0x12C8ACu;
label_12c8ac:
    // 0x12c8ac: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x12c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_12c8b0:
    // 0x12c8b0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x12c8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_12c8b4:
    // 0x12c8b4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_12c8b8:
    // 0x12c8b8: 0x60f809  jalr        $v1
label_12c8bc:
    if (ctx->pc == 0x12C8BCu) {
        ctx->pc = 0x12C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8B8u;
        // 0x12c8bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8C0u;
        goto label_12c8c0;
    }
    ctx->pc = 0x12C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12C8C0u);
        ctx->pc = 0x12C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8B8u;
        // 0x12c8bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C8B8u, 0x12C8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C8C0u;
label_12c8c0:
    // 0x12c8c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12c8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12c8c4:
    // 0x12c8c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12c8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12c8c8:
    // 0x12c8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c8cc:
    // 0x12c8cc: 0x3e00008  jr          $ra
label_12c8d0:
    if (ctx->pc == 0x12C8D0u) {
        ctx->pc = 0x12C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8CCu;
        // 0x12c8d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C8D4u;
        goto label_12c8d4;
    }
    ctx->pc = 0x12C8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8CCu;
        // 0x12c8d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C8D4u;
label_12c8d4:
    // 0x12c8d4: 0x0  nop
    ctx->pc = 0x12c8d4u;
    // NOP
    ctx->pc = 0x12c8d8u;
}
