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

// Function: __rs__7istreamRc
// Address: 0x387ab8 - 0x387b78
void ps2___rs__7istreamRc_0x387ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRc_0x387ab8");
#endif

    switch (ctx->pc) {
        case 0x387b00u: goto label_387b00;
        case 0x387b24u: goto label_387b24;
        case 0x387b3cu: goto label_387b3c;
        default: break;
    }

    ctx->pc = 0x387ab8u;

    // 0x387ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387abc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x387abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x387ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x387ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x387ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x387ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387acc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387ad0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387ad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387AD4u;
    {
        const bool branch_taken_0x387ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AD4u;
        // 0x387ad8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ad4) {
            ctx->pc = 0x387AECu;
            goto label_387aec;
        }
    }
    ctx->pc = 0x387ADCu;
    // 0x387adc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x387adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x387ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x387ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ae4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x387AE4u;
    {
        const bool branch_taken_0x387ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AE4u;
        // 0x387ae8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ae4) {
            ctx->pc = 0x387B28u;
            goto label_387b28;
        }
    }
    ctx->pc = 0x387AECu;
label_387aec:
    // 0x387aec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x387aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x387af0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x387AF0u;
    {
        const bool branch_taken_0x387af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387af0) {
            ctx->pc = 0x387AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387AF0u;
            // 0x387af4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387B08u;
            goto label_387b08;
        }
    }
    ctx->pc = 0x387AF8u;
    // 0x387af8: 0xc0e249a  jal         func_389268
    ctx->pc = 0x387AF8u;
    SET_GPR_U32(ctx, 31, 0x387B00u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x387AF8u, 0x387B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B00u;
label_387b00:
    // 0x387b00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387b04: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x387b04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_387b08:
    // 0x387b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x387b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x387b0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x387b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x387b10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x387b10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x387b14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387B14u;
    {
        const bool branch_taken_0x387b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B14u;
        // 0x387b18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b14) {
            ctx->pc = 0x387B28u;
            goto label_387b28;
        }
    }
    ctx->pc = 0x387B1Cu;
    // 0x387b1c: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x387B1Cu;
    SET_GPR_U32(ctx, 31, 0x387B24u);
    ctx->pc = 0x387B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B1Cu;
    // 0x387b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x387B1Cu, 0x387B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B24u;
label_387b24:
    // 0x387b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387b28:
    // 0x387b28: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x387B28u;
    {
        const bool branch_taken_0x387b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B28u;
        // 0x387b2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b28) {
            ctx->pc = 0x387B60u;
            goto label_387b60;
        }
    }
    ctx->pc = 0x387B30u;
    // 0x387b30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x387b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387b34: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x387B34u;
    SET_GPR_U32(ctx, 31, 0x387B3Cu);
    ctx->pc = 0x387B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387B34u;
    // 0x387b38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x387B34u, 0x387B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387B3Cu;
label_387b3c:
    // 0x387b3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x387b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387b40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387b44: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387B44u;
    {
        const bool branch_taken_0x387b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x387b44) {
            ctx->pc = 0x387B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387B44u;
            // 0x387b48: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387B5Cu;
            goto label_387b5c;
        }
    }
    ctx->pc = 0x387B4Cu;
    // 0x387b4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x387b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387b50: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387b54: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x387b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x387b58: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x387b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_387b5c:
    // 0x387b5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387b60:
    // 0x387b60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387b64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x387b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x387b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x387B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387B6Cu;
        // 0x387b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387B74u;
    // 0x387b74: 0x0  nop
    ctx->pc = 0x387b74u;
    // NOP
    ctx->pc = 0x387b78u;
}
