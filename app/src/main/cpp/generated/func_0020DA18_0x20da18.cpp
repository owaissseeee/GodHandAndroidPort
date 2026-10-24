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

// Function: func_0020DA18
// Address: 0x20da18 - 0x20dcf0
void func_0020DA18_0x20da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020DA18_0x20da18");
#endif

    switch (ctx->pc) {
        case 0x20da34u: goto label_20da34;
        case 0x20da50u: goto label_20da50;
        case 0x20da98u: goto label_20da98;
        case 0x20db48u: goto label_20db48;
        case 0x20db70u: goto label_20db70;
        case 0x20dbe8u: goto label_20dbe8;
        case 0x20dc38u: goto label_20dc38;
        default: break;
    }

    ctx->pc = 0x20da18u;

    // 0x20da18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20da18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20da1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20da1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20da20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20da20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20da24: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20da24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20da28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20da28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20da2c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20DA2Cu;
    SET_GPR_U32(ctx, 31, 0x20DA34u);
    ctx->pc = 0x20DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA2Cu;
    // 0x20da30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20DA2Cu, 0x20DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA34u;
label_20da34:
    // 0x20da34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20da34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da38: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20da38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20da3c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20da3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x20da40: 0x146000a4  bnez        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x20DA40u;
    {
        const bool branch_taken_0x20da40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA40u;
        // 0x20da44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da40) {
            ctx->pc = 0x20DCD4u;
            goto label_20dcd4;
        }
    }
    ctx->pc = 0x20DA48u;
    // 0x20da48: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20DA48u;
    SET_GPR_U32(ctx, 31, 0x20DA50u);
    ctx->pc = 0x20DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA48u;
    // 0x20da4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20DA48u, 0x20DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA50u;
label_20da50:
    // 0x20da50: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x20DA50u;
    {
        const bool branch_taken_0x20da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA50u;
        // 0x20da54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da50) {
            ctx->pc = 0x20DCD4u;
            goto label_20dcd4;
        }
    }
    ctx->pc = 0x20DA58u;
    // 0x20da58: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x20da58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x20da5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20da60: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x20DA60u;
    {
        const bool branch_taken_0x20da60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA60u;
        // 0x20da64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da60) {
            ctx->pc = 0x20DCD4u;
            goto label_20dcd4;
        }
    }
    ctx->pc = 0x20DA68u;
    // 0x20da68: 0x8e0217ac  lw          $v0, 0x17AC($s0)
    ctx->pc = 0x20da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20da6c: 0x18400099  blez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x20DA6Cu;
    {
        const bool branch_taken_0x20da6c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA6Cu;
        // 0x20da70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da6c) {
            ctx->pc = 0x20DCD4u;
            goto label_20dcd4;
        }
    }
    ctx->pc = 0x20DA74u;
    // 0x20da74: 0xc6011740  lwc1        $f1, 0x1740($s0)
    ctx->pc = 0x20da74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20da78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20da78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20da7c: 0x0  nop
    ctx->pc = 0x20da7cu;
    // NOP
    // 0x20da80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20da80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20da84: 0x0  nop
    ctx->pc = 0x20da84u;
    // NOP
    // 0x20da88: 0x45030093  bc1tl       . + 4 + (0x93 << 2)
    ctx->pc = 0x20DA88u;
    {
        const bool branch_taken_0x20da88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20da88) {
            ctx->pc = 0x20DA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA88u;
            // 0x20da8c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DCD8u;
            goto label_20dcd8;
        }
    }
    ctx->pc = 0x20DA90u;
    // 0x20da90: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x20DA90u;
    SET_GPR_U32(ctx, 31, 0x20DA98u);
    ctx->pc = 0x20DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA90u;
    // 0x20da94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x20DA90u, 0x20DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA98u;
label_20da98:
    // 0x20da98: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x20DA98u;
    {
        const bool branch_taken_0x20da98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA98u;
        // 0x20da9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da98) {
            ctx->pc = 0x20DCD4u;
            goto label_20dcd4;
        }
    }
    ctx->pc = 0x20DAA0u;
    // 0x20daa0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x20daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x20daa4: 0x24447a2c  addiu       $a0, $v0, 0x7A2C
    ctx->pc = 0x20daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x20daa8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x20daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A3Cu));
    // 0x20daac: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x20daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x20dab0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DAB0u;
    {
        const bool branch_taken_0x20dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dab0) {
            ctx->pc = 0x20DAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DAB0u;
            // 0x20dab4: 0x94830024  lhu         $v1, 0x24($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAC8u;
            goto label_20dac8;
        }
    }
    ctx->pc = 0x20DAB8u;
    // 0x20dab8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x20dab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x20dabc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20DABCu;
    {
        const bool branch_taken_0x20dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dabc) {
            ctx->pc = 0x20DAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DABCu;
            // 0x20dac0: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAE8u;
            goto label_20dae8;
        }
    }
    ctx->pc = 0x20DAC4u;
    // 0x20dac4: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x20dac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_20dac8:
    // 0x20dac8: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x20dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x20dacc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20DACCu;
    {
        const bool branch_taken_0x20dacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20dacc) {
            ctx->pc = 0x20DAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DACCu;
            // 0x20dad0: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAE8u;
            goto label_20dae8;
        }
    }
    ctx->pc = 0x20DAD4u;
    // 0x20dad4: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x20dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x20dad8: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x20dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x20dadc: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x20DADCu;
    {
        const bool branch_taken_0x20dadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DADCu;
        // 0x20dae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dadc) {
            ctx->pc = 0x20DCD4u;
            goto label_20dcd4;
        }
    }
    ctx->pc = 0x20DAE4u;
    // 0x20dae4: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x20dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_20dae8:
    // 0x20dae8: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20dae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20daec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20daecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20daf0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20daf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20daf4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x20DAF4u;
    {
        const bool branch_taken_0x20daf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAF4u;
        // 0x20daf8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20daf4) {
            ctx->pc = 0x20DC50u;
            goto label_20dc50;
        }
    }
    ctx->pc = 0x20DAFCu;
    // 0x20dafc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20db00: 0x24422420  addiu       $v0, $v0, 0x2420
    ctx->pc = 0x20db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9248));
    // 0x20db04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20db04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20db08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20db0c: 0x800008  jr          $a0
    ctx->pc = 0x20DB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DB14u: goto label_20db14;
            case 0x20DB80u: goto label_20db80;
            case 0x20DC50u: goto label_20dc50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DB0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20DB14u;
label_20db14:
    // 0x20db14: 0x920317b8  lbu         $v1, 0x17B8($s0)
    ctx->pc = 0x20db14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6072)));
    // 0x20db18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20db18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20db1c: 0x10710008  beq         $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DB1Cu;
    {
        const bool branch_taken_0x20db1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x20DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB1Cu;
        // 0x20db20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db1c) {
            ctx->pc = 0x20DB40u;
            goto label_20db40;
        }
    }
    ctx->pc = 0x20DB24u;
    // 0x20db24: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x20DB24u;
    {
        const bool branch_taken_0x20db24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB24u;
        // 0x20db28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db24) {
            ctx->pc = 0x20DC54u;
            goto label_20dc54;
        }
    }
    ctx->pc = 0x20DB2Cu;
    // 0x20db2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20db30: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20DB30u;
    {
        const bool branch_taken_0x20db30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20db30) {
            ctx->pc = 0x20DB68u;
            goto label_20db68;
        }
    }
    ctx->pc = 0x20DB38u;
    // 0x20db38: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x20DB38u;
    {
        const bool branch_taken_0x20db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db38) {
            ctx->pc = 0x20DC54u;
            goto label_20dc54;
        }
    }
    ctx->pc = 0x20DB40u;
label_20db40:
    // 0x20db40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20DB40u;
    SET_GPR_U32(ctx, 31, 0x20DB48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20DB40u, 0x20DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB48u;
label_20db48:
    // 0x20db48: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20db4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20db4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db50: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20db50u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20db54: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20DB54u;
    {
        const bool branch_taken_0x20db54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db54) {
            ctx->pc = 0x20DB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB54u;
            // 0x20db58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DB5Cu;
            goto label_20db5c;
        }
    }
    ctx->pc = 0x20DB5Cu;
label_20db5c:
    // 0x20db5c: 0x2010  mfhi        $a0
    ctx->pc = 0x20db5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20db60: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x20DB60u;
    {
        const bool branch_taken_0x20db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB60u;
        // 0x20db64: 0x4280b  movn        $a1, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db60) {
            ctx->pc = 0x20DC54u;
            goto label_20dc54;
        }
    }
    ctx->pc = 0x20DB68u;
label_20db68:
    // 0x20db68: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20DB68u;
    SET_GPR_U32(ctx, 31, 0x20DB70u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20DB68u, 0x20DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB70u;
label_20db70:
    // 0x20db70: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20db70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20db74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20db74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db78: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x20DB78u;
    {
        const bool branch_taken_0x20db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB78u;
        // 0x20db7c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db78) {
            ctx->pc = 0x20DC54u;
            goto label_20dc54;
        }
    }
    ctx->pc = 0x20DB80u;
label_20db80:
    // 0x20db80: 0x920417b8  lbu         $a0, 0x17B8($s0)
    ctx->pc = 0x20db80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6072)));
    // 0x20db84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20db84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20db88: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DB88u;
    {
        const bool branch_taken_0x20db88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x20DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB88u;
        // 0x20db8c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db88) {
            ctx->pc = 0x20DBACu;
            goto label_20dbac;
        }
    }
    ctx->pc = 0x20DB90u;
    // 0x20db90: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x20DB90u;
    {
        const bool branch_taken_0x20db90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20db90) {
            ctx->pc = 0x20DB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB90u;
            // 0x20db94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DC54u;
            goto label_20dc54;
        }
    }
    ctx->pc = 0x20DB98u;
    // 0x20db98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20db9c: 0x50820014  beql        $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20DB9Cu;
    {
        const bool branch_taken_0x20db9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20db9c) {
            ctx->pc = 0x20DBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DB9Cu;
            // 0x20dba0: 0x92031867  lbu         $v1, 0x1867($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6247)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DBF0u;
            goto label_20dbf0;
        }
    }
    ctx->pc = 0x20DBA4u;
    // 0x20dba4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x20DBA4u;
    {
        const bool branch_taken_0x20dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBA4u;
        // 0x20dba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dba4) {
            ctx->pc = 0x20DC54u;
            goto label_20dc54;
        }
    }
    ctx->pc = 0x20DBACu;
label_20dbac:
    // 0x20dbac: 0x92031867  lbu         $v1, 0x1867($s0)
    ctx->pc = 0x20dbacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6247)));
    // 0x20dbb0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20dbb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20dbb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20DBB4u;
    {
        const bool branch_taken_0x20dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBB4u;
        // 0x20dbb8: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbb4) {
            ctx->pc = 0x20DBE8u;
            goto label_20dbe8;
        }
    }
    ctx->pc = 0x20DBBCu;
    // 0x20dbbc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x20dbc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20dbc4: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x20dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x20dbc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20dbcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20dbd0: 0x800008  jr          $a0
    ctx->pc = 0x20DBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DBD8u: goto label_20dbd8;
            case 0x20DBE0u: goto label_20dbe0;
            case 0x20DBE8u: goto label_20dbe8;
            case 0x20DC24u: goto label_20dc24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DBD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20DBD8u;
label_20dbd8:
    // 0x20dbd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20DBD8u;
    {
        const bool branch_taken_0x20dbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBD8u;
        // 0x20dbdc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbd8) {
            ctx->pc = 0x20DC30u;
            goto label_20dc30;
        }
    }
    ctx->pc = 0x20DBE0u;
label_20dbe0:
    // 0x20dbe0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20DBE0u;
    {
        const bool branch_taken_0x20dbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBE0u;
        // 0x20dbe4: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbe0) {
            ctx->pc = 0x20DC30u;
            goto label_20dc30;
        }
    }
    ctx->pc = 0x20DBE8u;
label_20dbe8:
    // 0x20dbe8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20DBE8u;
    {
        const bool branch_taken_0x20dbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBE8u;
        // 0x20dbec: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbe8) {
            ctx->pc = 0x20DC30u;
            goto label_20dc30;
        }
    }
    ctx->pc = 0x20DBF0u;
label_20dbf0:
    // 0x20dbf0: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x20DBF0u;
    {
        const bool branch_taken_0x20dbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x20DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBF0u;
        // 0x20dbf4: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbf0) {
            ctx->pc = 0x20DC2Cu;
            goto label_20dc2c;
        }
    }
    ctx->pc = 0x20DBF8u;
    // 0x20dbf8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x20dbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20dbfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DBFCu;
    {
        const bool branch_taken_0x20dbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dbfc) {
            ctx->pc = 0x20DC14u;
            goto label_20dc14;
        }
    }
    ctx->pc = 0x20DC04u;
    // 0x20dc04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DC04u;
    {
        const bool branch_taken_0x20dc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC04u;
        // 0x20dc08: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc04) {
            ctx->pc = 0x20DC24u;
            goto label_20dc24;
        }
    }
    ctx->pc = 0x20DC0Cu;
    // 0x20dc0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20DC0Cu;
    {
        const bool branch_taken_0x20dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc0c) {
            ctx->pc = 0x20DC30u;
            goto label_20dc30;
        }
    }
    ctx->pc = 0x20DC14u;
label_20dc14:
    // 0x20dc14: 0x1064fff4  beq         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20DC14u;
    {
        const bool branch_taken_0x20dc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC14u;
        // 0x20dc18: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc14) {
            ctx->pc = 0x20DBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20dbe8;
        }
    }
    ctx->pc = 0x20DC1Cu;
    // 0x20dc1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20DC1Cu;
    {
        const bool branch_taken_0x20dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc1c) {
            ctx->pc = 0x20DC30u;
            goto label_20dc30;
        }
    }
    ctx->pc = 0x20DC24u;
label_20dc24:
    // 0x20dc24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20DC24u;
    {
        const bool branch_taken_0x20dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC24u;
        // 0x20dc28: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc24) {
            ctx->pc = 0x20DC30u;
            goto label_20dc30;
        }
    }
    ctx->pc = 0x20DC2Cu;
label_20dc2c:
    // 0x20dc2c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x20dc2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20dc30:
    // 0x20dc30: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20DC30u;
    SET_GPR_U32(ctx, 31, 0x20DC38u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20DC30u, 0x20DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC38u;
label_20dc38:
    // 0x20dc38: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x20dc38u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20dc3c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20DC3Cu;
    {
        const bool branch_taken_0x20dc3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc3c) {
            ctx->pc = 0x20DC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DC3Cu;
            // 0x20dc40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DC44u;
            goto label_20dc44;
        }
    }
    ctx->pc = 0x20DC44u;
label_20dc44:
    // 0x20dc44: 0x1810  mfhi        $v1
    ctx->pc = 0x20dc44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20dc48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20DC48u;
    {
        const bool branch_taken_0x20dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC48u;
        // 0x20dc4c: 0x71282b  sltu        $a1, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc48) {
            ctx->pc = 0x20DC54u;
            goto label_20dc54;
        }
    }
    ctx->pc = 0x20DC50u;
label_20dc50:
    // 0x20dc50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20dc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dc54:
    // 0x20dc54: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x20DC54u;
    {
        const bool branch_taken_0x20dc54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC54u;
        // 0x20dc58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc54) {
            ctx->pc = 0x20DCD4u;
            goto label_20dcd4;
        }
    }
    ctx->pc = 0x20DC5Cu;
    // 0x20dc5c: 0x8e0317ac  lw          $v1, 0x17AC($s0)
    ctx->pc = 0x20dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20dc60: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20dc60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20dc64: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20dc64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20dc68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DC68u;
    {
        const bool branch_taken_0x20dc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC68u;
        // 0x20dc6c: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc68) {
            ctx->pc = 0x20DC78u;
            goto label_20dc78;
        }
    }
    ctx->pc = 0x20DC70u;
    // 0x20dc70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20DC70u;
    {
        const bool branch_taken_0x20dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC70u;
        // 0x20dc74: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc70) {
            ctx->pc = 0x20DC7Cu;
            goto label_20dc7c;
        }
    }
    ctx->pc = 0x20DC78u;
label_20dc78:
    // 0x20dc78: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20dc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20dc7c:
    // 0x20dc7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20dc80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20dc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20dc84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20dc88: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x20dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x20dc8c: 0x24030260  addiu       $v1, $zero, 0x260
    ctx->pc = 0x20dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20dc90: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x20dc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x20dc94: 0xae0217c4  sw          $v0, 0x17C4($s0)
    ctx->pc = 0x20dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    // 0x20dc98: 0xa60017c8  sh          $zero, 0x17C8($s0)
    ctx->pc = 0x20dc98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6088), (uint16_t)GPR_U32(ctx, 0));
    // 0x20dc9c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20DC9Cu;
    {
        const bool branch_taken_0x20dc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC9Cu;
        // 0x20dca0: 0xa2001867  sb          $zero, 0x1867($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6247), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc9c) {
            ctx->pc = 0x20DCB8u;
            goto label_20dcb8;
        }
    }
    ctx->pc = 0x20DCA4u;
    // 0x20dca4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20dca8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x20dca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dcac: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x20dcacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20dcb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20DCB0u;
    {
        const bool branch_taken_0x20dcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCB0u;
        // 0x20dcb4: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcb0) {
            ctx->pc = 0x20DCCCu;
            goto label_20dccc;
        }
    }
    ctx->pc = 0x20DCB8u;
label_20dcb8:
    // 0x20dcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dcbc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x20dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20dcc0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x20dcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20dcc4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x20dcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20dcc8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x20dcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_20dccc:
    // 0x20dccc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x20dcccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dcd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dcd4:
    // 0x20dcd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20dcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20dcd8:
    // 0x20dcd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20dcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dcdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20dcdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dce4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCE4u;
        // 0x20dce8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DCECu;
    // 0x20dcec: 0x0  nop
    ctx->pc = 0x20dcecu;
    // NOP
    ctx->pc = 0x20dcf0u;
}
