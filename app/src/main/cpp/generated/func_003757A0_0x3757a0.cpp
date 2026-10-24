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

// Function: func_003757A0
// Address: 0x3757a0 - 0x375840
void func_003757A0_0x3757a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003757A0_0x3757a0");
#endif

    switch (ctx->pc) {
        case 0x3757a0u: goto label_3757a0;
        case 0x3757a4u: goto label_3757a4;
        case 0x3757a8u: goto label_3757a8;
        case 0x3757acu: goto label_3757ac;
        case 0x3757b0u: goto label_3757b0;
        case 0x3757b4u: goto label_3757b4;
        case 0x3757b8u: goto label_3757b8;
        case 0x3757bcu: goto label_3757bc;
        case 0x3757c0u: goto label_3757c0;
        case 0x3757c4u: goto label_3757c4;
        case 0x3757c8u: goto label_3757c8;
        case 0x3757ccu: goto label_3757cc;
        case 0x3757d0u: goto label_3757d0;
        case 0x3757d4u: goto label_3757d4;
        case 0x3757d8u: goto label_3757d8;
        case 0x3757dcu: goto label_3757dc;
        case 0x3757e0u: goto label_3757e0;
        case 0x3757e4u: goto label_3757e4;
        case 0x3757e8u: goto label_3757e8;
        case 0x3757ecu: goto label_3757ec;
        case 0x3757f0u: goto label_3757f0;
        case 0x3757f4u: goto label_3757f4;
        case 0x3757f8u: goto label_3757f8;
        case 0x3757fcu: goto label_3757fc;
        case 0x375800u: goto label_375800;
        case 0x375804u: goto label_375804;
        case 0x375808u: goto label_375808;
        case 0x37580cu: goto label_37580c;
        case 0x375810u: goto label_375810;
        case 0x375814u: goto label_375814;
        case 0x375818u: goto label_375818;
        case 0x37581cu: goto label_37581c;
        case 0x375820u: goto label_375820;
        case 0x375824u: goto label_375824;
        case 0x375828u: goto label_375828;
        case 0x37582cu: goto label_37582c;
        case 0x375830u: goto label_375830;
        case 0x375834u: goto label_375834;
        case 0x375838u: goto label_375838;
        case 0x37583cu: goto label_37583c;
        default: break;
    }

    ctx->pc = 0x3757a0u;

label_3757a0:
    // 0x3757a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3757a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3757a4:
    // 0x3757a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3757a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3757a8:
    // 0x3757a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3757a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3757ac:
    // 0x3757ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3757acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3757b0:
    // 0x3757b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3757b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3757b4:
    // 0x3757b4: 0x14a2001c  bne         $a1, $v0, . + 4 + (0x1C << 2)
label_3757b8:
    if (ctx->pc == 0x3757B8u) {
        ctx->pc = 0x3757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757B4u;
        // 0x3757b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757BCu;
        goto label_3757bc;
    }
    ctx->pc = 0x3757B4u;
    {
        const bool branch_taken_0x3757b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3757B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757B4u;
        // 0x3757b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757b4) {
            ctx->pc = 0x375828u;
            goto label_375828;
        }
    }
    ctx->pc = 0x3757BCu;
label_3757bc:
    // 0x3757bc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3757c0:
    if (ctx->pc == 0x3757C0u) {
        ctx->pc = 0x3757C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757BCu;
        // 0x3757c0: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757C4u;
        goto label_3757c4;
    }
    ctx->pc = 0x3757BCu;
    {
        const bool branch_taken_0x3757bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3757C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757BCu;
        // 0x3757c0: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757bc) {
            ctx->pc = 0x3757F0u;
            goto label_3757f0;
        }
    }
    ctx->pc = 0x3757C4u;
label_3757c4:
    // 0x3757c4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3757c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3757c8:
    // 0x3757c8: 0x2450a600  addiu       $s0, $v0, -0x5A00
    ctx->pc = 0x3757c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
label_3757cc:
    // 0x3757cc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3757ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3757d0:
    // 0x3757d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3757d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3757d4:
    // 0x3757d4: 0xc0dcb1a  jal         func_372C68
label_3757d8:
    if (ctx->pc == 0x3757D8u) {
        ctx->pc = 0x3757D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757D4u;
        // 0x3757d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757DCu;
        goto label_3757dc;
    }
    ctx->pc = 0x3757D4u;
    SET_GPR_U32(ctx, 31, 0x3757DCu);
    ctx->pc = 0x3757D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3757D4u;
    // 0x3757d8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C68u, 0x3757D4u, 0x3757DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3757DCu;
label_3757dc:
    // 0x3757dc: 0x0  nop
    ctx->pc = 0x3757dcu;
    // NOP
label_3757e0:
    // 0x3757e0: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_3757e4:
    if (ctx->pc == 0x3757E4u) {
        ctx->pc = 0x3757E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757E0u;
        // 0x3757e4: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757E8u;
        goto label_3757e8;
    }
    ctx->pc = 0x3757E0u;
    {
        const bool branch_taken_0x3757e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x3757E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757E0u;
        // 0x3757e4: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757e0) {
            ctx->pc = 0x3757D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3757d0;
        }
    }
    ctx->pc = 0x3757E8u;
label_3757e8:
    // 0x3757e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_3757ec:
    if (ctx->pc == 0x3757ECu) {
        ctx->pc = 0x3757ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757E8u;
        // 0x3757ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757F0u;
        goto label_3757f0;
    }
    ctx->pc = 0x3757E8u;
    {
        const bool branch_taken_0x3757e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3757ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757E8u;
        // 0x3757ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757e8) {
            ctx->pc = 0x37582Cu;
            goto label_37582c;
        }
    }
    ctx->pc = 0x3757F0u;
label_3757f0:
    // 0x3757f0: 0x2442a600  addiu       $v0, $v0, -0x5A00
    ctx->pc = 0x3757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
label_3757f4:
    // 0x3757f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3757f8:
    if (ctx->pc == 0x3757F8u) {
        ctx->pc = 0x3757F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757F4u;
        // 0x3757f8: 0x2450018c  addiu       $s0, $v0, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3757FCu;
        goto label_3757fc;
    }
    ctx->pc = 0x3757F4u;
    {
        const bool branch_taken_0x3757f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3757F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757F4u;
        // 0x3757f8: 0x2450018c  addiu       $s0, $v0, 0x18C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757f4) {
            ctx->pc = 0x375828u;
            goto label_375828;
        }
    }
    ctx->pc = 0x3757FCu;
label_3757fc:
    // 0x3757fc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_375800:
    if (ctx->pc == 0x375800u) {
        ctx->pc = 0x375800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757FCu;
        // 0x375800: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375804u;
        goto label_375804;
    }
    ctx->pc = 0x3757FCu;
    {
        const bool branch_taken_0x3757fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x375800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757FCu;
        // 0x375800: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757fc) {
            ctx->pc = 0x375828u;
            goto label_375828;
        }
    }
    ctx->pc = 0x375804u;
label_375804:
    // 0x375804: 0x2610ff7c  addiu       $s0, $s0, -0x84
    ctx->pc = 0x375804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967164));
label_375808:
    // 0x375808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x375808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37580c:
    // 0x37580c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x37580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_375810:
    // 0x375810: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x375810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_375814:
    // 0x375814: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x375814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_375818:
    // 0x375818: 0x60f809  jalr        $v1
label_37581c:
    if (ctx->pc == 0x37581Cu) {
        ctx->pc = 0x37581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375818u;
        // 0x37581c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375820u;
        goto label_375820;
    }
    ctx->pc = 0x375818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x375820u);
        ctx->pc = 0x37581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375818u;
        // 0x37581c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375818u, 0x375820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x375820u;
label_375820:
    // 0x375820: 0x1611fff9  bne         $s0, $s1, . + 4 + (-0x7 << 2)
label_375824:
    if (ctx->pc == 0x375824u) {
        ctx->pc = 0x375824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375820u;
        // 0x375824: 0x2610ff7c  addiu       $s0, $s0, -0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375828u;
        goto label_375828;
    }
    ctx->pc = 0x375820u;
    {
        const bool branch_taken_0x375820 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x375824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375820u;
        // 0x375824: 0x2610ff7c  addiu       $s0, $s0, -0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375820) {
            ctx->pc = 0x375808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375808;
        }
    }
    ctx->pc = 0x375828u;
label_375828:
    // 0x375828: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x375828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37582c:
    // 0x37582c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37582cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_375830:
    // 0x375830: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x375830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_375834:
    // 0x375834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375838:
    // 0x375838: 0x3e00008  jr          $ra
label_37583c:
    if (ctx->pc == 0x37583Cu) {
        ctx->pc = 0x37583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375838u;
        // 0x37583c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375840u;
        goto label_fallthrough_0x375838;
    }
    ctx->pc = 0x375838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375838u;
        // 0x37583c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x375838:
    ctx->pc = 0x375840u;
}
