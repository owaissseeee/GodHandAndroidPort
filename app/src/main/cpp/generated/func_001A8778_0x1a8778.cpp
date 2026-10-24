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

// Function: func_001A8778
// Address: 0x1a8778 - 0x1a8838
void func_001A8778_0x1a8778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8778_0x1a8778");
#endif

    switch (ctx->pc) {
        case 0x1a8778u: goto label_1a8778;
        case 0x1a877cu: goto label_1a877c;
        case 0x1a8780u: goto label_1a8780;
        case 0x1a8784u: goto label_1a8784;
        case 0x1a8788u: goto label_1a8788;
        case 0x1a878cu: goto label_1a878c;
        case 0x1a8790u: goto label_1a8790;
        case 0x1a8794u: goto label_1a8794;
        case 0x1a8798u: goto label_1a8798;
        case 0x1a879cu: goto label_1a879c;
        case 0x1a87a0u: goto label_1a87a0;
        case 0x1a87a4u: goto label_1a87a4;
        case 0x1a87a8u: goto label_1a87a8;
        case 0x1a87acu: goto label_1a87ac;
        case 0x1a87b0u: goto label_1a87b0;
        case 0x1a87b4u: goto label_1a87b4;
        case 0x1a87b8u: goto label_1a87b8;
        case 0x1a87bcu: goto label_1a87bc;
        case 0x1a87c0u: goto label_1a87c0;
        case 0x1a87c4u: goto label_1a87c4;
        case 0x1a87c8u: goto label_1a87c8;
        case 0x1a87ccu: goto label_1a87cc;
        case 0x1a87d0u: goto label_1a87d0;
        case 0x1a87d4u: goto label_1a87d4;
        case 0x1a87d8u: goto label_1a87d8;
        case 0x1a87dcu: goto label_1a87dc;
        case 0x1a87e0u: goto label_1a87e0;
        case 0x1a87e4u: goto label_1a87e4;
        case 0x1a87e8u: goto label_1a87e8;
        case 0x1a87ecu: goto label_1a87ec;
        case 0x1a87f0u: goto label_1a87f0;
        case 0x1a87f4u: goto label_1a87f4;
        case 0x1a87f8u: goto label_1a87f8;
        case 0x1a87fcu: goto label_1a87fc;
        case 0x1a8800u: goto label_1a8800;
        case 0x1a8804u: goto label_1a8804;
        case 0x1a8808u: goto label_1a8808;
        case 0x1a880cu: goto label_1a880c;
        case 0x1a8810u: goto label_1a8810;
        case 0x1a8814u: goto label_1a8814;
        case 0x1a8818u: goto label_1a8818;
        case 0x1a881cu: goto label_1a881c;
        case 0x1a8820u: goto label_1a8820;
        case 0x1a8824u: goto label_1a8824;
        case 0x1a8828u: goto label_1a8828;
        case 0x1a882cu: goto label_1a882c;
        case 0x1a8830u: goto label_1a8830;
        case 0x1a8834u: goto label_1a8834;
        default: break;
    }

    ctx->pc = 0x1a8778u;

label_1a8778:
    // 0x1a8778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a877c:
    // 0x1a877c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a877cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a8780:
    // 0x1a8780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a8784:
    // 0x1a8784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8788:
    // 0x1a8788: 0xc06ddac  jal         func_1B76B0
label_1a878c:
    if (ctx->pc == 0x1A878Cu) {
        ctx->pc = 0x1A878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8788u;
        // 0x1a878c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8790u;
        goto label_1a8790;
    }
    ctx->pc = 0x1A8788u;
    SET_GPR_U32(ctx, 31, 0x1A8790u);
    ctx->pc = 0x1A878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8788u;
    // 0x1a878c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A8788u, 0x1A8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8790u;
label_1a8790:
    // 0x1a8790: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1a8794:
    if (ctx->pc == 0x1A8794u) {
        ctx->pc = 0x1A8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8790u;
        // 0x1a8794: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8798u;
        goto label_1a8798;
    }
    ctx->pc = 0x1A8790u;
    {
        const bool branch_taken_0x1a8790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8790u;
        // 0x1a8794: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8790) {
            ctx->pc = 0x1A8820u;
            goto label_1a8820;
        }
    }
    ctx->pc = 0x1A8798u;
label_1a8798:
    // 0x1a8798: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a8798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a879c:
    // 0x1a879c: 0x2446dbe0  addiu       $a2, $v0, -0x2420
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958048));
label_1a87a0:
    // 0x1a87a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a87a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a87a4:
    // 0x1a87a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a87a8:
    // 0x1a87a8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a87a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a87ac:
    // 0x1a87ac: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a87acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a87b0:
    // 0x1a87b0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a87b4:
    if (ctx->pc == 0x1A87B4u) {
        ctx->pc = 0x1A87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87B0u;
        // 0x1a87b4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87B8u;
        goto label_1a87b8;
    }
    ctx->pc = 0x1A87B0u;
    {
        const bool branch_taken_0x1a87b0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87B0u;
        // 0x1a87b4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87b0) {
            ctx->pc = 0x1A87DCu;
            goto label_1a87dc;
        }
    }
    ctx->pc = 0x1A87B8u;
label_1a87b8:
    // 0x1a87b8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a87bc:
    // 0x1a87bc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a87c0:
    // 0x1a87c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a87c4:
    // 0x1a87c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a87c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a87c8:
    // 0x1a87c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a87cc:
    // 0x1a87cc: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1a87ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a87d0:
    // 0x1a87d0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a87d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a87d4:
    // 0x1a87d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a87d8:
    if (ctx->pc == 0x1A87D8u) {
        ctx->pc = 0x1A87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87D4u;
        // 0x1a87d8: 0x2503dbe0  addiu       $v1, $t0, -0x2420 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87DCu;
        goto label_1a87dc;
    }
    ctx->pc = 0x1A87D4u;
    {
        const bool branch_taken_0x1a87d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87D4u;
        // 0x1a87d8: 0x2503dbe0  addiu       $v1, $t0, -0x2420 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87d4) {
            ctx->pc = 0x1A87E8u;
            goto label_1a87e8;
        }
    }
    ctx->pc = 0x1A87DCu;
label_1a87dc:
    // 0x1a87dc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a87e0:
    // 0x1a87e0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a87e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a87e4:
    // 0x1a87e4: 0x2503dbe0  addiu       $v1, $t0, -0x2420
    ctx->pc = 0x1a87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958048));
label_1a87e8:
    // 0x1a87e8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a87ec:
    // 0x1a87ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a87f0:
    // 0x1a87f0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a87f4:
    if (ctx->pc == 0x1A87F4u) {
        ctx->pc = 0x1A87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87F0u;
        // 0x1a87f4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A87F8u;
        goto label_1a87f8;
    }
    ctx->pc = 0x1A87F0u;
    {
        const bool branch_taken_0x1a87f0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A87F0u;
        // 0x1a87f4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87f0) {
            ctx->pc = 0x1A880Cu;
            goto label_1a880c;
        }
    }
    ctx->pc = 0x1A87F8u;
label_1a87f8:
    // 0x1a87f8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a87f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a87fc:
    // 0x1a87fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a87fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a8800:
    // 0x1a8800: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a8800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a8804:
    // 0x1a8804: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a8808:
    if (ctx->pc == 0x1A8808u) {
        ctx->pc = 0x1A8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8804u;
        // 0x1a8808: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A880Cu;
        goto label_1a880c;
    }
    ctx->pc = 0x1A8804u;
    {
        const bool branch_taken_0x1a8804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8804u;
        // 0x1a8808: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8804) {
            ctx->pc = 0x1A8810u;
            goto label_1a8810;
        }
    }
    ctx->pc = 0x1A880Cu;
label_1a880c:
    // 0x1a880c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a880cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a8810:
    // 0x1a8810: 0xc0f809  jalr        $a2
label_1a8814:
    if (ctx->pc == 0x1A8814u) {
        ctx->pc = 0x1A8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8810u;
        // 0x1a8814: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8818u;
        goto label_1a8818;
    }
    ctx->pc = 0x1A8810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A8818u);
        ctx->pc = 0x1A8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8810u;
        // 0x1a8814: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8810u, 0x1A8818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8818u;
label_1a8818:
    // 0x1a8818: 0xc06ddb6  jal         func_1B76D8
label_1a881c:
    if (ctx->pc == 0x1A881Cu) {
        ctx->pc = 0x1A881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8818u;
        // 0x1a881c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8820u;
        goto label_1a8820;
    }
    ctx->pc = 0x1A8818u;
    SET_GPR_U32(ctx, 31, 0x1A8820u);
    ctx->pc = 0x1A881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8818u;
    // 0x1a881c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A8818u, 0x1A8820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8820u;
label_1a8820:
    // 0x1a8820: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a8820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8824:
    // 0x1a8824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8828:
    // 0x1a8828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a882c:
    // 0x1a882c: 0x3e00008  jr          $ra
label_1a8830:
    if (ctx->pc == 0x1A8830u) {
        ctx->pc = 0x1A8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A882Cu;
        // 0x1a8830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8834u;
        goto label_1a8834;
    }
    ctx->pc = 0x1A882Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A882Cu;
        // 0x1a8830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A882Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8834u;
label_1a8834:
    // 0x1a8834: 0x0  nop
    ctx->pc = 0x1a8834u;
    // NOP
    ctx->pc = 0x1a8838u;
}
