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

// Function: UpdateStatePhase2F6_10CC58
// Address: 0x10cc58 - 0x10cd38
void UpdateStatePhase2F6_10CC58_0x10cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateStatePhase2F6_10CC58_0x10cc58");
#endif

    switch (ctx->pc) {
        case 0x10ccb8u: goto label_10ccb8;
        case 0x10ccfcu: goto label_10ccfc;
        case 0x10cd04u: goto label_10cd04;
        case 0x10cd24u: goto label_10cd24;
        default: break;
    }

    ctx->pc = 0x10cc58u;

    // 0x10cc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cc5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10cc60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cc64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc68: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10cc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10cc6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CC6Cu;
    {
        const bool branch_taken_0x10cc6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC6Cu;
        // 0x10cc70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc6c) {
            ctx->pc = 0x10CC84u;
            goto label_10cc84;
        }
    }
    ctx->pc = 0x10CC74u;
    // 0x10cc74: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10CC74u;
    {
        const bool branch_taken_0x10cc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC74u;
        // 0x10cc78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc74) {
            ctx->pc = 0x10CCCCu;
            goto label_10cccc;
        }
    }
    ctx->pc = 0x10CC7Cu;
    // 0x10cc7c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10CC7Cu;
    {
        const bool branch_taken_0x10cc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cc7c) {
            ctx->pc = 0x10CD1Cu;
            goto label_10cd1c;
        }
    }
    ctx->pc = 0x10CC84u;
label_10cc84:
    // 0x10cc84: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10cc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc8c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10cc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10cc90: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10cc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10cc94: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x10cc94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x10cc98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10cc98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10cc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10cca0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10cca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cca4: 0x8c450220  lw          $a1, 0x220($v0)
    ctx->pc = 0x10cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x10cca8: 0x8c460278  lw          $a2, 0x278($v0)
    ctx->pc = 0x10cca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x10ccac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10ccb0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10CCB0u;
    SET_GPR_U32(ctx, 31, 0x10CCB8u);
    ctx->pc = 0x10CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCB0u;
    // 0x10ccb4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10CCB0u, 0x10CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCB8u;
label_10ccb8:
    // 0x10ccb8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10ccb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10ccbc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ccc0: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x10ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x10ccc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ccc8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10ccc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10cccc:
    // 0x10cccc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10ccd0: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x10ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x10ccd4: 0xc440d48c  lwc1        $f0, -0x2B74($v0)
    ctx->pc = 0x10ccd4u;
    { uint32_t bits = FAST_READ32(0x3BD48Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ccd8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10CCD8u;
    {
        const bool branch_taken_0x10ccd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCD8u;
        // 0x10ccdc: 0xe60015f0  swc1        $f0, 0x15F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ccd8) {
            ctx->pc = 0x10CCFCu;
            goto label_10ccfc;
        }
    }
    ctx->pc = 0x10CCE0u;
    // 0x10cce0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10cce4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x10cce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x10cce8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10cce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10ccec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ccecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ccf0: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x10ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x10ccf4: 0xc04939a  jal         func_124E68
    ctx->pc = 0x10CCF4u;
    SET_GPR_U32(ctx, 31, 0x10CCFCu);
    ctx->pc = 0x10CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCF4u;
    // 0x10ccf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10CCF4u, 0x10CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCFCu;
label_10ccfc:
    // 0x10ccfc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10CCFCu;
    SET_GPR_U32(ctx, 31, 0x10CD04u);
    ctx->pc = 0x10CD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCFCu;
    // 0x10cd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10CCFCu, 0x10CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD04u;
label_10cd04:
    // 0x10cd04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CD04u;
    {
        const bool branch_taken_0x10cd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD04u;
        // 0x10cd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd04) {
            ctx->pc = 0x10CD1Cu;
            goto label_10cd1c;
        }
    }
    ctx->pc = 0x10CD0Cu;
    // 0x10cd0c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x10cd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cd10: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10cd10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cd14: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x10cd14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10cd18: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10cd18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_10cd1c:
    // 0x10cd1c: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10CD1Cu;
    SET_GPR_U32(ctx, 31, 0x10CD24u);
    ctx->pc = 0x10CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD1Cu;
    // 0x10cd20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10CD1Cu, 0x10CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD24u;
label_10cd24:
    // 0x10cd24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10cd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD2Cu;
        // 0x10cd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CD34u;
    // 0x10cd34: 0x0  nop
    ctx->pc = 0x10cd34u;
    // NOP
    ctx->pc = 0x10cd38u;
}
