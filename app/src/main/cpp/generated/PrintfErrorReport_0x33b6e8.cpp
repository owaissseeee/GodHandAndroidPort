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

// Function: PrintfErrorReport
// Address: 0x33b6e8 - 0x33b790
void PrintfErrorReport_0x33b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrintfErrorReport_0x33b6e8");
#endif

    switch (ctx->pc) {
        case 0x33b6e8u: goto label_33b6e8;
        case 0x33b6ecu: goto label_33b6ec;
        case 0x33b6f0u: goto label_33b6f0;
        case 0x33b6f4u: goto label_33b6f4;
        case 0x33b6f8u: goto label_33b6f8;
        case 0x33b6fcu: goto label_33b6fc;
        case 0x33b700u: goto label_33b700;
        case 0x33b704u: goto label_33b704;
        case 0x33b708u: goto label_33b708;
        case 0x33b70cu: goto label_33b70c;
        case 0x33b710u: goto label_33b710;
        case 0x33b714u: goto label_33b714;
        case 0x33b718u: goto label_33b718;
        case 0x33b71cu: goto label_33b71c;
        case 0x33b720u: goto label_33b720;
        case 0x33b724u: goto label_33b724;
        case 0x33b728u: goto label_33b728;
        case 0x33b72cu: goto label_33b72c;
        case 0x33b730u: goto label_33b730;
        case 0x33b734u: goto label_33b734;
        case 0x33b738u: goto label_33b738;
        case 0x33b73cu: goto label_33b73c;
        case 0x33b740u: goto label_33b740;
        case 0x33b744u: goto label_33b744;
        case 0x33b748u: goto label_33b748;
        case 0x33b74cu: goto label_33b74c;
        case 0x33b750u: goto label_33b750;
        case 0x33b754u: goto label_33b754;
        case 0x33b758u: goto label_33b758;
        case 0x33b75cu: goto label_33b75c;
        case 0x33b760u: goto label_33b760;
        case 0x33b764u: goto label_33b764;
        case 0x33b768u: goto label_33b768;
        case 0x33b76cu: goto label_33b76c;
        case 0x33b770u: goto label_33b770;
        case 0x33b774u: goto label_33b774;
        case 0x33b778u: goto label_33b778;
        case 0x33b77cu: goto label_33b77c;
        case 0x33b780u: goto label_33b780;
        case 0x33b784u: goto label_33b784;
        case 0x33b788u: goto label_33b788;
        case 0x33b78cu: goto label_33b78c;
        default: break;
    }

    ctx->pc = 0x33b6e8u;

label_33b6e8:
    // 0x33b6e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33b6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_33b6ec:
    // 0x33b6ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33b6f0:
    // 0x33b6f0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x33b6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_33b6f4:
    // 0x33b6f4: 0x26109990  addiu       $s0, $s0, -0x6670
    ctx->pc = 0x33b6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941072));
label_33b6f8:
    // 0x33b6f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33b6fc:
    // 0x33b6fc: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x33b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_33b700:
    // 0x33b700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b704:
    // 0x33b704: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x33b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
label_33b708:
    // 0x33b708: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x33b708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_33b70c:
    // 0x33b70c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33b70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b710:
    // 0x33b710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33b710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b714:
    // 0x33b714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33b718:
    // 0x33b718: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x33b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
label_33b71c:
    // 0x33b71c: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x33b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
label_33b720:
    // 0x33b720: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x33b720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
label_33b724:
    // 0x33b724: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x33b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
label_33b728:
    // 0x33b728: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x33b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
label_33b72c:
    // 0x33b72c: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x33b72cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_33b730:
    // 0x33b730: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x33b730u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_33b734:
    // 0x33b734: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x33b734u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_33b738:
    // 0x33b738: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x33b738u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_33b73c:
    // 0x33b73c: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x33b73cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_33b740:
    // 0x33b740: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x33b740u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_33b744:
    // 0x33b744: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x33b744u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_33b748:
    // 0x33b748: 0xc0e94bc  jal         func_3A52F0
label_33b74c:
    if (ctx->pc == 0x33B74Cu) {
        ctx->pc = 0x33B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B748u;
        // 0x33b74c: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B750u;
        goto label_33b750;
    }
    ctx->pc = 0x33B748u;
    SET_GPR_U32(ctx, 31, 0x33B750u);
    ctx->pc = 0x33B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B748u;
    // 0x33b74c: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33B748u, 0x33B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B750u;
label_33b750:
    // 0x33b750: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x33b750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_33b754:
    // 0x33b754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33b754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b758:
    // 0x33b758: 0xc0e9eba  jal         func_3A7AE8
label_33b75c:
    if (ctx->pc == 0x33B75Cu) {
        ctx->pc = 0x33B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B758u;
        // 0x33b75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B760u;
        goto label_33b760;
    }
    ctx->pc = 0x33B758u;
    SET_GPR_U32(ctx, 31, 0x33B760u);
    ctx->pc = 0x33B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B758u;
    // 0x33b75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE8u, 0x33B758u, 0x33B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B760u;
label_33b760:
    // 0x33b760: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33b760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33b764:
    // 0x33b764: 0x244288b0  addiu       $v0, $v0, -0x7750
    ctx->pc = 0x33b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936752));
label_33b768:
    // 0x33b768: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33b768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33b76c:
    // 0x33b76c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_33b770:
    if (ctx->pc == 0x33B770u) {
        ctx->pc = 0x33B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B76Cu;
        // 0x33b770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B774u;
        goto label_33b774;
    }
    ctx->pc = 0x33B76Cu;
    {
        const bool branch_taken_0x33b76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B76Cu;
        // 0x33b770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b76c) {
            ctx->pc = 0x33B77Cu;
            goto label_33b77c;
        }
    }
    ctx->pc = 0x33B774u;
label_33b774:
    // 0x33b774: 0x60f809  jalr        $v1
label_33b778:
    if (ctx->pc == 0x33B778u) {
        ctx->pc = 0x33B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B774u;
        // 0x33b778: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B77Cu;
        goto label_33b77c;
    }
    ctx->pc = 0x33B774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33B77Cu);
        ctx->pc = 0x33B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B774u;
        // 0x33b778: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B774u, 0x33B77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B77Cu;
label_33b77c:
    // 0x33b77c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b780:
    // 0x33b780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33b780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33b784:
    // 0x33b784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33b788:
    // 0x33b788: 0x3e00008  jr          $ra
label_33b78c:
    if (ctx->pc == 0x33B78Cu) {
        ctx->pc = 0x33B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B788u;
        // 0x33b78c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B790u;
        goto label_fallthrough_0x33b788;
    }
    ctx->pc = 0x33B788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B788u;
        // 0x33b78c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33b788:
    ctx->pc = 0x33B790u;
}
