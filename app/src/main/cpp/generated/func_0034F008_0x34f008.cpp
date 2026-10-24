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

// Function: func_0034F008
// Address: 0x34f008 - 0x34f0e0
void func_0034F008_0x34f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F008_0x34f008");
#endif

    switch (ctx->pc) {
        case 0x34f008u: goto label_34f008;
        case 0x34f00cu: goto label_34f00c;
        case 0x34f010u: goto label_34f010;
        case 0x34f014u: goto label_34f014;
        case 0x34f018u: goto label_34f018;
        case 0x34f01cu: goto label_34f01c;
        case 0x34f020u: goto label_34f020;
        case 0x34f024u: goto label_34f024;
        case 0x34f028u: goto label_34f028;
        case 0x34f02cu: goto label_34f02c;
        case 0x34f030u: goto label_34f030;
        case 0x34f034u: goto label_34f034;
        case 0x34f038u: goto label_34f038;
        case 0x34f03cu: goto label_34f03c;
        case 0x34f040u: goto label_34f040;
        case 0x34f044u: goto label_34f044;
        case 0x34f048u: goto label_34f048;
        case 0x34f04cu: goto label_34f04c;
        case 0x34f050u: goto label_34f050;
        case 0x34f054u: goto label_34f054;
        case 0x34f058u: goto label_34f058;
        case 0x34f05cu: goto label_34f05c;
        case 0x34f060u: goto label_34f060;
        case 0x34f064u: goto label_34f064;
        case 0x34f068u: goto label_34f068;
        case 0x34f06cu: goto label_34f06c;
        case 0x34f070u: goto label_34f070;
        case 0x34f074u: goto label_34f074;
        case 0x34f078u: goto label_34f078;
        case 0x34f07cu: goto label_34f07c;
        case 0x34f080u: goto label_34f080;
        case 0x34f084u: goto label_34f084;
        case 0x34f088u: goto label_34f088;
        case 0x34f08cu: goto label_34f08c;
        case 0x34f090u: goto label_34f090;
        case 0x34f094u: goto label_34f094;
        case 0x34f098u: goto label_34f098;
        case 0x34f09cu: goto label_34f09c;
        case 0x34f0a0u: goto label_34f0a0;
        case 0x34f0a4u: goto label_34f0a4;
        case 0x34f0a8u: goto label_34f0a8;
        case 0x34f0acu: goto label_34f0ac;
        case 0x34f0b0u: goto label_34f0b0;
        case 0x34f0b4u: goto label_34f0b4;
        case 0x34f0b8u: goto label_34f0b8;
        case 0x34f0bcu: goto label_34f0bc;
        case 0x34f0c0u: goto label_34f0c0;
        case 0x34f0c4u: goto label_34f0c4;
        case 0x34f0c8u: goto label_34f0c8;
        case 0x34f0ccu: goto label_34f0cc;
        case 0x34f0d0u: goto label_34f0d0;
        case 0x34f0d4u: goto label_34f0d4;
        case 0x34f0d8u: goto label_34f0d8;
        case 0x34f0dcu: goto label_34f0dc;
        default: break;
    }

    ctx->pc = 0x34f008u;

label_34f008:
    // 0x34f008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34f00c:
    // 0x34f00c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x34f00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_34f010:
    // 0x34f010: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34f014:
    // 0x34f014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34f014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34f018:
    // 0x34f018: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_34f01c:
    // 0x34f01c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x34f01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_34f020:
    // 0x34f020: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_34f024:
    // 0x34f024: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34f024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34f028:
    // 0x34f028: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_34f02c:
    // 0x34f02c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34f02cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34f030:
    // 0x34f030: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_34f034:
    // 0x34f034: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34f034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34f038:
    // 0x34f038: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_34f03c:
    // 0x34f03c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x34f03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f040:
    // 0x34f040: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_34f044:
    // 0x34f044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f048:
    // 0x34f048: 0x8ea31f90  lw          $v1, 0x1F90($s5)
    ctx->pc = 0x34f048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8080)));
label_34f04c:
    // 0x34f04c: 0x1068001b  beq         $v1, $t0, . + 4 + (0x1B << 2)
label_34f050:
    if (ctx->pc == 0x34F050u) {
        ctx->pc = 0x34F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F04Cu;
        // 0x34f050: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F054u;
        goto label_34f054;
    }
    ctx->pc = 0x34F04Cu;
    {
        const bool branch_taken_0x34f04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x34F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F04Cu;
        // 0x34f050: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f04c) {
            ctx->pc = 0x34F0BCu;
            goto label_34f0bc;
        }
    }
    ctx->pc = 0x34F054u;
label_34f054:
    // 0x34f054: 0xc0d3094  jal         func_34C250
label_34f058:
    if (ctx->pc == 0x34F058u) {
        ctx->pc = 0x34F05Cu;
        goto label_34f05c;
    }
    ctx->pc = 0x34F054u;
    SET_GPR_U32(ctx, 31, 0x34F05Cu);
    ctx->pc = 0x34C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C250u, 0x34F054u, 0x34F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F05Cu;
label_34f05c:
    // 0x34f05c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34f05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34f060:
    // 0x34f060: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34f060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34f064:
    // 0x34f064: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34f064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f068:
    // 0x34f068: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x34f068u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34f06c:
    // 0x34f06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f070:
    // 0x34f070: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x34f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34f074:
    // 0x34f074: 0x8fb30008  lw          $s3, 0x8($sp)
    ctx->pc = 0x34f074u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_34f078:
    // 0x34f078: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_34f07c:
    if (ctx->pc == 0x34F07Cu) {
        ctx->pc = 0x34F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F078u;
        // 0x34f07c: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F080u;
        goto label_34f080;
    }
    ctx->pc = 0x34F078u;
    {
        const bool branch_taken_0x34f078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F078u;
        // 0x34f07c: 0x8fb4000c  lw          $s4, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f078) {
            ctx->pc = 0x34F0BCu;
            goto label_34f0bc;
        }
    }
    ctx->pc = 0x34F080u;
label_34f080:
    // 0x34f080: 0xc0d3c38  jal         func_34F0E0
label_34f084:
    if (ctx->pc == 0x34F084u) {
        ctx->pc = 0x34F088u;
        goto label_34f088;
    }
    ctx->pc = 0x34F080u;
    SET_GPR_U32(ctx, 31, 0x34F088u);
    ctx->pc = 0x34F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F0E0u, 0x34F080u, 0x34F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F088u;
label_34f088:
    // 0x34f088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34f088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f08c:
    // 0x34f08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f090:
    // 0x34f090: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
label_34f094:
    if (ctx->pc == 0x34F094u) {
        ctx->pc = 0x34F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F090u;
        // 0x34f094: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F098u;
        goto label_34f098;
    }
    ctx->pc = 0x34F090u;
    {
        const bool branch_taken_0x34f090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f090) {
            ctx->pc = 0x34F094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F090u;
            // 0x34f094: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F0BCu;
            goto label_34f0bc;
        }
    }
    ctx->pc = 0x34F098u;
label_34f098:
    // 0x34f098: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_34f09c:
    if (ctx->pc == 0x34F09Cu) {
        ctx->pc = 0x34F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F098u;
        // 0x34f09c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F0A0u;
        goto label_34f0a0;
    }
    ctx->pc = 0x34F098u;
    {
        const bool branch_taken_0x34f098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F098u;
        // 0x34f09c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f098) {
            ctx->pc = 0x34F0A8u;
            goto label_34f0a8;
        }
    }
    ctx->pc = 0x34F0A0u;
label_34f0a0:
    // 0x34f0a0: 0x240f809  jalr        $s2
label_34f0a4:
    if (ctx->pc == 0x34F0A4u) {
        ctx->pc = 0x34F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0A0u;
        // 0x34f0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F0A8u;
        goto label_34f0a8;
    }
    ctx->pc = 0x34F0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x34F0A8u);
        ctx->pc = 0x34F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0A0u;
        // 0x34f0a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F0A0u, 0x34F0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F0A8u;
label_34f0a8:
    // 0x34f0a8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_34f0ac:
    if (ctx->pc == 0x34F0ACu) {
        ctx->pc = 0x34F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0A8u;
        // 0x34f0ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F0B0u;
        goto label_34f0b0;
    }
    ctx->pc = 0x34F0A8u;
    {
        const bool branch_taken_0x34f0a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0A8u;
        // 0x34f0ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0a8) {
            ctx->pc = 0x34F0B8u;
            goto label_34f0b8;
        }
    }
    ctx->pc = 0x34F0B0u;
label_34f0b0:
    // 0x34f0b0: 0x260f809  jalr        $s3
label_34f0b4:
    if (ctx->pc == 0x34F0B4u) {
        ctx->pc = 0x34F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0B0u;
        // 0x34f0b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F0B8u;
        goto label_34f0b8;
    }
    ctx->pc = 0x34F0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x34F0B8u);
        ctx->pc = 0x34F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0B0u;
        // 0x34f0b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F0B0u, 0x34F0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F0B8u;
label_34f0b8:
    // 0x34f0b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34f0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f0bc:
    // 0x34f0bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34f0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34f0c0:
    // 0x34f0c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34f0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34f0c4:
    // 0x34f0c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34f0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f0c8:
    // 0x34f0c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34f0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34f0cc:
    // 0x34f0cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34f0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34f0d0:
    // 0x34f0d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34f0d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34f0d4:
    // 0x34f0d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34f0d8:
    // 0x34f0d8: 0x3e00008  jr          $ra
label_34f0dc:
    if (ctx->pc == 0x34F0DCu) {
        ctx->pc = 0x34F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0D8u;
        // 0x34f0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34F0E0u;
        goto label_fallthrough_0x34f0d8;
    }
    ctx->pc = 0x34F0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0D8u;
        // 0x34f0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34f0d8:
    ctx->pc = 0x34F0E0u;
}
