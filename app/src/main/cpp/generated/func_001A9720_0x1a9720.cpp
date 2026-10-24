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

// Function: func_001A9720
// Address: 0x1a9720 - 0x1a97e0
void func_001A9720_0x1a9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A9720_0x1a9720");
#endif

    switch (ctx->pc) {
        case 0x1a9720u: goto label_1a9720;
        case 0x1a9724u: goto label_1a9724;
        case 0x1a9728u: goto label_1a9728;
        case 0x1a972cu: goto label_1a972c;
        case 0x1a9730u: goto label_1a9730;
        case 0x1a9734u: goto label_1a9734;
        case 0x1a9738u: goto label_1a9738;
        case 0x1a973cu: goto label_1a973c;
        case 0x1a9740u: goto label_1a9740;
        case 0x1a9744u: goto label_1a9744;
        case 0x1a9748u: goto label_1a9748;
        case 0x1a974cu: goto label_1a974c;
        case 0x1a9750u: goto label_1a9750;
        case 0x1a9754u: goto label_1a9754;
        case 0x1a9758u: goto label_1a9758;
        case 0x1a975cu: goto label_1a975c;
        case 0x1a9760u: goto label_1a9760;
        case 0x1a9764u: goto label_1a9764;
        case 0x1a9768u: goto label_1a9768;
        case 0x1a976cu: goto label_1a976c;
        case 0x1a9770u: goto label_1a9770;
        case 0x1a9774u: goto label_1a9774;
        case 0x1a9778u: goto label_1a9778;
        case 0x1a977cu: goto label_1a977c;
        case 0x1a9780u: goto label_1a9780;
        case 0x1a9784u: goto label_1a9784;
        case 0x1a9788u: goto label_1a9788;
        case 0x1a978cu: goto label_1a978c;
        case 0x1a9790u: goto label_1a9790;
        case 0x1a9794u: goto label_1a9794;
        case 0x1a9798u: goto label_1a9798;
        case 0x1a979cu: goto label_1a979c;
        case 0x1a97a0u: goto label_1a97a0;
        case 0x1a97a4u: goto label_1a97a4;
        case 0x1a97a8u: goto label_1a97a8;
        case 0x1a97acu: goto label_1a97ac;
        case 0x1a97b0u: goto label_1a97b0;
        case 0x1a97b4u: goto label_1a97b4;
        case 0x1a97b8u: goto label_1a97b8;
        case 0x1a97bcu: goto label_1a97bc;
        case 0x1a97c0u: goto label_1a97c0;
        case 0x1a97c4u: goto label_1a97c4;
        case 0x1a97c8u: goto label_1a97c8;
        case 0x1a97ccu: goto label_1a97cc;
        case 0x1a97d0u: goto label_1a97d0;
        case 0x1a97d4u: goto label_1a97d4;
        case 0x1a97d8u: goto label_1a97d8;
        case 0x1a97dcu: goto label_1a97dc;
        default: break;
    }

    ctx->pc = 0x1a9720u;

label_1a9720:
    // 0x1a9720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a9724:
    // 0x1a9724: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a9728:
    // 0x1a9728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a972c:
    // 0x1a972c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9730:
    // 0x1a9730: 0xc06ddac  jal         func_1B76B0
label_1a9734:
    if (ctx->pc == 0x1A9734u) {
        ctx->pc = 0x1A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9730u;
        // 0x1a9734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9738u;
        goto label_1a9738;
    }
    ctx->pc = 0x1A9730u;
    SET_GPR_U32(ctx, 31, 0x1A9738u);
    ctx->pc = 0x1A9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9730u;
    // 0x1a9734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A9730u, 0x1A9738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9738u;
label_1a9738:
    // 0x1a9738: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1a973c:
    if (ctx->pc == 0x1A973Cu) {
        ctx->pc = 0x1A973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9738u;
        // 0x1a973c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9740u;
        goto label_1a9740;
    }
    ctx->pc = 0x1A9738u;
    {
        const bool branch_taken_0x1a9738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9738u;
        // 0x1a973c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9738) {
            ctx->pc = 0x1A97C8u;
            goto label_1a97c8;
        }
    }
    ctx->pc = 0x1A9740u;
label_1a9740:
    // 0x1a9740: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a9740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a9744:
    // 0x1a9744: 0x2446dc08  addiu       $a2, $v0, -0x23F8
    ctx->pc = 0x1a9744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958088));
label_1a9748:
    // 0x1a9748: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a9748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a974c:
    // 0x1a974c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a974cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a9750:
    // 0x1a9750: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a9750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a9754:
    // 0x1a9754: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a9754u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a9758:
    // 0x1a9758: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a975c:
    if (ctx->pc == 0x1A975Cu) {
        ctx->pc = 0x1A975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9758u;
        // 0x1a975c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9760u;
        goto label_1a9760;
    }
    ctx->pc = 0x1A9758u;
    {
        const bool branch_taken_0x1a9758 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9758u;
        // 0x1a975c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9758) {
            ctx->pc = 0x1A9784u;
            goto label_1a9784;
        }
    }
    ctx->pc = 0x1A9760u;
label_1a9760:
    // 0x1a9760: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a9760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a9764:
    // 0x1a9764: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a9764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a9768:
    // 0x1a9768: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a9768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a976c:
    // 0x1a976c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9770:
    // 0x1a9770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a9770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a9774:
    // 0x1a9774: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1a9774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a9778:
    // 0x1a9778: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a9778u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a977c:
    // 0x1a977c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a9780:
    if (ctx->pc == 0x1A9780u) {
        ctx->pc = 0x1A9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A977Cu;
        // 0x1a9780: 0x2503dc08  addiu       $v1, $t0, -0x23F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9784u;
        goto label_1a9784;
    }
    ctx->pc = 0x1A977Cu;
    {
        const bool branch_taken_0x1a977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A977Cu;
        // 0x1a9780: 0x2503dc08  addiu       $v1, $t0, -0x23F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a977c) {
            ctx->pc = 0x1A9790u;
            goto label_1a9790;
        }
    }
    ctx->pc = 0x1A9784u;
label_1a9784:
    // 0x1a9784: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a9784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a9788:
    // 0x1a9788: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a9788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a978c:
    // 0x1a978c: 0x2503dc08  addiu       $v1, $t0, -0x23F8
    ctx->pc = 0x1a978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958088));
label_1a9790:
    // 0x1a9790: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a9790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a9794:
    // 0x1a9794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9798:
    // 0x1a9798: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a979c:
    if (ctx->pc == 0x1A979Cu) {
        ctx->pc = 0x1A979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9798u;
        // 0x1a979c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97A0u;
        goto label_1a97a0;
    }
    ctx->pc = 0x1A9798u;
    {
        const bool branch_taken_0x1a9798 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9798u;
        // 0x1a979c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9798) {
            ctx->pc = 0x1A97B4u;
            goto label_1a97b4;
        }
    }
    ctx->pc = 0x1A97A0u;
label_1a97a0:
    // 0x1a97a0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a97a4:
    // 0x1a97a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a97a8:
    // 0x1a97a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a97a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a97ac:
    // 0x1a97ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a97b0:
    if (ctx->pc == 0x1A97B0u) {
        ctx->pc = 0x1A97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97ACu;
        // 0x1a97b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97B4u;
        goto label_1a97b4;
    }
    ctx->pc = 0x1A97ACu;
    {
        const bool branch_taken_0x1a97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97ACu;
        // 0x1a97b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a97ac) {
            ctx->pc = 0x1A97B8u;
            goto label_1a97b8;
        }
    }
    ctx->pc = 0x1A97B4u;
label_1a97b4:
    // 0x1a97b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a97b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a97b8:
    // 0x1a97b8: 0xc0f809  jalr        $a2
label_1a97bc:
    if (ctx->pc == 0x1A97BCu) {
        ctx->pc = 0x1A97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97B8u;
        // 0x1a97bc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97C0u;
        goto label_1a97c0;
    }
    ctx->pc = 0x1A97B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A97C0u);
        ctx->pc = 0x1A97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97B8u;
        // 0x1a97bc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97B8u, 0x1A97C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A97C0u;
label_1a97c0:
    // 0x1a97c0: 0xc06ddb6  jal         func_1B76D8
label_1a97c4:
    if (ctx->pc == 0x1A97C4u) {
        ctx->pc = 0x1A97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97C0u;
        // 0x1a97c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97C8u;
        goto label_1a97c8;
    }
    ctx->pc = 0x1A97C0u;
    SET_GPR_U32(ctx, 31, 0x1A97C8u);
    ctx->pc = 0x1A97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97C0u;
    // 0x1a97c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A97C0u, 0x1A97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97C8u;
label_1a97c8:
    // 0x1a97c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a97c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a97cc:
    // 0x1a97cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a97ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a97d0:
    // 0x1a97d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a97d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a97d4:
    // 0x1a97d4: 0x3e00008  jr          $ra
label_1a97d8:
    if (ctx->pc == 0x1A97D8u) {
        ctx->pc = 0x1A97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97D4u;
        // 0x1a97d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A97DCu;
        goto label_1a97dc;
    }
    ctx->pc = 0x1A97D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97D4u;
        // 0x1a97d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97DCu;
label_1a97dc:
    // 0x1a97dc: 0x0  nop
    ctx->pc = 0x1a97dcu;
    // NOP
    ctx->pc = 0x1a97e0u;
}
