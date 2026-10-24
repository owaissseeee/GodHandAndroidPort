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

// Function: write__7ostreamPCci
// Address: 0x389490 - 0x389548
void write__7ostreamPCci_0x389490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("write__7ostreamPCci_0x389490");
#endif

    switch (ctx->pc) {
        case 0x389490u: goto label_389490;
        case 0x389494u: goto label_389494;
        case 0x389498u: goto label_389498;
        case 0x38949cu: goto label_38949c;
        case 0x3894a0u: goto label_3894a0;
        case 0x3894a4u: goto label_3894a4;
        case 0x3894a8u: goto label_3894a8;
        case 0x3894acu: goto label_3894ac;
        case 0x3894b0u: goto label_3894b0;
        case 0x3894b4u: goto label_3894b4;
        case 0x3894b8u: goto label_3894b8;
        case 0x3894bcu: goto label_3894bc;
        case 0x3894c0u: goto label_3894c0;
        case 0x3894c4u: goto label_3894c4;
        case 0x3894c8u: goto label_3894c8;
        case 0x3894ccu: goto label_3894cc;
        case 0x3894d0u: goto label_3894d0;
        case 0x3894d4u: goto label_3894d4;
        case 0x3894d8u: goto label_3894d8;
        case 0x3894dcu: goto label_3894dc;
        case 0x3894e0u: goto label_3894e0;
        case 0x3894e4u: goto label_3894e4;
        case 0x3894e8u: goto label_3894e8;
        case 0x3894ecu: goto label_3894ec;
        case 0x3894f0u: goto label_3894f0;
        case 0x3894f4u: goto label_3894f4;
        case 0x3894f8u: goto label_3894f8;
        case 0x3894fcu: goto label_3894fc;
        case 0x389500u: goto label_389500;
        case 0x389504u: goto label_389504;
        case 0x389508u: goto label_389508;
        case 0x38950cu: goto label_38950c;
        case 0x389510u: goto label_389510;
        case 0x389514u: goto label_389514;
        case 0x389518u: goto label_389518;
        case 0x38951cu: goto label_38951c;
        case 0x389520u: goto label_389520;
        case 0x389524u: goto label_389524;
        case 0x389528u: goto label_389528;
        case 0x38952cu: goto label_38952c;
        case 0x389530u: goto label_389530;
        case 0x389534u: goto label_389534;
        case 0x389538u: goto label_389538;
        case 0x38953cu: goto label_38953c;
        case 0x389540u: goto label_389540;
        case 0x389544u: goto label_389544;
        default: break;
    }

    ctx->pc = 0x389490u;

label_389490:
    // 0x389490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x389490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_389494:
    // 0x389494: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x389494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_389498:
    // 0x389498: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x389498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_38949c:
    // 0x38949c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38949cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3894a0:
    // 0x3894a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3894a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3894a4:
    // 0x3894a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3894a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3894a8:
    // 0x3894a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3894a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3894ac:
    // 0x3894ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3894acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3894b0:
    // 0x3894b0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x3894b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_3894b4:
    // 0x3894b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3894b8:
    if (ctx->pc == 0x3894B8u) {
        ctx->pc = 0x3894B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894B4u;
        // 0x3894b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894BCu;
        goto label_3894bc;
    }
    ctx->pc = 0x3894B4u;
    {
        const bool branch_taken_0x3894b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894B4u;
        // 0x3894b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894b4) {
            ctx->pc = 0x3894C4u;
            goto label_3894c4;
        }
    }
    ctx->pc = 0x3894BCu;
label_3894bc:
    // 0x3894bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3894c0:
    if (ctx->pc == 0x3894C0u) {
        ctx->pc = 0x3894C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894BCu;
        // 0x3894c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894C4u;
        goto label_3894c4;
    }
    ctx->pc = 0x3894BCu;
    {
        const bool branch_taken_0x3894bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894BCu;
        // 0x3894c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894bc) {
            ctx->pc = 0x3894DCu;
            goto label_3894dc;
        }
    }
    ctx->pc = 0x3894C4u;
label_3894c4:
    // 0x3894c4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3894c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3894c8:
    // 0x3894c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3894cc:
    if (ctx->pc == 0x3894CCu) {
        ctx->pc = 0x3894CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894C8u;
        // 0x3894cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894D0u;
        goto label_3894d0;
    }
    ctx->pc = 0x3894C8u;
    {
        const bool branch_taken_0x3894c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894C8u;
        // 0x3894cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894c8) {
            ctx->pc = 0x3894DCu;
            goto label_3894dc;
        }
    }
    ctx->pc = 0x3894D0u;
label_3894d0:
    // 0x3894d0: 0xc0e249a  jal         func_389268
label_3894d4:
    if (ctx->pc == 0x3894D4u) {
        ctx->pc = 0x3894D8u;
        goto label_3894d8;
    }
    ctx->pc = 0x3894D0u;
    SET_GPR_U32(ctx, 31, 0x3894D8u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x3894D0u, 0x3894D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894D8u;
label_3894d8:
    // 0x3894d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3894d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3894dc:
    // 0x3894dc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3894e0:
    if (ctx->pc == 0x3894E0u) {
        ctx->pc = 0x3894E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894DCu;
        // 0x3894e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894E4u;
        goto label_3894e4;
    }
    ctx->pc = 0x3894DCu;
    {
        const bool branch_taken_0x3894dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894DCu;
        // 0x3894e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894dc) {
            ctx->pc = 0x38952Cu;
            goto label_38952c;
        }
    }
    ctx->pc = 0x3894E4u;
label_3894e4:
    // 0x3894e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3894e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3894e8:
    // 0x3894e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3894e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3894ec:
    // 0x3894ec: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3894ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3894f0:
    // 0x3894f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3894f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3894f4:
    // 0x3894f4: 0x40f809  jalr        $v0
label_3894f8:
    if (ctx->pc == 0x3894F8u) {
        ctx->pc = 0x3894F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894F4u;
        // 0x3894f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894FCu;
        goto label_3894fc;
    }
    ctx->pc = 0x3894F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3894FCu);
        ctx->pc = 0x3894F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894F4u;
        // 0x3894f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3894F4u, 0x3894FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3894FCu;
label_3894fc:
    // 0x3894fc: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_389500:
    if (ctx->pc == 0x389500u) {
        ctx->pc = 0x389500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894FCu;
        // 0x389500: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389504u;
        goto label_389504;
    }
    ctx->pc = 0x3894FCu;
    {
        const bool branch_taken_0x3894fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x389500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894FCu;
        // 0x389500: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894fc) {
            ctx->pc = 0x389514u;
            goto label_389514;
        }
    }
    ctx->pc = 0x389504u;
label_389504:
    // 0x389504: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x389504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_389508:
    // 0x389508: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x389508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_38950c:
    // 0x38950c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x38950cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_389510:
    // 0x389510: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_389514:
    // 0x389514: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x389514u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_389518:
    // 0x389518: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x389518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_38951c:
    // 0x38951c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_389520:
    if (ctx->pc == 0x389520u) {
        ctx->pc = 0x389520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38951Cu;
        // 0x389520: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389524u;
        goto label_389524;
    }
    ctx->pc = 0x38951Cu;
    {
        const bool branch_taken_0x38951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38951Cu;
        // 0x389520: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38951c) {
            ctx->pc = 0x389530u;
            goto label_389530;
        }
    }
    ctx->pc = 0x389524u;
label_389524:
    // 0x389524: 0xc0e2552  jal         func_389548
label_389528:
    if (ctx->pc == 0x389528u) {
        ctx->pc = 0x389528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389524u;
        // 0x389528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38952Cu;
        goto label_38952c;
    }
    ctx->pc = 0x389524u;
    SET_GPR_U32(ctx, 31, 0x38952Cu);
    ctx->pc = 0x389528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389524u;
    // 0x389528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x389524u, 0x38952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38952Cu;
label_38952c:
    // 0x38952c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38952cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389530:
    // 0x389530: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x389530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_389534:
    // 0x389534: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x389534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_389538:
    // 0x389538: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x389538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38953c:
    // 0x38953c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38953cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389540:
    // 0x389540: 0x3e00008  jr          $ra
label_389544:
    if (ctx->pc == 0x389544u) {
        ctx->pc = 0x389544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389540u;
        // 0x389544: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389548u;
        goto label_fallthrough_0x389540;
    }
    ctx->pc = 0x389540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389540u;
        // 0x389544: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389540:
    ctx->pc = 0x389548u;
}
