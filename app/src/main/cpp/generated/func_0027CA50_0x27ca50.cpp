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

// Function: func_0027CA50
// Address: 0x27ca50 - 0x27cb58
void func_0027CA50_0x27ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027CA50_0x27ca50");
#endif

    switch (ctx->pc) {
        case 0x27cad4u: goto label_27cad4;
        case 0x27cae8u: goto label_27cae8;
        case 0x27cb1cu: goto label_27cb1c;
        case 0x27cb30u: goto label_27cb30;
        default: break;
    }

    ctx->pc = 0x27ca50u;

    // 0x27ca50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ca54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ca58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ca5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ca5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca60: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27ca60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27ca64: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x27ca64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27ca68: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27CA68u;
    {
        const bool branch_taken_0x27ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA68u;
        // 0x27ca6c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ca68) {
            ctx->pc = 0x27CB48u;
            goto label_27cb48;
        }
    }
    ctx->pc = 0x27CA70u;
    // 0x27ca70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ca74: 0x24428130  addiu       $v0, $v0, -0x7ED0
    ctx->pc = 0x27ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934832));
    // 0x27ca78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ca7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ca80: 0x800008  jr          $a0
    ctx->pc = 0x27CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27CA88u: goto label_27ca88;
            case 0x27CAA8u: goto label_27caa8;
            case 0x27CAE0u: goto label_27cae0;
            case 0x27CAF0u: goto label_27caf0;
            case 0x27CB28u: goto label_27cb28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27CA88u;
label_27ca88:
    // 0x27ca88: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27ca8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ca8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ca90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27ca90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ca94: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27ca94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ca98: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x27ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x27ca9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ca9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27caa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27CAA0u;
    {
        const bool branch_taken_0x27caa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAA0u;
        // 0x27caa4: 0x8c460094  lw          $a2, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27caa0) {
            ctx->pc = 0x27CAC4u;
            goto label_27cac4;
        }
    }
    ctx->pc = 0x27CAA8u;
label_27caa8:
    // 0x27caa8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27caac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cab0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cab4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27cab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27cab8: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x27cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x27cabc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cac0: 0x8c46009c  lw          $a2, 0x9C($v0)
    ctx->pc = 0x27cac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_27cac4:
    // 0x27cac4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cac8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27cacc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27CACCu;
    SET_GPR_U32(ctx, 31, 0x27CAD4u);
    ctx->pc = 0x27CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CACCu;
    // 0x27cad0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CACCu, 0x27CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAD4u;
label_27cad4:
    // 0x27cad4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27cad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27cad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cadc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27cadcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27cae0:
    // 0x27cae0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27CAE0u;
    SET_GPR_U32(ctx, 31, 0x27CAE8u);
    ctx->pc = 0x27CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAE0u;
    // 0x27cae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CAE0u, 0x27CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAE8u;
label_27cae8:
    // 0x27cae8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27CAE8u;
    {
        const bool branch_taken_0x27cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAE8u;
        // 0x27caec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cae8) {
            ctx->pc = 0x27CB4Cu;
            goto label_27cb4c;
        }
    }
    ctx->pc = 0x27CAF0u;
label_27caf0:
    // 0x27caf0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27caf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27caf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27caf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27caf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cafc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27cafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27cb00: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x27cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x27cb04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cb04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb08: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x27cb08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x27cb0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cb0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cb10: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27cb14: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27CB14u;
    SET_GPR_U32(ctx, 31, 0x27CB1Cu);
    ctx->pc = 0x27CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB14u;
    // 0x27cb18: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CB14u, 0x27CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB1Cu;
label_27cb1c:
    // 0x27cb1c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27cb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27cb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cb24: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27cb24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27cb28:
    // 0x27cb28: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27CB28u;
    SET_GPR_U32(ctx, 31, 0x27CB30u);
    ctx->pc = 0x27CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB28u;
    // 0x27cb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CB28u, 0x27CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB30u;
label_27cb30:
    // 0x27cb30: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CB30u;
    {
        const bool branch_taken_0x27cb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cb30) {
            ctx->pc = 0x27CB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CB30u;
            // 0x27cb34: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CB4Cu;
            goto label_27cb4c;
        }
    }
    ctx->pc = 0x27CB38u;
    // 0x27cb38: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27cb38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27cb3c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27cb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27cb40: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27cb40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27cb44: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27cb44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_27cb48:
    // 0x27cb48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27cb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27cb4c:
    // 0x27cb4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27cb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cb50: 0x3e00008  jr          $ra
    ctx->pc = 0x27CB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB50u;
        // 0x27cb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CB58u;
}
