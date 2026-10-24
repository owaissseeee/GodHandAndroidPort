#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: __do_global_ctors
// Address: 0x799ac0 - 0x799b70
void ps2___do_global_ctors_0x799ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799ac0");
#endif

    switch (ctx->pc) {
        case 0x799ac0u: goto label_799ac0;
        case 0x799ac4u: goto label_799ac4;
        case 0x799ac8u: goto label_799ac8;
        case 0x799accu: goto label_799acc;
        case 0x799ad0u: goto label_799ad0;
        case 0x799ad4u: goto label_799ad4;
        case 0x799ad8u: goto label_799ad8;
        case 0x799adcu: goto label_799adc;
        case 0x799ae0u: goto label_799ae0;
        case 0x799ae4u: goto label_799ae4;
        case 0x799ae8u: goto label_799ae8;
        case 0x799aecu: goto label_799aec;
        case 0x799af0u: goto label_799af0;
        case 0x799af4u: goto label_799af4;
        case 0x799af8u: goto label_799af8;
        case 0x799afcu: goto label_799afc;
        case 0x799b00u: goto label_799b00;
        case 0x799b04u: goto label_799b04;
        case 0x799b08u: goto label_799b08;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b10u: goto label_799b10;
        case 0x799b14u: goto label_799b14;
        case 0x799b18u: goto label_799b18;
        case 0x799b1cu: goto label_799b1c;
        case 0x799b20u: goto label_799b20;
        case 0x799b24u: goto label_799b24;
        case 0x799b28u: goto label_799b28;
        case 0x799b2cu: goto label_799b2c;
        case 0x799b30u: goto label_799b30;
        case 0x799b34u: goto label_799b34;
        case 0x799b38u: goto label_799b38;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b40u: goto label_799b40;
        case 0x799b44u: goto label_799b44;
        case 0x799b48u: goto label_799b48;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b50u: goto label_799b50;
        case 0x799b54u: goto label_799b54;
        case 0x799b58u: goto label_799b58;
        case 0x799b5cu: goto label_799b5c;
        case 0x799b60u: goto label_799b60;
        case 0x799b64u: goto label_799b64;
        case 0x799b68u: goto label_799b68;
        case 0x799b6cu: goto label_799b6c;
        default: break;
    }

    ctx->pc = 0x799ac0u;

label_799ac0:
    // 0x799ac0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799ac4:
    // 0x799ac4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799ac8:
    // 0x799ac8: 0x8ce59d00  lw          $a1, -0x6300($a3)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941952)));
label_799acc:
    // 0x799acc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799ad0:
    // 0x799ad0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799ad4:
    // 0x799ad4: 0x24e39d00  addiu       $v1, $a3, -0x6300
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941952));
label_799ad8:
    // 0x799ad8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_799adc:
    // 0x799adc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799ae0:
    if (ctx->pc == 0x799AE0u) {
        ctx->pc = 0x799AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ADCu;
        // 0x799ae0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AE4u;
        goto label_799ae4;
    }
    ctx->pc = 0x799ADCu;
    {
        const bool branch_taken_0x799adc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ADCu;
        // 0x799ae0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799adc) {
            ctx->pc = 0x799B24u;
            goto label_799b24;
        }
    }
    ctx->pc = 0x799AE4u;
label_799ae4:
    // 0x799ae4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799ae8:
    // 0x799ae8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799aec:
    if (ctx->pc == 0x799AECu) {
        ctx->pc = 0x799AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE8u;
        // 0x799aec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799AF0u;
        goto label_799af0;
    }
    ctx->pc = 0x799AE8u;
    {
        const bool branch_taken_0x799ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE8u;
        // 0x799aec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae8) {
            ctx->pc = 0x799B24u;
            goto label_799b24;
        }
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799af4:
    // 0x799af4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799af8:
    // 0x799af8: 0x24e49d00  addiu       $a0, $a3, -0x6300
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941952));
label_799afc:
    // 0x799afc: 0x0  nop
    ctx->pc = 0x799afcu;
    // NOP
label_799b00:
    // 0x799b00: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799b00u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799b04:
    // 0x799b04: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799b08:
    // 0x799b08: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799b0c:
    // 0x799b0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799b10:
    // 0x799b10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799b14:
    // 0x799b14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799b18:
    // 0x799b18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799b1c:
    // 0x799b1c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799b20:
    if (ctx->pc == 0x799B20u) {
        ctx->pc = 0x799B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B1Cu;
        // 0x799b20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B24u;
        goto label_799b24;
    }
    ctx->pc = 0x799B1Cu;
    {
        const bool branch_taken_0x799b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b1c) {
            ctx->pc = 0x799B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B1Cu;
            // 0x799b20: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b00;
        }
    }
    ctx->pc = 0x799B24u;
label_799b24:
    // 0x799b24: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799b28:
    // 0x799b28: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799b28u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799b2c:
    // 0x799b2c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799b30:
    if (ctx->pc == 0x799B30u) {
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B34u;
        goto label_799b34;
    }
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B5Cu;
            goto label_799b5c;
        }
    }
    ctx->pc = 0x799B34u;
label_799b34:
    // 0x799b34: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799b38:
    // 0x799b38: 0x24429d00  addiu       $v0, $v0, -0x6300
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941952));
label_799b3c:
    // 0x799b3c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799b40:
    // 0x799b40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799b44:
    // 0x799b44: 0x0  nop
    ctx->pc = 0x799b44u;
    // NOP
label_799b48:
    // 0x799b48: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799b4c:
    // 0x799b4c: 0x40f809  jalr        $v0
label_799b50:
    if (ctx->pc == 0x799B50u) {
        ctx->pc = 0x799B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B4Cu;
        // 0x799b50: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B54u;
        goto label_799b54;
    }
    ctx->pc = 0x799B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799B54u);
        ctx->pc = 0x799B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B4Cu;
        // 0x799b50: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B4Cu, 0x799B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799B54u;
label_799b54:
    // 0x799b54: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799b58:
    if (ctx->pc == 0x799B58u) {
        ctx->pc = 0x799B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B54u;
        // 0x799b58: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B5Cu;
        goto label_799b5c;
    }
    ctx->pc = 0x799B54u;
    {
        const bool branch_taken_0x799b54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799b54) {
            ctx->pc = 0x799B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B54u;
            // 0x799b58: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b48;
        }
    }
    ctx->pc = 0x799B5Cu;
label_799b5c:
    // 0x799b5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799b60:
    // 0x799b60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799b64:
    // 0x799b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799b68:
    // 0x799b68: 0x3e00008  jr          $ra
label_799b6c:
    if (ctx->pc == 0x799B6Cu) {
        ctx->pc = 0x799B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B68u;
        // 0x799b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799B70u;
        goto label_fallthrough_0x799b68;
    }
    ctx->pc = 0x799B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B68u;
        // 0x799b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799b68:
    ctx->pc = 0x799B70u;
}
} // namespace gh_r506
