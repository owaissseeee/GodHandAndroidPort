#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: formatComplete__7cMcSave
// Address: 0x7c4ff0 - 0x7c51a0
void formatComplete__7cMcSave_0x7c4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("formatComplete__7cMcSave_0x7c4ff0");
#endif

    switch (ctx->pc) {
        case 0x7c5038u: goto label_7c5038;
        case 0x7c505cu: goto label_7c505c;
        case 0x7c506cu: goto label_7c506c;
        case 0x7c5098u: goto label_7c5098;
        case 0x7c50b4u: goto label_7c50b4;
        case 0x7c50dcu: goto label_7c50dc;
        case 0x7c5108u: goto label_7c5108;
        case 0x7c5178u: goto label_7c5178;
        default: break;
    }

    ctx->pc = 0x7c4ff0u;

    // 0x7c4ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c4ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c4ff4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c4ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c4ff8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c4ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c4ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c5000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c5004: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c5004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c5008: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x7c5008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c500c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x7C500Cu;
    {
        const bool branch_taken_0x7c500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C500Cu;
        // 0x7c5010: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c500c) {
            ctx->pc = 0x7C5130u;
            goto label_7c5130;
        }
    }
    ctx->pc = 0x7C5014u;
    // 0x7c5014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c5014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c5018: 0x24420c20  addiu       $v0, $v0, 0xC20
    ctx->pc = 0x7c5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3104));
    // 0x7c501c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c501cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c5020: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c5020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c5024: 0x800008  jr          $a0
    ctx->pc = 0x7C5024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5024u;
        // 0x7c5028: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C502Cu: goto label_7c502c;
            case 0x7C504Cu: goto label_7c504c;
            case 0x7C508Cu: goto label_7c508c;
            case 0x7C50CCu: goto label_7c50cc;
            case 0x7C50F8u: goto label_7c50f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5024u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C502Cu;
label_7c502c:
    // 0x7c502c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5030: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C5030u;
    SET_GPR_U32(ctx, 31, 0x7C5038u);
    ctx->pc = 0x7C5034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5030u;
    // 0x7c5034: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C5030u, 0x7C5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5038u;
label_7c5038:
    // 0x7c5038: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x7c5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x7c503c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5040: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c5040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c5044: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x7c5044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
    // 0x7c5048: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x7c5048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_7c504c:
    // 0x7c504c: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c504cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c5050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c5050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5054: 0xc1f0e34  jal         func_7C38D0
    ctx->pc = 0x7C5054u;
    SET_GPR_U32(ctx, 31, 0x7C505Cu);
    ctx->pc = 0x7C5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5054u;
    // 0x7c5058: 0x26041740  addiu       $a0, $s0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C38D0u, 0x7C5054u, 0x7C505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C505Cu;
label_7c505c:
    // 0x7c505c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c505cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5060: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c5060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c5064: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5064u;
    SET_GPR_U32(ctx, 31, 0x7C506Cu);
    ctx->pc = 0x7C5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5064u;
    // 0x7c5068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5064u, 0x7C506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C506Cu;
label_7c506c:
    // 0x7c506c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C506Cu;
    {
        const bool branch_taken_0x7c506c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C5070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C506Cu;
        // 0x7c5070: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c506c) {
            ctx->pc = 0x7C5088u;
            goto label_7c5088;
        }
    }
    ctx->pc = 0x7C5074u;
    // 0x7c5074: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c5074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c5078: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c507c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c507cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5080: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x7C5080u;
    {
        const bool branch_taken_0x7c5080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5080u;
        // 0x7c5084: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5080) {
            ctx->pc = 0x7C5188u;
            goto label_7c5188;
        }
    }
    ctx->pc = 0x7C5088u;
label_7c5088:
    // 0x7c5088: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c5088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c508c:
    // 0x7c508c: 0x26041740  addiu       $a0, $s0, 0x1740
    ctx->pc = 0x7c508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c5090: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5090u;
    SET_GPR_U32(ctx, 31, 0x7C5098u);
    ctx->pc = 0x7C5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5090u;
    // 0x7c5094: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5090u, 0x7C5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5098u;
label_7c5098:
    // 0x7c5098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c509c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c50a0: 0x16020024  bne         $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x7C50A0u;
    {
        const bool branch_taken_0x7c50a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C50A0u;
        // 0x7c50a4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c50a0) {
            ctx->pc = 0x7C5134u;
            goto label_7c5134;
        }
    }
    ctx->pc = 0x7C50A8u;
    // 0x7c50a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c50a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c50ac: 0xc1f1b8e  jal         func_7C6E38
    ctx->pc = 0x7C50ACu;
    SET_GPR_U32(ctx, 31, 0x7C50B4u);
    ctx->pc = 0x7C50B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C50ACu;
    // 0x7c50b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E38u, 0x7C50ACu, 0x7C50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C50B4u;
label_7c50b4:
    // 0x7c50b4: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C50B4u;
    {
        const bool branch_taken_0x7c50b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x7c50b4) {
            ctx->pc = 0x7C50B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C50B4u;
            // 0x7c50b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C50C4u;
            goto label_7c50c4;
        }
    }
    ctx->pc = 0x7C50BCu;
    // 0x7c50bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7C50BCu;
    {
        const bool branch_taken_0x7c50bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C50BCu;
        // 0x7c50c0: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c50bc) {
            ctx->pc = 0x7C5130u;
            goto label_7c5130;
        }
    }
    ctx->pc = 0x7C50C4u;
label_7c50c4:
    // 0x7c50c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x7C50C4u;
    {
        const bool branch_taken_0x7c50c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C50C4u;
        // 0x7c50c8: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c50c4) {
            ctx->pc = 0x7C5188u;
            goto label_7c5188;
        }
    }
    ctx->pc = 0x7C50CCu;
label_7c50cc:
    // 0x7c50cc: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c50ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c50d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c50d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c50d4: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C50D4u;
    SET_GPR_U32(ctx, 31, 0x7C50DCu);
    ctx->pc = 0x7C50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C50D4u;
    // 0x7c50d8: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C50D4u, 0x7C50DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C50DCu;
label_7c50dc:
    // 0x7c50dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c50e0: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x7C50E0u;
    {
        const bool branch_taken_0x7c50e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C50E0u;
        // 0x7c50e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c50e0) {
            ctx->pc = 0x7C518Cu;
            goto label_7c518c;
        }
    }
    ctx->pc = 0x7C50E8u;
    // 0x7c50e8: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c50e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c50ec: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c50f0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7C50F0u;
    {
        const bool branch_taken_0x7c50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C50F0u;
        // 0x7c50f4: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c50f0) {
            ctx->pc = 0x7C518Cu;
            goto label_7c518c;
        }
    }
    ctx->pc = 0x7C50F8u;
label_7c50f8:
    // 0x7c50f8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c50fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c50fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5100: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5100u;
    SET_GPR_U32(ctx, 31, 0x7C5108u);
    ctx->pc = 0x7C5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5100u;
    // 0x7c5104: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5100u, 0x7C5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5108u;
label_7c5108:
    // 0x7c5108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c5108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c510c: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x7C510Cu;
    {
        const bool branch_taken_0x7c510c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C510Cu;
        // 0x7c5110: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c510c) {
            ctx->pc = 0x7C518Cu;
            goto label_7c518c;
        }
    }
    ctx->pc = 0x7C5114u;
    // 0x7c5114: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c5114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7c5118: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x7c5118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x7c511c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c511cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5120: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c5120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c5124: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c5128: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7C5128u;
    {
        const bool branch_taken_0x7c5128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5128u;
        // 0x7c512c: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5128) {
            ctx->pc = 0x7C518Cu;
            goto label_7c518c;
        }
    }
    ctx->pc = 0x7C5130u;
label_7c5130:
    // 0x7c5130: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c5130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_7c5134:
    // 0x7c5134: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x7c5134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x7c5138: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x7c5138u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x7c513c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c5140: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C5140u;
    {
        const bool branch_taken_0x7c5140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5140u;
        // 0x7c5144: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5140) {
            ctx->pc = 0x7C5158u;
            goto label_7c5158;
        }
    }
    ctx->pc = 0x7C5148u;
    // 0x7c5148: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x7c5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x7c514c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C514Cu;
    {
        const bool branch_taken_0x7c514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C514Cu;
        // 0x7c5150: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c514c) {
            ctx->pc = 0x7C5184u;
            goto label_7c5184;
        }
    }
    ctx->pc = 0x7C5154u;
    // 0x7c5154: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7c5154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_7c5158:
    // 0x7c5158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c5158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c515c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5160: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c5160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c5164: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c5164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5168: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c5168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c516c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c516cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5170: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C5170u;
    SET_GPR_U32(ctx, 31, 0x7C5178u);
    ctx->pc = 0x7C5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5170u;
    // 0x7c5174: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C5170u, 0x7C5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5178u;
label_7c5178:
    // 0x7c5178: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7c5178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c517c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C517Cu;
    {
        const bool branch_taken_0x7c517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C517Cu;
        // 0x7c5180: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c517c) {
            ctx->pc = 0x7C5188u;
            goto label_7c5188;
        }
    }
    ctx->pc = 0x7C5184u;
label_7c5184:
    // 0x7c5184: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x7c5184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_7c5188:
    // 0x7c5188: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c5188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c518c:
    // 0x7c518c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c518cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c5190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c5190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c5194: 0x3e00008  jr          $ra
    ctx->pc = 0x7C5194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C5198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5194u;
        // 0x7c5198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C519Cu;
    // 0x7c519c: 0x0  nop
    ctx->pc = 0x7c519cu;
    // NOP
    ctx->pc = 0x7c51a0u;
}
} // namespace gh_mcport
