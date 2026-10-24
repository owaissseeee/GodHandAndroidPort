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

// Function: func_00331AD8
// Address: 0x331ad8 - 0x331bf0
void func_00331AD8_0x331ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331AD8_0x331ad8");
#endif

    switch (ctx->pc) {
        case 0x331b04u: goto label_331b04;
        case 0x331b34u: goto label_331b34;
        case 0x331b3cu: goto label_331b3c;
        case 0x331b50u: goto label_331b50;
        case 0x331b88u: goto label_331b88;
        case 0x331b90u: goto label_331b90;
        case 0x331ba4u: goto label_331ba4;
        case 0x331bc0u: goto label_331bc0;
        default: break;
    }

    ctx->pc = 0x331ad8u;

    // 0x331ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x331ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x331adc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331ae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x331ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x331ae4: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x331ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
    // 0x331ae8: 0x2664844c  addiu       $a0, $s3, -0x7BB4
    ctx->pc = 0x331ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935628));
    // 0x331aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331af4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331af8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x331af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x331afc: 0xc0cefc6  jal         func_33BF18
    ctx->pc = 0x331AFCu;
    SET_GPR_U32(ctx, 31, 0x331B04u);
    ctx->pc = 0x331B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331AFCu;
    // 0x331b00: 0x24518410  addiu       $s1, $v0, -0x7BF0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF18u, 0x331AFCu, 0x331B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B04u;
label_331b04:
    // 0x331b04: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x331B04u;
    {
        const bool branch_taken_0x331b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B04u;
        // 0x331b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b04) {
            ctx->pc = 0x331BC4u;
            goto label_331bc4;
        }
    }
    ctx->pc = 0x331B0Cu;
    // 0x331b0c: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x331b0cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x331b10: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x331B10u;
    {
        const bool branch_taken_0x331b10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x331B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B10u;
        // 0x331b14: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b10) {
            ctx->pc = 0x331B54u;
            goto label_331b54;
        }
    }
    ctx->pc = 0x331B18u;
    // 0x331b18: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331b1c: 0x24528450  addiu       $s2, $v0, -0x7BB0
    ctx->pc = 0x331b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935632));
    // 0x331b20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x331b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D8450u));
    // 0x331b24: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331B24u;
    {
        const bool branch_taken_0x331b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x331b24) {
            ctx->pc = 0x331B34u;
            goto label_331b34;
        }
    }
    ctx->pc = 0x331B2Cu;
    // 0x331b2c: 0xc0ceda8  jal         func_33B6A0
    ctx->pc = 0x331B2Cu;
    SET_GPR_U32(ctx, 31, 0x331B34u);
    ctx->pc = 0x33B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6A0u, 0x331B2Cu, 0x331B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B34u;
label_331b34:
    // 0x331b34: 0xc0cc5c6  jal         func_331718
    ctx->pc = 0x331B34u;
    SET_GPR_U32(ctx, 31, 0x331B3Cu);
    ctx->pc = 0x331B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B34u;
    // 0x331b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331718u, 0x331B34u, 0x331B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B3Cu;
label_331b3c:
    // 0x331b3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x331b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x331b40: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x331B40u;
    {
        const bool branch_taken_0x331b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x331b40) {
            ctx->pc = 0x331B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331B40u;
            // 0x331b44: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331B54u;
            goto label_331b54;
        }
    }
    ctx->pc = 0x331B48u;
    // 0x331b48: 0xc0cedb4  jal         func_33B6D0
    ctx->pc = 0x331B48u;
    SET_GPR_U32(ctx, 31, 0x331B50u);
    ctx->pc = 0x33B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6D0u, 0x331B48u, 0x331B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B50u;
label_331b50:
    // 0x331b50: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x331b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_331b54:
    // 0x331b54: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x331b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x331b58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331b5c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x331b5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x331b60: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x331B60u;
    {
        const bool branch_taken_0x331b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x331B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331B60u;
        // 0x331b64: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331b60) {
            ctx->pc = 0x331BA8u;
            goto label_331ba8;
        }
    }
    ctx->pc = 0x331B68u;
    // 0x331b68: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x331b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331b6c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x331b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331b70: 0x24708454  addiu       $s0, $v1, -0x7BAC
    ctx->pc = 0x331b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935636));
    // 0x331b74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x331b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D8454u));
    // 0x331b78: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x331B78u;
    {
        const bool branch_taken_0x331b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x331b78) {
            ctx->pc = 0x331B88u;
            goto label_331b88;
        }
    }
    ctx->pc = 0x331B80u;
    // 0x331b80: 0xc0ceda8  jal         func_33B6A0
    ctx->pc = 0x331B80u;
    SET_GPR_U32(ctx, 31, 0x331B88u);
    ctx->pc = 0x33B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6A0u, 0x331B80u, 0x331B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B88u;
label_331b88:
    // 0x331b88: 0xc0cc640  jal         func_331900
    ctx->pc = 0x331B88u;
    SET_GPR_U32(ctx, 31, 0x331B90u);
    ctx->pc = 0x331B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331B88u;
    // 0x331b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331900u, 0x331B88u, 0x331B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331B90u;
label_331b90:
    // 0x331b90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x331b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331b94: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x331B94u;
    {
        const bool branch_taken_0x331b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x331b94) {
            ctx->pc = 0x331B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331B94u;
            // 0x331b98: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331BA8u;
            goto label_331ba8;
        }
    }
    ctx->pc = 0x331B9Cu;
    // 0x331b9c: 0xc0cedb4  jal         func_33B6D0
    ctx->pc = 0x331B9Cu;
    SET_GPR_U32(ctx, 31, 0x331BA4u);
    ctx->pc = 0x33B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6D0u, 0x331B9Cu, 0x331BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331BA4u;
label_331ba4:
    // 0x331ba4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_331ba8:
    // 0x331ba8: 0x24428488  addiu       $v0, $v0, -0x7B78
    ctx->pc = 0x331ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935688));
    // 0x331bac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x331bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331bb0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x331BB0u;
    {
        const bool branch_taken_0x331bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331bb0) {
            ctx->pc = 0x331BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331BB0u;
            // 0x331bb4: 0xae60844c  sw          $zero, -0x7BB4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294935628), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331BC4u;
            goto label_331bc4;
        }
    }
    ctx->pc = 0x331BB8u;
    // 0x331bb8: 0xc0cc500  jal         func_331400
    ctx->pc = 0x331BB8u;
    SET_GPR_U32(ctx, 31, 0x331BC0u);
    ctx->pc = 0x331400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331400u, 0x331BB8u, 0x331BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331BC0u;
label_331bc0:
    // 0x331bc0: 0xae60844c  sw          $zero, -0x7BB4($s3)
    ctx->pc = 0x331bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935628), GPR_U32(ctx, 0));
label_331bc4:
    // 0x331bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331bc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x331bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x331bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x331bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x331bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x331BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331BD8u;
        // 0x331bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331BE0u;
    // 0x331be0: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x331be0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x331be4: 0x0  nop
    ctx->pc = 0x331be4u;
    // NOP
    // 0x331be8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x331be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x331bec: 0x0  nop
    ctx->pc = 0x331becu;
    // NOP
    ctx->pc = 0x331bf0u;
}
