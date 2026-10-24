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

// Function: func_0035AAC8
// Address: 0x35aac8 - 0x35ab80
void func_0035AAC8_0x35aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AAC8_0x35aac8");
#endif

    switch (ctx->pc) {
        case 0x35aafcu: goto label_35aafc;
        case 0x35ab44u: goto label_35ab44;
        default: break;
    }

    ctx->pc = 0x35aac8u;

    // 0x35aac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35aacc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35aaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35aad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35aad4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35aad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35aadc: 0x24510e48  addiu       $s1, $v0, 0xE48
    ctx->pc = 0x35aadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3656));
    // 0x35aae0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35aae4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35aae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aae8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35aae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35aaec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35aaf0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35aaf4: 0xc0d6ae0  jal         func_35AB80
    ctx->pc = 0x35AAF4u;
    SET_GPR_U32(ctx, 31, 0x35AAFCu);
    ctx->pc = 0x35AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AAF4u;
    // 0x35aaf8: 0x24530d30  addiu       $s3, $v0, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB80u, 0x35AAF4u, 0x35AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAFCu;
label_35aafc:
    // 0x35aafc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x35aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ab00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ab04: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x35AB04u;
    {
        const bool branch_taken_0x35ab04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB04u;
        // 0x35ab08: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ab04) {
            ctx->pc = 0x35AB54u;
            goto label_35ab54;
        }
    }
    ctx->pc = 0x35AB0Cu;
    // 0x35ab0c: 0x8e620148  lw          $v0, 0x148($s3)
    ctx->pc = 0x35ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x35ab10: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35AB10u;
    {
        const bool branch_taken_0x35ab10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35ab10) {
            ctx->pc = 0x35AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35AB10u;
            // 0x35ab14: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35AB30u;
            goto label_35ab30;
        }
    }
    ctx->pc = 0x35AB18u;
    // 0x35ab18: 0x8e630144  lw          $v1, 0x144($s3)
    ctx->pc = 0x35ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x35ab1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x35ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35ab20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35ab24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35AB24u;
    {
        const bool branch_taken_0x35ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB24u;
        // 0x35ab28: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ab24) {
            ctx->pc = 0x35AB50u;
            goto label_35ab50;
        }
    }
    ctx->pc = 0x35AB2Cu;
    // 0x35ab2c: 0x0  nop
    ctx->pc = 0x35ab2cu;
    // NOP
label_35ab30:
    // 0x35ab30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x35AB30u;
    {
        const bool branch_taken_0x35ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ab30) {
            ctx->pc = 0x35AB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35AB30u;
            // 0x35ab34: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35AB54u;
            goto label_35ab54;
        }
    }
    ctx->pc = 0x35AB38u;
    // 0x35ab38: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x35ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x35ab3c: 0xc0db248  jal         func_36C920
    ctx->pc = 0x35AB3Cu;
    SET_GPR_U32(ctx, 31, 0x35AB44u);
    ctx->pc = 0x35AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AB3Cu;
    // 0x35ab40: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x35AB3Cu, 0x35AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB44u;
label_35ab44:
    // 0x35ab44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35ab48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35ab4c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35ab50:
    // 0x35ab50: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x35ab50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35ab54:
    // 0x35ab54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ab54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ab58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ab58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ab5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ab5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ab60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35ab60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ab64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35ab64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ab68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35ab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ab6c: 0x3e00008  jr          $ra
    ctx->pc = 0x35AB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AB6Cu;
        // 0x35ab70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AB74u;
    // 0x35ab74: 0x0  nop
    ctx->pc = 0x35ab74u;
    // NOP
    // 0x35ab78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35ab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35ab7c: 0x0  nop
    ctx->pc = 0x35ab7cu;
    // NOP
    ctx->pc = 0x35ab80u;
}
