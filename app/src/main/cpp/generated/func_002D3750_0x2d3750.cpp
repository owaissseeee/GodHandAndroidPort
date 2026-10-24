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

// Function: func_002D3750
// Address: 0x2d3750 - 0x2d3ba8
void func_002D3750_0x2d3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3750_0x2d3750");
#endif

    switch (ctx->pc) {
        case 0x2d37a4u: goto label_2d37a4;
        case 0x2d37ccu: goto label_2d37cc;
        case 0x2d37d4u: goto label_2d37d4;
        case 0x2d3824u: goto label_2d3824;
        case 0x2d3848u: goto label_2d3848;
        case 0x2d3888u: goto label_2d3888;
        case 0x2d3940u: goto label_2d3940;
        case 0x2d3968u: goto label_2d3968;
        case 0x2d39a0u: goto label_2d39a0;
        case 0x2d39d8u: goto label_2d39d8;
        case 0x2d39f0u: goto label_2d39f0;
        case 0x2d3a44u: goto label_2d3a44;
        case 0x2d3a58u: goto label_2d3a58;
        case 0x2d3a84u: goto label_2d3a84;
        case 0x2d3a9cu: goto label_2d3a9c;
        case 0x2d3adcu: goto label_2d3adc;
        case 0x2d3aecu: goto label_2d3aec;
        case 0x2d3b84u: goto label_2d3b84;
        default: break;
    }

    ctx->pc = 0x2d3750u;

    // 0x2d3750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d3750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d3754: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d3754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d3758: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d3758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d375c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d375cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3760: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d3760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d3764: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d3764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d3768: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d3768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d376c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3770: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3774: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3774u;
    {
        const bool branch_taken_0x2d3774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3774u;
        // 0x2d3778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3774) {
            ctx->pc = 0x2D3780u;
            goto label_2d3780;
        }
    }
    ctx->pc = 0x2D377Cu;
    // 0x2d377c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d377cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3780:
    // 0x2d3780: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d3780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d3784: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x2D3784u;
    {
        const bool branch_taken_0x2d3784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3784u;
        // 0x2d3788: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3784) {
            ctx->pc = 0x2D3B84u;
            goto label_2d3b84;
        }
    }
    ctx->pc = 0x2D378Cu;
    // 0x2d378c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2d3790: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d3790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d3794: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3794u;
    {
        const bool branch_taken_0x2d3794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3794) {
            ctx->pc = 0x2D37CCu;
            goto label_2d37cc;
        }
    }
    ctx->pc = 0x2D379Cu;
    // 0x2d379c: 0xc0b50ac  jal         func_2D42B0
    ctx->pc = 0x2D379Cu;
    SET_GPR_U32(ctx, 31, 0x2D37A4u);
    ctx->pc = 0x2D37A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D379Cu;
    // 0x2d37a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42B0u, 0x2D379Cu, 0x2D37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37A4u;
label_2d37a4:
    // 0x2d37a4: 0x2842001f  slti        $v0, $v0, 0x1F
    ctx->pc = 0x2d37a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2d37a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D37A8u;
    {
        const bool branch_taken_0x2d37a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37A8u;
        // 0x2d37ac: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37a8) {
            ctx->pc = 0x2D37CCu;
            goto label_2d37cc;
        }
    }
    ctx->pc = 0x2D37B0u;
    // 0x2d37b0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2d37b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2d37b4: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x2d37b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x2d37b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2d37b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2d37bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D37BCu;
    {
        const bool branch_taken_0x2d37bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d37bc) {
            ctx->pc = 0x2D37CCu;
            goto label_2d37cc;
        }
    }
    ctx->pc = 0x2D37C4u;
    // 0x2d37c4: 0xc0b50b8  jal         func_2D42E0
    ctx->pc = 0x2D37C4u;
    SET_GPR_U32(ctx, 31, 0x2D37CCu);
    ctx->pc = 0x2D37C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37C4u;
    // 0x2d37c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42E0u, 0x2D37C4u, 0x2D37CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37CCu;
label_2d37cc:
    // 0x2d37cc: 0xc0d1a12  jal         func_346848
    ctx->pc = 0x2D37CCu;
    SET_GPR_U32(ctx, 31, 0x2D37D4u);
    ctx->pc = 0x2D37D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D37CCu;
    // 0x2d37d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346848u, 0x2D37CCu, 0x2D37D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D37D4u;
label_2d37d4:
    // 0x2d37d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d37d8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D37D8u;
    {
        const bool branch_taken_0x2d37d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37D8u;
        // 0x2d37dc: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37d8) {
            ctx->pc = 0x2D37E8u;
            goto label_2d37e8;
        }
    }
    ctx->pc = 0x2D37E0u;
    // 0x2d37e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d37e4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2d37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_2d37e8:
    // 0x2d37e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d37ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D37ECu;
    {
        const bool branch_taken_0x2d37ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d37ec) {
            ctx->pc = 0x2D37F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D37ECu;
            // 0x2d37f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3804u;
            goto label_2d3804;
        }
    }
    ctx->pc = 0x2D37F4u;
    // 0x2d37f4: 0x3c080045  lui         $t0, 0x45
    ctx->pc = 0x2d37f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x2d37f8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2d37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d37fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D37FCu;
    {
        const bool branch_taken_0x2d37fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D37FCu;
        // 0x2d3800: 0x2508d160  addiu       $t0, $t0, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37fc) {
            ctx->pc = 0x2D3814u;
            goto label_2d3814;
        }
    }
    ctx->pc = 0x2D3804u;
label_2d3804:
    // 0x2d3804: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3804u;
    {
        const bool branch_taken_0x2d3804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3804u;
        // 0x2d3808: 0x3c080045  lui         $t0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3804) {
            ctx->pc = 0x2D382Cu;
            goto label_2d382c;
        }
    }
    ctx->pc = 0x2D380Cu;
    // 0x2d380c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2d380cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d3810: 0x2508d170  addiu       $t0, $t0, -0x2E90
    ctx->pc = 0x2d3810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955376));
label_2d3814:
    // 0x2d3814: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d3814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d3818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d3818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d381c: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x2D381Cu;
    SET_GPR_U32(ctx, 31, 0x2D3824u);
    ctx->pc = 0x2D3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D381Cu;
    // 0x2d3820: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x2D381Cu, 0x2D3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3824u;
label_2d3824:
    // 0x2d3824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3824u;
    {
        const bool branch_taken_0x2d3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3824u;
        // 0x2d3828: 0x8e030060  lw          $v1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3824) {
            ctx->pc = 0x2D384Cu;
            goto label_2d384c;
        }
    }
    ctx->pc = 0x2D382Cu;
label_2d382c:
    // 0x2d382c: 0x3c080045  lui         $t0, 0x45
    ctx->pc = 0x2d382cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)69 << 16));
    // 0x2d3830: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2d3830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d3834: 0x2508d178  addiu       $t0, $t0, -0x2E88
    ctx->pc = 0x2d3834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955384));
    // 0x2d3838: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d3838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d383c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d383cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3840: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x2D3840u;
    SET_GPR_U32(ctx, 31, 0x2D3848u);
    ctx->pc = 0x2D3844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3840u;
    // 0x2d3844: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x2D3840u, 0x2D3848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3848u;
label_2d3848:
    // 0x2d3848: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2d3848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2d384c:
    // 0x2d384c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3850: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2D3850u;
    {
        const bool branch_taken_0x2d3850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3850u;
        // 0x2d3854: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3850) {
            ctx->pc = 0x2D3AC8u;
            goto label_2d3ac8;
        }
    }
    ctx->pc = 0x2D3858u;
    // 0x2d3858: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3858u;
    {
        const bool branch_taken_0x2d3858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3858) {
            ctx->pc = 0x2D385Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3858u;
            // 0x2d385c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3870u;
            goto label_2d3870;
        }
    }
    ctx->pc = 0x2D3860u;
    // 0x2d3860: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3860u;
    {
        const bool branch_taken_0x2d3860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3860) {
            ctx->pc = 0x2D3880u;
            goto label_2d3880;
        }
    }
    ctx->pc = 0x2D3868u;
    // 0x2d3868: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2D3868u;
    {
        const bool branch_taken_0x2d3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3868u;
        // 0x2d386c: 0xc6040050  lwc1        $f4, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3868) {
            ctx->pc = 0x2D3AF8u;
            goto label_2d3af8;
        }
    }
    ctx->pc = 0x2D3870u;
label_2d3870:
    // 0x2d3870: 0x1062009c  beq         $v1, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2D3870u;
    {
        const bool branch_taken_0x2d3870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d3870) {
            ctx->pc = 0x2D3AE4u;
            goto label_2d3ae4;
        }
    }
    ctx->pc = 0x2D3878u;
    // 0x2d3878: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2D3878u;
    {
        const bool branch_taken_0x2d3878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3878u;
        // 0x2d387c: 0xc6040050  lwc1        $f4, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3878) {
            ctx->pc = 0x2D3AF8u;
            goto label_2d3af8;
        }
    }
    ctx->pc = 0x2D3880u;
label_2d3880:
    // 0x2d3880: 0xc0b5092  jal         func_2D4248
    ctx->pc = 0x2D3880u;
    SET_GPR_U32(ctx, 31, 0x2D3888u);
    ctx->pc = 0x2D3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3880u;
    // 0x2d3884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4248u, 0x2D3880u, 0x2D3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3888u;
label_2d3888:
    // 0x2d3888: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d3888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d388c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3890: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2D3890u;
    {
        const bool branch_taken_0x2d3890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3890u;
        // 0x2d3894: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3890) {
            ctx->pc = 0x2D3A88u;
            goto label_2d3a88;
        }
    }
    ctx->pc = 0x2D3898u;
    // 0x2d3898: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2d3898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2d389c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D389Cu;
    {
        const bool branch_taken_0x2d389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D389Cu;
        // 0x2d38a0: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d389c) {
            ctx->pc = 0x2D38A8u;
            goto label_2d38a8;
        }
    }
    ctx->pc = 0x2D38A4u;
    // 0x2d38a4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2d38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2d38a8:
    // 0x2d38a8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2d38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2d38ac: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2d38acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d38b0: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2d38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d38b4: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D38B4u;
    {
        const bool branch_taken_0x2d38b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38B4u;
        // 0x2d38b8: 0x28620022  slti        $v0, $v1, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)34) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38b4) {
            ctx->pc = 0x2D3980u;
            goto label_2d3980;
        }
    }
    ctx->pc = 0x2D38BCu;
    // 0x2d38bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D38BCu;
    {
        const bool branch_taken_0x2d38bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38BCu;
        // 0x2d38c0: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38bc) {
            ctx->pc = 0x2D38DCu;
            goto label_2d38dc;
        }
    }
    ctx->pc = 0x2D38C4u;
    // 0x2d38c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D38C4u;
    {
        const bool branch_taken_0x2d38c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38C4u;
        // 0x2d38c8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38c4) {
            ctx->pc = 0x2D3910u;
            goto label_2d3910;
        }
    }
    ctx->pc = 0x2D38CCu;
    // 0x2d38cc: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D38CCu;
    {
        const bool branch_taken_0x2d38cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38CCu;
        // 0x2d38d0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38cc) {
            ctx->pc = 0x2D3914u;
            goto label_2d3914;
        }
    }
    ctx->pc = 0x2D38D4u;
    // 0x2d38d4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2D38D4u;
    {
        const bool branch_taken_0x2d38d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38D4u;
        // 0x2d38d8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38d4) {
            ctx->pc = 0x2D3A8Cu;
            goto label_2d3a8c;
        }
    }
    ctx->pc = 0x2D38DCu;
label_2d38dc:
    // 0x2d38dc: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2D38DCu;
    {
        const bool branch_taken_0x2d38dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38DCu;
        // 0x2d38e0: 0x28620042  slti        $v0, $v1, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38dc) {
            ctx->pc = 0x2D3A28u;
            goto label_2d3a28;
        }
    }
    ctx->pc = 0x2D38E4u;
    // 0x2d38e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D38E4u;
    {
        const bool branch_taken_0x2d38e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38E4u;
        // 0x2d38e8: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38e4) {
            ctx->pc = 0x2D38FCu;
            goto label_2d38fc;
        }
    }
    ctx->pc = 0x2D38ECu;
    // 0x2d38ec: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D38ECu;
    {
        const bool branch_taken_0x2d38ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38ECu;
        // 0x2d38f0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38ec) {
            ctx->pc = 0x2D3A2Cu;
            goto label_2d3a2c;
        }
    }
    ctx->pc = 0x2D38F4u;
    // 0x2d38f4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2D38F4u;
    {
        const bool branch_taken_0x2d38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D38F4u;
        // 0x2d38f8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38f4) {
            ctx->pc = 0x2D3A8Cu;
            goto label_2d3a8c;
        }
    }
    ctx->pc = 0x2D38FCu;
label_2d38fc:
    // 0x2d38fc: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x2d38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2d3900: 0x50620057  beql        $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2D3900u;
    {
        const bool branch_taken_0x2d3900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d3900) {
            ctx->pc = 0x2D3904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3900u;
            // 0x2d3904: 0x8606001c  lh          $a2, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3A60u;
            goto label_2d3a60;
        }
    }
    ctx->pc = 0x2D3908u;
    // 0x2d3908: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2D3908u;
    {
        const bool branch_taken_0x2d3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3908u;
        // 0x2d390c: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3908) {
            ctx->pc = 0x2D3A88u;
            goto label_2d3a88;
        }
    }
    ctx->pc = 0x2D3910u;
label_2d3910:
    // 0x2d3910: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2d3910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2d3914:
    // 0x2d3914: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2d3914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2d3918: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D3918u;
    {
        const bool branch_taken_0x2d3918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3918u;
        // 0x2d391c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3918) {
            ctx->pc = 0x2D3970u;
            goto label_2d3970;
        }
    }
    ctx->pc = 0x2D3920u;
    // 0x2d3920: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2d3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d3924: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3924u;
    {
        const bool branch_taken_0x2d3924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3924u;
        // 0x2d3928: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3924) {
            ctx->pc = 0x2D3948u;
            goto label_2d3948;
        }
    }
    ctx->pc = 0x2D392Cu;
    // 0x2d392c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3930: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2d3930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d3934: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2d3934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d3938: 0xc0d1c7c  jal         func_3471F0
    ctx->pc = 0x2D3938u;
    SET_GPR_U32(ctx, 31, 0x2D3940u);
    ctx->pc = 0x2D393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3938u;
    // 0x2d393c: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3471F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3471F0u, 0x2D3938u, 0x2D3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3940u;
label_2d3940:
    // 0x2d3940: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2D3940u;
    {
        const bool branch_taken_0x2d3940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3940u;
        // 0x2d3944: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3940) {
            ctx->pc = 0x2D3A38u;
            goto label_2d3a38;
        }
    }
    ctx->pc = 0x2D3948u;
label_2d3948:
    // 0x2d3948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d394c: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x2d394cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d3950: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2d3950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d3954: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2d3954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d3958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d3958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d395c: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x2d395cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d3960: 0xc0b52c2  jal         func_2D4B08
    ctx->pc = 0x2D3960u;
    SET_GPR_U32(ctx, 31, 0x2D3968u);
    ctx->pc = 0x2D3964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3960u;
    // 0x2d3964: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4B08u, 0x2D3960u, 0x2D3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3968u;
label_2d3968:
    // 0x2d3968: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2D3968u;
    {
        const bool branch_taken_0x2d3968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3968u;
        // 0x2d396c: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3968) {
            ctx->pc = 0x2D3A88u;
            goto label_2d3a88;
        }
    }
    ctx->pc = 0x2D3970u;
label_2d3970:
    // 0x2d3970: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d3970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d3974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d3974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3978: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2D3978u;
    {
        const bool branch_taken_0x2d3978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3978u;
        // 0x2d397c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3978) {
            ctx->pc = 0x2D3A84u;
            goto label_2d3a84;
        }
    }
    ctx->pc = 0x2D3980u;
label_2d3980:
    // 0x2d3980: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2d3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2d3984: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2d3984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2d3988: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D3988u;
    {
        const bool branch_taken_0x2d3988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3988u;
        // 0x2d398c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3988) {
            ctx->pc = 0x2D3A38u;
            goto label_2d3a38;
        }
    }
    ctx->pc = 0x2D3990u;
    // 0x2d3990: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d3990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3994: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d3994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d3998: 0xc0d263a  jal         func_3498E8
    ctx->pc = 0x2D3998u;
    SET_GPR_U32(ctx, 31, 0x2D39A0u);
    ctx->pc = 0x2D399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3998u;
    // 0x2d399c: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498E8u, 0x2D3998u, 0x2D39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39A0u;
label_2d39a0:
    // 0x2d39a0: 0x8604001c  lh          $a0, 0x1C($s0)
    ctx->pc = 0x2d39a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d39a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d39a8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2d39a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d39ac: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x2d39acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x2d39b0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2d39b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d39b4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2d39b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d39b8: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x2d39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d39bc: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x2d39bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d39c0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2d39c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2d39c4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2d39c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d39c8: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D39C8u;
    {
        const bool branch_taken_0x2d39c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D39C8u;
        // 0x2d39cc: 0xa78825  or          $s1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d39c8) {
            ctx->pc = 0x2D3A84u;
            goto label_2d3a84;
        }
    }
    ctx->pc = 0x2D39D0u;
    // 0x2d39d0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2d39d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d39d4: 0x0  nop
    ctx->pc = 0x2d39d4u;
    // NOP
label_2d39d8:
    // 0x2d39d8: 0x8606001e  lh          $a2, 0x1E($s0)
    ctx->pc = 0x2d39d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2d39dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d39dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d39e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d39e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d39e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d39e8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2D39E8u;
    SET_GPR_U32(ctx, 31, 0x2D39F0u);
    ctx->pc = 0x2D39ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D39E8u;
    // 0x2d39ec: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2D39E8u, 0x2D39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D39F0u;
label_2d39f0:
    // 0x2d39f0: 0x8604001c  lh          $a0, 0x1C($s0)
    ctx->pc = 0x2d39f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d39f4: 0x8605001e  lh          $a1, 0x1E($s0)
    ctx->pc = 0x2d39f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2d39f8: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2d39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d39fc: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x2d39fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d3a00: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x2d3a00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d3a04: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2d3a04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2d3a08: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d3a08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d3a0c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d3a10: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x2d3a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2d3a14: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2d3a14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d3a18: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D3A18u;
    {
        const bool branch_taken_0x2d3a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A18u;
        // 0x2d3a1c: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a18) {
            ctx->pc = 0x2D39D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d39d8;
        }
    }
    ctx->pc = 0x2D3A20u;
    // 0x2d3a20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D3A20u;
    {
        const bool branch_taken_0x2d3a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A20u;
        // 0x2d3a24: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a20) {
            ctx->pc = 0x2D3A88u;
            goto label_2d3a88;
        }
    }
    ctx->pc = 0x2D3A28u;
label_2d3a28:
    // 0x2d3a28: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2d3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2d3a2c:
    // 0x2d3a2c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2d3a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2d3a30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3A30u;
    {
        const bool branch_taken_0x2d3a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A30u;
        // 0x2d3a34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a30) {
            ctx->pc = 0x2D3A4Cu;
            goto label_2d3a4c;
        }
    }
    ctx->pc = 0x2D3A38u;
label_2d3a38:
    // 0x2d3a38: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d3a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d3a3c: 0xc0d2658  jal         func_349960
    ctx->pc = 0x2D3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D3A44u);
    ctx->pc = 0x2D3A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3A3Cu;
    // 0x2d3a40: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349960u, 0x2D3A3Cu, 0x2D3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A44u;
label_2d3a44:
    // 0x2d3a44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3A44u;
    {
        const bool branch_taken_0x2d3a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A44u;
        // 0x2d3a48: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a44) {
            ctx->pc = 0x2D3A88u;
            goto label_2d3a88;
        }
    }
    ctx->pc = 0x2D3A4Cu;
label_2d3a4c:
    // 0x2d3a4c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d3a50: 0xc0d263a  jal         func_3498E8
    ctx->pc = 0x2D3A50u;
    SET_GPR_U32(ctx, 31, 0x2D3A58u);
    ctx->pc = 0x2D3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3A50u;
    // 0x2d3a54: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498E8u, 0x2D3A50u, 0x2D3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A58u;
label_2d3a58:
    // 0x2d3a58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D3A58u;
    {
        const bool branch_taken_0x2d3a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3A58u;
        // 0x2d3a5c: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3a58) {
            ctx->pc = 0x2D3A88u;
            goto label_2d3a88;
        }
    }
    ctx->pc = 0x2D3A60u;
label_2d3a60:
    // 0x2d3a60: 0x3c073000  lui         $a3, 0x3000
    ctx->pc = 0x2d3a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12288 << 16));
    // 0x2d3a64: 0x8602001e  lh          $v0, 0x1E($s0)
    ctx->pc = 0x2d3a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2d3a68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d3a6c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x2d3a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d3a70: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2d3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d3a74: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d3a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3a78: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x2d3a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2d3a7c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2D3A7Cu;
    SET_GPR_U32(ctx, 31, 0x2D3A84u);
    ctx->pc = 0x2D3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3A7Cu;
    // 0x2d3a80: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2D3A7Cu, 0x2D3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A84u;
label_2d3a84:
    // 0x2d3a84: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2d3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2d3a88:
    // 0x2d3a88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2d3a8c:
    // 0x2d3a8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3A8Cu;
    {
        const bool branch_taken_0x2d3a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3a8c) {
            ctx->pc = 0x2D3A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3A8Cu;
            // 0x2d3a90: 0x8e0300a4  lw          $v1, 0xA4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3AA0u;
            goto label_2d3aa0;
        }
    }
    ctx->pc = 0x2D3A94u;
    // 0x2d3a94: 0xc0b50d0  jal         func_2D4340
    ctx->pc = 0x2D3A94u;
    SET_GPR_U32(ctx, 31, 0x2D3A9Cu);
    ctx->pc = 0x2D3A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3A94u;
    // 0x2d3a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4340u, 0x2D3A94u, 0x2D3A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3A9Cu;
label_2d3a9c:
    // 0x2d3a9c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x2d3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_2d3aa0:
    // 0x2d3aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3aa4: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D3AA4u;
    {
        const bool branch_taken_0x2d3aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d3aa4) {
            ctx->pc = 0x2D3AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3AA4u;
            // 0x2d3aa8: 0xc6040050  lwc1        $f4, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3AF8u;
            goto label_2d3af8;
        }
    }
    ctx->pc = 0x2D3AACu;
    // 0x2d3aac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d3ab0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3ab4: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3AB4u;
    {
        const bool branch_taken_0x2d3ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ab4) {
            ctx->pc = 0x2D3AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3AB4u;
            // 0x2d3ab8: 0xc6040050  lwc1        $f4, 0x50($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3AF8u;
            goto label_2d3af8;
        }
    }
    ctx->pc = 0x2D3ABCu;
    // 0x2d3abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3ac0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D3AC0u;
    {
        const bool branch_taken_0x2d3ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AC0u;
        // 0x2d3ac4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ac0) {
            ctx->pc = 0x2D3AF4u;
            goto label_2d3af4;
        }
    }
    ctx->pc = 0x2D3AC8u;
label_2d3ac8:
    // 0x2d3ac8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3acc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3ACCu;
    {
        const bool branch_taken_0x2d3acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3ACCu;
        // 0x2d3ad0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3acc) {
            ctx->pc = 0x2D3AE0u;
            goto label_2d3ae0;
        }
    }
    ctx->pc = 0x2D3AD4u;
    // 0x2d3ad4: 0xc0d17b2  jal         func_345EC8
    ctx->pc = 0x2D3AD4u;
    SET_GPR_U32(ctx, 31, 0x2D3ADCu);
    ctx->pc = 0x345EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345EC8u, 0x2D3AD4u, 0x2D3ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3ADCu;
label_2d3adc:
    // 0x2d3adc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d3ae0:
    // 0x2d3ae0: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2d3ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_2d3ae4:
    // 0x2d3ae4: 0xc0b503e  jal         func_2D40F8
    ctx->pc = 0x2D3AE4u;
    SET_GPR_U32(ctx, 31, 0x2D3AECu);
    ctx->pc = 0x2D3AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3AE4u;
    // 0x2d3ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40F8u, 0x2D3AE4u, 0x2D3AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3AECu;
label_2d3aec:
    // 0x2d3aec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2D3AECu;
    {
        const bool branch_taken_0x2d3aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3AECu;
        // 0x2d3af0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3aec) {
            ctx->pc = 0x2D3B88u;
            goto label_2d3b88;
        }
    }
    ctx->pc = 0x2D3AF4u;
label_2d3af4:
    // 0x2d3af4: 0xc6040050  lwc1        $f4, 0x50($s0)
    ctx->pc = 0x2d3af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2d3af8:
    // 0x2d3af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d3af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3afc: 0x0  nop
    ctx->pc = 0x2d3afcu;
    // NOP
    // 0x2d3b00: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2d3b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3b04: 0x0  nop
    ctx->pc = 0x2d3b04u;
    // NOP
    // 0x2d3b08: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3B08u;
    {
        const bool branch_taken_0x2d3b08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B08u;
        // 0x2d3b0c: 0xc6000048  lwc1        $f0, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b08) {
            ctx->pc = 0x2D3B4Cu;
            goto label_2d3b4c;
        }
    }
    ctx->pc = 0x2D3B10u;
    // 0x2d3b10: 0xc603004c  lwc1        $f3, 0x4C($s0)
    ctx->pc = 0x2d3b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3b14: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x2d3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3b18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2d3b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d3b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d3b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3b20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d3b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3b24: 0x0  nop
    ctx->pc = 0x2d3b24u;
    // NOP
    // 0x2d3b28: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2d3b28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2d3b2c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2d3b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2d3b30: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x2d3b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2d3b34: 0x0  nop
    ctx->pc = 0x2d3b34u;
    // NOP
    // 0x2d3b38: 0x0  nop
    ctx->pc = 0x2d3b38u;
    // NOP
    // 0x2d3b3c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2d3b3cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2d3b40: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2d3b40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2d3b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3B44u;
    {
        const bool branch_taken_0x2d3b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B44u;
        // 0x2d3b48: 0xe6020044  swc1        $f2, 0x44($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b44) {
            ctx->pc = 0x2D3B58u;
            goto label_2d3b58;
        }
    }
    ctx->pc = 0x2D3B4Cu;
label_2d3b4c:
    // 0x2d3b4c: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2d3b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3b50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d3b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d3b54: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2d3b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2d3b58:
    // 0x2d3b58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3b5c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3B5Cu;
    {
        const bool branch_taken_0x2d3b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B5Cu;
        // 0x2d3b60: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3b5c) {
            ctx->pc = 0x2D3B84u;
            goto label_2d3b84;
        }
    }
    ctx->pc = 0x2D3B64u;
    // 0x2d3b64: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2d3b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3b68: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x2d3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
    // 0x2d3b6c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3b6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d3b70: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d3b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d3b74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d3b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3b7c: 0xc0d1a92  jal         func_346A48
    ctx->pc = 0x2D3B7Cu;
    SET_GPR_U32(ctx, 31, 0x2D3B84u);
    ctx->pc = 0x2D3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3B7Cu;
    // 0x2d3b80: 0x84450000  lh          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346A48u, 0x2D3B7Cu, 0x2D3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3B84u;
label_2d3b84:
    // 0x2d3b84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d3b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d3b88:
    // 0x2d3b88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d3b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3b8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d3b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3b90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d3b90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3b94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d3b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3B9Cu;
        // 0x2d3ba0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3BA4u;
    // 0x2d3ba4: 0x0  nop
    ctx->pc = 0x2d3ba4u;
    // NOP
    ctx->pc = 0x2d3ba8u;
}
