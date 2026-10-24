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

// Function: func_0036B6D8
// Address: 0x36b6d8 - 0x36b798
void func_0036B6D8_0x36b6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036B6D8_0x36b6d8");
#endif

    switch (ctx->pc) {
        case 0x36b6d8u: goto label_36b6d8;
        case 0x36b6dcu: goto label_36b6dc;
        case 0x36b6e0u: goto label_36b6e0;
        case 0x36b6e4u: goto label_36b6e4;
        case 0x36b6e8u: goto label_36b6e8;
        case 0x36b6ecu: goto label_36b6ec;
        case 0x36b6f0u: goto label_36b6f0;
        case 0x36b6f4u: goto label_36b6f4;
        case 0x36b6f8u: goto label_36b6f8;
        case 0x36b6fcu: goto label_36b6fc;
        case 0x36b700u: goto label_36b700;
        case 0x36b704u: goto label_36b704;
        case 0x36b708u: goto label_36b708;
        case 0x36b70cu: goto label_36b70c;
        case 0x36b710u: goto label_36b710;
        case 0x36b714u: goto label_36b714;
        case 0x36b718u: goto label_36b718;
        case 0x36b71cu: goto label_36b71c;
        case 0x36b720u: goto label_36b720;
        case 0x36b724u: goto label_36b724;
        case 0x36b728u: goto label_36b728;
        case 0x36b72cu: goto label_36b72c;
        case 0x36b730u: goto label_36b730;
        case 0x36b734u: goto label_36b734;
        case 0x36b738u: goto label_36b738;
        case 0x36b73cu: goto label_36b73c;
        case 0x36b740u: goto label_36b740;
        case 0x36b744u: goto label_36b744;
        case 0x36b748u: goto label_36b748;
        case 0x36b74cu: goto label_36b74c;
        case 0x36b750u: goto label_36b750;
        case 0x36b754u: goto label_36b754;
        case 0x36b758u: goto label_36b758;
        case 0x36b75cu: goto label_36b75c;
        case 0x36b760u: goto label_36b760;
        case 0x36b764u: goto label_36b764;
        case 0x36b768u: goto label_36b768;
        case 0x36b76cu: goto label_36b76c;
        case 0x36b770u: goto label_36b770;
        case 0x36b774u: goto label_36b774;
        case 0x36b778u: goto label_36b778;
        case 0x36b77cu: goto label_36b77c;
        case 0x36b780u: goto label_36b780;
        case 0x36b784u: goto label_36b784;
        case 0x36b788u: goto label_36b788;
        case 0x36b78cu: goto label_36b78c;
        case 0x36b790u: goto label_36b790;
        case 0x36b794u: goto label_36b794;
        default: break;
    }

    ctx->pc = 0x36b6d8u;

label_36b6d8:
    // 0x36b6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36b6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36b6dc:
    // 0x36b6dc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36b6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36b6e0:
    // 0x36b6e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36b6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_36b6e4:
    // 0x36b6e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36b6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36b6e8:
    // 0x36b6e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_36b6ec:
    // 0x36b6ec: 0x2491038c  addiu       $s1, $a0, 0x38C
    ctx->pc = 0x36b6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 908));
label_36b6f0:
    // 0x36b6f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36b6f4:
    // 0x36b6f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36b6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b6f8:
    // 0x36b6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b6fc:
    // 0x36b6fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b700:
    // 0x36b700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36b704:
    // 0x36b704: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36b708:
    // 0x36b708: 0x40f809  jalr        $v0
label_36b70c:
    if (ctx->pc == 0x36B70Cu) {
        ctx->pc = 0x36B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B708u;
        // 0x36b70c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B710u;
        goto label_36b710;
    }
    ctx->pc = 0x36B708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B710u);
        ctx->pc = 0x36B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B708u;
        // 0x36b70c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B708u, 0x36B710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B710u;
label_36b710:
    // 0x36b710: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36b710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36b714:
    // 0x36b714: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x36b714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_36b718:
    // 0x36b718: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36b718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36b71c:
    // 0x36b71c: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x36b71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_36b720:
    // 0x36b720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b724:
    // 0x36b724: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x36b724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36b728:
    // 0x36b728: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b72c:
    // 0x36b72c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x36b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_36b730:
    // 0x36b730: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36b730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_36b734:
    // 0x36b734: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x36b734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_36b738:
    // 0x36b738: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x36b738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_36b73c:
    // 0x36b73c: 0xc0ceb28  jal         func_33ACA0
label_36b740:
    if (ctx->pc == 0x36B740u) {
        ctx->pc = 0x36B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B73Cu;
        // 0x36b740: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B744u;
        goto label_36b744;
    }
    ctx->pc = 0x36B73Cu;
    SET_GPR_U32(ctx, 31, 0x36B744u);
    ctx->pc = 0x36B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B73Cu;
    // 0x36b740: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36B73Cu, 0x36B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B744u;
label_36b744:
    // 0x36b744: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36b748:
    // 0x36b748: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36b74c:
    // 0x36b74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36b750:
    // 0x36b750: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36b754:
    // 0x36b754: 0x40f809  jalr        $v0
label_36b758:
    if (ctx->pc == 0x36B758u) {
        ctx->pc = 0x36B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B754u;
        // 0x36b758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B75Cu;
        goto label_36b75c;
    }
    ctx->pc = 0x36B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B75Cu);
        ctx->pc = 0x36B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B754u;
        // 0x36b758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B754u, 0x36B75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B75Cu;
label_36b75c:
    // 0x36b75c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36b760:
    // 0x36b760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b764:
    // 0x36b764: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36b764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36b768:
    // 0x36b768: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36b76c:
    // 0x36b76c: 0x40f809  jalr        $v0
label_36b770:
    if (ctx->pc == 0x36B770u) {
        ctx->pc = 0x36B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B76Cu;
        // 0x36b770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B774u;
        goto label_36b774;
    }
    ctx->pc = 0x36B76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B774u);
        ctx->pc = 0x36B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B76Cu;
        // 0x36b770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B76Cu, 0x36B774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B774u;
label_36b774:
    // 0x36b774: 0xc0daede  jal         func_36BB78
label_36b778:
    if (ctx->pc == 0x36B778u) {
        ctx->pc = 0x36B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B774u;
        // 0x36b778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B77Cu;
        goto label_36b77c;
    }
    ctx->pc = 0x36B774u;
    SET_GPR_U32(ctx, 31, 0x36B77Cu);
    ctx->pc = 0x36B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B774u;
    // 0x36b778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BB78u, 0x36B774u, 0x36B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B77Cu;
label_36b77c:
    // 0x36b77c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36b780:
    // 0x36b780: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36b780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36b784:
    // 0x36b784: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36b784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36b788:
    // 0x36b788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36b788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36b78c:
    // 0x36b78c: 0x3e00008  jr          $ra
label_36b790:
    if (ctx->pc == 0x36B790u) {
        ctx->pc = 0x36B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B78Cu;
        // 0x36b790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36B794u;
        goto label_36b794;
    }
    ctx->pc = 0x36B78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B78Cu;
        // 0x36b790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B794u;
label_36b794:
    // 0x36b794: 0x0  nop
    ctx->pc = 0x36b794u;
    // NOP
    ctx->pc = 0x36b798u;
}
