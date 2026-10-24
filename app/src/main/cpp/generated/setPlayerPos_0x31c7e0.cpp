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

// Function: setPlayerPos
// Address: 0x31c7e0 - 0x31c890
void setPlayerPos_0x31c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setPlayerPos_0x31c7e0");
#endif

    switch (ctx->pc) {
        case 0x31c7e0u: goto label_31c7e0;
        case 0x31c7e4u: goto label_31c7e4;
        case 0x31c7e8u: goto label_31c7e8;
        case 0x31c7ecu: goto label_31c7ec;
        case 0x31c7f0u: goto label_31c7f0;
        case 0x31c7f4u: goto label_31c7f4;
        case 0x31c7f8u: goto label_31c7f8;
        case 0x31c7fcu: goto label_31c7fc;
        case 0x31c800u: goto label_31c800;
        case 0x31c804u: goto label_31c804;
        case 0x31c808u: goto label_31c808;
        case 0x31c80cu: goto label_31c80c;
        case 0x31c810u: goto label_31c810;
        case 0x31c814u: goto label_31c814;
        case 0x31c818u: goto label_31c818;
        case 0x31c81cu: goto label_31c81c;
        case 0x31c820u: goto label_31c820;
        case 0x31c824u: goto label_31c824;
        case 0x31c828u: goto label_31c828;
        case 0x31c82cu: goto label_31c82c;
        case 0x31c830u: goto label_31c830;
        case 0x31c834u: goto label_31c834;
        case 0x31c838u: goto label_31c838;
        case 0x31c83cu: goto label_31c83c;
        case 0x31c840u: goto label_31c840;
        case 0x31c844u: goto label_31c844;
        case 0x31c848u: goto label_31c848;
        case 0x31c84cu: goto label_31c84c;
        case 0x31c850u: goto label_31c850;
        case 0x31c854u: goto label_31c854;
        case 0x31c858u: goto label_31c858;
        case 0x31c85cu: goto label_31c85c;
        case 0x31c860u: goto label_31c860;
        case 0x31c864u: goto label_31c864;
        case 0x31c868u: goto label_31c868;
        case 0x31c86cu: goto label_31c86c;
        case 0x31c870u: goto label_31c870;
        case 0x31c874u: goto label_31c874;
        case 0x31c878u: goto label_31c878;
        case 0x31c87cu: goto label_31c87c;
        case 0x31c880u: goto label_31c880;
        case 0x31c884u: goto label_31c884;
        case 0x31c888u: goto label_31c888;
        case 0x31c88cu: goto label_31c88c;
        default: break;
    }

    ctx->pc = 0x31c7e0u;

label_31c7e0:
    // 0x31c7e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_31c7e4:
    // 0x31c7e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31c7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31c7e8:
    // 0x31c7e8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x31c7e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_31c7ec:
    // 0x31c7ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31c7ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c7f0:
    // 0x31c7f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_31c7f4:
    // 0x31c7f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31c7f8:
    // 0x31c7f8: 0xc0b6dac  jal         func_2DB6B0
label_31c7fc:
    if (ctx->pc == 0x31C7FCu) {
        ctx->pc = 0x31C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7F8u;
        // 0x31c7fc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C800u;
        goto label_31c800;
    }
    ctx->pc = 0x31C7F8u;
    SET_GPR_U32(ctx, 31, 0x31C800u);
    ctx->pc = 0x31C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7F8u;
    // 0x31c7fc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x31C7F8u, 0x31C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C800u;
label_31c800:
    // 0x31c800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31c804:
    // 0x31c804: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c808:
    // 0x31c808: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x31c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_31c80c:
    // 0x31c80c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x31c80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_31c810:
    // 0x31c810: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x31c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_31c814:
    // 0x31c814: 0x60f809  jalr        $v1
label_31c818:
    if (ctx->pc == 0x31C818u) {
        ctx->pc = 0x31C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C814u;
        // 0x31c818: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C81Cu;
        goto label_31c81c;
    }
    ctx->pc = 0x31C814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31C81Cu);
        ctx->pc = 0x31C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C814u;
        // 0x31c818: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C814u, 0x31C81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C81Cu;
label_31c81c:
    // 0x31c81c: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x31c81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_31c820:
    // 0x31c820: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31c820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31c824:
    // 0x31c824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31c824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31c828:
    // 0x31c828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31c828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31c82c:
    // 0x31c82c: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x31c82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_31c830:
    // 0x31c830: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x31c830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31c834:
    // 0x31c834: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x31c834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_31c838:
    // 0x31c838: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x31c838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_31c83c:
    // 0x31c83c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x31c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_31c840:
    // 0x31c840: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x31c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_31c844:
    // 0x31c844: 0x40f809  jalr        $v0
label_31c848:
    if (ctx->pc == 0x31C848u) {
        ctx->pc = 0x31C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C844u;
        // 0x31c848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C84Cu;
        goto label_31c84c;
    }
    ctx->pc = 0x31C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C84Cu);
        ctx->pc = 0x31C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C844u;
        // 0x31c848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C844u, 0x31C84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C84Cu;
label_31c84c:
    // 0x31c84c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x31c84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c850:
    // 0x31c850: 0x8e03068c  lw          $v1, 0x68C($s0)
    ctx->pc = 0x31c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
label_31c854:
    // 0x31c854: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x31c854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_31c858:
    // 0x31c858: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x31c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31c85c:
    // 0x31c85c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x31c85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_31c860:
    // 0x31c860: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x31c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31c864:
    // 0x31c864: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_31c868:
    if (ctx->pc == 0x31C868u) {
        ctx->pc = 0x31C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C864u;
        // 0x31c868: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C86Cu;
        goto label_31c86c;
    }
    ctx->pc = 0x31C864u;
    {
        const bool branch_taken_0x31c864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C864u;
        // 0x31c868: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c864) {
            ctx->pc = 0x31C878u;
            goto label_31c878;
        }
    }
    ctx->pc = 0x31C86Cu;
label_31c86c:
    // 0x31c86c: 0x8c6202f0  lw          $v0, 0x2F0($v1)
    ctx->pc = 0x31c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 752)));
label_31c870:
    // 0x31c870: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_31c874:
    // 0x31c874: 0xac6202f0  sw          $v0, 0x2F0($v1)
    ctx->pc = 0x31c874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 752), GPR_U32(ctx, 2));
label_31c878:
    // 0x31c878: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31c878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31c87c:
    // 0x31c87c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31c87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31c880:
    // 0x31c880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31c884:
    // 0x31c884: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x31c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31c888:
    // 0x31c888: 0x3e00008  jr          $ra
label_31c88c:
    if (ctx->pc == 0x31C88Cu) {
        ctx->pc = 0x31C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C888u;
        // 0x31c88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C890u;
        goto label_fallthrough_0x31c888;
    }
    ctx->pc = 0x31C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C888u;
        // 0x31c88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31c888:
    ctx->pc = 0x31C890u;
}
