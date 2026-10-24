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

// Function: func_0030FCC0
// Address: 0x30fcc0 - 0x30fe68
void func_0030FCC0_0x30fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030FCC0_0x30fcc0");
#endif

    switch (ctx->pc) {
        case 0x30fd84u: goto label_30fd84;
        case 0x30fe30u: goto label_30fe30;
        case 0x30fe3cu: goto label_30fe3c;
        default: break;
    }

    ctx->pc = 0x30fcc0u;

    // 0x30fcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30fcc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30fcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30fcc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30fccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30fcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30fcd4: 0x960202fe  lhu         $v0, 0x2FE($s0)
    ctx->pc = 0x30fcd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x30fcd8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x30FCD8u;
    {
        const bool branch_taken_0x30fcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCD8u;
        // 0x30fcdc: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcd8) {
            ctx->pc = 0x30FD8Cu;
            goto label_30fd8c;
        }
    }
    ctx->pc = 0x30FCE0u;
    // 0x30fce0: 0x8c454c30  lw          $a1, 0x4C30($v0)
    ctx->pc = 0x30fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
    // 0x30fce4: 0x24464c30  addiu       $a2, $v0, 0x4C30
    ctx->pc = 0x30fce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
    // 0x30fce8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FCE8u;
    {
        const bool branch_taken_0x30fce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCE8u;
        // 0x30fcec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fce8) {
            ctx->pc = 0x30FD04u;
            goto label_30fd04;
        }
    }
    ctx->pc = 0x30FCF0u;
    // 0x30fcf0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x30fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30fcf4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x30fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30fcf8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fcfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FCFCu;
    {
        const bool branch_taken_0x30fcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCFCu;
        // 0x30fd00: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcfc) {
            ctx->pc = 0x30FD08u;
            goto label_30fd08;
        }
    }
    ctx->pc = 0x30FD04u;
label_30fd04:
    // 0x30fd04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30fd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fd08:
    // 0x30fd08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30fd0c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FD0Cu;
    {
        const bool branch_taken_0x30fd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd0c) {
            ctx->pc = 0x30FD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FD0Cu;
            // 0x30fd10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FD24u;
            goto label_30fd24;
        }
    }
    ctx->pc = 0x30FD14u;
    // 0x30fd14: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fd18: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fd1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fd20: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fd24:
    // 0x30fd24: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30fd24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fd28: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x30FD28u;
    {
        const bool branch_taken_0x30fd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD28u;
        // 0x30fd2c: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd28) {
            ctx->pc = 0x30FE44u;
            goto label_30fe44;
        }
    }
    ctx->pc = 0x30FD30u;
    // 0x30fd30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30fd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fd34: 0x24464c38  addiu       $a2, $v0, 0x4C38
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x30fd38: 0x8c424c38  lw          $v0, 0x4C38($v0)
    ctx->pc = 0x30fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19512)));
    // 0x30fd3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FD3Cu;
    {
        const bool branch_taken_0x30fd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD3Cu;
        // 0x30fd40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd3c) {
            ctx->pc = 0x30FD54u;
            goto label_30fd54;
        }
    }
    ctx->pc = 0x30FD44u;
    // 0x30fd44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x30fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30fd48: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x30fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30fd4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fd50: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x30fd50u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_30fd54:
    // 0x30fd54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30fd58: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FD58u;
    {
        const bool branch_taken_0x30fd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fd58) {
            ctx->pc = 0x30FD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FD58u;
            // 0x30fd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FD70u;
            goto label_30fd70;
        }
    }
    ctx->pc = 0x30FD60u;
    // 0x30fd60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fd64: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fd68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fd6c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fd6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fd70:
    // 0x30fd70: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30fd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fd74: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x30FD74u;
    {
        const bool branch_taken_0x30fd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD74u;
        // 0x30fd78: 0x24844c30  addiu       $a0, $a0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd74) {
            ctx->pc = 0x30FE44u;
            goto label_30fe44;
        }
    }
    ctx->pc = 0x30FD7Cu;
    // 0x30fd7c: 0xc0c4a74  jal         func_3129D0
    ctx->pc = 0x30FD7Cu;
    SET_GPR_U32(ctx, 31, 0x30FD84u);
    ctx->pc = 0x30FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FD7Cu;
    // 0x30fd80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3129D0u, 0x30FD7Cu, 0x30FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD84u;
label_30fd84:
    // 0x30fd84: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30FD84u;
    {
        const bool branch_taken_0x30fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD84u;
        // 0x30fd88: 0x26244c38  addiu       $a0, $s1, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd84) {
            ctx->pc = 0x30FE34u;
            goto label_30fe34;
        }
    }
    ctx->pc = 0x30FD8Cu;
label_30fd8c:
    // 0x30fd8c: 0x8c454c30  lw          $a1, 0x4C30($v0)
    ctx->pc = 0x30fd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
    // 0x30fd90: 0x24464c30  addiu       $a2, $v0, 0x4C30
    ctx->pc = 0x30fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
    // 0x30fd94: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FD94u;
    {
        const bool branch_taken_0x30fd94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FD94u;
        // 0x30fd98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fd94) {
            ctx->pc = 0x30FDB0u;
            goto label_30fdb0;
        }
    }
    ctx->pc = 0x30FD9Cu;
    // 0x30fd9c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x30fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30fda0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x30fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x30fda4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fda8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FDA8u;
    {
        const bool branch_taken_0x30fda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDA8u;
        // 0x30fdac: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fda8) {
            ctx->pc = 0x30FDB4u;
            goto label_30fdb4;
        }
    }
    ctx->pc = 0x30FDB0u;
label_30fdb0:
    // 0x30fdb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30fdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fdb4:
    // 0x30fdb4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30fdb8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FDB8u;
    {
        const bool branch_taken_0x30fdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fdb8) {
            ctx->pc = 0x30FDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FDB8u;
            // 0x30fdbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FDD0u;
            goto label_30fdd0;
        }
    }
    ctx->pc = 0x30FDC0u;
    // 0x30fdc0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fdc4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fdc8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fdcc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fdccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fdd0:
    // 0x30fdd0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30fdd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fdd4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30FDD4u;
    {
        const bool branch_taken_0x30fdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDD4u;
        // 0x30fdd8: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fdd4) {
            ctx->pc = 0x30FE44u;
            goto label_30fe44;
        }
    }
    ctx->pc = 0x30FDDCu;
    // 0x30fddc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30fddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fde0: 0x24464c58  addiu       $a2, $v0, 0x4C58
    ctx->pc = 0x30fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x30fde4: 0x8c424c58  lw          $v0, 0x4C58($v0)
    ctx->pc = 0x30fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19544)));
    // 0x30fde8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FDE8u;
    {
        const bool branch_taken_0x30fde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDE8u;
        // 0x30fdec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fde8) {
            ctx->pc = 0x30FE00u;
            goto label_30fe00;
        }
    }
    ctx->pc = 0x30FDF0u;
    // 0x30fdf0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x30fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30fdf4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x30fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30fdf8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fdfc: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x30fdfcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_30fe00:
    // 0x30fe00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30fe04: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FE04u;
    {
        const bool branch_taken_0x30fe04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fe04) {
            ctx->pc = 0x30FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FE04u;
            // 0x30fe08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FE1Cu;
            goto label_30fe1c;
        }
    }
    ctx->pc = 0x30FE0Cu;
    // 0x30fe0c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fe10: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fe14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fe18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fe18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fe1c:
    // 0x30fe1c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30fe1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fe20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30FE20u;
    {
        const bool branch_taken_0x30fe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE20u;
        // 0x30fe24: 0x24844c30  addiu       $a0, $a0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe20) {
            ctx->pc = 0x30FE44u;
            goto label_30fe44;
        }
    }
    ctx->pc = 0x30FE28u;
    // 0x30fe28: 0xc0c4a74  jal         func_3129D0
    ctx->pc = 0x30FE28u;
    SET_GPR_U32(ctx, 31, 0x30FE30u);
    ctx->pc = 0x30FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FE28u;
    // 0x30fe2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3129D0u, 0x30FE28u, 0x30FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FE30u;
label_30fe30:
    // 0x30fe30: 0x26244c58  addiu       $a0, $s1, 0x4C58
    ctx->pc = 0x30fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
label_30fe34:
    // 0x30fe34: 0xc0c4a74  jal         func_3129D0
    ctx->pc = 0x30FE34u;
    SET_GPR_U32(ctx, 31, 0x30FE3Cu);
    ctx->pc = 0x30FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FE34u;
    // 0x30fe38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3129D0u, 0x30FE34u, 0x30FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FE3Cu;
label_30fe3c:
    // 0x30fe3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FE3Cu;
    {
        const bool branch_taken_0x30fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE3Cu;
        // 0x30fe40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe3c) {
            ctx->pc = 0x30FE48u;
            goto label_30fe48;
        }
    }
    ctx->pc = 0x30FE44u;
label_30fe44:
    // 0x30fe44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fe44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fe48:
    // 0x30fe48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30fe48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fe4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30fe4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fe50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fe54: 0x3e00008  jr          $ra
    ctx->pc = 0x30FE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE54u;
        // 0x30fe58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FE5Cu;
    // 0x30fe5c: 0x0  nop
    ctx->pc = 0x30fe5cu;
    // NOP
    // 0x30fe60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30fe64: 0x0  nop
    ctx->pc = 0x30fe64u;
    // NOP
    ctx->pc = 0x30fe68u;
}
