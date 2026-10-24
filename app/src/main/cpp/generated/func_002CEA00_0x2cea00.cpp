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

// Function: func_002CEA00
// Address: 0x2cea00 - 0x2cf058
void func_002CEA00_0x2cea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CEA00_0x2cea00");
#endif

    switch (ctx->pc) {
        case 0x2cea3cu: goto label_2cea3c;
        case 0x2cea4cu: goto label_2cea4c;
        case 0x2ceae4u: goto label_2ceae4;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb18u: goto label_2ceb18;
        case 0x2ceb28u: goto label_2ceb28;
        case 0x2ceb40u: goto label_2ceb40;
        case 0x2ceb60u: goto label_2ceb60;
        case 0x2ceb70u: goto label_2ceb70;
        case 0x2ceb88u: goto label_2ceb88;
        case 0x2cedc8u: goto label_2cedc8;
        case 0x2cef78u: goto label_2cef78;
        case 0x2cefb8u: goto label_2cefb8;
        case 0x2cf038u: goto label_2cf038;
        default: break;
    }

    ctx->pc = 0x2cea00u;

    // 0x2cea00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cea04: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cea08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cea0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cea10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cea10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cea18: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2cea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2cea1c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CEA1Cu;
    {
        const bool branch_taken_0x2cea1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA1Cu;
        // 0x2cea20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea1c) {
            ctx->pc = 0x2CEA68u;
            goto label_2cea68;
        }
    }
    ctx->pc = 0x2CEA24u;
    // 0x2cea24: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2cea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2cea28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CEA28u;
    {
        const bool branch_taken_0x2cea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cea28) {
            ctx->pc = 0x2CEA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA28u;
            // 0x2cea2c: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEA44u;
            goto label_2cea44;
        }
    }
    ctx->pc = 0x2CEA30u;
    // 0x2cea30: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x2cea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2cea34: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2CEA34u;
    SET_GPR_U32(ctx, 31, 0x2CEA3Cu);
    ctx->pc = 0x2CEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA34u;
    // 0x2cea38: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2CEA34u, 0x2CEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA3Cu;
label_2cea3c:
    // 0x2cea3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEA3Cu;
    {
        const bool branch_taken_0x2cea3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA3Cu;
        // 0x2cea40: 0xc6200044  lwc1        $f0, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea3c) {
            ctx->pc = 0x2CEA50u;
            goto label_2cea50;
        }
    }
    ctx->pc = 0x2CEA44u;
label_2cea44:
    // 0x2cea44: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x2CEA44u;
    SET_GPR_U32(ctx, 31, 0x2CEA4Cu);
    ctx->pc = 0x2CEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA44u;
    // 0x2cea48: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x2CEA44u, 0x2CEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA4Cu;
label_2cea4c:
    // 0x2cea4c: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x2cea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cea50:
    // 0x2cea50: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2cea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2cea54: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2cea54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2cea58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cea58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cea5c: 0x0  nop
    ctx->pc = 0x2cea5cu;
    // NOP
    // 0x2cea60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cea60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cea64: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2cea64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_2cea68:
    // 0x2cea68: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x2cea68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cea6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cea70: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2cea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2cea74: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CEA74u;
    {
        const bool branch_taken_0x2cea74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA74u;
        // 0x2cea78: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea74) {
            ctx->pc = 0x2CEAD0u;
            goto label_2cead0;
        }
    }
    ctx->pc = 0x2CEA7Cu;
    // 0x2cea7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEA7Cu;
    {
        const bool branch_taken_0x2cea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA7Cu;
        // 0x2cea80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea7c) {
            ctx->pc = 0x2CEA94u;
            goto label_2cea94;
        }
    }
    ctx->pc = 0x2CEA84u;
    // 0x2cea84: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEA84u;
    {
        const bool branch_taken_0x2cea84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea84) {
            ctx->pc = 0x2CEA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEA84u;
            // 0x2cea88: 0x86220028  lh          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEAACu;
            goto label_2ceaac;
        }
    }
    ctx->pc = 0x2CEA8Cu;
    // 0x2cea8c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2CEA8Cu;
    {
        const bool branch_taken_0x2cea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA8Cu;
        // 0x2cea90: 0xde220018  ld          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea8c) {
            ctx->pc = 0x2CEBA8u;
            goto label_2ceba8;
        }
    }
    ctx->pc = 0x2CEA94u;
label_2cea94:
    // 0x2cea94: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CEA94u;
    {
        const bool branch_taken_0x2cea94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA94u;
        // 0x2cea98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea94) {
            ctx->pc = 0x2CEB04u;
            goto label_2ceb04;
        }
    }
    ctx->pc = 0x2CEA9Cu;
    // 0x2cea9c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CEA9Cu;
    {
        const bool branch_taken_0x2cea9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA9Cu;
        // 0x2ceaa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea9c) {
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CEAA4u;
    // 0x2ceaa4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2CEAA4u;
    {
        const bool branch_taken_0x2ceaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAA4u;
        // 0x2ceaa8: 0xde220018  ld          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceaa4) {
            ctx->pc = 0x2CEBA8u;
            goto label_2ceba8;
        }
    }
    ctx->pc = 0x2CEAACu;
label_2ceaac:
    // 0x2ceaac: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEAACu;
    {
        const bool branch_taken_0x2ceaac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2CEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAACu;
        // 0x2ceab0: 0x96230028  lhu         $v1, 0x28($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceaac) {
            ctx->pc = 0x2CEABCu;
            goto label_2ceabc;
        }
    }
    ctx->pc = 0x2CEAB4u;
    // 0x2ceab4: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x2ceab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ceab8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x2ceab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_2ceabc:
    // 0x2ceabc: 0x8622002a  lh          $v0, 0x2A($s1)
    ctx->pc = 0x2ceabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x2ceac0: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2CEAC0u;
    {
        const bool branch_taken_0x2ceac0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2CEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAC0u;
        // 0x2ceac4: 0x9623002a  lhu         $v1, 0x2A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceac0) {
            ctx->pc = 0x2CEBA4u;
            goto label_2ceba4;
        }
    }
    ctx->pc = 0x2CEAC8u;
    // 0x2ceac8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2CEAC8u;
    {
        const bool branch_taken_0x2ceac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAC8u;
        // 0x2ceacc: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceac8) {
            ctx->pc = 0x2CEBA4u;
            goto label_2ceba4;
        }
    }
    ctx->pc = 0x2CEAD0u;
label_2cead0:
    // 0x2cead0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cead4: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2cead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2cead8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cead8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceadc: 0xc0b3c16  jal         func_2CF058
    ctx->pc = 0x2CEADCu;
    SET_GPR_U32(ctx, 31, 0x2CEAE4u);
    ctx->pc = 0x2CEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEADCu;
    // 0x2ceae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF058u, 0x2CEADCu, 0x2CEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAE4u;
label_2ceae4:
    // 0x2ceae4: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x2ceae4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ceae8: 0xc0dd46e  jal         func_3751B8
    ctx->pc = 0x2CEAE8u;
    SET_GPR_U32(ctx, 31, 0x2CEAF0u);
    ctx->pc = 0x2CEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAE8u;
    // 0x2ceaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3751B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3751B8u, 0x2CEAE8u, 0x2CEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAF0u;
label_2ceaf0:
    // 0x2ceaf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ceaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ceaf4: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CEAF4u;
    {
        const bool branch_taken_0x2ceaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ceaf4) {
            ctx->pc = 0x2CEAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEAF4u;
            // 0x2ceaf8: 0xde220018  ld          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEBA8u;
            goto label_2ceba8;
        }
    }
    ctx->pc = 0x2CEAFCu;
label_2ceafc:
    // 0x2ceafc: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x2CEAFCu;
    {
        const bool branch_taken_0x2ceafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAFCu;
        // 0x2ceb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceafc) {
            ctx->pc = 0x2CF040u;
            goto label_2cf040;
        }
    }
    ctx->pc = 0x2CEB04u;
label_2ceb04:
    // 0x2ceb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ceb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb08: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2ceb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2ceb0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ceb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb10: 0xc0b3c16  jal         func_2CF058
    ctx->pc = 0x2CEB10u;
    SET_GPR_U32(ctx, 31, 0x2CEB18u);
    ctx->pc = 0x2CEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB10u;
    // 0x2ceb14: 0x37a70002  ori         $a3, $sp, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF058u, 0x2CEB10u, 0x2CEB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB18u;
label_2ceb18:
    // 0x2ceb18: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2ceb18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ceb1c: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x2ceb1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ceb20: 0xc0dd46e  jal         func_3751B8
    ctx->pc = 0x2CEB20u;
    SET_GPR_U32(ctx, 31, 0x2CEB28u);
    ctx->pc = 0x2CEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB20u;
    // 0x2ceb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3751B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3751B8u, 0x2CEB20u, 0x2CEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB28u;
label_2ceb28:
    // 0x2ceb28: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CEB28u;
    {
        const bool branch_taken_0x2ceb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB28u;
        // 0x2ceb2c: 0x97a50002  lhu         $a1, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb28) {
            ctx->pc = 0x2CEAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ceafc;
        }
    }
    ctx->pc = 0x2CEB30u;
    // 0x2ceb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ceb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb34: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ceb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ceb38: 0xc0dd4a8  jal         func_3752A0
    ctx->pc = 0x2CEB38u;
    SET_GPR_U32(ctx, 31, 0x2CEB40u);
    ctx->pc = 0x2CEB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB38u;
    // 0x2ceb3c: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3752A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3752A0u, 0x2CEB38u, 0x2CEB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB40u;
label_2ceb40:
    // 0x2ceb40: 0x54520014  bnel        $v0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CEB40u;
    {
        const bool branch_taken_0x2ceb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2ceb40) {
            ctx->pc = 0x2CEB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEB40u;
            // 0x2ceb44: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB94u;
            goto label_2ceb94;
        }
    }
    ctx->pc = 0x2CEB48u;
    // 0x2ceb48: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x2CEB48u;
    {
        const bool branch_taken_0x2ceb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB48u;
        // 0x2ceb4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb48) {
            ctx->pc = 0x2CF040u;
            goto label_2cf040;
        }
    }
    ctx->pc = 0x2CEB50u;
label_2ceb50:
    // 0x2ceb50: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2ceb54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ceb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb58: 0xc0b3c16  jal         func_2CF058
    ctx->pc = 0x2CEB58u;
    SET_GPR_U32(ctx, 31, 0x2CEB60u);
    ctx->pc = 0x2CEB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB58u;
    // 0x2ceb5c: 0x37a70002  ori         $a3, $sp, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF058u, 0x2CEB58u, 0x2CEB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB60u;
label_2ceb60:
    // 0x2ceb60: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2ceb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ceb64: 0x86250034  lh          $a1, 0x34($s1)
    ctx->pc = 0x2ceb64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ceb68: 0xc0dd46e  jal         func_3751B8
    ctx->pc = 0x2CEB68u;
    SET_GPR_U32(ctx, 31, 0x2CEB70u);
    ctx->pc = 0x2CEB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB68u;
    // 0x2ceb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3751B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3751B8u, 0x2CEB68u, 0x2CEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB70u;
label_2ceb70:
    // 0x2ceb70: 0x1052ffe2  beq         $v0, $s2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2CEB70u;
    {
        const bool branch_taken_0x2ceb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB70u;
        // 0x2ceb74: 0x97a50002  lhu         $a1, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb70) {
            ctx->pc = 0x2CEAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ceafc;
        }
    }
    ctx->pc = 0x2CEB78u;
    // 0x2ceb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ceb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb7c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ceb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ceb80: 0xc0dd4a8  jal         func_3752A0
    ctx->pc = 0x2CEB80u;
    SET_GPR_U32(ctx, 31, 0x2CEB88u);
    ctx->pc = 0x2CEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB80u;
    // 0x2ceb84: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3752A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3752A0u, 0x2CEB80u, 0x2CEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB88u;
label_2ceb88:
    // 0x2ceb88: 0x1052012d  beq         $v0, $s2, . + 4 + (0x12D << 2)
    ctx->pc = 0x2CEB88u;
    {
        const bool branch_taken_0x2ceb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB88u;
        // 0x2ceb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb88) {
            ctx->pc = 0x2CF040u;
            goto label_2cf040;
        }
    }
    ctx->pc = 0x2CEB90u;
    // 0x2ceb90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ceb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ceb94:
    // 0x2ceb94: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2ceb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ceb98: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ceb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ceb9c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ceb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2ceba0: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x2ceba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
label_2ceba4:
    // 0x2ceba4: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x2ceba4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_2ceba8:
    // 0x2ceba8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2ceba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2cebac: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2cebacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2cebb0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2cebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cebb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cebb8: 0x5444001c  bnel        $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CEBB8u;
    {
        const bool branch_taken_0x2cebb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cebb8) {
            ctx->pc = 0x2CEBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEBB8u;
            // 0x2cebbc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEC2Cu;
            goto label_2cec2c;
        }
    }
    ctx->pc = 0x2CEBC0u;
    // 0x2cebc0: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x2cebc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cebc4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cebc8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2cebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2cebcc: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2cebccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2cebd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cebd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cebd4: 0x0  nop
    ctx->pc = 0x2cebd4u;
    // NOP
    // 0x2cebd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cebd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cebdc: 0xc4820064  lwc1        $f2, 0x64($a0)
    ctx->pc = 0x2cebdcu;
    { uint32_t bits = FAST_READ32(0x5FEE64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cebe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cebe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cebe4: 0x0  nop
    ctx->pc = 0x2cebe4u;
    // NOP
    // 0x2cebe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cebe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cebec: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x2cebecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2cebf0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cebf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cebf4: 0x3463000b  ori         $v1, $v1, 0xB
    ctx->pc = 0x2cebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x2cebf8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cebf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2cebfc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2cebfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cec00: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2cec00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cec04: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x2cec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cec08: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x2cec08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cec0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cec0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cec10: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cec10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2cec14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2cec14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cec18: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x2cec18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cec1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cec20: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2cec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2cec24: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2cec24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2cec28: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2cec2c:
    // 0x2cec2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2cec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2cec30: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CEC30u;
    {
        const bool branch_taken_0x2cec30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC30u;
        // 0x2cec34: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cec30) {
            ctx->pc = 0x2CEC9Cu;
            goto label_2cec9c;
        }
    }
    ctx->pc = 0x2CEC38u;
    // 0x2cec38: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x2cec38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cec3c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2cec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2cec40: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2cec40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2cec44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cec44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cec48: 0x0  nop
    ctx->pc = 0x2cec48u;
    // NOP
    // 0x2cec4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cec4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cec50: 0xc4820070  lwc1        $f2, 0x70($a0)
    ctx->pc = 0x2cec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cec54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cec54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cec58: 0x0  nop
    ctx->pc = 0x2cec58u;
    // NOP
    // 0x2cec5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cec5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cec60: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x2cec60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2cec64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cec64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cec68: 0x3463000b  ori         $v1, $v1, 0xB
    ctx->pc = 0x2cec68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11);
    // 0x2cec6c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cec6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2cec70: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2cec70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cec74: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2cec74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cec78: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x2cec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cec7c: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x2cec7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cec80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cec80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cec84: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cec84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2cec88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2cec88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cec8c: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x2cec8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cec90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cec94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2cec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2cec98: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2cec98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2cec9c:
    // 0x2cec9c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2cec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ceca0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ceca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2ceca4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ceca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ceca8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CECA8u;
    {
        const bool branch_taken_0x2ceca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceca8) {
            ctx->pc = 0x2CECACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CECA8u;
            // 0x2cecac: 0xde220018  ld          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED3Cu;
            goto label_2ced3c;
        }
    }
    ctx->pc = 0x2CECB0u;
    // 0x2cecb0: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2cecb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cecb4: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x2cecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x2cecb8: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x2cecb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cecbc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2cecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2cecc0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2cecc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2cecc4: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CECC4u;
    {
        const bool branch_taken_0x2cecc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cecc4) {
            ctx->pc = 0x2CECC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CECC4u;
            // 0x2cecc8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED1Cu;
            goto label_2ced1c;
        }
    }
    ctx->pc = 0x2CECCCu;
    // 0x2ceccc: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2cecccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cecd0: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x2cecd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2cecd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cecd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cecd8: 0x0  nop
    ctx->pc = 0x2cecd8u;
    // NOP
    // 0x2cecdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cecdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cece0: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x2cece0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x2cece4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2cece4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2cece8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2cece8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cecec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cececu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cecf0: 0x0  nop
    ctx->pc = 0x2cecf0u;
    // NOP
    // 0x2cecf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cecf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cecf8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cecf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cecfc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cecfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ced00: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ced00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ced04: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ced04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ced08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ced08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ced0c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ced0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ced10: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2ced10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ced14: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x2ced14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ced18: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2ced18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2ced1c:
    // 0x2ced1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ced1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ced20: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CED20u;
    {
        const bool branch_taken_0x2ced20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced20) {
            ctx->pc = 0x2CED24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CED20u;
            // 0x2ced24: 0x9602000a  lhu         $v0, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED74u;
            goto label_2ced74;
        }
    }
    ctx->pc = 0x2CED28u;
    // 0x2ced28: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x2ced28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ced2c: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x2ced2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ced30: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x2ced30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ced34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CED34u;
    {
        const bool branch_taken_0x2ced34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED34u;
        // 0x2ced38: 0xa620002e  sh          $zero, 0x2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced34) {
            ctx->pc = 0x2CED70u;
            goto label_2ced70;
        }
    }
    ctx->pc = 0x2CED3Cu;
label_2ced3c:
    // 0x2ced3c: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x2ced3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2ced40: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x2ced40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x2ced44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ced44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ced48: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CED48u;
    {
        const bool branch_taken_0x2ced48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced48) {
            ctx->pc = 0x2CED4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CED48u;
            // 0x2ced4c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED8Cu;
            goto label_2ced8c;
        }
    }
    ctx->pc = 0x2CED50u;
    // 0x2ced50: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2ced54: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2ced54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ced58: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CED58u;
    {
        const bool branch_taken_0x2ced58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ced58) {
            ctx->pc = 0x2CED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CED58u;
            // 0x2ced5c: 0x9602000a  lhu         $v0, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED74u;
            goto label_2ced74;
        }
    }
    ctx->pc = 0x2CED60u;
    // 0x2ced60: 0x8623002e  lh          $v1, 0x2E($s1)
    ctx->pc = 0x2ced60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x2ced64: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2ced64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2ced68: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CED68u;
    {
        const bool branch_taken_0x2ced68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ced68) {
            ctx->pc = 0x2CED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CED68u;
            // 0x2ced6c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED8Cu;
            goto label_2ced8c;
        }
    }
    ctx->pc = 0x2CED70u;
label_2ced70:
    // 0x2ced70: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x2ced70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2ced74:
    // 0x2ced74: 0x3442000b  ori         $v0, $v0, 0xB
    ctx->pc = 0x2ced74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11);
    // 0x2ced78: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x2ced78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ced7c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ced7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ced80: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2ced80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2ced84: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2ced84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2ced88: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ced88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ced8c:
    // 0x2ced8c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ced8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ced90: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CED90u;
    {
        const bool branch_taken_0x2ced90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED90u;
        // 0x2ced94: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced90) {
            ctx->pc = 0x2CEE5Cu;
            goto label_2cee5c;
        }
    }
    ctx->pc = 0x2CED98u;
    // 0x2ced98: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x2ced98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2ced9c: 0x24847b20  addiu       $a0, $a0, 0x7B20
    ctx->pc = 0x2ced9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31520));
    // 0x2ceda0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ceda0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ceda4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ceda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ceda8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cedac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cedacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cedb0: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2cedb4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2cedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2cedb8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2cedb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x5FEEC0u));
    // 0x2cedbc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2cedbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2cedc0: 0xc0c236a  jal         func_308DA8
    ctx->pc = 0x2CEDC0u;
    SET_GPR_U32(ctx, 31, 0x2CEDC8u);
    ctx->pc = 0x2CEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEDC0u;
    // 0x2cedc4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308DA8u, 0x2CEDC0u, 0x2CEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDC8u;
label_2cedc8:
    // 0x2cedc8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CEDC8u;
    {
        const bool branch_taken_0x2cedc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cedc8) {
            ctx->pc = 0x2CEDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEDC8u;
            // 0x2cedcc: 0x8623002c  lh          $v1, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEE28u;
            goto label_2cee28;
        }
    }
    ctx->pc = 0x2CEDD0u;
    // 0x2cedd0: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2cedd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cedd4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2cedd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2cedd8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2cedd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ceddc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ceddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cede0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cede0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cede4: 0x0  nop
    ctx->pc = 0x2cede4u;
    // NOP
    // 0x2cede8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cede8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cedec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cedecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cedf0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cedf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2cedf4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2cedf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cedf8: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x2cedf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cedfc: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x2cedfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cee00: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2cee04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cee08: 0x0  nop
    ctx->pc = 0x2cee08u;
    // NOP
    // 0x2cee0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cee0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cee10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cee10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cee14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cee14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cee18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cee18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cee1c: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x2cee1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cee20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CEE20u;
    {
        const bool branch_taken_0x2cee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE20u;
        // 0x2cee24: 0xa623002e  sh          $v1, 0x2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee20) {
            ctx->pc = 0x2CEE44u;
            goto label_2cee44;
        }
    }
    ctx->pc = 0x2CEE28u;
label_2cee28:
    // 0x2cee28: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2cee28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cee2c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CEE2Cu;
    {
        const bool branch_taken_0x2cee2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cee2c) {
            ctx->pc = 0x2CEE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE2Cu;
            // 0x2cee30: 0x9602000a  lhu         $v0, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEE48u;
            goto label_2cee48;
        }
    }
    ctx->pc = 0x2CEE34u;
    // 0x2cee34: 0x8623002e  lh          $v1, 0x2E($s1)
    ctx->pc = 0x2cee34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x2cee38: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2cee38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2cee3c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CEE3Cu;
    {
        const bool branch_taken_0x2cee3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cee3c) {
            ctx->pc = 0x2CEE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE3Cu;
            // 0x2cee40: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEE60u;
            goto label_2cee60;
        }
    }
    ctx->pc = 0x2CEE44u;
label_2cee44:
    // 0x2cee44: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x2cee44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2cee48:
    // 0x2cee48: 0x3442000b  ori         $v0, $v0, 0xB
    ctx->pc = 0x2cee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11);
    // 0x2cee4c: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x2cee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cee50: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cee54: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2cee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2cee58: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2cee58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2cee5c:
    // 0x2cee5c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2cee60:
    // 0x2cee60: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2cee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2cee64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEE64u;
    {
        const bool branch_taken_0x2cee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE64u;
        // 0x2cee68: 0x38630002  xori        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee64) {
            ctx->pc = 0x2CEE74u;
            goto label_2cee74;
        }
    }
    ctx->pc = 0x2CEE6Cu;
    // 0x2cee6c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2CEE6Cu;
    {
        const bool branch_taken_0x2cee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEE6Cu;
        // 0x2cee70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee6c) {
            ctx->pc = 0x2CF040u;
            goto label_2cf040;
        }
    }
    ctx->pc = 0x2CEE74u;
label_2cee74:
    // 0x2cee74: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2cee74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2cee78: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2cee78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cee7c: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2cee7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2cee80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEE80u;
    {
        const bool branch_taken_0x2cee80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cee80) {
            ctx->pc = 0x2CEE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE80u;
            // 0x2cee84: 0x86020012  lh          $v0, 0x12($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEE94u;
            goto label_2cee94;
        }
    }
    ctx->pc = 0x2CEE88u;
    // 0x2cee88: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2cee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2cee8c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2cee8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cee90: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2cee90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_2cee94:
    // 0x2cee94: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2cee94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2cee98: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEE98u;
    {
        const bool branch_taken_0x2cee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cee98) {
            ctx->pc = 0x2CEE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEE98u;
            // 0x2cee9c: 0x86040010  lh          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEEACu;
            goto label_2ceeac;
        }
    }
    ctx->pc = 0x2CEEA0u;
    // 0x2ceea0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ceea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ceea4: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x2ceea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ceea8: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x2ceea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2ceeac:
    // 0x2ceeac: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x2ceeacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2ceeb0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2ceeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ceeb4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEEB4u;
    {
        const bool branch_taken_0x2ceeb4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2CEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEB4u;
        // 0x2ceeb8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceeb4) {
            ctx->pc = 0x2CEEC0u;
            goto label_2ceec0;
        }
    }
    ctx->pc = 0x2CEEBCu;
    // 0x2ceebc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ceebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2ceec0:
    // 0x2ceec0: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x2ceec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ceec4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEEC4u;
    {
        const bool branch_taken_0x2ceec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEC4u;
        // 0x2ceec8: 0x9625002c  lhu         $a1, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceec4) {
            ctx->pc = 0x2CEEDCu;
            goto label_2ceedc;
        }
    }
    ctx->pc = 0x2CEECCu;
    // 0x2ceecc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEECCu;
    {
        const bool branch_taken_0x2ceecc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2CEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEECCu;
        // 0x2ceed0: 0x24a20006  addiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceecc) {
            ctx->pc = 0x2CEED8u;
            goto label_2ceed8;
        }
    }
    ctx->pc = 0x2CEED4u;
    // 0x2ceed4: 0x24a2fffa  addiu       $v0, $a1, -0x6
    ctx->pc = 0x2ceed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
label_2ceed8:
    // 0x2ceed8: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2ceed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_2ceedc:
    // 0x2ceedc: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x2ceedcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ceee0: 0x8624002e  lh          $a0, 0x2E($s1)
    ctx->pc = 0x2ceee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x2ceee4: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x2ceee4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ceee8: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x2ceee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2ceeec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2ceeecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ceef0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEEF0u;
    {
        const bool branch_taken_0x2ceef0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2CEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEEF0u;
        // 0x2ceef4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceef0) {
            ctx->pc = 0x2CEEFCu;
            goto label_2ceefc;
        }
    }
    ctx->pc = 0x2CEEF8u;
    // 0x2ceef8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ceef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2ceefc:
    // 0x2ceefc: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x2ceefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2cef00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEF00u;
    {
        const bool branch_taken_0x2cef00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF00u;
        // 0x2cef04: 0x9625002e  lhu         $a1, 0x2E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef00) {
            ctx->pc = 0x2CEF18u;
            goto label_2cef18;
        }
    }
    ctx->pc = 0x2CEF08u;
    // 0x2cef08: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEF08u;
    {
        const bool branch_taken_0x2cef08 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2CEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF08u;
        // 0x2cef0c: 0x24a20006  addiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef08) {
            ctx->pc = 0x2CEF14u;
            goto label_2cef14;
        }
    }
    ctx->pc = 0x2CEF10u;
    // 0x2cef10: 0x24a2fffa  addiu       $v0, $a1, -0x6
    ctx->pc = 0x2cef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
label_2cef14:
    // 0x2cef14: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x2cef14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_2cef18:
    // 0x2cef18: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x2cef18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2cef1c: 0x86240030  lh          $a0, 0x30($s1)
    ctx->pc = 0x2cef1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2cef20: 0xa622002e  sh          $v0, 0x2E($s1)
    ctx->pc = 0x2cef20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cef24: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x2cef24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cef28: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cef2c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEF2Cu;
    {
        const bool branch_taken_0x2cef2c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2CEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF2Cu;
        // 0x2cef30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef2c) {
            ctx->pc = 0x2CEF38u;
            goto label_2cef38;
        }
    }
    ctx->pc = 0x2CEF34u;
    // 0x2cef34: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2cef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2cef38:
    // 0x2cef38: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2cef38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cef3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEF3Cu;
    {
        const bool branch_taken_0x2cef3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF3Cu;
        // 0x2cef40: 0x96250030  lhu         $a1, 0x30($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef3c) {
            ctx->pc = 0x2CEF54u;
            goto label_2cef54;
        }
    }
    ctx->pc = 0x2CEF44u;
    // 0x2cef44: 0x4620002  bltzl       $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEF44u;
    {
        const bool branch_taken_0x2cef44 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2cef44) {
            ctx->pc = 0x2CEF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEF44u;
            // 0x2cef48: 0x24a2fffd  addiu       $v0, $a1, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEF50u;
            goto label_2cef50;
        }
    }
    ctx->pc = 0x2CEF4Cu;
    // 0x2cef4c: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x2cef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_2cef50:
    // 0x2cef50: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x2cef50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_2cef54:
    // 0x2cef54: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x2cef54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cef58: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x2cef58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2cef5c: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x2cef5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cef60: 0x86040016  lh          $a0, 0x16($s0)
    ctx->pc = 0x2cef60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2cef64: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2cef64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cef68: 0x286300b4  slti        $v1, $v1, 0xB4
    ctx->pc = 0x2cef68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x2cef6c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CEF6Cu;
    {
        const bool branch_taken_0x2cef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF6Cu;
        // 0x2cef70: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef6c) {
            ctx->pc = 0x2CEF98u;
            goto label_2cef98;
        }
    }
    ctx->pc = 0x2CEF74u;
    // 0x2cef74: 0x2442fe98  addiu       $v0, $v0, -0x168
    ctx->pc = 0x2cef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
label_2cef78:
    // 0x2cef78: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x2cef78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cef7c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2cef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2cef80: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2cef80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2cef84: 0x86240032  lh          $a0, 0x32($s1)
    ctx->pc = 0x2cef84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2cef88: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cef8c: 0x286300b4  slti        $v1, $v1, 0xB4
    ctx->pc = 0x2cef8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x2cef90: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CEF90u;
    {
        const bool branch_taken_0x2cef90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF90u;
        // 0x2cef94: 0x2442fe98  addiu       $v0, $v0, -0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef90) {
            ctx->pc = 0x2CEF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cef78;
        }
    }
    ctx->pc = 0x2CEF98u;
label_2cef98:
    // 0x2cef98: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x2cef98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2cef9c: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x2cef9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2cefa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cefa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cefa4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cefa8: 0x2842ff4d  slti        $v0, $v0, -0xB3
    ctx->pc = 0x2cefa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967117) ? 1 : 0);
    // 0x2cefac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CEFACu;
    {
        const bool branch_taken_0x2cefac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cefac) {
            ctx->pc = 0x2CEFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CEFACu;
            // 0x2cefb0: 0x86040016  lh          $a0, 0x16($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEFE4u;
            goto label_2cefe4;
        }
    }
    ctx->pc = 0x2CEFB4u;
    // 0x2cefb4: 0x0  nop
    ctx->pc = 0x2cefb4u;
    // NOP
label_2cefb8:
    // 0x2cefb8: 0x24a20168  addiu       $v0, $a1, 0x168
    ctx->pc = 0x2cefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 360));
    // 0x2cefbc: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x2cefbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cefc0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2cefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2cefc4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2cefc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2cefc8: 0x86240032  lh          $a0, 0x32($s1)
    ctx->pc = 0x2cefc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2cefcc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2cefccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cefd0: 0x2863ff4d  slti        $v1, $v1, -0xB3
    ctx->pc = 0x2cefd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967117) ? 1 : 0);
    // 0x2cefd4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CEFD4u;
    {
        const bool branch_taken_0x2cefd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFD4u;
        // 0x2cefd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefd4) {
            ctx->pc = 0x2CEFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cefb8;
        }
    }
    ctx->pc = 0x2CEFDCu;
    // 0x2cefdc: 0x86040016  lh          $a0, 0x16($s0)
    ctx->pc = 0x2cefdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2cefe0: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x2cefe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_2cefe4:
    // 0x2cefe4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2cefe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cefe8: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEFE8u;
    {
        const bool branch_taken_0x2cefe8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2CEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFE8u;
        // 0x2cefec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefe8) {
            ctx->pc = 0x2CEFF4u;
            goto label_2ceff4;
        }
    }
    ctx->pc = 0x2CEFF0u;
    // 0x2ceff0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ceff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2ceff4:
    // 0x2ceff4: 0x2842000d  slti        $v0, $v0, 0xD
    ctx->pc = 0x2ceff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2ceff8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEFF8u;
    {
        const bool branch_taken_0x2ceff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFF8u;
        // 0x2ceffc: 0x96250032  lhu         $a1, 0x32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceff8) {
            ctx->pc = 0x2CF010u;
            goto label_2cf010;
        }
    }
    ctx->pc = 0x2CF000u;
    // 0x2cf000: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF000u;
    {
        const bool branch_taken_0x2cf000 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2CF004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF000u;
        // 0x2cf004: 0x24a2000c  addiu       $v0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf000) {
            ctx->pc = 0x2CF00Cu;
            goto label_2cf00c;
        }
    }
    ctx->pc = 0x2CF008u;
    // 0x2cf008: 0x24a2fff4  addiu       $v0, $a1, -0xC
    ctx->pc = 0x2cf008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
label_2cf00c:
    // 0x2cf00c: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x2cf00cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
label_2cf010:
    // 0x2cf010: 0x86040016  lh          $a0, 0x16($s0)
    ctx->pc = 0x2cf010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2cf014: 0x240202d0  addiu       $v0, $zero, 0x2D0
    ctx->pc = 0x2cf014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x2cf018: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF018u;
    {
        const bool branch_taken_0x2cf018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf018) {
            ctx->pc = 0x2CF01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF018u;
            // 0x2cf01c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF020u;
            goto label_2cf020;
        }
    }
    ctx->pc = 0x2CF020u;
label_2cf020:
    // 0x2cf020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf024: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2cf024u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf028: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2cf028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cf02c: 0x1810  mfhi        $v1
    ctx->pc = 0x2cf02cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2cf030: 0xc0dd3cc  jal         func_374F30
    ctx->pc = 0x2CF030u;
    SET_GPR_U32(ctx, 31, 0x2CF038u);
    ctx->pc = 0x2CF034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF030u;
    // 0x2cf034: 0xa6230032  sh          $v1, 0x32($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374F30u, 0x2CF030u, 0x2CF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF038u;
label_2cf038:
    // 0x2cf038: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2cf038u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2cf03c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cf03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cf040:
    // 0x2cf040: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cf040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cf044: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cf044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf048: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cf048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf04c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cf04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf050: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF050u;
        // 0x2cf054: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF058u;
}
