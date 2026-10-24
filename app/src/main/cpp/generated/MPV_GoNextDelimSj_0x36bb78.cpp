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

// Function: MPV_GoNextDelimSj
// Address: 0x36bb78 - 0x36bcd0
void MPV_GoNextDelimSj_0x36bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPV_GoNextDelimSj_0x36bb78");
#endif

    switch (ctx->pc) {
        case 0x36bb78u: goto label_36bb78;
        case 0x36bb7cu: goto label_36bb7c;
        case 0x36bb80u: goto label_36bb80;
        case 0x36bb84u: goto label_36bb84;
        case 0x36bb88u: goto label_36bb88;
        case 0x36bb8cu: goto label_36bb8c;
        case 0x36bb90u: goto label_36bb90;
        case 0x36bb94u: goto label_36bb94;
        case 0x36bb98u: goto label_36bb98;
        case 0x36bb9cu: goto label_36bb9c;
        case 0x36bba0u: goto label_36bba0;
        case 0x36bba4u: goto label_36bba4;
        case 0x36bba8u: goto label_36bba8;
        case 0x36bbacu: goto label_36bbac;
        case 0x36bbb0u: goto label_36bbb0;
        case 0x36bbb4u: goto label_36bbb4;
        case 0x36bbb8u: goto label_36bbb8;
        case 0x36bbbcu: goto label_36bbbc;
        case 0x36bbc0u: goto label_36bbc0;
        case 0x36bbc4u: goto label_36bbc4;
        case 0x36bbc8u: goto label_36bbc8;
        case 0x36bbccu: goto label_36bbcc;
        case 0x36bbd0u: goto label_36bbd0;
        case 0x36bbd4u: goto label_36bbd4;
        case 0x36bbd8u: goto label_36bbd8;
        case 0x36bbdcu: goto label_36bbdc;
        case 0x36bbe0u: goto label_36bbe0;
        case 0x36bbe4u: goto label_36bbe4;
        case 0x36bbe8u: goto label_36bbe8;
        case 0x36bbecu: goto label_36bbec;
        case 0x36bbf0u: goto label_36bbf0;
        case 0x36bbf4u: goto label_36bbf4;
        case 0x36bbf8u: goto label_36bbf8;
        case 0x36bbfcu: goto label_36bbfc;
        case 0x36bc00u: goto label_36bc00;
        case 0x36bc04u: goto label_36bc04;
        case 0x36bc08u: goto label_36bc08;
        case 0x36bc0cu: goto label_36bc0c;
        case 0x36bc10u: goto label_36bc10;
        case 0x36bc14u: goto label_36bc14;
        case 0x36bc18u: goto label_36bc18;
        case 0x36bc1cu: goto label_36bc1c;
        case 0x36bc20u: goto label_36bc20;
        case 0x36bc24u: goto label_36bc24;
        case 0x36bc28u: goto label_36bc28;
        case 0x36bc2cu: goto label_36bc2c;
        case 0x36bc30u: goto label_36bc30;
        case 0x36bc34u: goto label_36bc34;
        case 0x36bc38u: goto label_36bc38;
        case 0x36bc3cu: goto label_36bc3c;
        case 0x36bc40u: goto label_36bc40;
        case 0x36bc44u: goto label_36bc44;
        case 0x36bc48u: goto label_36bc48;
        case 0x36bc4cu: goto label_36bc4c;
        case 0x36bc50u: goto label_36bc50;
        case 0x36bc54u: goto label_36bc54;
        case 0x36bc58u: goto label_36bc58;
        case 0x36bc5cu: goto label_36bc5c;
        case 0x36bc60u: goto label_36bc60;
        case 0x36bc64u: goto label_36bc64;
        case 0x36bc68u: goto label_36bc68;
        case 0x36bc6cu: goto label_36bc6c;
        case 0x36bc70u: goto label_36bc70;
        case 0x36bc74u: goto label_36bc74;
        case 0x36bc78u: goto label_36bc78;
        case 0x36bc7cu: goto label_36bc7c;
        case 0x36bc80u: goto label_36bc80;
        case 0x36bc84u: goto label_36bc84;
        case 0x36bc88u: goto label_36bc88;
        case 0x36bc8cu: goto label_36bc8c;
        case 0x36bc90u: goto label_36bc90;
        case 0x36bc94u: goto label_36bc94;
        case 0x36bc98u: goto label_36bc98;
        case 0x36bc9cu: goto label_36bc9c;
        case 0x36bca0u: goto label_36bca0;
        case 0x36bca4u: goto label_36bca4;
        case 0x36bca8u: goto label_36bca8;
        case 0x36bcacu: goto label_36bcac;
        case 0x36bcb0u: goto label_36bcb0;
        case 0x36bcb4u: goto label_36bcb4;
        case 0x36bcb8u: goto label_36bcb8;
        case 0x36bcbcu: goto label_36bcbc;
        case 0x36bcc0u: goto label_36bcc0;
        case 0x36bcc4u: goto label_36bcc4;
        case 0x36bcc8u: goto label_36bcc8;
        case 0x36bcccu: goto label_36bccc;
        default: break;
    }

    ctx->pc = 0x36bb78u;

label_36bb78:
    // 0x36bb78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_36bb7c:
    // 0x36bb7c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_36bb80:
    // 0x36bb80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36bb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36bb84:
    // 0x36bb84: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x36bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_36bb88:
    // 0x36bb88: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x36bb88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_36bb8c:
    // 0x36bb8c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x36bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_36bb90:
    // 0x36bb90: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x36bb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_36bb94:
    // 0x36bb94: 0x10000032  b           . + 4 + (0x32 << 2)
label_36bb98:
    if (ctx->pc == 0x36BB98u) {
        ctx->pc = 0x36BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB94u;
        // 0x36bb98: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BB9Cu;
        goto label_36bb9c;
    }
    ctx->pc = 0x36BB94u;
    {
        const bool branch_taken_0x36bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB94u;
        // 0x36bb98: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb94) {
            ctx->pc = 0x36BC60u;
            goto label_36bc60;
        }
    }
    ctx->pc = 0x36BB9Cu;
label_36bb9c:
    // 0x36bb9c: 0x0  nop
    ctx->pc = 0x36bb9cu;
    // NOP
label_36bba0:
    // 0x36bba0: 0xc0da4dc  jal         func_369370
label_36bba4:
    if (ctx->pc == 0x36BBA4u) {
        ctx->pc = 0x36BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBA0u;
        // 0x36bba4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBA8u;
        goto label_36bba8;
    }
    ctx->pc = 0x36BBA0u;
    SET_GPR_U32(ctx, 31, 0x36BBA8u);
    ctx->pc = 0x36BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BBA0u;
    // 0x36bba4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x36BBA0u, 0x36BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BBA8u;
label_36bba8:
    // 0x36bba8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36bba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36bbac:
    // 0x36bbac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36bbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bbb0:
    // 0x36bbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36bbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36bbb4:
    // 0x36bbb4: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
label_36bbb8:
    if (ctx->pc == 0x36BBB8u) {
        ctx->pc = 0x36BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBB4u;
        // 0x36bbb8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBBCu;
        goto label_36bbbc;
    }
    ctx->pc = 0x36BBB4u;
    {
        const bool branch_taken_0x36bbb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBB4u;
        // 0x36bbb8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bbb4) {
            ctx->pc = 0x36BC00u;
            goto label_36bc00;
        }
    }
    ctx->pc = 0x36BBBCu;
label_36bbbc:
    // 0x36bbbc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x36bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36bbc0:
    // 0x36bbc0: 0xc0ceb28  jal         func_33ACA0
label_36bbc4:
    if (ctx->pc == 0x36BBC4u) {
        ctx->pc = 0x36BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBC0u;
        // 0x36bbc4: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBC8u;
        goto label_36bbc8;
    }
    ctx->pc = 0x36BBC0u;
    SET_GPR_U32(ctx, 31, 0x36BBC8u);
    ctx->pc = 0x36BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BBC0u;
    // 0x36bbc4: 0x24a5fffd  addiu       $a1, $a1, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36BBC0u, 0x36BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BBC8u;
label_36bbc8:
    // 0x36bbc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bbcc:
    // 0x36bbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bbd0:
    // 0x36bbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36bbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bbd4:
    // 0x36bbd4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36bbd8:
    // 0x36bbd8: 0x40f809  jalr        $v0
label_36bbdc:
    if (ctx->pc == 0x36BBDCu) {
        ctx->pc = 0x36BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBD8u;
        // 0x36bbdc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBE0u;
        goto label_36bbe0;
    }
    ctx->pc = 0x36BBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BBE0u);
        ctx->pc = 0x36BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBD8u;
        // 0x36bbdc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BBD8u, 0x36BBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BBE0u;
label_36bbe0:
    // 0x36bbe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bbe4:
    // 0x36bbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bbe8:
    // 0x36bbe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36bbec:
    // 0x36bbec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36bbf0:
    // 0x36bbf0: 0x40f809  jalr        $v0
label_36bbf4:
    if (ctx->pc == 0x36BBF4u) {
        ctx->pc = 0x36BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF0u;
        // 0x36bbf4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBF8u;
        goto label_36bbf8;
    }
    ctx->pc = 0x36BBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BBF8u);
        ctx->pc = 0x36BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF0u;
        // 0x36bbf4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BBF0u, 0x36BBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BBF8u;
label_36bbf8:
    // 0x36bbf8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_36bbfc:
    if (ctx->pc == 0x36BBFCu) {
        ctx->pc = 0x36BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF8u;
        // 0x36bbfc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC00u;
        goto label_36bc00;
    }
    ctx->pc = 0x36BBF8u;
    {
        const bool branch_taken_0x36bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF8u;
        // 0x36bbfc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bbf8) {
            ctx->pc = 0x36BC64u;
            goto label_36bc64;
        }
    }
    ctx->pc = 0x36BC00u;
label_36bc00:
    // 0x36bc00: 0xc0da476  jal         func_3691D8
label_36bc04:
    if (ctx->pc == 0x36BC04u) {
        ctx->pc = 0x36BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC00u;
        // 0x36bc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC08u;
        goto label_36bc08;
    }
    ctx->pc = 0x36BC00u;
    SET_GPR_U32(ctx, 31, 0x36BC08u);
    ctx->pc = 0x36BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC00u;
    // 0x36bc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x36BC00u, 0x36BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC08u;
label_36bc08:
    // 0x36bc08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36bc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36bc0c:
    // 0x36bc0c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x36bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36bc10:
    // 0x36bc10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36bc14:
    // 0x36bc14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36bc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36bc18:
    // 0x36bc18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36bc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bc1c:
    // 0x36bc1c: 0xc0ceb28  jal         func_33ACA0
label_36bc20:
    if (ctx->pc == 0x36BC20u) {
        ctx->pc = 0x36BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC1Cu;
        // 0x36bc20: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC24u;
        goto label_36bc24;
    }
    ctx->pc = 0x36BC1Cu;
    SET_GPR_U32(ctx, 31, 0x36BC24u);
    ctx->pc = 0x36BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC1Cu;
    // 0x36bc20: 0x2252823  subu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36BC1Cu, 0x36BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC24u;
label_36bc24:
    // 0x36bc24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bc28:
    // 0x36bc28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bc2c:
    // 0x36bc2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36bc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bc30:
    // 0x36bc30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36bc34:
    // 0x36bc34: 0x40f809  jalr        $v0
label_36bc38:
    if (ctx->pc == 0x36BC38u) {
        ctx->pc = 0x36BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC34u;
        // 0x36bc38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC3Cu;
        goto label_36bc3c;
    }
    ctx->pc = 0x36BC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BC3Cu);
        ctx->pc = 0x36BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC34u;
        // 0x36bc38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BC34u, 0x36BC3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BC3Cu;
label_36bc3c:
    // 0x36bc3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bc40:
    // 0x36bc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bc44:
    // 0x36bc44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36bc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36bc48:
    // 0x36bc48: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36bc4c:
    // 0x36bc4c: 0x40f809  jalr        $v0
label_36bc50:
    if (ctx->pc == 0x36BC50u) {
        ctx->pc = 0x36BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC4Cu;
        // 0x36bc50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC54u;
        goto label_36bc54;
    }
    ctx->pc = 0x36BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BC54u);
        ctx->pc = 0x36BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC4Cu;
        // 0x36bc50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BC4Cu, 0x36BC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BC54u;
label_36bc54:
    // 0x36bc54: 0x10000017  b           . + 4 + (0x17 << 2)
label_36bc58:
    if (ctx->pc == 0x36BC58u) {
        ctx->pc = 0x36BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC54u;
        // 0x36bc58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC5Cu;
        goto label_36bc5c;
    }
    ctx->pc = 0x36BC54u;
    {
        const bool branch_taken_0x36bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC54u;
        // 0x36bc58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc54) {
            ctx->pc = 0x36BCB4u;
            goto label_36bcb4;
        }
    }
    ctx->pc = 0x36BC5Cu;
label_36bc5c:
    // 0x36bc5c: 0x0  nop
    ctx->pc = 0x36bc5cu;
    // NOP
label_36bc60:
    // 0x36bc60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bc64:
    // 0x36bc64: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36bc68:
    // 0x36bc68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36bc6c:
    // 0x36bc6c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x36bc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_36bc70:
    // 0x36bc70: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_36bc74:
    // 0x36bc74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bc78:
    // 0x36bc78: 0x40f809  jalr        $v0
label_36bc7c:
    if (ctx->pc == 0x36BC7Cu) {
        ctx->pc = 0x36BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC78u;
        // 0x36bc7c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC80u;
        goto label_36bc80;
    }
    ctx->pc = 0x36BC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BC80u);
        ctx->pc = 0x36BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC78u;
        // 0x36bc7c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BC78u, 0x36BC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BC80u;
label_36bc80:
    // 0x36bc80: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36bc84:
    // 0x36bc84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bc88:
    // 0x36bc88: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x36bc88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_36bc8c:
    // 0x36bc8c: 0x1040ffc4  beqz        $v0, . + 4 + (-0x3C << 2)
label_36bc90:
    if (ctx->pc == 0x36BC90u) {
        ctx->pc = 0x36BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC8Cu;
        // 0x36bc90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC94u;
        goto label_36bc94;
    }
    ctx->pc = 0x36BC8Cu;
    {
        const bool branch_taken_0x36bc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC8Cu;
        // 0x36bc90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc8c) {
            ctx->pc = 0x36BBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bba0;
        }
    }
    ctx->pc = 0x36BC94u;
label_36bc94:
    // 0x36bc94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36bc98:
    // 0x36bc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bc9c:
    // 0x36bc9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36bca0:
    // 0x36bca0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36bca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36bca4:
    // 0x36bca4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36bca8:
    // 0x36bca8: 0x40f809  jalr        $v0
label_36bcac:
    if (ctx->pc == 0x36BCACu) {
        ctx->pc = 0x36BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCA8u;
        // 0x36bcac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BCB0u;
        goto label_36bcb0;
    }
    ctx->pc = 0x36BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BCB0u);
        ctx->pc = 0x36BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCA8u;
        // 0x36bcac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BCA8u, 0x36BCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BCB0u;
label_36bcb0:
    // 0x36bcb0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x36bcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36bcb4:
    // 0x36bcb4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36bcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36bcb8:
    // 0x36bcb8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x36bcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36bcbc:
    // 0x36bcbc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36bcbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36bcc0:
    // 0x36bcc0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x36bcc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_36bcc4:
    // 0x36bcc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36bcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36bcc8:
    // 0x36bcc8: 0x3e00008  jr          $ra
label_36bccc:
    if (ctx->pc == 0x36BCCCu) {
        ctx->pc = 0x36BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCC8u;
        // 0x36bccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BCD0u;
        goto label_fallthrough_0x36bcc8;
    }
    ctx->pc = 0x36BCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCC8u;
        // 0x36bccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36bcc8:
    ctx->pc = 0x36BCD0u;
}
