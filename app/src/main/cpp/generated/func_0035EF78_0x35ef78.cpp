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

// Function: func_0035EF78
// Address: 0x35ef78 - 0x35f1d0
void func_0035EF78_0x35ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EF78_0x35ef78");
#endif

    switch (ctx->pc) {
        case 0x35efb4u: goto label_35efb4;
        case 0x35f08cu: goto label_35f08c;
        case 0x35f0c4u: goto label_35f0c4;
        case 0x35f100u: goto label_35f100;
        case 0x35f13cu: goto label_35f13c;
        case 0x35f14cu: goto label_35f14c;
        default: break;
    }

    ctx->pc = 0x35ef78u;

    // 0x35ef78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ef7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ef80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ef80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35ef88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35ef88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35ef90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ef94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35ef98: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x35ef98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35ef9c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35EF9Cu;
    {
        const bool branch_taken_0x35ef9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF9Cu;
        // 0x35efa0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef9c) {
            ctx->pc = 0x35EFB8u;
            goto label_35efb8;
        }
    }
    ctx->pc = 0x35EFA4u;
    // 0x35efa4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x35efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x35efa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35efa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35efac: 0xc0d7e0c  jal         func_35F830
    ctx->pc = 0x35EFACu;
    SET_GPR_U32(ctx, 31, 0x35EFB4u);
    ctx->pc = 0x35EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EFACu;
    // 0x35efb0: 0x24a59ed8  addiu       $a1, $a1, -0x6128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F830u, 0x35EFACu, 0x35EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EFB4u;
label_35efb4:
    // 0x35efb4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x35efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_35efb8:
    // 0x35efb8: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x35efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x35efbc: 0x1202005c  beq         $s0, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x35EFBCu;
    {
        const bool branch_taken_0x35efbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFBCu;
        // 0x35efc0: 0x2a020062  slti        $v0, $s0, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efbc) {
            ctx->pc = 0x35F130u;
            goto label_35f130;
        }
    }
    ctx->pc = 0x35EFC4u;
    // 0x35efc4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35EFC4u;
    {
        const bool branch_taken_0x35efc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFC4u;
        // 0x35efc8: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efc4) {
            ctx->pc = 0x35F018u;
            goto label_35f018;
        }
    }
    ctx->pc = 0x35EFCCu;
    // 0x35efcc: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x35efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x35efd0: 0x12020047  beq         $s0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x35EFD0u;
    {
        const bool branch_taken_0x35efd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFD0u;
        // 0x35efd4: 0x2a020032  slti        $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efd0) {
            ctx->pc = 0x35F0F0u;
            goto label_35f0f0;
        }
    }
    ctx->pc = 0x35EFD8u;
    // 0x35efd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35EFD8u;
    {
        const bool branch_taken_0x35efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFD8u;
        // 0x35efdc: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efd8) {
            ctx->pc = 0x35F000u;
            goto label_35f000;
        }
    }
    ctx->pc = 0x35EFE0u;
    // 0x35efe0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x35efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35efe4: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35EFE4u;
    {
        const bool branch_taken_0x35efe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFE4u;
        // 0x35efe8: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efe4) {
            ctx->pc = 0x35F048u;
            goto label_35f048;
        }
    }
    ctx->pc = 0x35EFECu;
    // 0x35efec: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x35EFECu;
    {
        const bool branch_taken_0x35efec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFECu;
        // 0x35eff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35efec) {
            ctx->pc = 0x35F0B8u;
            goto label_35f0b8;
        }
    }
    ctx->pc = 0x35EFF4u;
    // 0x35eff4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x35EFF4u;
    {
        const bool branch_taken_0x35eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EFF4u;
        // 0x35eff8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eff4) {
            ctx->pc = 0x35F1ACu;
            goto label_35f1ac;
        }
    }
    ctx->pc = 0x35EFFCu;
    // 0x35effc: 0x0  nop
    ctx->pc = 0x35effcu;
    // NOP
label_35f000:
    // 0x35f000: 0x1202004b  beq         $s0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x35F000u;
    {
        const bool branch_taken_0x35f000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F000u;
        // 0x35f004: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f000) {
            ctx->pc = 0x35F130u;
            goto label_35f130;
        }
    }
    ctx->pc = 0x35F008u;
    // 0x35f008: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x35F008u;
    {
        const bool branch_taken_0x35f008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F008u;
        // 0x35f00c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f008) {
            ctx->pc = 0x35F130u;
            goto label_35f130;
        }
    }
    ctx->pc = 0x35F010u;
    // 0x35f010: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x35F010u;
    {
        const bool branch_taken_0x35f010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F010u;
        // 0x35f014: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f010) {
            ctx->pc = 0x35F1ACu;
            goto label_35f1ac;
        }
    }
    ctx->pc = 0x35F018u;
label_35f018:
    // 0x35f018: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x35F018u;
    {
        const bool branch_taken_0x35f018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F018u;
        // 0x35f01c: 0x2a020102  slti        $v0, $s0, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f018) {
            ctx->pc = 0x35F178u;
            goto label_35f178;
        }
    }
    ctx->pc = 0x35F020u;
    // 0x35f020: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x35F020u;
    {
        const bool branch_taken_0x35f020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F020u;
        // 0x35f024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f020) {
            ctx->pc = 0x35F1A8u;
            goto label_35f1a8;
        }
    }
    ctx->pc = 0x35F028u;
    // 0x35f028: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x35f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x35f02c: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x35F02Cu;
    {
        const bool branch_taken_0x35f02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F02Cu;
        // 0x35f030: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f02c) {
            ctx->pc = 0x35F1A8u;
            goto label_35f1a8;
        }
    }
    ctx->pc = 0x35F034u;
    // 0x35f034: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35F034u;
    {
        const bool branch_taken_0x35f034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F034u;
        // 0x35f038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f034) {
            ctx->pc = 0x35F084u;
            goto label_35f084;
        }
    }
    ctx->pc = 0x35F03Cu;
    // 0x35f03c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x35F03Cu;
    {
        const bool branch_taken_0x35f03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F03Cu;
        // 0x35f040: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f03c) {
            ctx->pc = 0x35F1B0u;
            goto label_35f1b0;
        }
    }
    ctx->pc = 0x35F044u;
    // 0x35f044: 0x0  nop
    ctx->pc = 0x35f044u;
    // NOP
label_35f048:
    // 0x35f048: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x35f048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x35f04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f050: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35F050u;
    {
        const bool branch_taken_0x35f050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F050u;
        // 0x35f054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f050) {
            ctx->pc = 0x35F080u;
            goto label_35f080;
        }
    }
    ctx->pc = 0x35F058u;
    // 0x35f058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f05c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f064: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f068: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35f070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f078: 0x80d7c74  j           func_35F1D0
    ctx->pc = 0x35F078u;
    ctx->pc = 0x35F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F078u;
    // 0x35f07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x35F078u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F080u;
label_35f080:
    // 0x35f080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f084:
    // 0x35f084: 0xc0d7ae6  jal         func_35EB98
    ctx->pc = 0x35F084u;
    SET_GPR_U32(ctx, 31, 0x35F08Cu);
    ctx->pc = 0x35F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F084u;
    // 0x35f088: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB98u, 0x35F084u, 0x35F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F08Cu;
label_35f08c:
    // 0x35f08c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f090: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f094: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f098: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f09c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f09cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f0a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35f0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f0a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f0ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f0b0: 0x80d7c74  j           func_35F1D0
    ctx->pc = 0x35F0B0u;
    ctx->pc = 0x35F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0B0u;
    // 0x35f0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x35F0B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F0B8u;
label_35f0b8:
    // 0x35f0b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0bc: 0xc0d7ae6  jal         func_35EB98
    ctx->pc = 0x35F0BCu;
    SET_GPR_U32(ctx, 31, 0x35F0C4u);
    ctx->pc = 0x35F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0BCu;
    // 0x35f0c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB98u, 0x35F0BCu, 0x35F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F0C4u;
label_35f0c4:
    // 0x35f0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f0ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f0d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f0d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f0dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f0e4: 0x80d7cf2  j           func_35F3C8
    ctx->pc = 0x35F0E4u;
    ctx->pc = 0x35F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0E4u;
    // 0x35f0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F3C8u, 0x35F0E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F0ECu;
    // 0x35f0ec: 0x0  nop
    ctx->pc = 0x35f0ecu;
    // NOP
label_35f0f0:
    // 0x35f0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f0f8: 0xc0d7ae6  jal         func_35EB98
    ctx->pc = 0x35F0F8u;
    SET_GPR_U32(ctx, 31, 0x35F100u);
    ctx->pc = 0x35F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0F8u;
    // 0x35f0fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB98u, 0x35F0F8u, 0x35F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F100u;
label_35f100:
    // 0x35f100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f104: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f10c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f118: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35f118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f124: 0x80d7c74  j           func_35F1D0
    ctx->pc = 0x35F124u;
    ctx->pc = 0x35F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F124u;
    // 0x35f128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x35F124u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F12Cu;
    // 0x35f12c: 0x0  nop
    ctx->pc = 0x35f12cu;
    // NOP
label_35f130:
    // 0x35f130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f134: 0xc0d7ad8  jal         func_35EB60
    ctx->pc = 0x35F134u;
    SET_GPR_U32(ctx, 31, 0x35F13Cu);
    ctx->pc = 0x35F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F134u;
    // 0x35f138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB60u, 0x35F134u, 0x35F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F13Cu;
label_35f13c:
    // 0x35f13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f140: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f144: 0xc0d7ae6  jal         func_35EB98
    ctx->pc = 0x35F144u;
    SET_GPR_U32(ctx, 31, 0x35F14Cu);
    ctx->pc = 0x35F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F144u;
    // 0x35f148: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB98u, 0x35F144u, 0x35F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F14Cu;
label_35f14c:
    // 0x35f14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f150: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f158: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f15c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f15cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35f164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f16c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f170: 0x80d7c74  j           func_35F1D0
    ctx->pc = 0x35F170u;
    ctx->pc = 0x35F174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F170u;
    // 0x35f174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x35F170u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F178u;
label_35f178:
    // 0x35f178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f188: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f18c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f18cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35f194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f19c: 0x80d7c74  j           func_35F1D0
    ctx->pc = 0x35F19Cu;
    ctx->pc = 0x35F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F19Cu;
    // 0x35f1a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x35F19Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F1A4u;
    // 0x35f1a4: 0x0  nop
    ctx->pc = 0x35f1a4u;
    // NOP
label_35f1a8:
    // 0x35f1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_35f1ac:
    // 0x35f1ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f1b0:
    // 0x35f1b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f1b4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x35f1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x35f1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f1bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f1bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f1c0: 0x24c69ee0  addiu       $a2, $a2, -0x6120
    ctx->pc = 0x35f1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942432));
    // 0x35f1c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f1c8: 0x80d7ef6  j           func_35FBD8
    ctx->pc = 0x35F1C8u;
    ctx->pc = 0x35F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F1C8u;
    // 0x35f1cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x35F1C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F1D0u;
}
