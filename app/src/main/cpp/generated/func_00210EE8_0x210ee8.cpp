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

// Function: func_00210EE8
// Address: 0x210ee8 - 0x2112f0
void func_00210EE8_0x210ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00210EE8_0x210ee8");
#endif

    switch (ctx->pc) {
        case 0x210f28u: goto label_210f28;
        case 0x210f4cu: goto label_210f4c;
        case 0x211070u: goto label_211070;
        case 0x211154u: goto label_211154;
        case 0x2111b4u: goto label_2111b4;
        case 0x2111c0u: goto label_2111c0;
        case 0x2111ccu: goto label_2111cc;
        default: break;
    }

    ctx->pc = 0x210ee8u;

    // 0x210ee8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x210eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x210eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ef0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x210ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x210ef4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x210ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x210ef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210efc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x210f00: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x210f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x210f04: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x210f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x210f08: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x210f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x210f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f14: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x210f14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x210f18: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x210f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x210f1c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x210f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x210f20: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x210F20u;
    SET_GPR_U32(ctx, 31, 0x210F28u);
    ctx->pc = 0x210F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F20u;
    // 0x210f24: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x210F20u, 0x210F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F28u;
label_210f28:
    // 0x210f28: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x210f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x210f2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x210F2Cu;
    {
        const bool branch_taken_0x210f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F2Cu;
        // 0x210f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f2c) {
            ctx->pc = 0x210F44u;
            goto label_210f44;
        }
    }
    ctx->pc = 0x210F34u;
    // 0x210f34: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x210F34u;
    {
        const bool branch_taken_0x210f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x210F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F34u;
        // 0x210f38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f34) {
            ctx->pc = 0x211188u;
            goto label_211188;
        }
    }
    ctx->pc = 0x210F3Cu;
    // 0x210f3c: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x210F3Cu;
    {
        const bool branch_taken_0x210f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F3Cu;
        // 0x210f40: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f3c) {
            ctx->pc = 0x2112D4u;
            goto label_2112d4;
        }
    }
    ctx->pc = 0x210F44u;
label_210f44:
    // 0x210f44: 0xc09d91a  jal         func_276468
    ctx->pc = 0x210F44u;
    SET_GPR_U32(ctx, 31, 0x210F4Cu);
    ctx->pc = 0x210F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F44u;
    // 0x210f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x210F44u, 0x210F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F4Cu;
label_210f4c:
    // 0x210f4c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x210f4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x210f50: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x210f54: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x210f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x210f58: 0x2464fdfe  addiu       $a0, $v1, -0x202
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966782));
    // 0x210f5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x210f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x210f60: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x210f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x210f64: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x210F64u;
    {
        const bool branch_taken_0x210f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F64u;
        // 0x210f68: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f64) {
            ctx->pc = 0x210F88u;
            goto label_210f88;
        }
    }
    ctx->pc = 0x210F6Cu;
    // 0x210f6c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x210f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x210f70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210f74: 0x24424470  addiu       $v0, $v0, 0x4470
    ctx->pc = 0x210f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17520));
    // 0x210f78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210f7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210f80: 0x800008  jr          $a0
    ctx->pc = 0x210F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210F88u: goto label_210f88;
            case 0x210F98u: goto label_210f98;
            case 0x210FA8u: goto label_210fa8;
            case 0x210FB8u: goto label_210fb8;
            case 0x210FC8u: goto label_210fc8;
            case 0x210FD8u: goto label_210fd8;
            case 0x210FE8u: goto label_210fe8;
            case 0x210FF8u: goto label_210ff8;
            case 0x211008u: goto label_211008;
            case 0x211018u: goto label_211018;
            case 0x211028u: goto label_211028;
            case 0x211038u: goto label_211038;
            case 0x211048u: goto label_211048;
            case 0x211078u: goto label_211078;
            case 0x211088u: goto label_211088;
            case 0x211098u: goto label_211098;
            case 0x2110A8u: goto label_2110a8;
            case 0x2110B8u: goto label_2110b8;
            case 0x2110C8u: goto label_2110c8;
            case 0x2110DCu: goto label_2110dc;
            case 0x2110ECu: goto label_2110ec;
            case 0x2110FCu: goto label_2110fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210F88u;
label_210f88:
    // 0x210f88: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210f8c: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x210f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x210f90: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x210F90u;
    {
        const bool branch_taken_0x210f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F90u;
        // 0x210f94: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f90) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x210F98u;
label_210f98:
    // 0x210f98: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210f9c: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x210f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
    // 0x210fa0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x210FA0u;
    {
        const bool branch_taken_0x210fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA0u;
        // 0x210fa4: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fa0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x210FA8u;
label_210fa8:
    // 0x210fa8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210fac: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x210facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
    // 0x210fb0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x210FB0u;
    {
        const bool branch_taken_0x210fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB0u;
        // 0x210fb4: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fb0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x210FB8u;
label_210fb8:
    // 0x210fb8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210fbc: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x210fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
    // 0x210fc0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x210FC0u;
    {
        const bool branch_taken_0x210fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FC0u;
        // 0x210fc4: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fc0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x210FC8u;
label_210fc8:
    // 0x210fc8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210fcc: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x210fd0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x210FD0u;
    {
        const bool branch_taken_0x210fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FD0u;
        // 0x210fd4: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fd0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x210FD8u;
label_210fd8:
    // 0x210fd8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210fdc: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x210fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x210fe0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x210FE0u;
    {
        const bool branch_taken_0x210fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FE0u;
        // 0x210fe4: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fe0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x210FE8u;
label_210fe8:
    // 0x210fe8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210fec: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x210fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
    // 0x210ff0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x210FF0u;
    {
        const bool branch_taken_0x210ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FF0u;
        // 0x210ff4: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ff0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x210FF8u;
label_210ff8:
    // 0x210ff8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x210ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x210ffc: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x210ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x211000: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x211000u;
    {
        const bool branch_taken_0x211000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211000u;
        // 0x211004: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211000) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x211008u;
label_211008:
    // 0x211008: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21100c: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x21100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x211010: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x211010u;
    {
        const bool branch_taken_0x211010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211010u;
        // 0x211014: 0x8c441fb4  lw          $a0, 0x1FB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211010) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x211018u;
label_211018:
    // 0x211018: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21101c: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x21101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x211020: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x211020u;
    {
        const bool branch_taken_0x211020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211020u;
        // 0x211024: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211020) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x211028u;
label_211028:
    // 0x211028: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21102c: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x21102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x211030: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x211030u;
    {
        const bool branch_taken_0x211030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211030u;
        // 0x211034: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211030) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x211038u;
label_211038:
    // 0x211038: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21103c: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x21103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x211040: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x211040u;
    {
        const bool branch_taken_0x211040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211040u;
        // 0x211044: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211040) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x211048u;
label_211048:
    // 0x211048: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21104c: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x21104cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x211050: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x211050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x211054: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x211058: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21105c: 0x10e0002c  beqz        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x21105Cu;
    {
        const bool branch_taken_0x21105c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x211060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21105Cu;
        // 0x211060: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21105c) {
            ctx->pc = 0x211110u;
            goto label_211110;
        }
    }
    ctx->pc = 0x211064u;
    // 0x211064: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x211064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211068: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x211068u;
    SET_GPR_U32(ctx, 31, 0x211070u);
    ctx->pc = 0x21106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211068u;
    // 0x21106c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x211068u, 0x211070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211070u;
label_211070:
    // 0x211070: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x211070u;
    {
        const bool branch_taken_0x211070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211070u;
        // 0x211074: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211070) {
            ctx->pc = 0x211114u;
            goto label_211114;
        }
    }
    ctx->pc = 0x211078u;
label_211078:
    // 0x211078: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21107c: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x21107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x211080: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x211080u;
    {
        const bool branch_taken_0x211080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211080u;
        // 0x211084: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211080) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x211088u;
label_211088:
    // 0x211088: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21108c: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x21108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x211090: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x211090u;
    {
        const bool branch_taken_0x211090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211090u;
        // 0x211094: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211090) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x211098u;
label_211098:
    // 0x211098: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x211098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21109c: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x21109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x2110a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2110A0u;
    {
        const bool branch_taken_0x2110a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110A0u;
        // 0x2110a4: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110a0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x2110A8u;
label_2110a8:
    // 0x2110a8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2110ac: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x2110acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x2110b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2110B0u;
    {
        const bool branch_taken_0x2110b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110B0u;
        // 0x2110b4: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110b0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x2110B8u;
label_2110b8:
    // 0x2110b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2110b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2110bc: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x2110bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x2110c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2110C0u;
    {
        const bool branch_taken_0x2110c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110C0u;
        // 0x2110c4: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110c0) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x2110C8u;
label_2110c8:
    // 0x2110c8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2110c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2110cc: 0x8c620fbc  lw          $v0, 0xFBC($v1)
    ctx->pc = 0x2110ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4028)));
    // 0x2110d0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2110d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2110d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2110D4u;
    {
        const bool branch_taken_0x2110d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110D4u;
        // 0x2110d8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110d4) {
            ctx->pc = 0x211110u;
            goto label_211110;
        }
    }
    ctx->pc = 0x2110DCu;
label_2110dc:
    // 0x2110dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2110dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2110e0: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x2110e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2110E4u;
    {
        const bool branch_taken_0x2110e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110E4u;
        // 0x2110e8: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110e4) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x2110ECu;
label_2110ec:
    // 0x2110ec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2110ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2110f0: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x2110f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x2110f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2110F4u;
    {
        const bool branch_taken_0x2110f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110F4u;
        // 0x2110f8: 0x8c442d3c  lw          $a0, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110f4) {
            ctx->pc = 0x211108u;
            goto label_211108;
        }
    }
    ctx->pc = 0x2110FCu;
label_2110fc:
    // 0x2110fc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2110fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x211100: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x211100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
    // 0x211104: 0x8c442278  lw          $a0, 0x2278($v0)
    ctx->pc = 0x211104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
label_211108:
    // 0x211108: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x211108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21110c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x21110cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211110:
    // 0x211110: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x211110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_211114:
    // 0x211114: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x211114u;
    {
        const bool branch_taken_0x211114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211114) {
            ctx->pc = 0x211134u;
            goto label_211134;
        }
    }
    ctx->pc = 0x21111Cu;
    // 0x21111c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x211120: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x211120u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x211124: 0x8c43044c  lw          $v1, 0x44C($v0)
    ctx->pc = 0x211124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
    // 0x211128: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x211128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x21112c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x211130: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211134:
    // 0x211134: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x211134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x211138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21113c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21113cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211140: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x211140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x211148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21114c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x21114Cu;
    SET_GPR_U32(ctx, 31, 0x211154u);
    ctx->pc = 0x211150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21114Cu;
    // 0x211150: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x21114Cu, 0x211154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211154u;
label_211154:
    // 0x211154: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x211154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x211158: 0x262305c0  addiu       $v1, $s1, 0x5C0
    ctx->pc = 0x211158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x21115c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21115Cu;
    {
        const bool branch_taken_0x21115c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21115c) {
            ctx->pc = 0x211160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21115Cu;
            // 0x211160: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211180u;
            goto label_211180;
        }
    }
    ctx->pc = 0x211164u;
    // 0x211164: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x211164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211168: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x211168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x21116c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211170: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x211170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x211174: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x211174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211178: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x211178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21117c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21117cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_211180:
    // 0x211180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x211180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x211184: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x211184u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_211188:
    // 0x211188: 0xc621024c  lwc1        $f1, 0x24C($s1)
    ctx->pc = 0x211188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21118c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21118cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211190: 0x0  nop
    ctx->pc = 0x211190u;
    // NOP
    // 0x211194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211198: 0x0  nop
    ctx->pc = 0x211198u;
    // NOP
    // 0x21119c: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x21119Cu;
    {
        const bool branch_taken_0x21119c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21119c) {
            ctx->pc = 0x2111A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21119Cu;
            // 0x2111a0: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211220u;
            goto label_211220;
        }
    }
    ctx->pc = 0x2111A4u;
    // 0x2111a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2111a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2111a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2111a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2111ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2111ACu;
    SET_GPR_U32(ctx, 31, 0x2111B4u);
    ctx->pc = 0x2111B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111ACu;
    // 0x2111b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2111ACu, 0x2111B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111B4u;
label_2111b4:
    // 0x2111b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2111b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2111b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2111B8u;
    SET_GPR_U32(ctx, 31, 0x2111C0u);
    ctx->pc = 0x2111BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111B8u;
    // 0x2111bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2111B8u, 0x2111C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111C0u;
label_2111c0:
    // 0x2111c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2111c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2111c4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2111C4u;
    SET_GPR_U32(ctx, 31, 0x2111CCu);
    ctx->pc = 0x2111C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111C4u;
    // 0x2111c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2111C4u, 0x2111CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2111CCu;
label_2111cc:
    // 0x2111cc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2111d0: 0xc62105c0  lwc1        $f1, 0x5C0($s1)
    ctx->pc = 0x2111d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2111d4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2111d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2111d8: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2111d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x2111dc: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2111dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x2111e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2111e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2111e4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2111e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2111e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2111e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2111ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2111ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2111f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2111f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2111f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2111f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2111f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2111f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2111fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2111fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x211200: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x211200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x211204: 0xc62105c8  lwc1        $f1, 0x5C8($s1)
    ctx->pc = 0x211204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211208: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x211208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21120c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21120cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x211210: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x211210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x211214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x211214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x211218: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x211218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21121c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x21121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_211220:
    // 0x211220: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x211220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x211224: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x211224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x211228: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x211228u;
    {
        const bool branch_taken_0x211228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211228u;
        // 0x21122c: 0x262306d0  addiu       $v1, $s1, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211228) {
            ctx->pc = 0x211270u;
            goto label_211270;
        }
    }
    ctx->pc = 0x211230u;
    // 0x211230: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x211230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x211234: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x211234u;
    {
        const bool branch_taken_0x211234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x211234) {
            ctx->pc = 0x211238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211234u;
            // 0x211238: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x211258u;
            goto label_211258;
        }
    }
    ctx->pc = 0x21123Cu;
    // 0x21123c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211240: 0xe62006d0  swc1        $f0, 0x6D0($s1)
    ctx->pc = 0x211240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1744), bits); }
    // 0x211244: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x211244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211248: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x211248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21124c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211250: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x211250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x211254: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x211254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211258:
    // 0x211258: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x211258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x21125c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x21125cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x211260: 0xe62006e0  swc1        $f0, 0x6E0($s1)
    ctx->pc = 0x211260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1760), bits); }
    // 0x211264: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x211264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x211268: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x211268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x21126c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x21126cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_211270:
    // 0x211270: 0xc62116c0  lwc1        $f1, 0x16C0($s1)
    ctx->pc = 0x211270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x211274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x211274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211278: 0x0  nop
    ctx->pc = 0x211278u;
    // NOP
    // 0x21127c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21127cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211280: 0x0  nop
    ctx->pc = 0x211280u;
    // NOP
    // 0x211284: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x211284u;
    {
        const bool branch_taken_0x211284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211284u;
        // 0x211288: 0x262306d0  addiu       $v1, $s1, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211284) {
            ctx->pc = 0x2112CCu;
            goto label_2112cc;
        }
    }
    ctx->pc = 0x21128Cu;
    // 0x21128c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x21128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x211290: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x211290u;
    {
        const bool branch_taken_0x211290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x211290) {
            ctx->pc = 0x211294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211290u;
            // 0x211294: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2112B4u;
            goto label_2112b4;
        }
    }
    ctx->pc = 0x211298u;
    // 0x211298: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x211298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21129c: 0xe62006d0  swc1        $f0, 0x6D0($s1)
    ctx->pc = 0x21129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1744), bits); }
    // 0x2112a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2112a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2112a4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2112a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2112a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2112a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2112ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2112acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2112b0: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x2112b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2112b4:
    // 0x2112b4: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2112b8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x2112b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2112bc: 0xe62006e0  swc1        $f0, 0x6E0($s1)
    ctx->pc = 0x2112bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1760), bits); }
    // 0x2112c0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2112c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2112c4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2112c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2112c8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2112c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2112cc:
    // 0x2112cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2112ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2112d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2112d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2112d4:
    // 0x2112d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2112d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2112d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2112d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2112dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2112dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2112e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2112e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2112E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112E4u;
        // 0x2112e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2112ECu;
    // 0x2112ec: 0x0  nop
    ctx->pc = 0x2112ecu;
    // NOP
    ctx->pc = 0x2112f0u;
}
