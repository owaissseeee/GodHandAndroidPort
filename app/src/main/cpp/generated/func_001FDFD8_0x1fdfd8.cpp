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

// Function: func_001FDFD8
// Address: 0x1fdfd8 - 0x1fe0e8
void func_001FDFD8_0x1fdfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FDFD8_0x1fdfd8");
#endif

    switch (ctx->pc) {
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe028u: goto label_1fe028;
        case 0x1fe040u: goto label_1fe040;
        case 0x1fe054u: goto label_1fe054;
        case 0x1fe070u: goto label_1fe070;
        case 0x1fe080u: goto label_1fe080;
        case 0x1fe088u: goto label_1fe088;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0b4u: goto label_1fe0b4;
        case 0x1fe0bcu: goto label_1fe0bc;
        default: break;
    }

    ctx->pc = 0x1fdfd8u;

    // 0x1fdfd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fdfdc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1fdfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fdfe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fdfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fdfe4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fdfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fdfe8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fdfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdfec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fdfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fdff0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1fdff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fdff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fdff8: 0x8c622cd0  lw          $v0, 0x2CD0($v1)
    ctx->pc = 0x1fdff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11472)));
    // 0x1fdffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDFFCu;
    {
        const bool branch_taken_0x1fdffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFFCu;
        // 0x1fe000: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdffc) {
            ctx->pc = 0x1FE00Cu;
            goto label_1fe00c;
        }
    }
    ctx->pc = 0x1FE004u;
    // 0x1fe004: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FE004u;
    {
        const bool branch_taken_0x1fe004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE004u;
        // 0x1fe008: 0xac622cd0  sw          $v0, 0x2CD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe004) {
            ctx->pc = 0x1FE0CCu;
            goto label_1fe0cc;
        }
    }
    ctx->pc = 0x1FE00Cu;
label_1fe00c:
    // 0x1fe00c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1fe00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe010: 0x26513c00  addiu       $s1, $s2, 0x3C00
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 15360));
    // 0x1fe014: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x1fe014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
label_1fe018:
    // 0x1fe018: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE018u;
    {
        const bool branch_taken_0x1fe018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe018) {
            ctx->pc = 0x1FE01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE018u;
            // 0x1fe01c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE02Cu;
            goto label_1fe02c;
        }
    }
    ctx->pc = 0x1FE020u;
    // 0x1fe020: 0xc07f3ac  jal         func_1FCEB0
    ctx->pc = 0x1FE020u;
    SET_GPR_U32(ctx, 31, 0x1FE028u);
    ctx->pc = 0x1FE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE020u;
    // 0x1fe024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCEB0u, 0x1FE020u, 0x1FE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE028u;
label_1fe028:
    // 0x1fe028: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1fe028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1fe02c:
    // 0x1fe02c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fe02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fe030: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FE030u;
    {
        const bool branch_taken_0x1fe030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe030) {
            ctx->pc = 0x1FE034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE030u;
            // 0x1fe034: 0x9202004a  lbu         $v0, 0x4A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe018;
        }
    }
    ctx->pc = 0x1FE038u;
    // 0x1fe038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe03c: 0x26503c00  addiu       $s0, $s2, 0x3C00
    ctx->pc = 0x1fe03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15360));
label_1fe040:
    // 0x1fe040: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x1fe040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x1fe044: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE044u;
    {
        const bool branch_taken_0x1fe044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe044) {
            ctx->pc = 0x1FE048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE044u;
            // 0x1fe048: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FE04Cu;
    // 0x1fe04c: 0xc07f512  jal         func_1FD448
    ctx->pc = 0x1FE04Cu;
    SET_GPR_U32(ctx, 31, 0x1FE054u);
    ctx->pc = 0x1FE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE04Cu;
    // 0x1fe050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD448u, 0x1FE04Cu, 0x1FE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE054u;
label_1fe054:
    // 0x1fe054: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fe058:
    // 0x1fe058: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1fe058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fe05c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE05Cu;
    {
        const bool branch_taken_0x1fe05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE05Cu;
        // 0x1fe060: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe05c) {
            ctx->pc = 0x1FE040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe040;
        }
    }
    ctx->pc = 0x1FE064u;
    // 0x1fe064: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1fe064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe068: 0x26513c00  addiu       $s1, $s2, 0x3C00
    ctx->pc = 0x1fe068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 15360));
    // 0x1fe06c: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x1fe06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
label_1fe070:
    // 0x1fe070: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE070u;
    {
        const bool branch_taken_0x1fe070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe070) {
            ctx->pc = 0x1FE074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE070u;
            // 0x1fe074: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE08Cu;
            goto label_1fe08c;
        }
    }
    ctx->pc = 0x1FE078u;
    // 0x1fe078: 0xc07f3c8  jal         func_1FCF20
    ctx->pc = 0x1FE078u;
    SET_GPR_U32(ctx, 31, 0x1FE080u);
    ctx->pc = 0x1FE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE078u;
    // 0x1fe07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCF20u, 0x1FE078u, 0x1FE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE080u;
label_1fe080:
    // 0x1fe080: 0xc07f5dc  jal         func_1FD770
    ctx->pc = 0x1FE080u;
    SET_GPR_U32(ctx, 31, 0x1FE088u);
    ctx->pc = 0x1FE084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE080u;
    // 0x1fe084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD770u, 0x1FE080u, 0x1FE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE088u;
label_1fe088:
    // 0x1fe088: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1fe088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1fe08c:
    // 0x1fe08c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fe08cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fe090: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FE090u;
    {
        const bool branch_taken_0x1fe090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe090) {
            ctx->pc = 0x1FE094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE090u;
            // 0x1fe094: 0x9202004a  lbu         $v0, 0x4A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe070;
        }
    }
    ctx->pc = 0x1FE098u;
    // 0x1fe098: 0x26503c00  addiu       $s0, $s2, 0x3C00
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15360));
    // 0x1fe09c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe0a0:
    // 0x1fe0a0: 0x9202004a  lbu         $v0, 0x4A($s0)
    ctx->pc = 0x1fe0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x1fe0a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE0A4u;
    {
        const bool branch_taken_0x1fe0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0a4) {
            ctx->pc = 0x1FE0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE0A4u;
            // 0x1fe0a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE0C0u;
            goto label_1fe0c0;
        }
    }
    ctx->pc = 0x1FE0ACu;
    // 0x1fe0ac: 0xc07f54a  jal         func_1FD528
    ctx->pc = 0x1FE0ACu;
    SET_GPR_U32(ctx, 31, 0x1FE0B4u);
    ctx->pc = 0x1FE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0ACu;
    // 0x1fe0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD528u, 0x1FE0ACu, 0x1FE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0B4u;
label_1fe0b4:
    // 0x1fe0b4: 0xc07f5dc  jal         func_1FD770
    ctx->pc = 0x1FE0B4u;
    SET_GPR_U32(ctx, 31, 0x1FE0BCu);
    ctx->pc = 0x1FE0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0B4u;
    // 0x1fe0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD770u, 0x1FE0B4u, 0x1FE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0BCu;
label_1fe0bc:
    // 0x1fe0bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fe0c0:
    // 0x1fe0c0: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1fe0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fe0c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FE0C4u;
    {
        const bool branch_taken_0x1fe0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0C4u;
        // 0x1fe0c8: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0c4) {
            ctx->pc = 0x1FE0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe0a0;
        }
    }
    ctx->pc = 0x1FE0CCu;
label_1fe0cc:
    // 0x1fe0cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe0d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe0d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe0d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0DCu;
        // 0x1fe0e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE0E4u;
    // 0x1fe0e4: 0x0  nop
    ctx->pc = 0x1fe0e4u;
    // NOP
    ctx->pc = 0x1fe0e8u;
}
