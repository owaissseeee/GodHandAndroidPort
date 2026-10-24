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

// Function: func_0023AAD0
// Address: 0x23aad0 - 0x23adb8
void func_0023AAD0_0x23aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023AAD0_0x23aad0");
#endif

    switch (ctx->pc) {
        case 0x23ab18u: goto label_23ab18;
        case 0x23ab44u: goto label_23ab44;
        case 0x23ab80u: goto label_23ab80;
        case 0x23aba0u: goto label_23aba0;
        case 0x23abccu: goto label_23abcc;
        case 0x23ac50u: goto label_23ac50;
        case 0x23ac60u: goto label_23ac60;
        case 0x23ac6cu: goto label_23ac6c;
        case 0x23acd4u: goto label_23acd4;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad94u: goto label_23ad94;
        case 0x23ada0u: goto label_23ada0;
        default: break;
    }

    ctx->pc = 0x23aad0u;

    // 0x23aad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23aad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23aad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23aad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23aadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23aadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aae0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23aae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23aae4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23aae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23aae8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x23aae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23aaec: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x23AAECu;
    {
        const bool branch_taken_0x23aaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAECu;
        // 0x23aaf0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aaec) {
            ctx->pc = 0x23ADA0u;
            goto label_23ada0;
        }
    }
    ctx->pc = 0x23AAF4u;
    // 0x23aaf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23aaf8: 0x2442a600  addiu       $v0, $v0, -0x5A00
    ctx->pc = 0x23aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x23aafc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ab00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ab04: 0x800008  jr          $a0
    ctx->pc = 0x23AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AB0Cu: goto label_23ab0c;
            case 0x23AB68u: goto label_23ab68;
            case 0x23AB98u: goto label_23ab98;
            case 0x23ABE0u: goto label_23abe0;
            case 0x23AD14u: goto label_23ad14;
            case 0x23AD54u: goto label_23ad54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23AB0Cu;
label_23ab0c:
    // 0x23ab0c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23ab0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ab10: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23AB10u;
    SET_GPR_U32(ctx, 31, 0x23AB18u);
    ctx->pc = 0x23AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB10u;
    // 0x23ab14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23AB10u, 0x23AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB18u;
label_23ab18:
    // 0x23ab18: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ab1c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23ab1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23ab20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23ab20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ab24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ab28: 0x8c650c08  lw          $a1, 0xC08($v1)
    ctx->pc = 0x23ab28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3080)));
    // 0x23ab2c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23ab2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23ab30: 0x8c660c0c  lw          $a2, 0xC0C($v1)
    ctx->pc = 0x23ab30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3084)));
    // 0x23ab34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23ab34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ab38: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23ab3c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23AB3Cu;
    SET_GPR_U32(ctx, 31, 0x23AB44u);
    ctx->pc = 0x23AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB3Cu;
    // 0x23ab40: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23AB3Cu, 0x23AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB44u;
label_23ab44:
    // 0x23ab44: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x23ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23ab48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23ab4c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x23ab4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23ab50: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x23ab50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x23ab54: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23ab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23ab58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23ab58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23ab5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23ab60: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x23ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x23ab64: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x23ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
label_23ab68:
    // 0x23ab68: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23ab6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x23ab70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ab74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23ab78: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23AB78u;
    SET_GPR_U32(ctx, 31, 0x23AB80u);
    ctx->pc = 0x23AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB78u;
    // 0x23ab7c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23AB78u, 0x23AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB80u;
label_23ab80:
    // 0x23ab80: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x23AB80u;
    {
        const bool branch_taken_0x23ab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab80) {
            ctx->pc = 0x23ACECu;
            goto label_23acec;
        }
    }
    ctx->pc = 0x23AB88u;
    // 0x23ab88: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23ab88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23ab8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ab90: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x23AB90u;
    {
        const bool branch_taken_0x23ab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB90u;
        // 0x23ab94: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab90) {
            ctx->pc = 0x23ADA0u;
            goto label_23ada0;
        }
    }
    ctx->pc = 0x23AB98u;
label_23ab98:
    // 0x23ab98: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23AB98u;
    SET_GPR_U32(ctx, 31, 0x23ABA0u);
    ctx->pc = 0x23AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB98u;
    // 0x23ab9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23AB98u, 0x23ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABA0u;
label_23aba0:
    // 0x23aba0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23aba4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23aba4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23aba8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23aba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23abac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23abacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abb0: 0x8c650c08  lw          $a1, 0xC08($v1)
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3080)));
    // 0x23abb4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23abb8: 0x8c660c0c  lw          $a2, 0xC0C($v1)
    ctx->pc = 0x23abb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3084)));
    // 0x23abbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23abbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23abc0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23abc4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23ABC4u;
    SET_GPR_U32(ctx, 31, 0x23ABCCu);
    ctx->pc = 0x23ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ABC4u;
    // 0x23abc8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23ABC4u, 0x23ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ABCCu;
label_23abcc:
    // 0x23abcc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23abccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23abd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23abd4: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x23abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x23abd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23abdc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23abdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23abe0:
    // 0x23abe0: 0x8606054a  lh          $a2, 0x54A($s0)
    ctx->pc = 0x23abe0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x23abe4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x23abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x23abe8: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x23abe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x23abec: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x23abecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23abf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23abf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23abf4: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x23abf4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x23abf8: 0x96070548  lhu         $a3, 0x548($s0)
    ctx->pc = 0x23abf8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x23abfc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23abfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23ac00: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x23ac00u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x23ac04: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x23ac04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23ac08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AC08u;
    {
        const bool branch_taken_0x23ac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC08u;
        // 0x23ac0c: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac08) {
            ctx->pc = 0x23AC18u;
            goto label_23ac18;
        }
    }
    ctx->pc = 0x23AC10u;
    // 0x23ac10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23AC10u;
    {
        const bool branch_taken_0x23ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC10u;
        // 0x23ac14: 0xa607054a  sh          $a3, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac10) {
            ctx->pc = 0x23AC1Cu;
            goto label_23ac1c;
        }
    }
    ctx->pc = 0x23AC18u;
label_23ac18:
    // 0x23ac18: 0xa606054a  sh          $a2, 0x54A($s0)
    ctx->pc = 0x23ac18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 6));
label_23ac1c:
    // 0x23ac1c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x23ac20: 0x8e0317d0  lw          $v1, 0x17D0($s0)
    ctx->pc = 0x23ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6096)));
    // 0x23ac24: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x23ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x23ac28: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23ac28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23ac2c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23ac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23ac30: 0x54430023  bnel        $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x23AC30u;
    {
        const bool branch_taken_0x23ac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ac30) {
            ctx->pc = 0x23AC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AC30u;
            // 0x23ac34: 0x8e0216ec  lw          $v0, 0x16EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ACC0u;
            goto label_23acc0;
        }
    }
    ctx->pc = 0x23AC38u;
    // 0x23ac38: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23ac3c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x23ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x23ac40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23ac44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23ac44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23ac48: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23AC48u;
    SET_GPR_U32(ctx, 31, 0x23AC50u);
    ctx->pc = 0x23AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC48u;
    // 0x23ac4c: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23AC48u, 0x23AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC50u;
label_23ac50:
    // 0x23ac50: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x23ac50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23ac54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ac58: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x23AC58u;
    SET_GPR_U32(ctx, 31, 0x23AC60u);
    ctx->pc = 0x23AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC58u;
    // 0x23ac5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x23AC58u, 0x23AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC60u;
label_23ac60:
    // 0x23ac60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ac64: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x23AC64u;
    SET_GPR_U32(ctx, 31, 0x23AC6Cu);
    ctx->pc = 0x23AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC64u;
    // 0x23ac68: 0x260516a0  addiu       $a1, $s0, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x23AC64u, 0x23AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC6Cu;
label_23ac6c:
    // 0x23ac6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC6Cu;
    {
        const bool branch_taken_0x23ac6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC6Cu;
        // 0x23ac70: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac6c) {
            ctx->pc = 0x23AC80u;
            goto label_23ac80;
        }
    }
    ctx->pc = 0x23AC74u;
    // 0x23ac74: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x23ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23ac78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23ac7c: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x23ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
label_23ac80:
    // 0x23ac80: 0xc6010510  lwc1        $f1, 0x510($s0)
    ctx->pc = 0x23ac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ac84: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x23ac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x23ac88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ac88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ac8c: 0x0  nop
    ctx->pc = 0x23ac8cu;
    // NOP
    // 0x23ac90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ac90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ac94: 0x0  nop
    ctx->pc = 0x23ac94u;
    // NOP
    // 0x23ac98: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x23AC98u;
    {
        const bool branch_taken_0x23ac98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ac98) {
            ctx->pc = 0x23AC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AC98u;
            // 0x23ac9c: 0x8e0216ec  lw          $v0, 0x16EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ACC0u;
            goto label_23acc0;
        }
    }
    ctx->pc = 0x23ACA0u;
    // 0x23aca0: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x23aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23aca4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23aca8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x23aca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x23acac: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x23acacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x23acb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23acb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23acb4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x23acb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x23acb8: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x23acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x23acbc: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
label_23acc0:
    // 0x23acc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23ACC0u;
    {
        const bool branch_taken_0x23acc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACC0u;
        // 0x23acc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23acc0) {
            ctx->pc = 0x23ACCCu;
            goto label_23accc;
        }
    }
    ctx->pc = 0x23ACC8u;
    // 0x23acc8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23acc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23accc:
    // 0x23accc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23ACCCu;
    SET_GPR_U32(ctx, 31, 0x23ACD4u);
    ctx->pc = 0x23ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACCCu;
    // 0x23acd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23ACCCu, 0x23ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACD4u;
label_23acd4:
    // 0x23acd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23ACD4u;
    {
        const bool branch_taken_0x23acd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23acd4) {
            ctx->pc = 0x23ACECu;
            goto label_23acec;
        }
    }
    ctx->pc = 0x23ACDCu;
    // 0x23acdc: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x23acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x23ace0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23ACE0u;
    {
        const bool branch_taken_0x23ace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACE0u;
        // 0x23ace4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ace0) {
            ctx->pc = 0x23ACECu;
            goto label_23acec;
        }
    }
    ctx->pc = 0x23ACE8u;
    // 0x23ace8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23ace8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23acec:
    // 0x23acec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23acecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23acf0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23acf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23acf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23acf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23acf8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23ACF8u;
    SET_GPR_U32(ctx, 31, 0x23AD00u);
    ctx->pc = 0x23ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACF8u;
    // 0x23acfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23ACF8u, 0x23AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD00u;
label_23ad00:
    // 0x23ad00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad04: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23AD04u;
    SET_GPR_U32(ctx, 31, 0x23AD0Cu);
    ctx->pc = 0x23AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD04u;
    // 0x23ad08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23AD04u, 0x23AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD0Cu;
label_23ad0c:
    // 0x23ad0c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23AD0Cu;
    {
        const bool branch_taken_0x23ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD0Cu;
        // 0x23ad10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad0c) {
            ctx->pc = 0x23ADA4u;
            goto label_23ada4;
        }
    }
    ctx->pc = 0x23AD14u;
label_23ad14:
    // 0x23ad14: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23AD14u;
    SET_GPR_U32(ctx, 31, 0x23AD1Cu);
    ctx->pc = 0x23AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD14u;
    // 0x23ad18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23AD14u, 0x23AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD1Cu;
label_23ad1c:
    // 0x23ad1c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ad20: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23ad20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23ad24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23ad24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ad28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad2c: 0x8c650c10  lw          $a1, 0xC10($v1)
    ctx->pc = 0x23ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3088)));
    // 0x23ad30: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23ad30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23ad34: 0x8c660c14  lw          $a2, 0xC14($v1)
    ctx->pc = 0x23ad34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3092)));
    // 0x23ad38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23ad38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad3c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23ad40: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23AD40u;
    SET_GPR_U32(ctx, 31, 0x23AD48u);
    ctx->pc = 0x23AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD40u;
    // 0x23ad44: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23AD40u, 0x23AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD48u;
label_23ad48:
    // 0x23ad48: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23ad48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23ad4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ad50: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23ad50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23ad54:
    // 0x23ad54: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23ad58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x23ad5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ad5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23ad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23ad64: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23AD64u;
    SET_GPR_U32(ctx, 31, 0x23AD6Cu);
    ctx->pc = 0x23AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD64u;
    // 0x23ad68: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23AD64u, 0x23AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD6Cu;
label_23ad6c:
    // 0x23ad6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23AD6Cu;
    {
        const bool branch_taken_0x23ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD6Cu;
        // 0x23ad70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad6c) {
            ctx->pc = 0x23AD84u;
            goto label_23ad84;
        }
    }
    ctx->pc = 0x23AD74u;
    // 0x23ad74: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23AD74u;
    SET_GPR_U32(ctx, 31, 0x23AD7Cu);
    ctx->pc = 0x23AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD74u;
    // 0x23ad78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23AD74u, 0x23AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD7Cu;
label_23ad7c:
    // 0x23ad7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23AD7Cu;
    {
        const bool branch_taken_0x23ad7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD7Cu;
        // 0x23ad80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad7c) {
            ctx->pc = 0x23ADA4u;
            goto label_23ada4;
        }
    }
    ctx->pc = 0x23AD84u;
label_23ad84:
    // 0x23ad84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ad84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23ad88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23ad88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23ad8c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23AD8Cu;
    SET_GPR_U32(ctx, 31, 0x23AD94u);
    ctx->pc = 0x23AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD8Cu;
    // 0x23ad90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23AD8Cu, 0x23AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD94u;
label_23ad94:
    // 0x23ad94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ad98: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23AD98u;
    SET_GPR_U32(ctx, 31, 0x23ADA0u);
    ctx->pc = 0x23AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD98u;
    // 0x23ad9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23AD98u, 0x23ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADA0u;
label_23ada0:
    // 0x23ada0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23ada0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23ada4:
    // 0x23ada4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ada4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ada8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23adac: 0x3e00008  jr          $ra
    ctx->pc = 0x23ADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADACu;
        // 0x23adb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ADB4u;
    // 0x23adb4: 0x0  nop
    ctx->pc = 0x23adb4u;
    // NOP
    ctx->pc = 0x23adb8u;
}
